/*
 * XREFs of PiQueueDeviceRequest @ 0x14044E618
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiControlStartDevice @ 0x1406D3370 (PiControlStartDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x1400FFD98 (PnpDeleteDeviceActionRequest.c)
 *     PnpCancelDeviceActionRequest @ 0x1401FFA48 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1401FFAA0 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rax
  void *v8; // rbp
  int v9; // eax
  volatile signed __int32 *v10; // rdi
  unsigned int v11; // ebx
  volatile signed __int32 *v13; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  if ( a5 )
    *(_DWORD *)a5 = 0;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  v8 = (void *)v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) )
    {
      if ( a4 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = PnpRequestDeviceAction(
             v8,
             a2,
             0,
             0LL,
             (unsigned __int64)&Event & -(__int64)(a4 != 0),
             a5 & -(__int64)(a4 != 0),
             (_QWORD *)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
      v10 = v13;
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( a4 )
        {
          v11 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( v11 == 257 )
          {
            if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v10) )
            {
              v11 = -1073741536;
            }
            else
            {
              PnpCancelDeviceActionRequest((__int64)v10);
              v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      if ( v10 )
        PnpDeleteDeviceActionRequest(v10);
    }
    else
    {
      v11 = -1073741810;
    }
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v11;
}
