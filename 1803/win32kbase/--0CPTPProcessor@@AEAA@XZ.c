/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C0124EA8
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0124FE0 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C010C7C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C01327C8 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 27) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 392, 0, 0xB0uLL);
  *((_BYTE *)this + 568) = 0;
  memset((char *)this + 656, 0, 0x700uLL);
  *((_QWORD *)this + 307) = 0LL;
  *((_QWORD *)this + 308) = 0LL;
  *((_QWORD *)this + 309) = 0LL;
  *((_QWORD *)this + 310) = 0LL;
  *((_BYTE *)this + 2448) = 0;
  CBaseProcessor::InitRecorderLog(this, L"CPTPProcessor");
  *((_QWORD *)this + 79) = 0LL;
  result = this;
  *((_QWORD *)this + 80) = 0LL;
  return result;
}
