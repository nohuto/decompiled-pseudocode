/*
 * XREFs of sub_1800FEEB8 @ 0x1800FEEB8
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_1800FE840 @ 0x1800FE840 (sub_1800FE840.c)
 *     sub_1800FEC74 @ 0x1800FEC74 (sub_1800FEC74.c)
 *     sub_18010AA04 @ 0x18010AA04 (sub_18010AA04.c)
 */

void __fastcall sub_1800FEEB8(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  PRTL_SRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&stru_18015C2A0);
  if ( (dword_18015C2A8 & 1) != 0 && (dword_18015C2A8 & 2) != 0 && sub_1800FEC74(a1, 0, (PVOID *)&SRWLock) >= 0 )
  {
    v4 = sub_1800FE840(SRWLock, a2);
    if ( v4 )
      sub_18010AA04(&dword_18015C2B0, v4);
  }
  RtlReleaseSRWLockShared(&stru_18015C2A0);
}
