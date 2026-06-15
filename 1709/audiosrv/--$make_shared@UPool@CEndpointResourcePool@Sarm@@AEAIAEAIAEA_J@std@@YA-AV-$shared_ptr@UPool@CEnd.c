/*
 * XREFs of ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800C3E7C
 * Callers:
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800C4104 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 *     ??0Pool@CEndpointResourcePool@Sarm@@QEAA@II_J@Z @ 0x1800C3F14 (--0Pool@CEndpointResourcePool@Sarm@@QEAA@II_J@Z.c)
 */

_QWORD *__fastcall std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 *a4)
{
  _DWORD *v8; // rax
  __int64 v9; // r11

  v8 = operator new(0x30uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<Sarm::CEndpointResourcePool::Pool>::`vftable';
    if ( v8 != (_DWORD *)-16LL )
      Sarm::CEndpointResourcePool::Pool::Pool((Sarm::CEndpointResourcePool::Pool *)(v8 + 4), *a2, *a3, *a4);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(a1, v9 + 16, v9);
  return a1;
}
