/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180189E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800D3C60 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18018A7C0 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18018C024 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018DA3C (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  DWORD v4; // eax
  char *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+38h] [rbp-20h] BYREF
  char *v11; // [rsp+40h] [rbp-18h]
  char v12; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 936) )
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
  v6 = (char *)this - 32;
  if ( !*((_BYTE *)this + 929) && !v6[962] )
  {
    *(_WORD *)((char *)this + 931) = 0;
    v10 = *((_DWORD *)this + 8);
    v11 = (char *)this - 32;
    v12 = 1;
    if ( v10 )
    {
      if ( v10 == 5 )
      {
        v7 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 854LL;
          goto LABEL_26;
        }
      }
      else if ( v10 > 5 )
      {
        if ( v10 <= 7 )
          goto LABEL_20;
        if ( v10 <= 11 )
          goto LABEL_27;
        if ( v10 <= 14 )
        {
LABEL_20:
          v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
                 *((_QWORD *)this + 7),
                 a2,
                 1LL);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 874LL;
            goto LABEL_26;
          }
        }
        else if ( v10 == 16 )
        {
          XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
          *((_DWORD *)this + 8) = 17;
          v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 7LL);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 862LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v9,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v7);
LABEL_28:
            v12 = 0;
            StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
              &v10,
              v6 + 64);
            return v8;
          }
          *((_DWORD *)this + 8) = 6;
          v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
                 *((_QWORD *)this + 7),
                 a2,
                 1LL);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 864LL;
            goto LABEL_26;
          }
        }
      }
    }
    else
    {
      XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
      *((_BYTE *)this + 933) = 0;
      *((_DWORD *)this + 8) = 6;
      v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
             *((_QWORD *)this + 7),
             a2,
             1LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 848LL;
        goto LABEL_26;
      }
    }
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  return 2147942487LL;
}
