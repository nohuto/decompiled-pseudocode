/*
 * XREFs of ?copy_to@?$com_ptr_t@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1801A9C80
 * Callers:
 *     ?Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1801A9650 (-Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDa.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801A95EC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801A95EC.c)
 */

void __fastcall wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,wil::err_exception_policy>::copy_to(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  _DWORD *v8; // r10
  _DWORD *v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int CanCastTo; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a1;
  *a3 = 0LL;
  if ( v3 )
  {
    if ( InlineIsEqualGUID(&GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v5 = v6;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, v8) )
      {
        *v10 = v11;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      v11 + 8,
                      v9);
        if ( CanCastTo < 0 )
          goto LABEL_9;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
    }
LABEL_9:
    if ( CanCastTo < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5691LL,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)CanCastTo);
      __debugbreak();
    }
  }
}
