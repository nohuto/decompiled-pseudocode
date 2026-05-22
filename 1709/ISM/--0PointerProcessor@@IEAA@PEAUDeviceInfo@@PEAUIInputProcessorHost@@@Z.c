/*
 * XREFs of ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180070B0C
 * Callers:
 *     ??0MobileTouchProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006A78C (--0MobileTouchProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006B4BC (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ?Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180070CB0 (-Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180072ED0 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 */

PointerProcessor *__fastcall PointerProcessor::PointerProcessor(
        PointerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _DWORD *v3; // rdi
  _DWORD *v5; // rsi
  __int64 v8; // rcx
  PointerProcessor *result; // rax

  v3 = (_DWORD *)((char *)this + 80);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  v5 = (_DWORD *)((char *)this + 160);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &PointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &PointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 40) = -1;
  memset((char *)this + 80, 0, 0x50uLL);
  v8 = 10LL;
  do
  {
    *v3 = *v5;
    v3 += 2;
    --v8;
  }
  while ( v8 );
  *((_WORD *)this + 34) = 0;
  result = this;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = a2;
  return result;
}
