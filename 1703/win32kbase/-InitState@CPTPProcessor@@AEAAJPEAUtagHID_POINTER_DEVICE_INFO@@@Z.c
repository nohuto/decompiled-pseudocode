/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012B4D4
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AE24 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AEC0 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C01391C8 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01397D0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InitState(
        struct PTPEngineTraceProducer **this,
        struct tagHID_POINTER_DEVICE_INFO *a2)
{
  struct IPTPEngine *v4; // rax
  struct IPTPEngine *v5; // rbx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  PTPEngineTraceProducer **v8; // rsi

  v4 = (struct IPTPEngine *)Win32AllocPoolZInit(0xF10uLL, 1886679893LL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0xF10uLL);
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = &CPTPEngine::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 3221225495LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = this + 100;
  result = PTPEngineTraceProducer::Create(v5, PerformanceCounter.QuadPart, this + 100);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)*v8 + 4) = (unsigned __int64)(this + 44) & -(__int64)(this != 0LL);
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
    PTPEngineTraceProducer::SetEnvironment(*v8, (const struct PTPEnvironment *)(this + 101));
    return 0LL;
  }
  return result;
}
