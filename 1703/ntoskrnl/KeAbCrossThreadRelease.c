/*
 * XREFs of KeAbCrossThreadRelease @ 0x14014E18C
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14014D0C4 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14014DCBC (ExpReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
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
  KiAbThreadRemoveBoosts((volatile signed __int32 *)a3, a1, (unsigned int *)&v8);
  *(_QWORD *)(v4 + 32) = 0LL;
  result = 0x2AAAAAAAAAAAAAABLL * (v4 - a3 - 800);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 1422), 1 << ((__int64)(v4 - a3 - 800) / 96));
  return result;
}
