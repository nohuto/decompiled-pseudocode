/*
 * XREFs of ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18005BB74
 * Callers:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18005D9CC (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18001E210 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpOfferLazyDecommitCheckQueueWork(struct _RM_SERVICE_GLOBALS *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  v1 = (_QWORD *)((char *)a1 + 240);
  if ( (*((_BYTE *)a1 + 264) & 1) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v7);
    v4 = v7 - v1[4];
    if ( v4 > 10000 * (unsigned __int64)*((unsigned int *)v1 + 10) )
    {
      if ( (*((_BYTE *)a1 + 2228) & 2) != 0 )
      {
        return (unsigned int)-1073741058;
      }
      else
      {
        RmpPartitionTableActOnActivePartitions(
          (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 336),
          v4,
          RmpOfferLazyDecommitQueuePartitionHosts,
          v1);
        if ( (_QWORD *)v1[1] == v1 + 1 )
        {
          return (unsigned int)-1073740704;
        }
        else
        {
          v3 = 0;
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
            TlgWrite(v5, &unk_18007F6F2, 0LL, 0LL, 2u, &pData);
          TpPostWork(*v1);
          *((_DWORD *)v1 + 6) |= 1u;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741199;
    }
  }
  return v3;
}
