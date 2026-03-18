/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180133118
 * Callers:
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016A1C (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180133BE0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800B0528 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B734C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801358F4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTarget *v4; // rax
  struct CHwndRenderTarget *v5; // rbx
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // eax
  signed int v9; // ebx
  signed int v10; // eax
  signed int inited; // eax
  signed int v12; // eax
  signed int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-30h]
  char v16; // [rsp+28h] [rbp-28h]
  char v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  const void *retaddr; // [rsp+68h] [rbp+18h]
  struct CHwndRenderTarget *v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = 0LL;
  v4 = (CHwndRenderTarget *)WPF::ProcessHeapImpl::AllocClear(0x348uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CHwndRenderTarget::CHwndRenderTarget(v4, *((struct CComposition **)this + 2));
  *(_QWORD *)v5 = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)v5 + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)v5 + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  v20 = v5;
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (unsigned int)v20;
  v7 = *((unsigned int *)this + 36);
  v8 = v7 + 1;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
    v6 = v7 + 1;
  v9 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xB5u);
  }
  else if ( v6 > *((_DWORD *)this + 35) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 120, 8u, 1, &v20);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v7) = v20;
    *((_DWORD *)this + 36) = v6;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x304u);
  }
  else
  {
    v17 = *((_BYTE *)this + 377);
    v16 = *((_BYTE *)this + 364);
    v15 = *((_DWORD *)this + 86);
    v18 = *(_OWORD *)((char *)this + 348);
    inited = CHwndRenderTarget::InitFullScreen(v20, (__int64)this, (__int64)a2, &v18, v15, v16, v17);
    v9 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x310u);
    }
    else if ( *((_QWORD *)this + 10)
           && (v12 = (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v20 + 240LL))(v20),
               v9 = v12,
               v12 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x318u);
    }
    else
    {
      v13 = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v20);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x31Eu);
      else
        v20 = 0LL;
    }
    if ( v9 < 0 )
      DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 15, (__int64 *)&v20);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v20);
  return (unsigned int)v9;
}
