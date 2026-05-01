/*
 * XREFs of ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157710
 * Callers:
 *     <none>
 * Callees:
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x18015188C (-PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z.c)
 *     ?StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ @ 0x180153480 (-StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ.c)
 *     ?CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x180153568 (-CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x180156EC4 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ??$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A388 (--$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAE.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x18015A450 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  signed int v4; // r8d
  char v5; // di
  int v6; // r14d
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  char v15; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v12) = *((_DWORD *)this + 14);
  *((_QWORD *)&v12 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v13, &v12);
  v5 = 1;
  v6 = 227872;
  if ( (unsigned int)v4 > 0x11 || !_bittest(&v6, v4) )
  {
    if ( v4 == 1 )
      goto LABEL_12;
    if ( v4 == 2 )
    {
LABEL_11:
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
      goto LABEL_13;
    }
    if ( v4 > 2 )
    {
      if ( v4 > 4 && v4 != 18 )
      {
        if ( v4 != 19 )
        {
          if ( (unsigned int)(v4 - 20) > 1 )
            goto LABEL_13;
          goto LABEL_12;
        }
        goto LABEL_11;
      }
LABEL_12:
      v5 = 0;
      *((_BYTE *)this + 954) = 1;
      *((_DWORD *)this + 14) = 1;
      v16 = -2147467260;
      StartWindowTelemetry::StartRunningWithoutCortana<long>(&v16);
    }
  }
LABEL_13:
  v7 = 2127792;
  if ( !*((_BYTE *)this + 953) )
  {
    v8 = *((_DWORD *)this + 14);
    if ( v8 <= 0x15 )
    {
      if ( _bittest(&v7, v8) )
      {
        *((_QWORD *)this + 120) = 0LL;
        PostCortanaVisibility(0, 0LL);
      }
    }
  }
  if ( v5 )
  {
    if ( *((_BYTE *)this + 953) )
      goto LABEL_29;
    v9 = *((_DWORD *)this + 14);
    if ( v9 <= 0x15 && _bittest(&v7, v9) && v9 <= 0x11 && _bittest(&v6, v9) )
    {
      *((_DWORD *)this + 14) = 16;
      if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 128LL))(*((_QWORD *)this + 9)) < 0 )
      {
        XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
        goto LABEL_32;
      }
      goto LABEL_30;
    }
    if ( *((_BYTE *)this + 953) || (v10 = *((_DWORD *)this + 14), v10 > 0x15) || !_bittest(&v7, v10) )
    {
LABEL_29:
      if ( *((_DWORD *)this + 14) == 16 )
      {
LABEL_30:
        StartWindowTelemetry::StartStayedUpWhenCortanaCrashed();
        goto LABEL_32;
      }
    }
    else
    {
      StartWindowTelemetry::CortanaViewDestroyedWhileVisible();
    }
    *((_DWORD *)this + 14) = 0;
  }
LABEL_32:
  if ( v15 )
  {
    v15 = 0;
    StartWindowTelemetry::OnCortanaDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v13,
      v14 + 56);
  }
  return 0LL;
}
