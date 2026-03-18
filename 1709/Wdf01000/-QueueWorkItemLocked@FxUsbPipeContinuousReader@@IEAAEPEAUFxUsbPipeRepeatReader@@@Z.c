/*
 * XREFs of ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008EC28
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C008EE9C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C008F4B0 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0018BEC (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdL @ 0x1C008FA6C (WPP_IFR_SF_qdL.c)
 */

unsigned __int8 __fastcall FxUsbPipeContinuousReader::QueueWorkItemLocked(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  char v3; // bl
  FxUsbPipe *m_Pipe; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 m_ObjectSize; // ax
  const void *v8; // rcx
  FxUsbPipe *v9; // r9
  const void *level; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  v3 = 0;
  m_Pipe = this->m_Pipe;
  m_Globals = m_Pipe->m_Globals;
  if ( m_Pipe->m_State == WdfIoTargetStarted && !this->m_WorkItemQueued )
  {
    m_ObjectSize = m_Pipe->m_ObjectSize;
    v8 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0xAu, WPP_FxUsbPipe_cpp_Traceguids, v8);
    if ( FxSystemWorkItem::EnqueueWorker(
           this->m_WorkItem,
           FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk,
           Repeater,
           1u) )
    {
      this->m_WorkItemQueued = 1;
      return 1;
    }
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxUsbPipe_cpp_Traceguids);
  }
  v9 = this->m_Pipe;
  level = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v9->m_ObjectSize )
    level = 0LL;
  WPP_IFR_SF_qdL(
    m_Globals,
    v9->m_State,
    (unsigned int)level,
    (unsigned __int16)v9,
    traceGuid,
    level,
    this->m_WorkItemQueued,
    v9->m_State);
  return v3;
}
