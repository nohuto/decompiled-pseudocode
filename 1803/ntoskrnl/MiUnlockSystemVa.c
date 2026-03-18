/*
 * XREFs of MiUnlockSystemVa @ 0x14003FA38
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiReleaseFaultSynchronization @ 0x14026207C (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 17;
    result = MiReleaseFaultState(a1 + 24, a2, 0LL);
    *v2 = 0LL;
  }
  return result;
}
