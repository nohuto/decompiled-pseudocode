/*
 * XREFs of ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180003ABC (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180018C00 (-InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18001EF10 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029DB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x18002C5B0 (-Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?CreateDcompDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B860 (-CreateDcompDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800700CC (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180078EA4 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::WrapExistingResource(struct IDwmChannel *a1, unsigned int a2, struct CResource **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  struct CResource *v7; // rax
  struct CResource *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (struct CResource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v7 = (struct CResource *)v6(WPF::g_pProcessHeap, 32LL);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = 0LL;
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &CResource::`vftable';
    *((_DWORD *)v7 + 6) = a2;
    *((_QWORD *)v7 + 2) = a1;
    v9 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x66u);
    }
    else
    {
      *a3 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x61u);
  }
  return v10;
}
