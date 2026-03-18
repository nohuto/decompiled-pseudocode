/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x140299ACC
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x140299370 (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x14029A814 (RtlpHpLfhOwnerInitialize.c)
 */

int __fastcall RtlpHpLfhBucketInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ecx

  RtlpHpLfhOwnerInitialize(a1, a2, 0xFFFFFFFFLL, a3);
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a1 + 1)];
  if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
  {
    v7 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a1 + 1)];
    _BitScanForward(&v8, *(_DWORD *)(a3 + 80));
    LOBYTE(v8) = v8 + 18;
    *(_BYTE *)(a1 + 76) = v8;
    v6 = (v5 - 1 + (1LL << v8)) / v7;
    *(_DWORD *)(a1 + 72) = v6;
  }
  else
  {
    _BitScanForward((unsigned int *)&v6, v5);
    *(_BYTE *)(a1 + 76) = v6;
  }
  return v6;
}
