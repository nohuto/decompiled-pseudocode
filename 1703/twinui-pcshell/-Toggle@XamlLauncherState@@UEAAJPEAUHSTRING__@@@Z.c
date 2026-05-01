/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180155D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800C211C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180156460 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180157BB0 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159990 (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  DWORD v4; // eax
  int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  char v13; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v15; // [rsp+70h] [rbp+8h] BYREF

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
  LODWORD(v10) = *((_DWORD *)this + 8);
  *((_QWORD *)&v10 + 1) = (char *)this - 24;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v11, &v10);
  if ( !v6 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 24);
    *((_WORD *)this + 465) = 0;
    *((_BYTE *)this + 932) = 0;
    *((_DWORD *)this + 8) = 6;
    v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 959LL;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  if ( v6 == 5 )
  {
    v15 = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 152LL))(*((_QWORD *)this + 7), &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 970LL;
      goto LABEL_22;
    }
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
    }
    else
    {
      v7 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 24), a2);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 977LL;
        goto LABEL_22;
      }
    }
LABEL_23:
    v8 = 0;
    goto LABEL_24;
  }
  if ( v6 != 7 )
    goto LABEL_23;
  *((_DWORD *)this + 8) = 8;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_23;
  v9 = 964LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v7);
LABEL_24:
  if ( v13 )
  {
    v13 = 0;
    StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v11,
      v12 + 56);
  }
  return v8;
}
