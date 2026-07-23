/*
 * XREFs of sub_1800EC04C @ 0x1800EC04C
 * Callers:
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 * Callees:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 */

__int64 __fastcall sub_1800EC04C(unsigned __int64 a1)
{
  __int64 *v1; // r14
  __int64 v2; // rbp
  __int64 *v3; // rsi
  __int64 v5; // rdi
  __int64 *v6; // r13
  int v7; // edx
  bool v8; // zf
  unsigned __int64 v9; // r15
  __int64 *v10; // r12
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 i; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r8d
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 336);
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 336) == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = v3;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v5 + 8) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        sub_1800FC010(a1, v3 - 2);
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v22 = v9;
    if ( !v8 )
    {
      v10 = *(__int64 **)(v5 + 24);
      v11 = v3[1];
      v12 = *v10;
      if ( *v10 != v11 || (__int64 *)v12 != v6 )
      {
        sub_18009A5F0(13, a1, (__int64)v6, v11, v12, 0LL);
        goto LABEL_19;
      }
      *(_QWORD *)(a1 + 192) -= v9;
      v13 = *(_QWORD *)(a1 + 312);
      if ( v13 )
      {
        for ( i = *(unsigned int *)(v13 + 8); ; i = *(unsigned int *)(v15 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v16 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_14;
          }
          v15 = *(_QWORD *)v13;
          if ( !*(_QWORD *)v13 )
            break;
          v13 = *(_QWORD *)v13;
        }
        v16 = *(_DWORD *)(v13 + 8) - 1;
LABEL_14:
        sub_18005C30C(a1, v13, 1, v6, v16, *(unsigned __int16 *)(v5 + 8));
      }
      *v10 = (__int64)v3;
      v3[1] = (__int64)v10;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        sub_18005CA3C((PVOID)a1, v5);
      v17 = *(unsigned __int16 *)(v5 + 8);
      v18 = v5;
LABEL_18:
      sub_1800128F0(a1, v18, v17, 1);
LABEL_19:
      v3 = (__int64 *)v1[1];
      continue;
    }
    v19 = sub_1800135E0(a1, v5, &v22, 1);
    v17 = v22;
    v18 = v19;
    if ( v22 != v9 )
    {
      if ( v19 != v5 && (*(_WORD *)(v19 + 8) < 0x100u || *(_WORD *)(a1 + 140) != *(_WORD *)(v19 + 12)) )
      {
        sub_180012F50(a1, v19, v22);
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v19 + 8) )
      v2 = v19;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
      *(_DWORD *)(v19 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v20 = *(_DWORD *)(v2 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v2 + 8) = v20;
      if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
        sub_1800FC010(a1, v2);
    }
  }
  return v2;
}
