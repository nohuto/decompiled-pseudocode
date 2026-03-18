/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180146B38
 * Callers:
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A75C (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801474C0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x180064C24 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C9698 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x180155E04 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTargetDDA *v4; // rax
  struct CHwndRenderTarget *v5; // rax
  int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // eax
  int inited; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-30h]
  char v16; // [rsp+28h] [rbp-28h]
  char v17; // [rsp+30h] [rbp-20h]
  char v18; // [rsp+38h] [rbp-18h]
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  struct CHwndRenderTarget *v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = 0LL;
  v4 = (CHwndRenderTargetDDA *)WPF::ProcessHeapImpl::AllocClear(0x338uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  v5 = CHwndRenderTargetDDA::CHwndRenderTargetDDA(v4, *((struct CComposition **)this + 2));
  v21 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = (unsigned int)v21;
    v8 = *((unsigned int *)this + 36);
    v9 = v8 + 1;
    if ( (int)v8 + 1 >= (unsigned int)v8 )
      v7 = v8 + 1;
    v6 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
    if ( v9 < (unsigned int)v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)this + 35) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 120, 8u, 1, &v21);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v8) = v21;
      *((_DWORD *)this + 36) = v7;
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x307u);
    }
    else
    {
      v18 = *((_BYTE *)this + 378);
      v17 = *((_BYTE *)this + 364);
      v16 = *((_BYTE *)this + 376);
      v15 = *((_DWORD *)this + 86);
      v19 = *(_OWORD *)((char *)this + 348);
      inited = CHwndRenderTarget::InitFullScreen(v21, (__int64)this, (__int64)a2, &v19, v15, v16, v17, v18);
      v6 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x314u);
      }
      else if ( *((_QWORD *)this + 10)
             && (v12 = (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v21 + 224LL))(v21),
                 v6 = v12,
                 v12 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x31Cu);
      }
      else
      {
        v13 = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v21);
        v6 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x322u);
        else
          v21 = 0LL;
      }
      if ( v6 < 0 )
        DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 15, (__int64 *)&v21);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x304u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v21);
  return (unsigned int)v6;
}
