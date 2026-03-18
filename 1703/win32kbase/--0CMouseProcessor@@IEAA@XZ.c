/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C0047534
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C006F9C0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0053F68 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C006F49C (--0CBaseProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C006F548 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  CBaseProcessor::CBaseProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 54) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 220) = 0LL;
  memset((char *)this + 232, 0, 0x880uLL);
  `vector constructor iterator'(
    (char *)this + 232,
    0x88uLL,
    0x10uLL,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 602) = 0;
  *((_QWORD *)this + 304) = 0LL;
  *((_QWORD *)this + 305) = 0LL;
  *((_QWORD *)this + 306) = 0LL;
  *((_WORD *)this + 1255) = 7;
  *((_QWORD *)this + 314) = 0LL;
  *((_QWORD *)this + 315) = 0LL;
  *((_BYTE *)this + 2528) = 0;
  *(_QWORD *)((char *)this + 2532) = 0LL;
  memset((char *)this + 2544, 0, 0xC0uLL);
  *((_BYTE *)this + 2736) = 0;
  *((_DWORD *)this + 686) = 0;
  *((_BYTE *)this + 2768) = 0;
  *((_DWORD *)this + 693) = 0;
  *((_QWORD *)this + 347) = 0LL;
  *((_DWORD *)this + 696) = 0;
  *((_DWORD *)this + 697) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 2792, 0, 0x48uLL);
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 344) = 0LL;
  *((_QWORD *)this + 345) = 0LL;
  CBaseProcessor::InitRecorderLog(this, L"MouseProcessor");
  result = this;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 302) = 0LL;
  *((_QWORD *)this + 303) = 0LL;
  return result;
}
