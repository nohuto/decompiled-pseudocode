/*
 * XREFs of ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x18007B260
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x18007E764 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x18007B044 (--4-$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@.c)
 *     ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x18007B478 (-Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedL.c)
 */

__int64 __fastcall CapturedWindowSWRVisual::Create(HWND a1, struct CapturedWindowSWRVisual **a2)
{
  __int64 v4; // rax
  struct CapturedWindowSWRVisual *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CapturedWindowSWRVisual *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CapturedWindowSWRVisual::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v4 + 16) = &CapturedWindowSWRVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    *(_QWORD *)(v4 + 24) = 0LL;
  }
  Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=(&v10, (volatile signed __int32 *)v4);
  v5 = v10;
  if ( v10 )
  {
    v7 = CapturedWindowSWRVisual::Initialize(v10, a1, (CapturedWindowSWRVisual *)((char *)v10 + 16));
    v6 = v7;
    if ( v7 >= 0 )
    {
      v10 = 0LL;
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x425u);
    }
    if ( v5 )
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x423,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  return v6;
}
