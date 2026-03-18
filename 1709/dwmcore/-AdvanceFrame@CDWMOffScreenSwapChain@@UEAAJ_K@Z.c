/*
 * XREFs of ?AdvanceFrame@CDWMOffScreenSwapChain@@UEAAJ_K@Z @ 0x1801B0FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::AdvanceFrame(CDWMOffScreenSwapChain *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  signed int v4; // eax
  int v6[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v6[0] = 5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
  v3 = *((_QWORD *)this + 67);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v6, 1LL);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x31Du);
  }
  return v1;
}
