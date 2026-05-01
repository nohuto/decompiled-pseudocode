/*
 * XREFs of ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801162B0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008071C (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ @ 0x180080934 (-InternalRelease@-$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_6363101253bf33f24c351b7ac39c5c85_::operator() @ 0x180115A4C (_lambda_6363101253bf33f24c351b7ac39c5c85_--operator().c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x180116700 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveWindowManager::Set(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  const struct _GUID *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // rbx
  int v12; // [rsp+20h] [rbp-40h] BYREF
  void *v13; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  void *v17; // [rsp+50h] [rbp-10h] BYREF

  v14[1] = -2LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease((__int64 *)&v13);
  if ( (int)CImmersiveAppArray::s_CreateInstance(v8, &v13) >= 0 )
  {
    v15[0] = a3;
    v15[1] = a2;
    v16 = a4;
    v17 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    v9 = *(_QWORD *)(a1 + 48);
    for ( i = 0LL; i < v9; ++i )
    {
      if ( !lambda_6363101253bf33f24c351b7ac39c5c85_::operator()(v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease((__int64 *)&v17);
    v14[0] = 0LL;
    Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(v14);
    (**(void (__fastcall ***)(void *, GUID *, __int64 *))v13)(v13, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, v14);
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v12) >= 0 && v12 )
      CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(a1 - 176, v13, a2);
    Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(v14);
  }
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease((__int64 *)&v13);
}
