/*
 * XREFs of imp_WdfInterruptSynchronize @ 0x1C0097FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

BOOLEAN __fastcall imp_WdfInterruptSynchronize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        unsigned __int8 (__fastcall *Callback)(WDFINTERRUPT__ *, void *),
        void *Context)
{
  FxInterrupt *v6; // rax
  struct _KINTERRUPT *m_Interrupt; // rcx
  _QWORD SynchronizeContext[5]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxInterrupt *pFxInterrupt; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  v6 = pFxInterrupt;
  if ( pFxInterrupt->m_PassiveHandling )
  {
    if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) < 0 )
      return 0;
    v6 = pFxInterrupt;
  }
  if ( !Callback )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  m_Interrupt = v6->m_Interrupt;
  SynchronizeContext[0] = v6;
  SynchronizeContext[1] = Callback;
  SynchronizeContext[2] = Context;
  if ( !m_Interrupt )
    m_Interrupt = v6->m_InterruptCaptured;
  return KeSynchronizeExecution(m_Interrupt, FxInterrupt::_InterruptSynchronizeThunk, SynchronizeContext);
}
