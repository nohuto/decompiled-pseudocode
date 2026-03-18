/*
 * XREFs of ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C0019BA0
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0019080 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgIo::InitializeDefaultQueue(FxPkgIo *this, unsigned __int64 Device, FxIoQueue *Queue)
{
  FxIoQueue **m_DispatchTable; // rax
  __int64 v6; // rcx
  KIRQL v7; // al
  unsigned __int16 v9; // ax
  unsigned __int64 _a2; // rdx

  if ( this->m_DefaultQueue )
  {
    v9 = *(_WORD *)(Device + 10);
    _a2 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v9 )
      _a2 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgIo_cpp_Traceguids, this, _a2, -1073741823);
    return 3221225473LL;
  }
  else
  {
    m_DispatchTable = this->m_DispatchTable;
    v6 = 28LL;
    do
    {
      if ( !*m_DispatchTable )
        *m_DispatchTable = Queue;
      ++m_DispatchTable;
      --v6;
    }
    while ( v6 );
    this->m_DefaultQueue = Queue;
    v7 = KeAcquireSpinLockRaiseToDpc(&Queue->m_SpinLock.m_Lock);
    Queue->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&Queue->m_SpinLock.m_Lock, v7);
    return 0LL;
  }
}
