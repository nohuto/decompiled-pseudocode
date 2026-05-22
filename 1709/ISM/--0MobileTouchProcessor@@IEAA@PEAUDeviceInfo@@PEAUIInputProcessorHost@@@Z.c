/*
 * XREFs of ??0MobileTouchProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006A78C
 * Callers:
 *     ?Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006AB20 (-Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180070B0C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

MobileTouchProcessor *__fastcall MobileTouchProcessor::MobileTouchProcessor(
        MobileTouchProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 v5; // rcx
  MobileTouchProcessor *result; // rax

  PointerProcessor::PointerProcessor(this, a2, a3);
  *(_QWORD *)this = &MobileTouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MobileTouchProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 22) = (unsigned __int64)a2 & -(__int64)((*((_BYTE *)a2 + 4) & 8) != 0);
  if ( *((char *)a2 + 4) >= 0 )
  {
    *((_QWORD *)this + 23) = 0LL;
  }
  else
  {
    *((_QWORD *)this + 23) = a2;
    *((_DWORD *)a2 + 1) |= 8u;
  }
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  memset((char *)this + 208, 0, 0x30uLL);
  *((_DWORD *)this + 66) = 0;
  result = this;
  *((_WORD *)this + 134) = 0;
  *((_DWORD *)this + 64) = 0x7FFFFFFF;
  *((_BYTE *)this + 260) = 0;
  return result;
}
