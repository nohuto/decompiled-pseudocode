/*
 * XREFs of EtwpRegisterUMGuid @ 0x140480530
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404808F0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpApplyScopeFilters @ 0x140480E10 (EtwpApplyScopeFilters.c)
 *     EtwpAddUmRegEntry @ 0x140480F40 (EtwpAddUmRegEntry.c)
 *     EtwpUpdateEnableMask @ 0x1404F1D24 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404F218C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     EtwpAddGuidEntry @ 0x140554888 (EtwpAddGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14070DD08 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140712A08 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, unsigned int *a5)
{
  int v5; // ebp
  bool v9; // zf
  __int64 v10; // rax
  ULONG_PTR GuidEntryByGuid; // rsi
  void *v13; // rdi
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  unsigned int *v17; // r15
  int SchematizedFilterSize; // eax
  __int64 v19; // r8
  _BYTE *v20; // rdi
  _BOOL8 v21; // rdx
  unsigned __int8 v22; // bp
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rbp
  int v30; // eax
  NTSTATUS AccessStatus[2]; // [rsp+50h] [rbp-78h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-70h] BYREF
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  __int64 v34; // [rsp+68h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a2 + 16);
  AccessStatus[1] = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v34 = 0LL;
  Object = 0LL;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, (unsigned int)(v5 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, a2, (unsigned int)(v5 - 2) > 1)) != 0 )
  {
    v13 = *(void **)(GuidEntryByGuid + 56);
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v13,
      &SubjectContext,
      0,
      0x800u,
      0,
      0LL,
      (PGENERIC_MAPPING)&EtwpGenericMapping,
      1,
      &GrantedAccess,
      AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v14 = AccessStatus[0];
    if ( AccessStatus[0] >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(GuidEntryByGuid + 384, 0LL);
      LOBYTE(v16) = -1;
      v17 = a5;
      *(_QWORD *)(GuidEntryByGuid + 392) = KeGetCurrentThread();
      *v17 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v16);
      if ( SchematizedFilterSize )
        *v17 = SchematizedFilterSize + 176;
      if ( *v17 > a3 )
      {
        v14 = -1073741789;
      }
      else
      {
        v14 = EtwpAddUmRegEntry(GuidEntryByGuid, (__int64)&Object, (__int64)&v34);
        if ( v14 >= 0 )
        {
          if ( a4 )
            _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x100u);
          v20 = Object;
          *(_QWORD *)(a2 + 24) = v34;
          if ( *(_DWORD *)(GuidEntryByGuid + 80) )
          {
            LOBYTE(v19) = 1;
            EtwpUpdateEnableMask(GuidEntryByGuid, (v20[98] & 8) != 0, v19, v20 + 100);
          }
          v21 = (v20[98] & 8) != 0;
          LOBYTE(v37) = v20[100];
          EtwpApplyScopeFilters(v20, v21, 0LL, &v37);
          if ( (v20[98] & 8) != 0 )
            v20[100] = v37;
          else
            v20[100] &= v37;
          v22 = v20[100];
          if ( v22 )
          {
            EtwpComputeRegEntryEnableInfo(v20, a2 + 112);
            v30 = *(_BYTE *)(GuidEntryByGuid + 75) & 1;
            BYTE3(v37) = 0;
            *(_DWORD *)(a2 + 152) = v30;
            LOWORD(v37) = *(_WORD *)(GuidEntryByGuid + 72);
            BYTE2(v37) = *(_BYTE *)(GuidEntryByGuid + 74);
            HIDWORD(v37) = *(_DWORD *)(GuidEntryByGuid + 64);
            v23 = v37;
          }
          else
          {
            memset((void *)(a2 + 112), 0, 0x20uLL);
            *(_DWORD *)(a2 + 152) = 0;
            v23 = 0LL;
          }
          *(_QWORD *)(a2 + 144) = v23;
          *v17 = 160;
          v24 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v22);
          if ( v24 )
          {
            *v17 = v24 + 176;
            *(_DWORD *)(a2 + 168) = v24;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            *(_DWORD *)(a2 + 156) = 1;
          }
          else
          {
            *(_DWORD *)(a2 + 156) = 0;
          }
          *(_DWORD *)(a2 + 44) = *v17;
          if ( (v20[98] & 8) != 0 )
          {
            if ( v22 )
            {
              v28 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(GuidEntryByGuid + 72), 0LL);
              v29 = v28;
              if ( v28 )
              {
                EtwpProviderArrivalCallback(v28, 1, (__int64)v20);
                EtwpReleaseLoggerContext(v29, 0LL);
              }
            }
          }
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v25, &ETW_EVENT_PROVIDER_REGISTER, v26, 1LL, 0LL, a2);
        }
      }
      *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
      ExReleasePushLockEx(GuidEntryByGuid + 384, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( Object )
        ObfDereferenceObject(Object);
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
