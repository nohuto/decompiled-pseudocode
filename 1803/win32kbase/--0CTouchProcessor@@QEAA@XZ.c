/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C010C7C4
 * Callers:
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C0124EA8 (--0CPTPProcessor@@AEAA@XZ.c)
 *     InputInitialize @ 0x1C01315F8 (InputInitialize.c)
 * Callees:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C012494C (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C012C0B4 (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C01327C8 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::InitRecorderLog(this, L"CTouchProcessor");
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_WORD *)this + 84) = 2;
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 72));
  return this;
}
