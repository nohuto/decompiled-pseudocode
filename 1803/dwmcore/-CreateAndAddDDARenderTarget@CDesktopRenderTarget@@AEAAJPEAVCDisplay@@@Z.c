/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180157264
 * Callers:
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180044D24 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180157D20 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180033E00 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180062CAC (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C7F24 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTarget *v4; // rax
  CHwndRenderTarget *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  int inited; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  char v15; // [rsp+28h] [rbp-28h]
  char v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  const void *retaddr; // [rsp+68h] [rbp+18h]
  struct CRenderTarget *v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = 0LL;
  v4 = (CHwndRenderTarget *)WPF::ProcessHeapImpl::AllocClear(0x370uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CHwndRenderTarget::CHwndRenderTarget(v4, *((struct CComposition **)this + 2));
  *(_QWORD *)v5 = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)v5 + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)v5 + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)v5 + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v19 = v5;
  (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_DWORD *)this + 50);
  v7 = v6 + 1;
  v8 = v6 + 1 < v6 ? 0x80070216 : 0;
  if ( v6 + 1 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v7 > *((_DWORD *)this + 49) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 176, 8u, 1, &v19);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v6) = v19;
    *((_DWORD *)this + 50) = v7;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2A6u);
  }
  else
  {
    v16 = *((_BYTE *)this + 329);
    v15 = *((_BYTE *)this + 312);
    v14 = *((_DWORD *)this + 73);
    v17 = *(_OWORD *)((char *)this + 296);
    inited = CHwndRenderTarget::InitFullScreen(v19, (__int64)this, (__int64)a2, &v17, v14, v15, v16);
    v8 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0x2B2u);
    }
    else if ( *((_QWORD *)this + 15)
           && (v11 = (*(__int64 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v19 + 192LL))(v19), v8 = v11, v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2BAu);
    }
    else
    {
      v12 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), v19);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2C0u);
      else
        v19 = 0LL;
    }
    if ( v8 < 0 )
      DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 22, &v19);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v19);
  return (unsigned int)v8;
}
