/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AB74
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012A57C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012A614 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C01384E8 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C0138B10 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
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

  v4 = (struct IPTPEngine *)Win32AllocPoolZInit(0xCD8uLL, 1886679893LL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0xCD8uLL);
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
  v8 = this + 103;
  result = PTPEngineTraceProducer::Create(v5, PerformanceCounter.QuadPart, this + 103);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)*v8 + 4) = (unsigned __int64)(this + 47) & -(__int64)(this != 0LL);
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
    PTPEngineTraceProducer::SetEnvironment(*v8, (const struct PTPEnvironment *)(this + 104));
    return 0LL;
  }
  return result;
}
