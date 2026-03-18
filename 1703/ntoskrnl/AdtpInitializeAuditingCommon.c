/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1405A6F94
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140808DF4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x140154F5C (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405A74A8 (AdtpInitializeDriveLetters.c)
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
