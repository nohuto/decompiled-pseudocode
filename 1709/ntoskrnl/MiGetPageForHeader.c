/*
 * XREFs of MiGetPageForHeader @ 0x1400EE050
 * Callers:
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetSystemPage @ 0x1400EE160 (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiGetPageForHeader(ULONG_PTR *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SystemPage; // rdi
  char EffectivePagePriorityThread; // bl
  unsigned __int8 v8; // al
  char v9; // cl
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)MiObtainFaultCharges(a1, 1u, 1) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase((__int64)&CurrentThread->ApcState.Process[1].IdealNode[12], a2, (__int64)v10);
  SystemPage = MiGetSystemPage(a1, v10);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v8 = MiLockPageInline(SystemPage);
  v9 = *(_BYTE *)(SystemPage + 35);
  *(_QWORD *)(SystemPage + 16) = 0LL;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_BYTE *)(SystemPage + 35) ^= (EffectivePagePriorityThread ^ v9) & 7;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(SystemPage + 32) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  return (SystemPage + 0x58000000000LL) / 48;
}
