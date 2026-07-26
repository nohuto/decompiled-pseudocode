/*
 * XREFs of ndisCaptureStackTrace @ 0x1C006DB18
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C00112B0 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C006DA18 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 */

__int64 ndisCaptureStackTrace()
{
  __int64 result; // rax
  USHORT v1; // ax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  PVOID *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  KIRQL v7; // r13
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // rax
  struct _NDIS_STACK_TRACE *v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  _DWORD *PoolWithTag; // rax
  struct _NDIS_STACK_TRACE *v13; // [rsp+20h] [rbp-50h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+28h] [rbp-48h] BYREF
  PVOID BackTrace[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h]

  result = 0LL;
  memset(&Context, 0, sizeof(Context));
  if ( LOBYTE(WPP_MAIN_CB.AlignmentRequirement) )
  {
    *(_OWORD *)&Context.ChainHead = 0LL;
    v1 = RtlCaptureStackBackTrace(3u, 4u, BackTrace, 0LL);
    v2 = 0;
    v3 = 1;
    if ( !v1 )
      goto LABEL_6;
    v4 = BackTrace;
    v5 = v1;
    do
    {
      v2 ^= *(_DWORD *)v4++;
      --v5;
    }
    while ( v5 );
    if ( v2 <= 1 )
LABEL_6:
      v2 = 2;
    v6 = v2 & 0x3FFFFFF;
    if ( v1 < 4u )
      memset(&BackTrace[v1], 0, 8LL * (4 - (unsigned int)v1));
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    v8 = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.DeviceQueue, v6, &Context);
    v13 = (struct _NDIS_STACK_TRACE *)v8;
    v9 = (struct _NDIS_STACK_TRACE *)v8;
    if ( !v8 )
      goto LABEL_18;
    v10 = 0;
    v11 = (LODWORD(v8[1].Linkage.Flink) >> 30) + 1;
    if ( LODWORD(v8[1].Linkage.Flink) >> 30 == -1 )
    {
LABEL_13:
      if ( !ndisExpandStackTrace((_RTL_DYNAMIC_HASH_TABLE_ENTRY **)&v13, &Context, (unsigned __int64 *)BackTrace) )
      {
        ++WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
LABEL_22:
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, v7);
        return v3;
      }
      v9 = v13;
    }
    else
    {
      while ( memcmp((char *)v9 + 32 * v10 + 32, BackTrace, 0x20uLL) )
      {
        if ( ++v10 >= v11 )
          goto LABEL_13;
      }
    }
    if ( v9 )
    {
      *((_DWORD *)v9 + 6) ^= (*((_DWORD *)v9 + 6) ^ (*((_DWORD *)v9 + 6) + 1)) & 0x3FFFFFFF;
    }
    else
    {
LABEL_18:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6B73444Eu);
      if ( PoolWithTag )
      {
        PoolWithTag[6] = 1;
        *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)BackTrace;
        *((_OWORD *)PoolWithTag + 3) = v16;
        RtlInsertEntryHashTable(
          (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.DeviceQueue,
          (PRTL_DYNAMIC_HASH_TABLE_ENTRY)PoolWithTag,
          v6,
          &Context);
      }
      else
      {
        ++WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
        v6 = 1;
      }
    }
    v3 = v6;
    goto LABEL_22;
  }
  return result;
}
