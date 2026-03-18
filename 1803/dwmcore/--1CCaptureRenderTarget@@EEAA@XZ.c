/*
 * XREFs of ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180155820
 * Callers:
 *     ??_GCCaptureRenderTarget@@EEAAPEAXI@Z @ 0x180155AD0 (--_GCCaptureRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x1801564CC (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18015688C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180156C54 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

void __fastcall CCaptureRenderTarget::~CCaptureRenderTarget(CCaptureRenderTarget *this)
{
  HANDLE **v2; // rsi
  HANDLE *v3; // rdi
  HANDLE *v4; // rbp
  HANDLE *v5; // rdi
  HANDLE *v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx

  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CCaptureRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  CCaptureRenderTarget::SetController(this, 0LL);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  v2 = (HANDLE **)((char *)this + 536);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 536);
  CCaptureRenderTarget::ReleaseRenderingResources(this);
  v3 = (HANDLE *)*((_QWORD *)this + 70);
  if ( v3 )
  {
    v4 = (HANDLE *)*((_QWORD *)this + 71);
    if ( v3 != v4 )
    {
      do
      {
        if ( (char *)*v3 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*v3);
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (HANDLE *)*((_QWORD *)this + 70);
    }
    std::_Deallocate((char *)v3, (__int64)(*((_QWORD *)this + 72) - (_QWORD)v3) >> 3, 8uLL);
    *((_QWORD *)this + 70) = 0LL;
    *((_QWORD *)this + 71) = 0LL;
    *((_QWORD *)this + 72) = 0LL;
  }
  v5 = *v2;
  if ( *v2 )
  {
    v6 = (HANDLE *)*((_QWORD *)this + 68);
    if ( v5 != v6 )
    {
      do
      {
        if ( (char *)*v5 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*v5);
        ++v5;
      }
      while ( v5 != v6 );
      v5 = *v2;
    }
    std::_Deallocate((char *)v5, (__int64)(*((_QWORD *)this + 69) - (_QWORD)v5) >> 3, 8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
  }
  v7 = (__int64 *)*((_QWORD *)this + 64);
  if ( v7 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 65);
    if ( v7 != v8 )
    {
      do
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v7++);
      while ( v7 != v8 );
      v7 = (__int64 *)*((_QWORD *)this + 64);
    }
    std::_Deallocate((char *)v7, (__int64)(*((_QWORD *)this + 66) - (_QWORD)v7) >> 3, 8uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 63);
  v9 = (char *)*((_QWORD *)this + 62);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  v10 = *((_QWORD *)this + 61);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 60);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 58);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 57);
  v13 = *((_QWORD *)this + 54);
  if ( v13 )
  {
    v14 = *((_QWORD *)this + 55);
    if ( v13 != v14 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)(v13 + 8));
        v13 += 16LL;
      }
      while ( v13 != v14 );
      v13 = *((_QWORD *)this + 54);
    }
    std::_Deallocate((char *)v13, (*((_QWORD *)this + 56) - v13) >> 4, 0x10uLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  v15 = *((_QWORD *)this + 50);
  if ( v15 )
    CMILPoolResource::Release((CMILPoolResource *)(v15 + 472));
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
