/*
 * XREFs of SeAuditingFileOrGlobalEvents @ 0x14072BF80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046BE30 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepRmGlobalSaclFind @ 0x140730E4C (SepRmGlobalSaclFind.c)
 */

BOOLEAN __stdcall SeAuditingFileOrGlobalEvents(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  BOOLEAN v5; // bl
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v12; // rdx
  UNICODE_STRING v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v14 = 0LL;
  RtlInitUnicodeString(&v13, L"File");
  LOBYTE(v7) = 1;
  if ( (unsigned int)SepRmGlobalSaclFind(&v14, 0LL, &v13, v7) != -1073741772 )
    goto LABEL_9;
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 0;
  if ( v8 < 0 )
  {
    v9 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v9 )
    {
      v10 = (char *)SecurityDescriptor + v9;
      goto LABEL_7;
    }
    return 0;
  }
  v10 = (char *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_7:
  if ( !v10 )
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
  v12 = AccessGranted != 0;
  if ( !AccessGranted )
    LODWORD(v12) = v12 | 0x10;
  if ( SepAdtAuditThisEventByCategoryWithContext(3u, v12, SubjectSecurityContext) )
    return 1;
  return v5;
}
