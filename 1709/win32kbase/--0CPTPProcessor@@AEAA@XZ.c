/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C012A488
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012A57C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000753C (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C00086A0 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 47) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 552, 0, 0xC0uLL);
  *((_BYTE *)this + 744) = 0;
  *((_BYTE *)this + 2620) = 0;
  CBaseProcessor::InitRecorderLog(this, L"CPTPProcessor");
  *((_QWORD *)this + 101) = 0LL;
  result = this;
  *((_QWORD *)this + 102) = 0LL;
  return result;
}
