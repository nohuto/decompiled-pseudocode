/*
 * XREFs of sub_18005E0E0 @ 0x18005E0E0
 * Callers:
 *     sub_18005E008 @ 0x18005E008 (sub_18005E008.c)
 *     sub_1801058BC @ 0x1801058BC (sub_1801058BC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E16C @ 0x18005E16C (sub_18005E16C.c)
 */

__int64 __fastcall sub_18005E0E0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 96));
  v6 = a3 >> 20;
  v7 = sub_18005E16C(a1, a2, v6, &v14);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_WORD *)(v7 + 42);
    if ( v9 == -1 )
      v8 = 0LL;
    else
      *(_WORD *)(v8 + 42) = v9 + 1;
  }
  else
  {
    v11 = v14;
    if ( v14 )
    {
      *(_BYTE *)(v14 + 46) &= ~1u;
      v12 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 32) = v12;
      *(_WORD *)(v11 + 40) = v6;
      *(_WORD *)(v11 + 42) = 1;
      v8 = v11;
      *(_QWORD *)(v11 + 24) = a1;
      LOBYTE(v12) = *(_BYTE *)(a2 + 8);
      *(_BYTE *)(v11 + 44) = (v11 - a1 - 112) / 48;
      v13 = *(_BYTE *)(a2 + 12);
      *(_BYTE *)(v11 + 45) = v12;
      *(_BYTE *)(v11 + 46) = *(_BYTE *)(v11 + 46) & 0xF1 | (*(_DWORD *)(a2 + 4) != 0) | (2
                                                                                       * (*(_BYTE *)(a2 + 4) & 3 | (4 * (v13 & 1))));
      ++*(_DWORD *)(a1 + 104);
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 96));
  if ( v8 )
    return *(unsigned __int8 *)(v8 + 44);
  else
    return 0xFFFFFFFFLL;
}
