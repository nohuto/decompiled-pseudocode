/*
 * XREFs of KeRaiseUserException @ 0x1402049C0
 * Callers:
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ObpCloseHandle @ 0x1404D4BEC (ObpCloseHandle.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x14000EF80 (KiSetupForInstrumentationReturn.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  unsigned int v1; // r11d
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // r9
  unsigned __int8 v4; // r10
  unsigned __int8 v5; // al
  __int64 TrapFrame; // rcx

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1;
  if ( !CurrentIrql )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentIrql = v5;
  }
  TrapFrame = (__int64)CurrentThread->TrapFrame;
  if ( TrapFrame && (*(_BYTE *)(TrapFrame + 368) & 1) != 0 )
  {
    *((_DWORD *)CurrentThread->Teb + 176) = v1;
    _disable();
    *(_WORD *)(TrapFrame + 368) = 51;
    *(_QWORD *)(TrapFrame + 360) = KeRaiseUserExceptionDispatcher;
    if ( *(_BYTE *)(TrapFrame + 43) != 2 )
      KiSetupForInstrumentationReturn(TrapFrame);
    _enable();
  }
  if ( CurrentIrql < v4 )
    __writecr8(CurrentIrql);
  return v1;
}
