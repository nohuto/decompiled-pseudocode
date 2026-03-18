/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x1405D07B8
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1405D06D0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140849D38 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140513748 (SepRegQueryValue.c)
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
