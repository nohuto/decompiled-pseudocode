/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x140668668
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeSetAuditParameter @ 0x14001DA20 (SeSetAuditParameter.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v3; // rdi
  _QWORD *PrimaryToken; // rcx
  int AllocatedFullProcessImageName; // ebx
  ULONG v6; // r15d
  ULONG v7; // r8d
  NTSTATUS v8; // eax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Flink; // r14
  ULONG v11; // r8d
  NTSTATUS v12; // eax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v16; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING *v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 Data; // [rsp+58h] [rbp-A8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v20; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+A0h] [rbp-60h] BYREF

  P = 0LL;
  p_UnicodeString = 0LL;
  v3 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Data = PrimaryToken[3];
  AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v6 = ++AuditParameters.ParameterCount;
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(a1 + 176) & 0x1000000) != 0 )
    {
      v16 = 0LL;
      CmpConstructNameWithStatus(a1, &v16);
      v3 = (UNICODE_STRING *)v16;
      if ( !v16 )
      {
LABEL_7:
        AllocatedFullProcessImageName = -1073741670;
        goto LABEL_20;
      }
      AllocatedFullProcessImageName = CmVirtualKCBToRealPath(a1, &UnicodeString);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        p_UnicodeString = &UnicodeString;
LABEL_13:
        AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v6, p_UnicodeString);
        v7 = ++AuditParameters.ParameterCount;
        if ( AllocatedFullProcessImageName >= 0 )
        {
          v8 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v7, v3);
          ++AuditParameters.ParameterCount;
          AllocatedFullProcessImageName = v8;
          if ( v8 >= 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            Flink = Process[1].Header.WaitListHead.Flink;
            AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&P);
            if ( AllocatedFullProcessImageName >= 0 )
            {
              AllocatedFullProcessImageName = SeSetAuditParameter(
                                                &AuditParameters,
                                                SeAdtParmTypePtr,
                                                AuditParameters.ParameterCount,
                                                Flink);
              v11 = ++AuditParameters.ParameterCount;
              if ( AllocatedFullProcessImageName >= 0 )
              {
                v12 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v11, P);
                ++AuditParameters.ParameterCount;
                AllocatedFullProcessImageName = v12;
                if ( v12 >= 0 )
                {
                  AllocatedFullProcessImageName = SeReportSecurityEventWithSubCategory(
                                                    0,
                                                    &DestinationString,
                                                    0LL,
                                                    &AuditParameters,
                                                    0x75u);
                  if ( AllocatedFullProcessImageName >= 0 )
                    AllocatedFullProcessImageName = 0;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v17 = 0LL;
      CmpConstructNameWithStatus(a1, &v17);
      p_UnicodeString = v17;
      if ( !v17 )
        goto LABEL_7;
      RtlInitUnicodeString(&v20, 0LL);
      AllocatedFullProcessImageName = CmRealKCBToVirtualPath(a1, (__m128i *)&v20, &UnicodeString);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v3 = &UnicodeString;
        goto LABEL_13;
      }
    }
  }
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v3 == &UnicodeString )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( v3 )
  {
    CmpFreeTransientPoolWithTag(v3, 0x624E4D43u);
  }
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AllocatedFullProcessImageName;
}
