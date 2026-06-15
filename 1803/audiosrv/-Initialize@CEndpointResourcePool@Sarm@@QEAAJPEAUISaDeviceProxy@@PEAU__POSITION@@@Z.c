/*
 * XREFs of ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800F6600
 * Callers:
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800F4AD0 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2020 (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800F63F4 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F645C (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F69F8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::Initialize(
        Sarm::CEndpointResourcePool *this,
        struct ISaDeviceProxy *a2,
        struct __POSITION *a3)
{
  int v5; // esi
  __int64 v6; // rdx
  const WCHAR *v8; // rax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  bool v11; // al
  __int64 *v12; // rax
  __int64 *v13; // rax
  UINT32 cData; // [rsp+20h] [rbp-C8h]
  int v15; // [rsp+30h] [rbp-B8h] BYREF
  int v16; // [rsp+34h] [rbp-B4h] BYREF
  int v17; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-A0h] BYREF
  std::_Ref_count_base *v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-88h] BYREF
  int *v23; // [rsp+80h] [rbp-68h]
  int v24; // [rsp+88h] [rbp-60h]
  int v25; // [rsp+8Ch] [rbp-5Ch]
  int *v26; // [rsp+90h] [rbp-58h]
  int v27; // [rsp+98h] [rbp-50h]
  int v28; // [rsp+9Ch] [rbp-4Ch]
  int *v29; // [rsp+A0h] [rbp-48h]
  int v30; // [rsp+A8h] [rbp-40h]
  int v31; // [rsp+ACh] [rbp-3Ch]
  __int64 *v32; // [rsp+B0h] [rbp-38h]
  int v33; // [rsp+B8h] [rbp-30h]
  int v34; // [rsp+BCh] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v21 = -2LL;
  *(_QWORD *)this = a3;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0103LL,
      cData);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, int *, int *, int *))(*(_QWORD *)a2 + 200LL))(
         a2,
         &v16,
         &v15,
         &v17);
  if ( v5 < 0 )
  {
    v6 = 36LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)a2 + 208LL))(a2, &v18);
  if ( v5 < 0 )
  {
    v6 = 37LL;
    goto LABEL_5;
  }
  if ( (unsigned int)dword_180188330 > 4 )
  {
    v23 = &v16;
    v24 = 4;
    v25 = 0;
    v26 = &v15;
    v27 = 4;
    v28 = 0;
    v29 = &v17;
    v30 = 4;
    v31 = 0;
    v32 = &v18;
    v33 = 8;
    v34 = 0;
    v8 = (const WCHAR *)(*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)a2 + 24LL))(a2);
    TlgCreateWsz(&pDesc, v8);
    TlgWrite((TraceLoggingHProvider)&dword_180188330, &unk_180147D9D, v9, v10, 7u, &pData);
  }
  v11 = v17 != 0;
  *((_BYTE *)this + 8) = v17 != 0;
  if ( v11 )
  {
    if ( !Sarm::CEndpointResourcePool::s_sharedPool )
    {
      try
      {
        v12 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
                &v19,
                &v16,
                &v15,
                &v18);
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::operator=(
          &Sarm::CEndpointResourcePool::s_sharedPool,
          v12);
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
      }
      catch ( std::bad_alloc )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
          (const char *)0x8007000ELL);
        return 2147942414LL;
      }
    }
    std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=(
      (_QWORD *)this + 2,
      &Sarm::CEndpointResourcePool::s_sharedPool);
  }
  else
  {
    try
    {
      v13 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
              &v19,
              &v16,
              &v15,
              &v18);
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::operator=(
        (_QWORD *)this + 2,
        v13);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  return 0LL;
}
