/*
 * XREFs of EtwpRegisterUMGuid @ 0x140590090
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x14058F2A0 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x14058F384 (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x140590420 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpApplyScopeFilters @ 0x14059090C (EtwpApplyScopeFilters.c)
 *     EtwpAddUmRegEntry @ 0x1405909C0 (EtwpAddUmRegEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140591660 (EtwpComputeRegEntryEnableInfo.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1407AB268 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1407B17C4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v5; // r14d
  bool v9; // zf
  __int64 v10; // rax
  __int64 GuidEntryByGuid; // rsi
  void *v13; // rdi
  int v14; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  _DWORD *v17; // r12
  int SchematizedFilterSize; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ecx
  _BYTE *v22; // rdi
  _BOOL8 v23; // rdx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v30; // eax
  NTSTATUS AccessStatus[2]; // [rsp+50h] [rbp-68h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int64 v34; // [rsp+68h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-48h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+10h] BYREF

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
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (_DWORD *)a2, (unsigned int)(v5 - 2) > 1)) != 0 )
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
      v21 = 160;
      if ( SchematizedFilterSize )
      {
        v21 = SchematizedFilterSize + 176;
        *v17 = SchematizedFilterSize + 176;
      }
      if ( v21 > a3 )
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
          v22 = Object;
          *(_QWORD *)(a2 + 24) = v34;
          if ( *(_DWORD *)(GuidEntryByGuid + 80) )
            EtwpUpdateEnableMask(GuidEntryByGuid, (v22[98] & 8) != 0, 1, v22 + 100);
          v23 = (v22[98] & 8) != 0;
          LOBYTE(v36) = v22[100];
          EtwpApplyScopeFilters(v22, v23, 0LL, &v36);
          v24 = v36;
          if ( (v22[98] & 8) != 0 )
          {
            v22[100] = v36;
            v25 = v24;
          }
          else
          {
            v22[100] &= v36;
            v25 = v22[100];
          }
          if ( v25 )
          {
            EtwpComputeRegEntryEnableInfo(v22, a2 + 112);
            v30 = *(_BYTE *)(GuidEntryByGuid + 75) & 1;
            BYTE3(v36) = 0;
            *(_DWORD *)(a2 + 152) = v30;
            LOWORD(v36) = *(_WORD *)(GuidEntryByGuid + 72);
            BYTE2(v36) = *(_BYTE *)(GuidEntryByGuid + 74);
            HIDWORD(v36) = *(_DWORD *)(GuidEntryByGuid + 64);
            v26 = v36;
          }
          else
          {
            memset((void *)(a2 + 112), 0, 0x20uLL);
            v26 = 0LL;
            *(_DWORD *)(a2 + 152) = 0;
          }
          *(_QWORD *)(a2 + 144) = v26;
          *v17 = 160;
          v27 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v25);
          if ( v27 )
          {
            *v17 = v27 + 176;
            *(_DWORD *)(a2 + 168) = v27;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            v27 = 1;
          }
          *(_DWORD *)(a2 + 156) = v27;
          *(_DWORD *)(a2 + 44) = *v17;
          if ( *(_DWORD *)(GuidEntryByGuid + 80) )
            EtwpTrackProviderRegistration((__int64)v22);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v28, &ETW_EVENT_PROVIDER_REGISTER, v19, 1LL, 0LL, a2);
        }
      }
      *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
      ExReleasePushLockEx(GuidEntryByGuid + 384, 0LL, v19, v20);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Object )
        ObfDereferenceObject(Object);
    }
    EtwpUnreferenceGuidEntry((PVOID)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
