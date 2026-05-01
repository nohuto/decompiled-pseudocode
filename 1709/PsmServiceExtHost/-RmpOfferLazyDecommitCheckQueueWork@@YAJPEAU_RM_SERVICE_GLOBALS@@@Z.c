/*
 * XREFs of ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C8AC
 * Callers:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18003E848 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 * Callees:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000F9E0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpOfferLazyDecommitCheckQueueWork(struct _RM_SERVICE_GLOBALS *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  v1 = (_QWORD *)((char *)a1 + 216);
  if ( (*((_BYTE *)a1 + 240) & 1) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v9);
    v4 = v9 - v1[4];
    if ( v4 > 10000 * (unsigned __int64)*((unsigned int *)v1 + 10) )
    {
      if ( (*((_BYTE *)a1 + 1892) & 2) != 0 )
      {
        return (unsigned int)-1073741058;
      }
      else
      {
        RmpPartitionTableActOnActivePartitions(
          (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
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
            TlgWrite(v5, &unk_18005953B, v6, v7, 2u, &pData);
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
