/*
 * XREFs of KeAbCrossThreadRelease @ 0x1401581B8
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x140157BB0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140157FDC (ExpReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v4; // rbx
  int v6; // ecx
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (a2 & 1) != 0 )
  {
    a2 = 96LL * (unsigned __int8)(a2 >> 1);
    v4 = a2 + a3 + 800;
  }
  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v4, a2);
  v6 = *(_DWORD *)(v4 + 88);
  *(_BYTE *)(v4 + 26) &= ~1u;
  *(_DWORD *)(v4 + 88) = v6 & 0xFFFE0000;
  v8 = v6 & 0x1FFFF;
  KiAbThreadRemoveBoosts(a3, a1, (__int64)&v8);
  *(_QWORD *)(v4 + 32) = 0LL;
  result = 0x2AAAAAAAAAAAAAABLL * (v4 - a3 - 800);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 1422), 1 << ((__int64)(v4 - a3 - 800) / 96));
  return result;
}
