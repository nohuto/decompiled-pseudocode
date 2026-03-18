/*
 * XREFs of ?AdvanceFrame@CDWMOffScreenSwapChain@@UEAAJ_K@Z @ 0x1800CE8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::AdvanceFrame(CDWMOffScreenSwapChain *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v5; // eax
  int v6[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v6[0] = 5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
  v3 = *((_QWORD *)this + 61);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v6, 1LL);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x37Du);
  }
  return v1;
}
