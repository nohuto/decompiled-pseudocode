/*
 * XREFs of ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C0003558
 * Callers:
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00030E0 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C00034E0 (-_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTimer::TimerHandler(FxTimer *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void (__fastcall **p_m_Callback)(WDFTIMER__ *); // rdi
  FxCallbackLock **p_m_CallbackLock; // r14
  FxCallbackLock *m_CallbackLock; // rcx
  _KTHREAD *volatile *p_m_CallbackThread; // rsi
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rbx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  p_m_Callback = &this->m_Callback;
  if ( this->m_Callback )
  {
    p_m_CallbackLock = &this->m_CallbackLock;
    m_CallbackLock = this->m_CallbackLock;
    p_m_CallbackThread = &this->m_CallbackThread;
    this->m_CallbackThread = KeGetCurrentThread();
    if ( m_CallbackLock )
    {
      irql = 0;
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      m_ObjectSize = this->m_ObjectSize;
      v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v10 = 0LL;
      (*p_m_Callback)((WDFTIMER__ *)v10);
      LOBYTE(v11) = irql;
      (*p_m_CallbackLock)->Unlock(*p_m_CallbackLock, v11);
    }
    else
    {
      v7 = this->m_ObjectSize;
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v7 )
        v8 = 0LL;
      (*p_m_Callback)((WDFTIMER__ *)v8);
    }
    *p_m_CallbackThread = 0LL;
  }
}
