/*
 * XREFs of MiGetPageForHeader @ 0x140109BE0
 * Callers:
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiGetSystemPage @ 0x140109CF0 (MiGetSystemPage.c)
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
    MiReturnFaultCharges((__int64)a1, 1uLL, 1LL);
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
