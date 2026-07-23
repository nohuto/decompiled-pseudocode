/*
 * XREFs of EtwpRegisterProvider @ 0x1405520CC
 * Callers:
 *     EtwRegisterClassicProvider @ 0x140552080 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404808F0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateEnableMask @ 0x1404F1D24 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404F218C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAddKmRegEntry @ 0x1405523C0 (EtwpAddKmRegEntry.c)
 *     EtwpAddGuidEntry @ 0x140554888 (EtwpAddGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14070DD08 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140712A08 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        __int64 a2,
        int a3,
        void (__fastcall *a4)(GUID *, __int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v10; // rax
  _QWORD *GuidEntryByGuid; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int *v19; // rax
  unsigned int *v20; // rsi
  unsigned __int8 v21; // dl
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v24; // r8
  unsigned int v25; // r12d
  __int64 v26; // [rsp+40h] [rbp-61h] BYREF
  __int64 v27; // [rsp+48h] [rbp-59h]
  __int128 v28; // [rsp+50h] [rbp-51h]
  int v29; // [rsp+68h] [rbp-39h] BYREF
  char v30; // [rsp+6Ch] [rbp-35h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  __int64 v32; // [rsp+80h] [rbp-21h]
  PVOID v33; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v34; // [rsp+90h] [rbp-11h]
  unsigned int v35; // [rsp+94h] [rbp-Dh]
  __int128 v36; // [rsp+98h] [rbp-9h] BYREF

  v26 = 0LL;
  v27 = a5;
  *a7 = 0LL;
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(a1, a2, 0LL)) != 0LL )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
    GuidEntryByGuid[49] = KeGetCurrentThread();
    v13 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&v26);
    if ( v13 >= 0 )
    {
      v14 = v26;
      *(_QWORD *)(v26 + 48) = a6;
      *a7 = v14;
      if ( *((_DWORD *)GuidEntryByGuid + 20) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (*(_BYTE *)(v14 + 98) & 8) != 0, 0, (_BYTE *)(v14 + 100));
      EtwpComputeRegEntryEnableInfo(v14, (unsigned __int8 *)&v29);
      if ( (*(_BYTE *)(v14 + 98) & 8) != 0 && (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        v19 = EtwpAcquireLoggerContextByLoggerId(a1, *((unsigned __int16 *)GuidEntryByGuid + 36), 0);
        v20 = v19;
        if ( v19 )
        {
          EtwpProviderArrivalCallback((__int64)v19, 0, v14);
          EtwpReleaseLoggerContext(v20, 0);
        }
      }
      if ( a4 )
      {
        if ( (*(_BYTE *)(v14 + 98) & 8) != 0 )
        {
          if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
          {
            LOWORD(v28) = *((_WORD *)GuidEntryByGuid + 36);
            LOBYTE(v15) = 1;
            WORD1(v28) = *((unsigned __int8 *)GuidEntryByGuid + 74);
            *(_QWORD *)((char *)&v28 + 4) = GuidEntryByGuid[8];
            HIDWORD(v28) = 0;
            v36 = v28;
            ((void (__fastcall *)(_QWORD *, __int64, __int128 *, __int64))a4)(GuidEntryByGuid + 3, v15, &v36, v27);
          }
        }
        else if ( v29 )
        {
          v21 = *(_BYTE *)(v14 + 100);
          PoolWithTag = 0LL;
          v26 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, v21);
          v25 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v33 = PoolWithTag;
              v34 = v25;
              v35 = 0x80000000;
              v26 = (__int64)&v33;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v24) = v30;
          a4(&NullGuid, 1LL, v24, v31, v32, v26, v27);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v16, &ETW_EVENT_PROVIDER_REGISTER, v17, 1LL, 0LL, a2);
    }
    GuidEntryByGuid[49] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
