/*
 * XREFs of ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x18006FDA4
 * Callers:
 *     _lambda_3b51b811795083c8866600a62beaf61a_::operator() @ 0x180061440 (_lambda_3b51b811795083c8866600a62beaf61a_--operator().c)
 * Callees:
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18006BD00 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18006C78C (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rax
  __int64 *TriggerRegistrationSettingsContainer; // rax
  __int64 v6; // rdx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-88h] BYREF
  __int128 v14; // [rsp+30h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  _BYTE *v17; // [rsp+50h] [rbp-58h]
  _BYTE v18[16]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v19[24]; // [rsp+68h] [rbp-40h] BYREF
  char *v20; // [rsp+80h] [rbp-28h]
  __int64 v21; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v16 = -2LL;
  v21 = a3;
  try
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
    v17 = v19;
    *(_QWORD *)&v14 = &StringRawBuffer;
    *((_QWORD *)&v14 + 1) = &`anonymous namespace'::g_triggerManagerLock;
    v15 = a3;
    v20 = 0LL;
    v4 = (char *)operator new(0x28uLL);
    if ( !v4 )
      std::_Xbad_alloc();
    *(_QWORD *)v4 = off_1800D9CB0;
    *(_OWORD *)(v4 + 8) = v14;
    *((_QWORD *)v4 + 3) = v15;
    v20 = v4;
    TriggerRegistrationSettingsContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer((__int64)v18);
    Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(
      TriggerRegistrationSettingsContainer,
      (__int64)v19);
  }
  catch ( ... )
  {
    LODWORD(StringRawBuffer) = wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x24B,
                                 (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigge"
                                          "rmanagersettings.cpp",
                                 v7);
    v10 = v21;
    v11 = *(_QWORD *)(v21 + 24);
    if ( v11 )
    {
      LOBYTE(v12) = v11 != v21;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v12);
      *(_QWORD *)(v10 + 24) = 0LL;
    }
    return (unsigned int)StringRawBuffer;
  }
  v8 = *(_QWORD *)(a3 + 24);
  if ( v8 )
  {
    LOBYTE(v6) = v8 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v6);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return 0LL;
}
