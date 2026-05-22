/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180068274
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800670F0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x180068200 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006928C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180069918 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpectrumListener::Unregister(struct EventRegistrationToken *this)
{
  __int64 value; // rcx
  __int64 v3; // rcx
  MPCHeadUpdateListener *Instance; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( LOBYTE(this[8].value) )
  {
    value = this[4].value;
    if ( value )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)value + 56LL))(value, this[5].value);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this[4].value + 72LL))(this[4].value, this[7].value);
    }
    this[2].value = 0LL;
    v3 = this[4].value;
    if ( v3 )
    {
      this[4].value = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    Instance = MPCHeadUpdateListener::GetInstance();
    v5 = MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, this[6]);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18006830ALL);
    }
    LOBYTE(this[8].value) = 0;
  }
}
