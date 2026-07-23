/*
 * XREFs of RtlFindExportedRoutineByName @ 0x18007BE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  NTSTATUS v4; // eax
  char *v5; // r8
  int v6; // r9d
  int v7; // ecx
  int v8; // edx
  PCSTR v9; // rax
  signed __int64 v10; // r11
  CHAR v11; // r10
  int v12; // eax
  unsigned int v14; // ecx
  char *v15; // rdx
  DWORD v16; // [rsp+60h] [rbp+18h] BYREF
  char *v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180032C0C((unsigned __int64)BaseOfImage, 1, 0, &v16, &v17);
  v5 = v17;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( !v5 )
    return 0LL;
  v6 = 0;
  v7 = *((_DWORD *)v5 + 6) - 1;
  if ( v7 < 0 )
    return 0LL;
  do
  {
    v8 = (v7 + v6) >> 1;
    v9 = RoutineName;
    v10 = (_BYTE *)BaseOfImage
        + *(unsigned int *)((char *)BaseOfImage + 4 * v8 + *((unsigned int *)v5 + 8))
        - RoutineName;
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
    v12 = *v9 < (unsigned int)v9[v10] ? -1 : 1;
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
    && (v14 = *(unsigned __int16 *)((char *)BaseOfImage + 2 * v8 + *((unsigned int *)v5 + 9)), v14 < *((_DWORD *)v5 + 5))
    && ((v15 = (char *)BaseOfImage
             + *(unsigned int *)((char *)BaseOfImage + 4 * (unsigned __int16)v14 + *((unsigned int *)v5 + 7)),
         v15 <= v5)
     || v15 >= &v5[v16]) )
  {
    return (char *)BaseOfImage
         + *(unsigned int *)((char *)BaseOfImage + 4 * (unsigned __int16)v14 + *((unsigned int *)v5 + 7));
  }
  else
  {
    return 0LL;
  }
}
