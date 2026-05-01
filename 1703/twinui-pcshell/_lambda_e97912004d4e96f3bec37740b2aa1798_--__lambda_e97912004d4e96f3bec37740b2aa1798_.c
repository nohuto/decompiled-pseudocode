/*
 * XREFs of _lambda_e97912004d4e96f3bec37740b2aa1798_::__lambda_e97912004d4e96f3bec37740b2aa1798_ @ 0x1800321D8
 * Callers:
 *     _CImmersiveMode::_ScheduleDesktopVisibilityNotification_::_1_::dtor$2 @ 0x18019932D (_CImmersiveMode--_ScheduleDesktopVisibilityNotification_--_1_--dtor$2.c)
 *     _CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons_::_1_::dtor$4 @ 0x18019A901 (_CFrameApplicationPresentation--SynchronizeWindowTitleAndButtons_--_1_--dtor$4.c)
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098____::_1_::dtor$2 @ 0x18019AA21 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba33_ea_18019AA21.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e97912004d4e96f3bec37740b2aa1798_::__lambda_e97912004d4e96f3bec37740b2aa1798_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
