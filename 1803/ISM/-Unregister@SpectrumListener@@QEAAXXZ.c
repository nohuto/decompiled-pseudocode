/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18005F7B4
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18005E680 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x18005F720 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800606E4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180060E78 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpectrumListener::Unregister(struct EventRegistrationToken *this)
{
  __int64 value; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  MPCHeadUpdateListener *Instance; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( LOBYTE(this[10].value) )
  {
    value = this[4].value;
    if ( value )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)value + 56LL))(value, this[6].value);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this[4].value + 72LL))(this[4].value, this[8].value);
    }
    v3 = this[5].value;
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, this[9].value);
    this[2].value = 0LL;
    v4 = this[4].value;
    if ( v4 )
    {
      this[4].value = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = this[5].value;
    if ( v5 )
    {
      this[5].value = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    Instance = MPCHeadUpdateListener::GetInstance();
    v7 = MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, this[7]);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x18005F883LL);
    }
    LOBYTE(this[10].value) = 0;
  }
}
