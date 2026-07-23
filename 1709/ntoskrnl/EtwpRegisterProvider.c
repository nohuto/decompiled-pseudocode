/*
 * XREFs of EtwpRegisterProvider @ 0x1404F0B1C
 * Callers:
 *     EtwRegisterClassicProvider @ 0x1404F0A60 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 *     EtwpUpdateEnableMask @ 0x14048E324 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14048E508 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x140491B04 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddKmRegEntry @ 0x1404F0DD8 (EtwpAddKmRegEntry.c)
 *     EtwpTrackProviderRegistration @ 0x1404F0EE0 (EtwpTrackProviderRegistration.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14074959C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140750AF0 (EtwpCopySchematizedFilters.c)
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
  ULONG_PTR v13; // rsi
  int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int8 v20; // dl
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v23; // r8
  unsigned int v24; // r12d
  __int64 v25; // [rsp+40h] [rbp-61h] BYREF
  __int128 v26; // [rsp+48h] [rbp-59h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  int v28; // [rsp+60h] [rbp-41h] BYREF
  char v29; // [rsp+64h] [rbp-3Dh]
  __int64 v30; // [rsp+70h] [rbp-31h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  PVOID v32; // [rsp+80h] [rbp-21h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-19h]
  unsigned int v34; // [rsp+8Ch] [rbp-15h]
  __int128 v35; // [rsp+90h] [rbp-11h] BYREF

  v25 = 0LL;
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
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (unsigned int *)a2, 0)) != 0LL )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (ULONG_PTR)(GuidEntryByGuid + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
    GuidEntryByGuid[49] = KeGetCurrentThread();
    v14 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&v25);
    if ( v14 >= 0 )
    {
      v15 = v25;
      *(_QWORD *)(v25 + 48) = a6;
      *a7 = v15;
      if ( *((_DWORD *)GuidEntryByGuid + 20) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (*(_BYTE *)(v15 + 98) & 8) != 0, 0, (_BYTE *)(v15 + 100));
      EtwpComputeRegEntryEnableInfo(v15, (unsigned __int8 *)&v28);
      if ( *((_DWORD *)GuidEntryByGuid + 20) )
        EtwpTrackProviderRegistration(v15);
      if ( a4 )
      {
        if ( (*(_BYTE *)(v15 + 98) & 8) != 0 )
        {
          if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
          {
            LOWORD(v26) = *((_WORD *)GuidEntryByGuid + 36);
            LOBYTE(v16) = 1;
            WORD1(v26) = *((unsigned __int8 *)GuidEntryByGuid + 74);
            *(_QWORD *)((char *)&v26 + 4) = GuidEntryByGuid[8];
            HIDWORD(v26) = 0;
            v35 = v26;
            ((void (__fastcall *)(_QWORD *, __int64, __int128 *, __int64))a4)(GuidEntryByGuid + 3, v16, &v35, v27);
          }
        }
        else if ( v28 )
        {
          v20 = *(_BYTE *)(v15 + 100);
          PoolWithTag = 0LL;
          v25 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, v20);
          v24 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v32 = PoolWithTag;
              v33 = v24;
              v34 = 0x80000000;
              v25 = (__int64)&v32;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v23) = v29;
          a4(&NullGuid, 1LL, v23, v30, v31, v25, v27);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v13 = (ULONG_PTR)(GuidEntryByGuid + 48);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v17, &ETW_EVENT_PROVIDER_REGISTER, v18, 1LL, 0LL, a2);
    }
    GuidEntryByGuid[49] = 0LL;
    ExReleasePushLockEx(v13, 0LL);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
