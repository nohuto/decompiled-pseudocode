/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C012AD38
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AE24 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C006E1C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C006F548 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 44) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 528, 0, 0xC0uLL);
  *((_BYTE *)this + 720) = 0;
  CBaseProcessor::InitRecorderLog(this, L"CPTPProcessor");
  *((_QWORD *)this + 98) = 0LL;
  result = this;
  *((_QWORD *)this + 99) = 0LL;
  return result;
}
