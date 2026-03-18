/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x140028AC0
 * Callers:
 *     KeExpandKernelStackAndCalloutEx @ 0x140028A90 (KeExpandKernelStackAndCalloutEx.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiDoStackCopy @ 0x1400CFFD0 (MiDoStackCopy.c)
 *     KeExpandKernelStackAndCallout @ 0x1401570C0 (KeExpandKernelStackAndCallout.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402682C4 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140028B90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiFatalFilter @ 0x140203C14 (KiFatalFilter.c)
 */

__int64 __fastcall KeExpandKernelStackAndCalloutInternal(
        void (__fastcall *a1)(__int64),
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  char v11; // r14
  unsigned __int8 v12; // al

  result = KiExpandKernelStackAndCalloutSwitchStack((_DWORD)a1, a2, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    MiscFlags = CurrentThread->MiscFlags;
    if ( (MiscFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      CurrentThread->MiscFlags = MiscFlags | 0x1000;
      v11 = 0;
    }
    a1(a2);
    if ( !v11 )
      CurrentThread->MiscFlags &= ~0x1000u;
    v12 = KeGetCurrentIrql();
    if ( v12 != CurrentIrql )
      KeBugCheckEx(0xC8u, CurrentIrql, v12, 0LL, 0LL);
    return 0LL;
  }
  return result;
}
