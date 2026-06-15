/*
 * XREFs of ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800C53F0
 * Callers:
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800C4644 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C1F7C (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1FD4 (--4-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800C5198 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5730 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::Initialize(
        Sarm::CEndpointResourcePool *this,
        struct ISaDeviceProxy *a2,
        struct __POSITION *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  int v8; // eax
  unsigned int v9; // edi
  bool v10; // al
  __int64 *v11; // rax
  __int64 *v12; // rax
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)this = a3;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0103LL,
      v13);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, unsigned int *, unsigned int *, int *))(*(_QWORD *)a2 + 200LL))(
         a2,
         &v18,
         &v17,
         &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)a2 + 208LL))(a2, &v20);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v19 != 0;
      *((_BYTE *)this + 8) = v19 != 0;
      if ( v10 )
      {
        if ( !Sarm::CEndpointResourcePool::s_sharedPool )
        {
          try
          {
            v11 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
                    &v14,
                    &v18,
                    &v17,
                    &v20);
            std::shared_ptr<CWorkFifo::WorkItem>::operator=(&Sarm::CEndpointResourcePool::s_sharedPool, v11);
            if ( v15 )
              std::_Ref_count_base::_Decref(v15);
          }
          catch ( std::bad_alloc )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x33,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
              (const char *)0x8007000ELL);
            return 2147942414LL;
          }
        }
        std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=(
          (__int64)this + 16,
          &Sarm::CEndpointResourcePool::s_sharedPool);
      }
      else
      {
        try
        {
          v12 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
                  &v14,
                  &v18,
                  &v17,
                  &v20);
          std::shared_ptr<CWorkFifo::WorkItem>::operator=((_QWORD *)this + 2, v12);
          if ( v15 )
            std::_Ref_count_base::_Decref(v15);
        }
        catch ( std::bad_alloc )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x40,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
            (const char *)0x8007000ELL);
          return 2147942414LL;
        }
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x26,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x25,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
