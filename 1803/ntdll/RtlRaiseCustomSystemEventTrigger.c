/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1800F7360
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     TpPostWork @ 0x180025FD0 (TpPostWork.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x18006D840 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x18009D610 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x18009D630 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x18009E370 (ZwUpdateWnfStateData.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 *     sub_1800F7614 @ 0x1800F7614 (sub_1800F7614.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  NTSTATUS updated; // ebx
  _QWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+40h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+44h] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  PTP_WORK *v7; // [rsp+50h] [rbp+7h] BYREF
  __int128 v8; // [rsp+58h] [rbp+Fh]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp+1Fh] BYREF
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  v7 = 0LL;
  BufferSize = 0;
  v8 = 0uLL;
  StateName = (WNF_STATE_NAME)0x41840B3EA3BCB875LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  if ( !TriggerConfig )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, TriggerConfig->TriggerId);
  updated = RtlGUIDFromString(&DestinationString, &Guid);
  if ( updated < 0 )
    return updated;
  if ( _InterlockedExchange(&dword_18015AA4C, 1) )
    return -1073741823;
  BufferSize = 4096;
  Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( Buffer )
  {
    updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
    if ( updated >= 0 )
    {
      updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
      if ( updated >= 0 )
      {
        if ( InfoBuffer )
        {
          updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
          if ( updated >= 0 )
          {
            if ( InfoBuffer )
            {
              BufferSize = 4096;
              if ( Buffer == (_QWORD *)-8LL )
              {
                updated = -1073741811;
              }
              else
              {
                updated = 0;
                *(_OWORD *)(Buffer + 1) = v8;
                *(GUID *)(Buffer + 3) = Guid;
                *((_DWORD *)Buffer + 10) = 16;
                BufferSize = 36;
              }
              if ( updated >= 0 )
              {
                *Buffer = 0LL;
                *(_DWORD *)Buffer = 0;
                *((_DWORD *)Buffer + 1) = -1;
                *(_DWORD *)Buffer = 4 * (BufferSize & 0xFFF | 0x100000);
                updated = sub_1800F7614(&v7, ChangeStamp);
                if ( updated >= 0 )
                {
                  updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
                  if ( updated >= 0 )
                  {
                    TpPostWork(*v7);
                    goto LABEL_25;
                  }
                }
                if ( v7 )
                  sub_1800F75C0();
              }
            }
            else
            {
              updated = -1073741653;
            }
          }
        }
        else
        {
          updated = -1073741823;
        }
      }
    }
  }
  else
  {
    updated = -1073741670;
  }
  _InterlockedExchange(&dword_18015AA4C, 0);
LABEL_25:
  if ( Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return updated;
}
