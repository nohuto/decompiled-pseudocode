/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180032BA0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009460 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180019264 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18002EF30 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180035DF0 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180035EC8 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180036014 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180036CD0 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rcx
  HKEY v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int *v14; // rbx
  ControllerNavigationManager *ControllerNavigationManager; // rax
  HKEY v16; // rcx
  HKEY v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF

  v22 = 0LL;
  v2 = CoreUICreate(&v22);
  if ( v2 >= 0 )
  {
    v3 = v22;
    v4 = *((_QWORD *)this + 238);
    if ( v4 )
    {
      *((_QWORD *)this + 238) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v3 + 120LL))(
           v3,
           ControllerProcessor::OnAutoRepeatTimerStatic,
           this,
           (char *)this + 1904);
    if ( v2 >= 0 )
    {
      if ( !*((_BYTE *)this + 3880) )
        *((_BYTE *)this + 3880) = (*(int (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 361) + 40LL))(
                                    *((_QWORD *)this + 361),
                                    (char *)this + 2896,
                                    0LL) >= 0;
      if ( !*((_BYTE *)this + 4880) )
        *((_BYTE *)this + 4880) = (*(int (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 486) + 40LL))(
                                    *((_QWORD *)this + 486),
                                    (char *)this + 3896,
                                    0LL) >= 0;
      ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
      v5 = (HKEY)*((_QWORD *)this + 891);
      if ( v5 )
      {
        *((_QWORD *)this + 891) = 0LL;
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)v5 + 16LL))(v5);
      }
      RegistryWatcher::Create(
        v5,
        L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
        this,
        lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
        (struct RegistryWatcher **)this + 891);
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
      v7 = *((_QWORD *)this + 241);
      if ( v7 )
      {
        *((_QWORD *)this + 241) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 80LL))(
             v6,
             *((_QWORD *)this + 4),
             (char *)this + 1928);
      if ( v2 >= 0 )
      {
        v8 = v22;
        v9 = *((_QWORD *)this + 239);
        if ( v9 )
        {
          *((_QWORD *)this + 239) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v8 + 120LL))(
               v8,
               ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic,
               this,
               (char *)this + 1912);
        if ( v2 < 0 )
          goto LABEL_40;
        v10 = v22;
        v11 = *((_QWORD *)this + 883);
        if ( v11 )
        {
          *((_QWORD *)this + 883) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v10 + 120LL))(
               v10,
               lambda_c3ab10beb6b1aadf1357327b164eb3e9_::_lambda_invoker_cdecl_,
               this,
               (char *)this + 7064);
        if ( v2 < 0 )
          goto LABEL_40;
        v12 = v22;
        v13 = *((_QWORD *)this + 884);
        if ( v13 )
        {
          *((_QWORD *)this + 884) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), ControllerProcessor *, char *))(*(_QWORD *)v12 + 120LL))(
               v12,
               lambda_d504caa4fa259a906f4c5cd1566b235f_::_lambda_invoker_cdecl_,
               this,
               (char *)this + 7072);
        if ( v2 < 0 )
          goto LABEL_40;
        v14 = (int *)*((_QWORD *)this + 4);
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        v2 = ControllerNavigationManager::RegisterControllerProcessor(ControllerNavigationManager, *v14, this);
        if ( v2 < 0 )
          goto LABEL_40;
        ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
        v16 = (HKEY)*((_QWORD *)this + 892);
        if ( v16 )
        {
          *((_QWORD *)this + 892) = 0LL;
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)v16 + 16LL))(v16);
        }
        RegistryWatcher::Create(
          v16,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          this,
          lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
          (struct RegistryWatcher **)this + 892);
        if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
        {
          ControllerProcessor::UpdateControllerNavigationMode(this);
          v17 = (HKEY)*((_QWORD *)this + 893);
          if ( v17 )
          {
            *((_QWORD *)this + 893) = 0LL;
            (*(void (__fastcall **)(HKEY))(*(_QWORD *)v17 + 16LL))(v17);
          }
          RegistryWatcher::Create(
            v17,
            L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
            this,
            lambda_671066ec7fd3ed3c23303e9a55d20f18_::_lambda_invoker_cdecl_,
            (struct RegistryWatcher **)this + 893);
          v19 = *((_QWORD *)this + 894);
          if ( v19 )
          {
            *((_QWORD *)this + 894) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v2 = ViewMenuChordedKeyHandler::Create(v19, this, v18, (char *)this + 7152);
          if ( v2 < 0 )
          {
LABEL_40:
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
          }
        }
      }
    }
  }
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v2;
}
