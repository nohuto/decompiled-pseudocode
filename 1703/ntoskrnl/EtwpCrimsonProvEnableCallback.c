/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x140594C60
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpPsProvCaptureState @ 0x140711128 (EtwpPsProvCaptureState.c)
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
  unsigned int v15; // ebx
  __int64 v16; // r10
  int *v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  REGHANDLE v21; // rsi
  int v22; // ebx
  int v23; // edi
  BOOLEAN v24; // al
  int v25; // ecx
  int v26; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-4Ch]
  int v28; // [rsp+38h] [rbp-48h]
  int v29; // [rsp+3Ch] [rbp-44h]
  int v30; // [rsp+40h] [rbp-40h]
  int v31; // [rsp+44h] [rbp-3Ch]

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext != 1 )
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v21 = EtwpFileProvRegHandle;
      v22 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) != 0 ? 0x200 : 0;
      v26 = 100663808;
      v23 = v22 | 0x2000000;
      if ( !EtwProviderEnabled(v21, 0, 0x60uLL) )
        v23 = v22;
      v24 = EtwProviderEnabled(v21, 0, 0x1FA0uLL);
      v25 = v23 | 0x4000000;
    }
    else
    {
      if ( (_DWORD)CallbackContext != 536870913 )
      {
        v26 = (int)CallbackContext;
        v27 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
LABEL_29:
        v15 = 1;
        goto LABEL_12;
      }
      v26 = 545783808;
      v23 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x20uLL) != 0 ? 0x20080000 : 0;
      v24 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL);
      v25 = v23 | 0x20800000;
    }
    if ( !v24 )
      v25 = v23;
    v27 = v25;
    goto LABEL_29;
  }
  v9 = EtwpPsProvRegHandle;
  v10 = 0;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart) || EtwEventEnabled(v9, &EnableProcessTracingCallbacks) )
    v10 = 1;
  v11 = v10 | 2;
  if ( !EtwEventEnabled(v9, &ThreadStart) )
    v11 = v10;
  v26 = 524295;
  v12 = v11 | 4;
  if ( !EtwEventEnabled(v9, &ImageLoad) )
    v12 = v11;
  v13 = EtwEventEnabled(v9, &JobStart);
  v14 = v12 | 0x80000;
  v28 = 536879104;
  if ( !v13 )
    v14 = v12;
  v27 = v14;
  v29 = EtwProviderEnabled(v9, 0, 0x180uLL) != 0 ? 0x20002000 : 0;
  v30 = 1073741826;
  v15 = 3;
  v31 = EtwProviderEnabled(v9, 0, 0x200uLL) != 0 ? 0x40000002 : 0;
  if ( ControlCode == 2 )
    EtwpPsProvCaptureState(&PsProvGuid, MatchAnyKeyword);
LABEL_12:
  v16 = v15;
  v17 = &v26;
  do
  {
    v18 = v17[1];
    v19 = *v17 & ~v18;
    v17 += 2;
    *((_DWORD *)&EtwpGroupMasks + ((unsigned __int64)v18 >> 29) + 64) |= v18 & 0x1FFFFFFF;
    *((_DWORD *)&EtwpGroupMasks + ((unsigned __int64)v19 >> 29) + 64) &= ~(v19 & 0x1FFFFFFF);
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
