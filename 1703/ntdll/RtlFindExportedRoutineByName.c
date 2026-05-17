/*
 * XREFs of RtlFindExportedRoutineByName @ 0x18007BE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(unsigned __int64 a1, char *a2)
{
  int v4; // eax
  _DWORD *v5; // r8
  int v6; // r9d
  int v7; // ecx
  int v8; // edx
  char *v9; // rax
  unsigned __int64 v10; // r11
  char v11; // r10
  int v12; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180032C0C(a1, 1, 0, &v16, (__int64 *)&v17);
  v5 = v17;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( !v5 )
    return 0LL;
  v6 = 0;
  v7 = v5[6] - 1;
  if ( v7 < 0 )
    return 0LL;
  do
  {
    v8 = (v7 + v6) >> 1;
    v9 = a2;
    v10 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[8] + 4LL * v8) - (_QWORD)a2;
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 != v9[v10] )
        break;
      ++v9;
      if ( !v11 )
      {
        v12 = 0;
        goto LABEL_9;
      }
    }
    v12 = (unsigned __int8)*v9 < (unsigned __int8)v9[v10] ? -1 : 1;
LABEL_9:
    if ( v12 < 0 )
    {
      if ( !v8 )
        return 0LL;
      v7 = v8 - 1;
    }
    else
    {
      if ( v12 <= 0 )
        break;
      v6 = v8 + 1;
    }
  }
  while ( v7 >= v6 );
  if ( v7 >= v6
    && (v14 = *(unsigned __int16 *)(a1 + (unsigned int)v5[9] + 2LL * v8), v14 < v5[5])
    && ((v15 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * (unsigned __int16)v14),
         v15 <= (unsigned __int64)v5)
     || v15 >= (unsigned __int64)v5 + v16) )
  {
    return a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * (unsigned __int16)v14);
  }
  else
  {
    return 0LL;
  }
}
