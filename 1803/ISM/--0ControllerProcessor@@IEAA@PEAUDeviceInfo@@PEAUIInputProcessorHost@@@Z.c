/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180031DA8
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180032BA0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x180031C94 (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800AC0F8 (--0ManipulationInjector@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=18
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _WORD *v5; // rbx
  _WORD *v6; // rsi
  __int64 v7; // rcx
  unsigned int v9; // [rsp+28h] [rbp-30h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 6) = &IManipulationInjectorClient::`vftable';
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v5 = (_WORD *)((char *)this + 56);
  v6 = (_WORD *)((char *)this + 152);
  *((_WORD *)this + 76) = 0;
  memset_0((char *)this + 56, 0, 0x60uLL);
  v7 = 24LL;
  do
  {
    *v5 = *v6;
    v5 += 2;
    --v7;
  }
  while ( v7 );
  memset_0((char *)this + 160, 0, 0x6C8uLL);
  *((_DWORD *)this + 46) = 1736;
  *((_DWORD *)this + 474) = 2;
  *((_QWORD *)this + 238) = 0LL;
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 241) = 0LL;
  *((_QWORD *)this + 242) = 0LL;
  *((_QWORD *)this + 243) = 0LL;
  *(_QWORD *)((char *)this + 1964) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_BYTE *)this + 2000) = 0;
  *((_BYTE *)this + 2020) = 0;
  *((_DWORD *)this + 506) = 0;
  *(_QWORD *)((char *)this + 2036) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 2048));
  *((_BYTE *)this + 2872) = 0;
  *((_DWORD *)this + 719) = 0;
  *((_WORD *)this + 1440) = 0;
  InjectionDevice::InjectionDevice((__int64)this + 2888, (__int64)a3, 128);
  InjectionDevice::InjectionDevice((__int64)this + 3888, (__int64)a3, 4);
  InjectionDevice::InjectionDevice((__int64)this + 4888, (__int64)a3, 66);
  InjectionDevice::InjectionDevice((__int64)this + 5888, (__int64)a3, 8);
  *((_QWORD *)this + 861) = 0LL;
  *((_BYTE *)this + 6896) = 0;
  LOBYTE(v9) = 0;
  *((_QWORD *)this + 865) = v9;
  *((_DWORD *)this + 1732) = 0;
  *(_OWORD *)((char *)this + 6932) = 0LL;
  *(_QWORD *)((char *)this + 6948) = 0LL;
  *(_QWORD *)((char *)this + 6956) = 0LL;
  *((_BYTE *)this + 6964) = 0;
  *((_QWORD *)this + 871) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_0), (__m128)LODWORD(FLOAT_40_0)).m128_u64[0];
  *((_QWORD *)this + 872) = 5LL;
  memset_0((char *)this + 6984, 0, 0x50uLL);
  *((_QWORD *)this + 883) = 0LL;
  *((_QWORD *)this + 884) = 0LL;
  *((_QWORD *)this + 885) = 500000LL;
  *((_QWORD *)this + 886) = 160000LL;
  *((_QWORD *)this + 887) = 1000000LL;
  *((_DWORD *)this + 1778) = 100;
  *((_DWORD *)this + 1779) = 100;
  *((_BYTE *)this + 7120) = 0;
  *((_QWORD *)this + 891) = 0LL;
  *((_QWORD *)this + 892) = 0LL;
  *((_QWORD *)this + 893) = 0LL;
  *((_QWORD *)this + 894) = 0LL;
  return this;
}
