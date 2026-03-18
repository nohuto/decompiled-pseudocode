/*
 * XREFs of ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C00A5770
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C009CFDC (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C009E0C4 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

unsigned __int8 __fastcall FxSystemThread::ExitThread(FxSystemThread *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  bool v5; // zf
  unsigned __int8 v6; // dl
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_Initialized || this->m_Exit )
  {
    FxNonPagedObject::Unlock(this, irql, v4);
  }
  else
  {
    v5 = this->m_ThreadPtr == 0LL;
    v6 = irql;
    this->m_Exit = 1;
    if ( v5 )
    {
      FxNonPagedObject::Unlock(this, v6, v4);
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&this->m_InitEvent, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      FxNonPagedObject::Unlock(this, v6, v4);
    }
    KeSetEvent(&this->m_WorkEvent.m_Event, 0, 0);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(this->m_ThreadPtr, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(this->m_ThreadPtr);
  }
  return 1;
}
