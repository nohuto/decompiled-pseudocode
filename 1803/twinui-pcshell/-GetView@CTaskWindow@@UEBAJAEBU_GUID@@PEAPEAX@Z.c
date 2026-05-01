/*
 * XREFs of ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047DD0
 * Callers:
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180040EF4 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x18004BD00 (-GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA-AW4FRAMEWORK_VIEW_TYPE@@XZ.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18008AB9C (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskWindow::GetView(CTaskWindow *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // rcx

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 6);
  if ( v3 )
    return (**v3)(v3, a2, a3);
  else
    return 2147943568LL;
}
