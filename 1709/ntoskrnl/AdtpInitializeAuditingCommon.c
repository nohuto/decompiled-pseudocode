/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1405D1108
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140849D38 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14014CBC8 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405D161C (AdtpInitializeDriveLetters.c)
 */

__int64 AdtpInitializeAuditingCommon()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( (int)result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( (int)result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
