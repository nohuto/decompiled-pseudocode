/*
 * XREFs of ?Initialize@COverlayContext@@IEAAJXZ @ 0x180071D28
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA158 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180071998 (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::Initialize(COverlayContext *this)
{
  int MultiplaneOverlayCaps; // eax
  unsigned int v3; // ebx
  int v4; // eax

  MultiplaneOverlayCaps = COverlayContext::GetMultiplaneOverlayCaps(this, (COverlayContext *)((char *)this + 128));
  v3 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MultiplaneOverlayCaps, 0x43u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 272LL))(*((_QWORD *)this + 2), (char *)this + 24);
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
           *((_QWORD *)this + 2),
           (char *)this + 64,
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Du);
    }
    else
    {
      *((_QWORD *)this + 10) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 128LL) + 16LL);
      **((_DWORD **)this + 122) = 0;
      *((_DWORD *)this + 268) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 1048, 0x10u);
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    }
  }
  return v3;
}
