/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x14057D0A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwProviderEnabled @ 0x140062600 (EtwProviderEnabled.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpPsProvCaptureState @ 0x1407AFA90 (EtwpPsProvCaptureState.c)
 */

void __fastcall EtwpCrimsonProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  REGHANDLE v9; // rsi
  int v10; // edi
  int v11; // ebx
  int v12; // edi
  BOOLEAN v13; // al
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  int *v17; // r10
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // r9d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v23; // edi
  BOOLEAN v24; // al
  int v25; // ecx
  REGHANDLE v26; // rsi
  int v27; // ebx
  int v28; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-4Ch]
  int v30; // [rsp+38h] [rbp-48h]
  int v31; // [rsp+3Ch] [rbp-44h]
  int v32; // [rsp+40h] [rbp-40h]
  int v33; // [rsp+44h] [rbp-3Ch]

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext != 1 )
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v26 = EtwpFileProvRegHandle;
      v27 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) != 0 ? 0x200 : 0;
      v28 = 100663808;
      v23 = v27 | 0x2000000;
      if ( !EtwProviderEnabled(v26, 0, 0x60uLL) )
        v23 = v27;
      v24 = EtwProviderEnabled(v26, 0, 0x1FA0uLL);
      v25 = v23 | 0x4000000;
    }
    else
    {
      if ( (_DWORD)CallbackContext != 536870913 )
      {
        v28 = (int)CallbackContext;
        v29 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
LABEL_26:
        v16 = 1LL;
        goto LABEL_13;
      }
      v28 = 545783808;
      v23 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x20uLL) != 0 ? 0x20080000 : 0;
      v24 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL);
      v25 = v23 | 0x20800000;
    }
    if ( !v24 )
      v25 = v23;
    v29 = v25;
    goto LABEL_26;
  }
  v9 = EtwpPsProvRegHandle;
  v10 = 0;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart) || EtwEventEnabled(v9, &EnableProcessTracingCallbacks) )
    v10 = 1;
  v11 = v10 | 2;
  if ( !EtwEventEnabled(v9, &ThreadStart) )
    v11 = v10;
  v28 = 524295;
  v12 = v11 | 4;
  if ( !EtwEventEnabled(v9, &ImageLoad) )
    v12 = v11;
  v13 = EtwEventEnabled(v9, &JobStart);
  v14 = v12 | 0x80000;
  v30 = 536879104;
  if ( !v13 )
    v14 = v12;
  v29 = v14;
  v31 = EtwProviderEnabled(v9, 0, 0x180uLL) != 0 ? 0x20002000 : 0;
  v32 = 1073741826;
  v33 = EtwProviderEnabled(v9, 0, 0x200uLL) != 0 ? 0x40000002 : 0;
  if ( ControlCode == 2 )
    EtwpPsProvCaptureState(&PsProvGuid, MatchAnyKeyword, v15);
  v16 = 3LL;
LABEL_13:
  v17 = &v28;
  do
  {
    v18 = EtwpHostSiloState;
    v19 = (unsigned __int64)(unsigned int)v17[1] >> 29;
    v20 = v17[1] & 0x1FFFFFFF;
    v21 = *v17 & ~v17[1];
    v17 += 2;
    *(_DWORD *)(EtwpHostSiloState + 4 * v19 + 4480) |= v20;
    *(_DWORD *)(v18 + 4 * ((unsigned __int64)v21 >> 29) + 4480) &= ~(v21 & 0x1FFFFFFF);
    --v16;
  }
  while ( v16 );
  KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57777445u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpUpdateKernelGroupsWork;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
}
