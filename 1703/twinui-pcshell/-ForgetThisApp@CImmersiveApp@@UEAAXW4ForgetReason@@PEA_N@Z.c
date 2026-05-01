/*
 * XREFs of ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1800556B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180050450 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800564F8 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::ForgetThisApp(__int64 a1, int a2, _BYTE *a3)
{
  bool v6; // zf
  struct IApplicationPresentationLayer *v7; // rdx
  LPCWSTR *v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 i; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-58h] BYREF
  int v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]

  v19 = 0LL;
  v21 = 0LL;
  *a3 = 0;
  v6 = (*(_BYTE *)(a1 + 408) & 1) == 0;
  v18 = 12;
  v20 = 6;
  *(_BYTE *)(a1 + 560) = 1;
  if ( !v6 )
  {
    v7 = *(struct IApplicationPresentationLayer **)(a1 + 272);
    v8 = (LPCWSTR *)(a1 + 456);
    *(_DWORD *)v8 |= 1u;
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v8, v7);
    CImmersiveApp::_HideApplication(a1 - 88, 0LL);
    v9 = *(_QWORD *)(a1 + 296);
    for ( i = 0LL; i < v9; ++i )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8 * i);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, 0LL);
    }
    *a3 = 1;
  }
  v12 = *(_QWORD *)(a1 + 552);
  if ( v12 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 24LL))(v12, &v16) >= 0 )
  {
    v13 = 0;
    memset(v17, 0, sizeof(v17));
    if ( v16 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 552) + 32LL))(
               *(_QWORD *)(a1 + 552),
               v13,
               &v22) >= 0
          && (v24 != 5
           || v22 != *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1
           || v23 != *(_QWORD *)PKEY_AppUserModel_ID.fmtid.Data4) )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD *))(**(_QWORD **)(a1 + 552) + 48LL))(
            *(_QWORD *)(a1 + 552),
            &v22,
            v17);
        }
        ++v13;
      }
      while ( v13 < v16 );
    }
    v14 = *(_QWORD *)(a1 + 552);
    if ( v14 )
    {
      *(_QWORD *)(a1 + 552) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 88),
    (const struct APP_CHANGE_INFO *const)&v18,
    (*a3 != 0) + 1LL);
  if ( a2 == 1 )
  {
    v23 = 0LL;
    LODWORD(v22) = 16;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)(a1 - 88),
      (const struct APP_CHANGE_INFO *const)&v22,
      1uLL);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 256LL))(*(_QWORD *)(a1 + 272));
}
