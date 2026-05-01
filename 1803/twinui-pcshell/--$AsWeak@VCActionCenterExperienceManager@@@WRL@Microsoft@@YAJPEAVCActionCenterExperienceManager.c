/*
 * XREFs of ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180152D50
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180156390 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@789Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2524 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDis_ea_1800F2524.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(__int64 a1, __int64 *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  int CanCastTo; // eax
  int v7; // edi
  int v8; // eax
  volatile int *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, volatile int *); // rax
  __int64 (__fastcall *v13)(__int64, volatile int *); // rax
  volatile int *v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h]

  v16 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000038_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::CanCastTo(
                  a1 + 8,
                  v5);
    a1 = v16;
    v7 = CanCastTo;
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, volatile int **))(*(_QWORD *)a1 + 24LL))(a1, &v15);
    v9 = v15;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = (__int64)v15;
      if ( v15 )
      {
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v15 + 8LL))(v15);
        v9 = v15;
      }
      v11 = *a2;
      *a2 = v10;
      if ( v11 )
      {
        v12 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 16LL);
        if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
            v11,
            v9);
        else
          v12(v11, v9);
        v9 = v15;
      }
      v7 = 0;
    }
    if ( v9 )
    {
      v15 = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v9 + 16LL);
      if ( v13 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          (__int64)v9,
          v9);
      else
        ((void (__fastcall *)(volatile int *))v13)(v9);
    }
  }
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return (unsigned int)v7;
}
