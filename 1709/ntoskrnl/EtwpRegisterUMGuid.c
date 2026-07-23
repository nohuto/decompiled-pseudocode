/*
 * XREFs of EtwpRegisterUMGuid @ 0x140491780
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 *     EtwpUpdateEnableMask @ 0x14048E324 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14048E508 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddUmRegEntry @ 0x1404915C0 (EtwpAddUmRegEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x140491B04 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpApplyScopeFilters @ 0x140491F60 (EtwpApplyScopeFilters.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     EtwpTrackProviderRegistration @ 0x1404F0EE0 (EtwpTrackProviderRegistration.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14074959C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140750AF0 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, unsigned int *a5)
{
  int v5; // ebp
  bool v9; // zf
  __int64 v10; // rax
  char *GuidEntryByGuid; // rsi
  void *v13; // rdi
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  unsigned int *v17; // r15
  int SchematizedFilterSize; // eax
  _BYTE *v19; // rdi
  _BOOL8 v20; // rdx
  unsigned __int8 v21; // bp
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // eax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-68h] BYREF
  int v29; // [rsp+54h] [rbp-64h]
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int64 v32; // [rsp+68h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a2 + 16);
  v29 = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v32 = 0LL;
  Object = 0LL;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  GuidEntryByGuid = (char *)EtwpFindGuidEntryByGuid(a1, a2, (unsigned int)(v5 - 2) > 1);
  if ( GuidEntryByGuid
    || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (unsigned int *)a2, (unsigned int)(v5 - 2) > 1)) != 0LL )
  {
    v13 = (void *)*((_QWORD *)GuidEntryByGuid + 7);
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
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v14 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 384), 0LL);
      LOBYTE(v16) = -1;
      v17 = a5;
      *((_QWORD *)GuidEntryByGuid + 49) = KeGetCurrentThread();
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
        v14 = EtwpAddUmRegEntry(
                (ULONG_PTR)GuidEntryByGuid,
                v5,
                v29,
                *(_QWORD *)(a2 + 32),
                (volatile signed __int16 **)&Object,
                (__int64)&v32);
        if ( v14 >= 0 )
        {
          if ( a4 )
            _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x100u);
          v19 = Object;
          *(_QWORD *)(a2 + 24) = v32;
          if ( *((_DWORD *)GuidEntryByGuid + 20) )
            EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v19[98] & 8) != 0, 1, v19 + 100);
          v20 = (v19[98] & 8) != 0;
          LOBYTE(v34) = v19[100];
          EtwpApplyScopeFilters(v19, v20, 0LL, &v34);
          if ( (v19[98] & 8) != 0 )
            v19[100] = v34;
          else
            v19[100] &= v34;
          v21 = v19[100];
          if ( v21 )
          {
            EtwpComputeRegEntryEnableInfo((__int64)v19, (unsigned __int8 *)(a2 + 112));
            v27 = GuidEntryByGuid[75] & 1;
            BYTE3(v34) = 0;
            *(_DWORD *)(a2 + 152) = v27;
            LOWORD(v34) = *((_WORD *)GuidEntryByGuid + 36);
            BYTE2(v34) = GuidEntryByGuid[74];
            HIDWORD(v34) = *((_DWORD *)GuidEntryByGuid + 16);
            v22 = v34;
          }
          else
          {
            memset((void *)(a2 + 112), 0, 0x20uLL);
            *(_DWORD *)(a2 + 152) = 0;
            v22 = 0LL;
          }
          *(_QWORD *)(a2 + 144) = v22;
          *v17 = 160;
          v23 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v21);
          if ( v23 )
          {
            *v17 = v23 + 176;
            *(_DWORD *)(a2 + 168) = v23;
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
          if ( *((_DWORD *)GuidEntryByGuid + 20) )
            EtwpTrackProviderRegistration(v19);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v24, &ETW_EVENT_PROVIDER_REGISTER, v25, 1LL, 0LL, a2);
        }
      }
      *((_QWORD *)GuidEntryByGuid + 49) = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 384), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Object )
        ObfDereferenceObject(Object);
    }
    EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
