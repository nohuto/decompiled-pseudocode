/*
 * XREFs of ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x18003CB50
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18003C650 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA?AUDeferral@1@K@Z @ 0x18003BCEC (-GetDeferralForProcessId@NavigationEnableDeferrals@@QEAA-AUDeferral@1@K@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x18003E9A4 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerNavigationManager::NavigationDisable(ControllerNavigationManager *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v9[5]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+80h] [rbp-28h] BYREF
  int v11; // [rsp+88h] [rbp-20h]

  v1 = (__int64 ***)*((_QWORD *)this + 2);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
    ControllerProcessor::NavigationDisable((ControllerProcessor *)i[3]);
  v4 = *((_QWORD *)this + 13);
  v10 = 0LL;
  v11 = 0;
  *((_BYTE *)this + 72) = 0;
  *((_BYTE *)this + 74) = 0;
  v8 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v8) >= 0 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v10);
  v5 = v8;
  v6 = v10;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  NavigationEnableDeferrals::GetDeferralForProcessId((__int64)this + 144, v9, v6);
  return 0LL;
}
