/*
 * XREFs of IopFreeBandwidthContract @ 0x1406BD638
 * Callers:
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140085890 (IopAllocateIrpMustSucceed.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 MustSucceed; // rax
  IRP *v7; // rbx
  __int64 v8; // rax
  struct _KEVENT *p_Event; // rcx
  _QWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+70h] [rbp-10h]

  result = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v13[0] = 0LL;
      v13[1] = 0LL;
      v14 = 0;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, RelatedDeviceObject->StackSize);
      v7 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = Object;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        *(_QWORD *)(MustSucceed + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        *(_QWORD *)(MustSucceed + 80) = &Event;
      }
      *(_QWORD *)(MustSucceed + 88) = 0LL;
      *(_QWORD *)(MustSucceed + 72) = v10;
      v8 = *(_QWORD *)(MustSucceed + 184);
      *(_BYTE *)(v8 - 72) = 6;
      *(_QWORD *)(v8 - 24) = Object;
      *(_DWORD *)(v8 - 64) = 20;
      *(_DWORD *)(v8 - 56) = 44;
      v7->UserBuffer = 0LL;
      v7->MdlAddress = 0LL;
      v7->AssociatedIrp.MasterIrp = (struct _IRP *)v13;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v7);
      if ( IofCallDriver(RelatedDeviceObject, v7) == 259 )
      {
        p_Event = &Object->Event;
        if ( !v4 )
          p_Event = &Event;
        KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
      }
      result = v10[0];
      if ( LODWORD(v10[0]) != -1073741670 && LODWORD(v10[0]) != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
