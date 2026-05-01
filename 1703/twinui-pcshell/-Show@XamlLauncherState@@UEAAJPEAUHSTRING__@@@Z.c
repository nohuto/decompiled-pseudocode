/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180155AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800C211C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180156460 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180157BB0 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159800 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  DWORD v4; // eax
  int v6; // r8d
  void *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  char v14; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_BYTE *)this + 935) )
  {
    v4 = `IsPPIEdition'::`2'::s_dwProductType;
    if ( !`IsPPIEdition'::`2'::s_dwProductType )
    {
      GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
      v4 = 0;
      `IsPPIEdition'::`2'::s_dwProductType = 0;
    }
    if ( v4 != 119 && !CortanaHelpers::AllowCortanaAboveLock() )
      return 0LL;
  }
  if ( *((_BYTE *)this + 929) )
    return 2147942487LL;
  *((_WORD *)this + 465) = 0;
  LODWORD(v11) = *((_DWORD *)this + 8);
  *((_QWORD *)&v11 + 1) = (char *)this - 24;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v12, &v11);
  if ( !v6 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout(v7);
    *((_BYTE *)this + 932) = 0;
    *((_DWORD *)this + 8) = 6;
    v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 832LL;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  if ( v6 == 5 )
  {
    v8 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)v7, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 838LL;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  if ( v6 <= 5 )
    goto LABEL_27;
  if ( v6 <= 7 )
    goto LABEL_20;
  if ( v6 <= 11 )
    goto LABEL_27;
  if ( v6 <= 14 )
  {
LABEL_20:
    v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 858LL;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  if ( v6 != 16 )
    goto LABEL_27;
  XamlLauncherState::BeginCortanaTelemetryTimeout(v7);
  *((_DWORD *)this + 8) = 17;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 7LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 8) = 6;
    v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 848LL;
      goto LABEL_26;
    }
LABEL_27:
    v9 = 0;
    goto LABEL_28;
  }
  v10 = 846LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v8);
LABEL_28:
  if ( v14 )
  {
    v14 = 0;
    StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v12,
      v13 + 56);
  }
  return v9;
}
