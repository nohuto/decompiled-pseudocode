/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003D078
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003DEA0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006D560 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800C03BC (--0ManipulationInjector@@QEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=14
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _WORD *v4; // rdi
  __int64 v5; // rcx
  unsigned int v7; // [rsp+28h] [rbp-30h]

  NonPointerProcessor::NonPointerProcessor(this, a2, a3);
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 7) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v4 = (_WORD *)((char *)this + 64);
  *((_WORD *)this + 80) = 0;
  memset((char *)this + 64, 0, 0x60uLL);
  v5 = 24LL;
  do
  {
    *v4 = *((_WORD *)this + 80);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  memset((char *)this + 168, 0, 0x40uLL);
  *((_BYTE *)this + 232) = 0;
  *((_DWORD *)this + 59) = 2;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *(_QWORD *)((char *)this + 340) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_BYTE *)this + 376) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_QWORD *)this + 49) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 400));
  *((_DWORD *)this + 306) = 0;
  *((_WORD *)this + 614) = 0;
  *((_BYTE *)this + 3856) = 0;
  LOBYTE(v7) = 0;
  *((_QWORD *)this + 485) = v7;
  *((_DWORD *)this + 972) = 0;
  *(_OWORD *)((char *)this + 3892) = 0LL;
  *(_QWORD *)((char *)this + 3908) = 0LL;
  *(_QWORD *)((char *)this + 3916) = 0LL;
  *((_BYTE *)this + 3924) = 0;
  *((_QWORD *)this + 491) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_0), (__m128)LODWORD(FLOAT_40_0)).m128_u64[0];
  *((_QWORD *)this + 492) = 5LL;
  memset((char *)this + 3944, 0, 0x50uLL);
  *((_QWORD *)this + 503) = 0LL;
  *((_QWORD *)this + 504) = 0LL;
  *((_QWORD *)this + 505) = 500000LL;
  *((_QWORD *)this + 506) = 160000LL;
  *((_QWORD *)this + 507) = 1000000LL;
  *((_DWORD *)this + 1018) = 100;
  *((_DWORD *)this + 1019) = 100;
  *((_BYTE *)this + 4080) = 0;
  *((_QWORD *)this + 511) = 0LL;
  *((_QWORD *)this + 512) = 0LL;
  *((_QWORD *)this + 513) = 0LL;
  *((_BYTE *)this + 4112) = 0;
  return this;
}
