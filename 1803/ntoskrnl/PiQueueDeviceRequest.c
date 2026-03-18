/*
 * XREFs of PiQueueDeviceRequest @ 0x14073B9A0
 * Callers:
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiControlStartDevice @ 0x14073B260 (PiControlStartDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x140146378 (PnpDeleteDeviceActionRequest.c)
 *     PnpCancelDeviceActionRequest @ 0x14023C514 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14023C56C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v7; // rax
  void *v8; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v13; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  if ( a5 )
    *(_DWORD *)a5 = 0;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7[39] + 40LL) )
    {
      if ( a4 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = PnpRequestDeviceAction(
              v8,
              a2,
              0,
              0LL,
              (unsigned __int64)&Event & -(__int64)(a4 != 0),
              a5 & -(__int64)(a4 != 0),
              (_QWORD *)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
      v11 = v13;
      v9 = v10;
      if ( v10 >= 0 )
      {
        if ( a4 )
        {
          v9 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( v9 == 257 )
          {
            if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v11) )
            {
              v9 = -1073741536;
            }
            else
            {
              PnpCancelDeviceActionRequest((__int64)v11);
              v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      if ( v11 )
        PnpDeleteDeviceActionRequest(v11);
    }
    else
    {
      v9 = -1073741810;
    }
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v9;
}
