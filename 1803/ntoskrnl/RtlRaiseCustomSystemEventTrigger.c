/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x14028E630
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1401AA020 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x1401AA040 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     RtlpCtAllocateMemory @ 0x14078ABE8 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x14078AC0C (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x14078AC68 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x14078AD30 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x14078ADF0 (RtlpCtQueueWorkItem.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int WnfStateData; // ebx
  __int64 Memory; // rdi
  int v4; // [rsp+40h] [rbp-9h]
  int v5; // [rsp+44h] [rbp-5h]
  unsigned int v6; // [rsp+48h] [rbp-1h]
  PVOID P; // [rsp+50h] [rbp+7h] BYREF
  __int128 v8; // [rsp+58h] [rbp+Fh]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v10; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  P = 0LL;
  v8 = 0uLL;
  v10 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
  WnfStateData = RtlGUIDFromString(&DestinationString, &Guid);
  if ( WnfStateData < 0 )
    return (unsigned int)WnfStateData;
  if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
    return (unsigned int)-1073741823;
  Memory = RtlpCtAllocateMemory(0x1000uLL);
  if ( Memory )
  {
    WnfStateData = ZwQueryWnfStateData((__int64)&v10, 0LL, 0LL);
    if ( WnfStateData >= 0 )
    {
      WnfStateData = ZwQueryWnfStateNameInformation((__int64)&v10, 2LL, 0LL);
      if ( WnfStateData >= 0 )
      {
        if ( v5 )
        {
          WnfStateData = ZwQueryWnfStateNameInformation((__int64)&v10, 1LL, 0LL);
          if ( WnfStateData >= 0 )
          {
            v4 = 4096;
            if ( Memory == -8 )
            {
              WnfStateData = -1073741811;
            }
            else
            {
              WnfStateData = 0;
              *(_OWORD *)(Memory + 8) = v8;
              *(GUID *)(Memory + 24) = Guid;
              *(_DWORD *)(Memory + 40) = 16;
              v4 = 36;
            }
            if ( WnfStateData >= 0 )
            {
              *(_QWORD *)Memory = 0LL;
              *(_DWORD *)Memory = 0;
              *(_DWORD *)(Memory + 4) = -1;
              *(_DWORD *)Memory = 4 * (v4 & 0xFFF | 0x100000);
              WnfStateData = RtlpCtContextInit(&P, v6);
              if ( WnfStateData >= 0 )
              {
                WnfStateData = ZwUpdateWnfStateData((__int64)&v10, Memory, (unsigned int)(v4 + 8));
                if ( WnfStateData >= 0 )
                {
                  RtlpCtQueueWorkItem(*(_QWORD *)P);
                  goto LABEL_23;
                }
              }
              if ( P )
                RtlpCtContextFree(P);
            }
          }
        }
        else
        {
          WnfStateData = -1073741823;
        }
      }
    }
  }
  else
  {
    WnfStateData = -1073741670;
  }
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
LABEL_23:
  if ( Memory )
    RtlpCtFreeMemory(Memory);
  return (unsigned int)WnfStateData;
}
