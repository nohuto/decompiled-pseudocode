/*
 * XREFs of sub_1800EFFE8 @ 0x1800EFFE8
 * Callers:
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 * Callees:
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_18002F7E0 @ 0x18002F7E0 (sub_18002F7E0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 */

unsigned __int64 __fastcall sub_1800EFFE8(_QWORD *BaseAddress)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // rdi
  __int64 *v3; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  __int64 *v7; // r10
  bool v8; // zf
  unsigned __int64 v9; // r15
  __int64 *v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 i; // rax
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = BaseAddress + 42;
  v2 = 0LL;
  v3 = (__int64 *)BaseAddress[43];
  if ( BaseAddress + 42 == v3 )
    return v2;
  do
  {
    v5 = (unsigned __int64)(v3 - 2);
    v6 = (__int64)v3;
    v7 = v3;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v5 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
      {
        sub_1800FDA30(BaseAddress, v3 - 2);
        v7 = v3;
      }
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v22 = v9;
    if ( !v8 )
    {
      v10 = *(__int64 **)(v5 + 24);
      v11 = *(_QWORD *)(v5 + 16);
      v12 = *v10;
      v13 = *(_QWORD *)(v11 + 8);
      if ( *v10 != v13 || v12 != v5 + 16 )
      {
        sub_1800A4DFC(12, (__int64)BaseAddress, v6, v13, v12, 0LL);
        goto LABEL_19;
      }
      BaseAddress[24] -= v9;
      v14 = BaseAddress[39];
      if ( v14 )
      {
        for ( i = *(unsigned int *)(v14 + 8); ; i = *(unsigned int *)(v16 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v17 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_14;
          }
          v16 = *(_QWORD *)v14;
          if ( !*(_QWORD *)v14 )
            break;
          v14 = *(_QWORD *)v14;
        }
        v17 = *(_DWORD *)(v14 + 8) - 1;
LABEL_14:
        sub_18002F7E0((__int64)BaseAddress, v14, 1, v7, v17, *(unsigned __int16 *)(v5 + 8));
      }
      *v10 = v11;
      *(_QWORD *)(v11 + 8) = v10;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        sub_180021DA4(BaseAddress, v5);
      v18 = *(unsigned __int16 *)(v5 + 8);
      v19 = v5;
LABEL_18:
      sub_18001C798(BaseAddress, v19, v18, 1);
LABEL_19:
      v3 = (__int64 *)v1[1];
      continue;
    }
    v20 = sub_18001D964(BaseAddress, v5, &v22, 1);
    v18 = v22;
    v19 = v20;
    if ( v22 != v9 )
    {
      if ( v20 != v5 && (*(_WORD *)(v20 + 8) < 0x100u || *((_WORD *)BaseAddress + 70) != *(_WORD *)(v20 + 12)) )
      {
        sub_18001D350((unsigned __int64)BaseAddress, v20, v22);
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v20 + 8) )
      v2 = v20;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
      *(_DWORD *)(v20 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v2 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        sub_1800FDA30(BaseAddress, v2);
    }
  }
  return v2;
}
