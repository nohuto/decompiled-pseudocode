/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C001645C
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0012D70 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C00086A0 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C0012EBC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001B178 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 60) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 244) = 0LL;
  memset((char *)this + 256, 0, 0x900uLL);
  `vector constructor iterator'(
    (char *)this + 256,
    0x90uLL,
    0x10uLL,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 640) = 0;
  *((_QWORD *)this + 323) = 0LL;
  *((_QWORD *)this + 324) = 0LL;
  *((_QWORD *)this + 325) = 0LL;
  *((_WORD *)this + 1331) = 7;
  *((_QWORD *)this + 333) = 0LL;
  *((_QWORD *)this + 334) = 0LL;
  *((_BYTE *)this + 2680) = 0;
  *(_QWORD *)((char *)this + 2684) = 0LL;
  memset((char *)this + 2696, 0, 0xC0uLL);
  *((_BYTE *)this + 2888) = 0;
  *((_DWORD *)this + 724) = 0;
  *((_BYTE *)this + 2920) = 0;
  *((_DWORD *)this + 731) = 0;
  *((_QWORD *)this + 366) = 0LL;
  *((_DWORD *)this + 734) = 0;
  *((_DWORD *)this + 735) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 2944, 0, 0x48uLL);
  *((_QWORD *)this + 377) = 0LL;
  *((_QWORD *)this + 363) = 0LL;
  *((_QWORD *)this + 364) = 0LL;
  *((_QWORD *)this + 378) = 0LL;
  *((_QWORD *)this + 379) = 0LL;
  *((_WORD *)this + 1520) = 0;
  CBaseProcessor::InitRecorderLog(this, L"MouseProcessor");
  result = this;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 321) = 0LL;
  *((_QWORD *)this + 322) = 0LL;
  return result;
}
