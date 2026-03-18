/*
 * XREFs of SeAuditingFileOrGlobalEvents @ 0x1406F44D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepRmGlobalSaclFind @ 0x1406F93F8 (SepRmGlobalSaclFind.c)
 */

BOOLEAN __stdcall SeAuditingFileOrGlobalEvents(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  BOOLEAN v5; // bl
  __int64 v7; // r9
  __int64 v8; // rax
  char *v9; // rax
  __int64 v11; // rdx
  UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v13 = 0LL;
  RtlInitUnicodeString(&v12, L"File");
  LOBYTE(v7) = 1;
  if ( (unsigned int)SepRmGlobalSaclFind(&v13, 0LL, &v12, v7) != -1073741772 )
    goto LABEL_9;
  if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 0x10) != 0 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) < 0 )
  {
    v8 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v8 )
    {
      v9 = (char *)SecurityDescriptor + v8;
      goto LABEL_7;
    }
    return 0;
  }
  v9 = (char *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_7:
  if ( !v9 )
    return 0;
LABEL_9:
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                          116LL,
                          AccessGranted,
                          AccessGranted == 0,
                          SubjectSecurityContext)
    || (unsigned __int8)SepAdtAuditThisEventWithContext(
                          129LL,
                          AccessGranted,
                          AccessGranted == 0,
                          SubjectSecurityContext) )
  {
    return 1;
  }
  v11 = AccessGranted != 0;
  if ( !AccessGranted )
    LODWORD(v11) = v11 | 0x10;
  if ( SepAdtAuditThisEventByCategoryWithContext(3u, v11, SubjectSecurityContext) )
    return 1;
  return v5;
}
