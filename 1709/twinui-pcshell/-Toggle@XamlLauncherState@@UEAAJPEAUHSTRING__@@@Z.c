/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18018A100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800D3C60 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18018A7C0 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18018C024 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018DBCC (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
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
  char v14; // [rsp+60h] [rbp+8h] BYREF

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
    v10 = *((_DWORD *)this + 8);
    v11 = (char *)this - 32;
    v12 = 1;
    if ( v10 )
    {
      if ( v10 == 5 )
      {
        v14 = 0;
        v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 152LL))(*((_QWORD *)this + 7), &v14);
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 986LL;
          goto LABEL_22;
        }
        if ( v14 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
        }
        else
        {
          v7 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
          v8 = v7;
          if ( v7 < 0 )
          {
            v9 = 993LL;
            goto LABEL_22;
          }
        }
      }
      else if ( v10 == 7 )
      {
        *((_DWORD *)this + 8) = 8;
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 980LL;
LABEL_22:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v9,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v7);
LABEL_24:
          v12 = 0;
          StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
            &v10,
            v6 + 64);
          return v8;
        }
      }
    }
    else
    {
      XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
      *(_WORD *)((char *)this + 931) = 0;
      *((_BYTE *)this + 933) = 0;
      *((_DWORD *)this + 8) = 6;
      v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
             *((_QWORD *)this + 7),
             a2,
             1LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 975LL;
        goto LABEL_22;
      }
    }
    v8 = 0;
    goto LABEL_24;
  }
  return 2147942487LL;
}
