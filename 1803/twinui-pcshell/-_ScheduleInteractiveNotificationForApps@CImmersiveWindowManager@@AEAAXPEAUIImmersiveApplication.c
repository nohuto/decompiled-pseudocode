/*
 * XREFs of ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x180116700
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801162B0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ @ 0x180080934 (-InternalRelease@-$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_497cdd3be1990e13318bbe793e150545___ @ 0x18011549C (Windows--Internal--ComTaskPool--QueueTask__lambda_497cdd3be1990e13318bbe793e150545___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  void *v13; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp-10h]
  void *v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  v11[1] = -2LL;
  v5 = 0;
  v16 = 0LL;
  v6 = *(_QWORD *)(a1 + 256);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( (*(int (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
         v6,
         &SID_ImmersiveApplicationListeners,
         &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
         &v16) >= 0 )
  {
    v15 = 0LL;
    v7 = v16;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v15);
    if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 24LL))(v7, &v15) >= 0 )
    {
      v11[0] = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v11);
      v12 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v12);
      v13 = v15;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
      LOBYTE(v5) = a3 != 2;
      v14 = v5 + 13;
      Windows::Internal::ComTaskPool::QueueTask__lambda_497cdd3be1990e13318bbe793e150545___(
        v9,
        v8,
        (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
        (__int64)&v12);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(v11);
    }
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v15);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
}
