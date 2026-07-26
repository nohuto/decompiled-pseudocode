/*
 * XREFs of ndisCaptureStackTrace @ 0x1C006C5A4
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0015CD4 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memcmp @ 0x1C0028680 (memcmp.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C006C4A0 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 */

__int64 ndisCaptureStackTrace()
{
  __int64 result; // rax
  USHORT v1; // ax
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  PVOID *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  KIRQL v9; // r13
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v10; // rax
  struct _NDIS_STACK_TRACE *v11; // rsi
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  _DWORD *PoolWithTag; // rax
  struct _NDIS_STACK_TRACE *v15; // [rsp+20h] [rbp-50h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+28h] [rbp-48h] BYREF
  PVOID BackTrace[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h]

  result = 0LL;
  memset(&Context, 0, sizeof(Context));
  if ( byte_1C0092078 )
  {
    *(_OWORD *)&Context.ChainHead = 0LL;
    v1 = RtlCaptureStackBackTrace(3u, 4u, BackTrace, 0LL);
    v2 = v1;
    v3 = 0;
    v4 = 1;
    if ( !v1 )
      goto LABEL_6;
    v5 = BackTrace;
    v6 = v1;
    do
    {
      v7 = (__int64)*v5++;
      v3 ^= v7;
      --v6;
    }
    while ( v6 );
    if ( v3 <= 1 )
LABEL_6:
      v3 = 2;
    v8 = v3 & 0x3FFFFFF;
    if ( (unsigned int)v2 < 4 )
      memset(&BackTrace[v2], 0, 8LL * (unsigned int)(4 - v2));
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisStackTraces);
    v10 = RtlLookupEntryHashTable(&HashTable, v8, &Context);
    v15 = (struct _NDIS_STACK_TRACE *)v10;
    v11 = (struct _NDIS_STACK_TRACE *)v10;
    if ( !v10 )
      goto LABEL_18;
    v12 = 0;
    v13 = (LODWORD(v10[1].Linkage.Flink) >> 30) + 1;
    if ( LODWORD(v10[1].Linkage.Flink) >> 30 == -1 )
    {
LABEL_13:
      if ( !ndisExpandStackTrace((_RTL_DYNAMIC_HASH_TABLE_ENTRY **)&v15, &Context, (unsigned __int64 *)BackTrace) )
      {
        ++dword_1C00920A8;
LABEL_22:
        KeReleaseSpinLock(&ndisStackTraces, v9);
        return v4;
      }
      v11 = v15;
    }
    else
    {
      while ( memcmp((char *)v11 + 32 * v12 + 32, BackTrace, 0x20uLL) )
      {
        if ( ++v12 >= v13 )
          goto LABEL_13;
      }
    }
    if ( v11 )
    {
      *((_DWORD *)v11 + 6) ^= (*((_DWORD *)v11 + 6) ^ (*((_DWORD *)v11 + 6) + 1)) & 0x3FFFFFFF;
    }
    else
    {
LABEL_18:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6B73444Eu);
      if ( PoolWithTag )
      {
        PoolWithTag[6] = 1;
        *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)BackTrace;
        *((_OWORD *)PoolWithTag + 3) = v18;
        RtlInsertEntryHashTable(&HashTable, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)PoolWithTag, v8, &Context);
      }
      else
      {
        ++dword_1C00920A8;
        v8 = 1;
      }
    }
    v4 = v8;
    goto LABEL_22;
  }
  return result;
}
