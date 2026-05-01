/*
 * XREFs of ??$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x18015672C
 * Callers:
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158E64 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180156694 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNot.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CControlCenterExperienceManager>(__int64 a1, __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  volatile int *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, volatile int *); // rax
  __int64 (__fastcall *v11)(__int64, volatile int *); // rax
  volatile int *v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>>(
         a1,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v14);
  v4 = v14;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v13 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, volatile int **))(*(_QWORD *)v14 + 24LL))(v14, &v13);
    v7 = v13;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v8 = (__int64)v13;
      if ( v13 )
      {
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v13 + 8LL))(v13);
        v7 = v13;
      }
      v9 = *a2;
      *a2 = v8;
      if ( v9 )
      {
        v10 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v9 + 16LL);
        if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
            v9,
            v7);
        else
          v10(v9, v7);
        v7 = v13;
      }
      v5 = 0;
    }
    if ( v7 )
    {
      v13 = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v7 + 16LL);
      if ( v11 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          (__int64)v7,
          v7);
      else
        ((void (__fastcall *)(volatile int *))v11)(v7);
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
