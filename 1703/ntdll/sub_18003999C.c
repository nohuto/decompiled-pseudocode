/*
 * XREFs of sub_18003999C @ 0x18003999C
 * Callers:
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     sub_1800DC094 @ 0x1800DC094 (sub_1800DC094.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_18003999C(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // edx
  __int64 result; // rax
  char *v12; // rcx
  char *v13; // r8
  unsigned int v14; // r9d
  unsigned int *v15; // rdx
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v1 = a1[6];
  v2 = a1 + 13;
  v4 = sub_180032C0C(*(_QWORD *)(v1 + 48), 1, 0xCu, (_DWORD *)a1 + 26, &v21);
  v5 = v21;
  if ( v4 < 0 )
    v5 = 0LL;
  a1[12] = v5;
  v6 = *(_QWORD *)(v1 + 48);
  v21 = v5;
  RtlImageNtHeaderEx(3, v6, 0LL, &v20);
  v7 = sub_18003A72C(*(_QWORD *)(v1 + 48));
  if ( !v7 || *(_DWORD *)v7 < 0x94u )
    goto LABEL_9;
  v8 = v20;
  if ( (*(_WORD *)(v20 + 94) & 0x4000) != 0 && (*(_DWORD *)(v7 + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(v7 + 112);
    a1[18] = v9;
    if ( v9 )
    {
      a1[17] = *v9;
LABEL_9:
      v8 = v20;
    }
  }
  if ( !a1[12] )
  {
    v14 = *(_DWORD *)(v8 + 144);
    v15 = (unsigned int *)(*(unsigned __int16 *)(v8 + 20) + v8 + 24);
    if ( v14 )
    {
      v16 = *(unsigned __int16 *)(v8 + 6);
      v17 = 0;
      if ( *(_WORD *)(v8 + 6) )
      {
        while ( 1 )
        {
          v18 = v15[3];
          if ( v14 >= v18 && v14 < v15[4] + v18 )
            break;
          ++v17;
          v15 += 10;
          if ( v17 >= v16 )
            goto LABEL_11;
        }
        a1[12] = *(_QWORD *)(v1 + 48) + v15[3];
        v19 = v15[2];
        *v2 = v19;
        if ( !v19 )
          *v2 = v15[4];
      }
    }
  }
LABEL_11:
  v10 = 0;
  if ( a1[12] && *v2 )
  {
    v23 = a1[12];
    v22 = *v2;
    result = ZwProtectVirtualMemory(-1LL, &v23, &v22, 4LL, a1 + 16);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    v12 = (char *)a1[12];
    v13 = &v12[*v2];
    do
    {
      *(_QWORD *)v12 = *(_QWORD *)v12;
      v12 += 4096;
    }
    while ( v12 < v13 );
  }
  return v10;
}
