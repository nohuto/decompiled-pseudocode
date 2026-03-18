/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0002CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0064BB8 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0064C1C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C00A2100 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  void (__fastcall *v3)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v4; // r8
  unsigned __int8 v5; // di
  void (__fastcall *InterruptNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  void (__fastcall *v8)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v9; // rcx
  char v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    InterruptNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( InterruptNotifyRoutine )
    {
      v10 = 2;
      InterruptNotifyRoutine(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, v10);
    }
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else
  {
    if ( ServiceContext->m_PassiveHandling )
    {
      FxInterrupt::AcquireLock(ServiceContext);
      v8 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
      if ( v8 )
      {
        v11 = 2;
        v8(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, v11);
      }
      v9 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !ServiceContext->m_ObjectSize )
        v9 = 0LL;
      v5 = ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v9, ServiceContext->m_InterruptInfo.MessageNumber);
      FxInterrupt::ReleaseLock(ServiceContext);
    }
    else
    {
      v3 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
      if ( v3 )
      {
        v12 = 2;
        v3(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3936u, v12);
      }
      if ( ServiceContext->m_ObjectSize )
        v4 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v4 = 0LL;
      return ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v4, ServiceContext->m_InterruptInfo.MessageNumber);
    }
    return v5;
  }
}
