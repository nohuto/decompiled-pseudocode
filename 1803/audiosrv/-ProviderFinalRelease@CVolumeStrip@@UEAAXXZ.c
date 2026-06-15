/*
 * XREFs of ?ProviderFinalRelease@CVolumeStrip@@UEAAXXZ @ 0x1800A6310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CVolumeStrip::ProviderFinalRelease(unsigned __int64 this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  HRESULT v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids);
  }
  v2 = *(_QWORD *)(this + 240);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v3 = *(_QWORD *)(this + 248);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v4 = *(_QWORD *)(this + 256);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  v5 = CoDisconnectObject((LPUNKNOWN)(this & -(__int64)(this != 8)), 0);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v5,
      v6);
}
