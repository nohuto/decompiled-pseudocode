/*
 * XREFs of ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000A424
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180001998 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000C8AC (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180096DE0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x180097020 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18000A754 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveState::Create(struct CImmersiveState **a1, unsigned __int64 a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  *a1 = 0LL;
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v4 == WPF::ProcessHeapImpl::Alloc )
    v5 = (volatile signed __int32 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x58uLL);
  else
    v5 = (volatile signed __int32 *)v4(WPF::g_pProcessHeap, 88uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CImmersiveState::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    *((_DWORD *)v5 + 9) = 0;
    *((_DWORD *)v5 + 10) = 0;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    *((_BYTE *)v5 + 56) = 0;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_QWORD *)v5 + 10) = 0LL;
    v7 = CImmersiveState::Initialize((CImmersiveState *)v5, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x22u);
    }
    else
    {
      *a1 = (struct CImmersiveState *)v6;
      _InterlockedIncrement(v6 + 2);
    }
    CBaseObject::Release((CBaseObject *)v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x20u);
  }
  return v8;
}
