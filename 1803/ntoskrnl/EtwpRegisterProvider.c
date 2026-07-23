/*
 * XREFs of EtwpRegisterProvider @ 0x140601F6C
 * Callers:
 *     EtwRegisterClassicProvider @ 0x140601EB0 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x14058F2A0 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x14058F384 (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x140590420 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140591660 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddKmRegEntry @ 0x140602220 (EtwpAddKmRegEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1407AB268 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1407B17C4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        __int64 a2,
        int a3,
        void (__fastcall *a4)(__int64, __int64, __int128 *, __int64),
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  bool v10; // zf
  __int64 v11; // rax
  __int64 GuidEntryByGuid; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r13d
  __int64 v17; // rdi
  __int64 *v18; // rax
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v23; // ax
  unsigned __int8 v24; // dl
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v27; // r8
  unsigned int v28; // r12d
  __int64 v29; // [rsp+40h] [rbp-61h] BYREF
  __int128 v30; // [rsp+48h] [rbp-59h]
  __int64 *v31; // [rsp+58h] [rbp-49h]
  __int64 v32; // [rsp+60h] [rbp-41h]
  int v33; // [rsp+68h] [rbp-39h] BYREF
  char v34; // [rsp+6Ch] [rbp-35h]
  __int64 v35; // [rsp+78h] [rbp-29h]
  __int64 v36; // [rsp+80h] [rbp-21h]
  PVOID v37; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v38; // [rsp+90h] [rbp-11h]
  unsigned int v39; // [rsp+94h] [rbp-Dh]
  __int128 v40; // [rsp+98h] [rbp-9h] BYREF

  v29 = 0LL;
  v31 = a7;
  *a7 = 0LL;
  v11 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v32 = a5;
  if ( v10 )
    v11 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  GuidEntryByGuid = (__int64)EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (_DWORD *)a2, 0)) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(GuidEntryByGuid + 384, 0LL);
    *(_QWORD *)(GuidEntryByGuid + 392) = KeGetCurrentThread();
    v16 = EtwpAddKmRegEntry(GuidEntryByGuid, (__int64)&v29);
    if ( v16 >= 0 )
    {
      v17 = v29;
      v18 = v31;
      *(_QWORD *)(v29 + 48) = a6;
      *v18 = v17;
      v19 = *(_DWORD *)(GuidEntryByGuid + 80);
      if ( v19 )
      {
        EtwpUpdateEnableMask(GuidEntryByGuid, (*(_BYTE *)(v17 + 98) & 8) != 0, 0, (_BYTE *)(v17 + 100));
        v19 = *(_DWORD *)(GuidEntryByGuid + 80);
      }
      EtwpComputeRegEntryEnableInfo(v17, (unsigned __int8 *)&v33);
      if ( v19 )
        EtwpTrackProviderRegistration(v17);
      if ( a4 )
      {
        if ( (*(_BYTE *)(v17 + 98) & 8) != 0 )
        {
          if ( (*(_BYTE *)(GuidEntryByGuid + 75) & 1) != 0 )
          {
            v23 = *(_WORD *)(GuidEntryByGuid + 72);
            HIDWORD(v30) = 0;
            LOWORD(v30) = v23;
            LOBYTE(v20) = 1;
            WORD1(v30) = *(unsigned __int8 *)(GuidEntryByGuid + 74);
            *(_QWORD *)((char *)&v30 + 4) = *(_QWORD *)(GuidEntryByGuid + 64);
            v40 = v30;
            a4(GuidEntryByGuid + 24, v20, &v40, a5);
          }
        }
        else if ( v33 )
        {
          v24 = *(_BYTE *)(v17 + 100);
          PoolWithTag = 0LL;
          v29 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v24);
          v28 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v37 = PoolWithTag;
              v38 = v28;
              v39 = 0x80000000;
              v29 = (__int64)&v37;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v27) = v34;
          ((void (__fastcall *)(GUID *, __int64, __int64, __int64, __int64, __int64, __int64))a4)(
            &NullGuid,
            1LL,
            v27,
            v35,
            v36,
            v29,
            v32);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v21, &ETW_EVENT_PROVIDER_REGISTER, v14, 1LL, 0LL, a2);
    }
    *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
    ExReleasePushLockEx(GuidEntryByGuid + 384, 0LL, v14, v15);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry((volatile signed __int64 *)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v16;
}
