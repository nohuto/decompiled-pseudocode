/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C01339CC
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C01319B0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C009FB24 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C012C0B4 (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C01327C8 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 22) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 27) = 0;
  memset((char *)this + 112, 0, 0x900uLL);
  `vector constructor iterator'(
    (char *)this + 112,
    144LL,
    16LL,
    (void (__fastcall *)(char *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 604) = 0;
  *((_QWORD *)this + 305) = 0LL;
  *((_QWORD *)this + 306) = 0LL;
  *((_QWORD *)this + 307) = 0LL;
  *((_WORD *)this + 1259) = 7;
  *((_QWORD *)this + 315) = 0LL;
  *((_QWORD *)this + 316) = 0LL;
  *((_BYTE *)this + 2536) = 0;
  *(_QWORD *)((char *)this + 2540) = 0LL;
  memset((char *)this + 2552, 0, 0xB0uLL);
  *((_BYTE *)this + 2728) = 0;
  *((_DWORD *)this + 684) = 0;
  *((_BYTE *)this + 2760) = 0;
  *((_DWORD *)this + 691) = 0;
  *((_QWORD *)this + 346) = 0LL;
  *((_DWORD *)this + 694) = 0;
  *((_DWORD *)this + 695) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 2784, 0, 0x48uLL);
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_QWORD *)this + 344) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 359) = 0LL;
  *((_WORD *)this + 1440) = 0;
  CBaseProcessor::InitRecorderLog(this, L"MouseProcessor");
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 303) = 0LL;
  *((_QWORD *)this + 304) = 0LL;
  return result;
}
