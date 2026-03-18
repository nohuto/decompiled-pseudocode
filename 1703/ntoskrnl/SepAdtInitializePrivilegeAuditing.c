/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x1405A6DD8
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1405A6CF0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140808DF4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140560810 (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v1) = 0;
  if ( SepAdtRegNotifyHandle
    && (SepRegQueryValue(SepAdtRegNotifyHandle, L"FullPrivilegeAuditing", 3, 1u, &v1), (_BYTE)v1) )
  {
    SepFilterPrivileges = SepFilterPrivilegesShort;
  }
  else
  {
    SepFilterPrivileges = SepFilterPrivilegesLong;
  }
  return 1;
}
