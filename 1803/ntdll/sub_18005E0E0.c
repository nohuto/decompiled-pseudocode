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

__int64 __fastcall sub_18005E0E0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a3;
  RtlAcquireSRWLockExclusive(a1 + 96, a2, a3, a4);
  v7 = v5 >> 20;
  v8 = sub_18005E16C(a1, a2, v7, &v15);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_WORD *)(v8 + 42);
    if ( v10 == -1 )
      v9 = 0LL;
    else
      *(_WORD *)(v9 + 42) = v10 + 1;
  }
  else
  {
    v12 = v15;
    if ( v15 )
    {
      *(_BYTE *)(v15 + 46) &= ~1u;
      v13 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 32) = v13;
      *(_WORD *)(v12 + 40) = v7;
      *(_WORD *)(v12 + 42) = 1;
      v9 = v12;
      *(_QWORD *)(v12 + 24) = a1;
      LOBYTE(v13) = *(_BYTE *)(a2 + 8);
      *(_BYTE *)(v12 + 44) = (v12 - a1 - 112) / 48;
      v14 = *(_BYTE *)(a2 + 12);
      *(_BYTE *)(v12 + 45) = v13;
      *(_BYTE *)(v12 + 46) = *(_BYTE *)(v12 + 46) & 0xF1 | (*(_DWORD *)(a2 + 4) != 0) | (2
                                                                                       * (*(_BYTE *)(a2 + 4) & 3 | (4 * (v14 & 1))));
      ++*(_DWORD *)(a1 + 104);
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 96));
  if ( v9 )
    return *(unsigned __int8 *)(v9 + 44);
  else
    return 0xFFFFFFFFLL;
}
