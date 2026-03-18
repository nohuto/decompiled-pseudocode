/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4
 * Callers:
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406F3C50 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1406F43D8 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x1406FA4E8 (SepIsAclEqual.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, ACL *Dacl)
{
  PVOID v5; // rsi
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD **PrimaryToken; // r13
  int v12; // eax
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19; // [rsp+60h] [rbp-59h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v22[88]; // [rsp+B0h] [rbp-9h] BYREF

  v5 = 0LL;
  P = 0LL;
  v8 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v22, 0, 0x28uLL);
  v9 = 0LL;
  v19 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    LOBYTE(v10) = 1;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(141LL, v10, 0LL, &SubjectContext)
      || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v12 = SepQueryTypeString(a2, &P);
      v5 = P;
      v14 = v12;
      if ( v12 < 0 )
      {
LABEL_19:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v9 )
        {
          LOBYTE(v13) = 1;
          SeReleaseSecurityDescriptor(v9, 0LL, v13);
        }
        if ( v14 < 0 )
          SepAuditFailed((unsigned int)v14);
        goto LABEL_5;
      }
      if ( P )
        v8 = (int)P;
    }
    v14 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v14 >= 0 )
    {
      v14 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v14 >= 0 )
      {
        LOBYTE(v15) = 1;
        v14 = SeCaptureSecurityDescriptor(SecurityDescriptor, 0LL, 1LL, v15);
        if ( v14 >= 0 )
        {
          v14 = RtlCreateSecurityDescriptor(v22, 1u);
          if ( v14 >= 0 )
          {
            v14 = RtlSetDaclSecurityDescriptor(v22, 1u, Dacl, 0);
            if ( v14 >= 0 )
            {
              LOBYTE(v16) = 1;
              v17 = SeCaptureSecurityDescriptor(v22, 0LL, 1LL, v16);
              v9 = v19;
              v14 = v17;
              if ( v17 >= 0 )
                SepAdtSecurityDescriptorChangedAuditAlarm(
                  (unsigned int)&SubjectContext,
                  (unsigned int)&SeSubsystemName,
                  v8,
                  0,
                  a3,
                  *PrimaryToken[19],
                  0LL,
                  4,
                  v19);
            }
          }
        }
      }
    }
    goto LABEL_19;
  }
  SepAuditFailed(3221225596LL);
}
