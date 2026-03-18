/*
 * XREFs of MiGetPageForHeader @ 0x14004DD9C
 * Callers:
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetSystemPage @ 0x14004DEB4 (MiGetSystemPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 */

__int64 __fastcall MiGetPageForHeader(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  __int64 SystemPage; // rdi
  char EffectivePagePriorityThread; // bl
  unsigned __int8 v9; // al
  char v10; // cl
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)MiObtainFaultCharges(a1, 1LL, 1LL) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase(&CurrentThread->ApcState.Process[1].IdealNode[12], a2, v11);
  SystemPage = MiGetSystemPage(a1, v11);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v6);
  v9 = MiLockPageInline(SystemPage);
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_QWORD *)(SystemPage + 16) = ZeroPte;
  v10 = EffectivePagePriorityThread ^ *(_BYTE *)(SystemPage + 35);
  *(_WORD *)(SystemPage + 32) = 1;
  *(_BYTE *)(SystemPage + 35) ^= v10 & 7;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v9);
  return (SystemPage + 0x58000000000LL) / 48;
}
