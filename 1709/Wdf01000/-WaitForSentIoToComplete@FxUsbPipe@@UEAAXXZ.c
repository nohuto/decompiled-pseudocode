/*
 * XREFs of ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C008F190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C008DD34 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 */

void __fastcall FxUsbPipe::WaitForSentIoToComplete(FxUsbPipe *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdx
  FxSystemWorkItem *m_WorkItem; // rbx
  _FX_DRIVER_GLOBALS *v5; // rcx
  const void *v6; // rdx
  _FX_DRIVER_GLOBALS *v7; // rcx
  const void *v8; // r10

  if ( this->m_Reader )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxUsbPipe_cpp_Traceguids, _a1);
    }
    m_WorkItem = this->m_Reader->m_WorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_WorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v5 = this->m_Globals;
    if ( v5->FxVerboseOn )
    {
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v6 = 0LL;
      WPP_IFR_SF_qd(v5, 5u, 0xEu, 0x1Au, WPP_FxUsbPipe_cpp_Traceguids, v6, this->m_Reader->m_NumReaders);
    }
    FxUsbPipeContinuousReader::CancelRepeaters(this->m_Reader);
  }
  v7 = this->m_Globals;
  if ( v7->FxVerboseOn )
  {
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_q(v7, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipe_cpp_Traceguids, v8);
  }
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_SentIoEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
}
