/*
 * XREFs of ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N0@Z @ 0x180137350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180137420 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137B88 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::PostPresent(CIndirectSwapchainRenderTarget *this, char a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v4; // rcx
  signed int Buffer; // eax
  signed int v6; // eax

  v2 = 0;
  if ( a2 )
  {
    v4 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
    if ( (*((_BYTE *)v4 + 456) & 3) != 0 )
    {
      if ( *((_QWORD *)this + 51)
        || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(v4), v2 = Buffer, Buffer >= 0) )
      {
        v6 = CIndirectSwapchainRenderTarget::Present(this, 0, 0);
        v2 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x139u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Buffer, 0x134u);
      }
      if ( v2 == 142213130 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_POSTPONED);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 528LL) + 104LL))(
          *(_QWORD *)(*((_QWORD *)this - 6) + 528LL),
          0LL,
          4096LL);
        return 0;
      }
    }
  }
  return v2;
}
