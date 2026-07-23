/*
 * XREFs of KeAbCrossThreadRelease @ 0x140140734
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x140140250 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14028575C (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  __int64 v4; // rbx
  int v6; // ecx
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (a2 & 1) != 0 )
    v4 = 96LL * (unsigned __int8)(a2 >> 1) + a3 + 800;
  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v4);
  v6 = *(_DWORD *)(v4 + 88);
  *(_BYTE *)(v4 + 26) &= ~1u;
  *(_DWORD *)(v4 + 88) = v6 & 0xFFFE0000;
  v8 = v6 & 0x1FFFF;
  KiAbThreadRemoveBoosts(a3, a1, (unsigned int *)&v8);
  *(_QWORD *)(v4 + 32) = 0LL;
  result = 0x2AAAAAAAAAAAAAABLL * (v4 - a3 - 800);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 1422), 1 << ((__int64)(v4 - a3 - 800) / 96));
  return result;
}
