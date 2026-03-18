/*
 * XREFs of ?SendEndOfUpdates@CDWMOffScreenSwapChain@@UEAAJXZ @ 0x1800D8A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::SendEndOfUpdates(CDWMOffScreenSwapChain *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v4; // eax
  _DWORD v5[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 68);
  v2 = 0;
  if ( v1 )
  {
    memset_0(v5, 0, 0x30uLL);
    v5[0] = 5;
    v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v1 + 56LL))(v1, v5, 1LL);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x313u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
  }
  return v2;
}
