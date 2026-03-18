/*
 * XREFs of ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0075074
 * Callers:
 *     VfEvtIoStop @ 0x1C00D76E0 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     McTemplateK0pp @ 0x1C0075108 (McTemplateK0pp.c)
 */

void __fastcall PerfEvtIoStopStop(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v3; // r8
  _FX_DRIVER_GLOBALS *v4; // rbx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // dx
  _MCGEN_TRACE_CONTEXT *Context; // rcx
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v3 = (unsigned __int16 *)((char *)v3 - *v3);
  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v3 + 2);
  FxObjectHandleGetPtr(v4, Queue, 0x1003u, (void **)&pQueue);
  m_DeviceBase = pQueue->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext & 1) != 0 )
  {
    Context = (_MCGEN_TRACE_CONTEXT *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      Context = 0LL;
    McTemplateK0pp(Context, &FX_EVTIOSTOP_STOP, pActivityId, v4->Driver->m_DriverDeviceAdd.Method, Context);
  }
}
