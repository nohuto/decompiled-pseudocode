/*
 * XREFs of IopFreeBandwidthContract @ 0x1406918FC
 * Callers:
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopAllocateIrpMustSucceed @ 0x1400ED940 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rbx
  __int64 v9; // rax
  struct _KEVENT *p_Event; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+70h] [rbp-10h]

  result = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v14[0] = 0LL;
      v14[1] = 0LL;
      v15 = 0;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)MustSucceed;
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
      *(_QWORD *)(MustSucceed + 72) = v11;
      v9 = *(_QWORD *)(MustSucceed + 184);
      *(_BYTE *)(v9 - 72) = 6;
      *(_QWORD *)(v9 - 24) = Object;
      *(_DWORD *)(v9 - 64) = 20;
      *(_DWORD *)(v9 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)v14;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v8);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        p_Event = &Object->Event;
        if ( !v4 )
          p_Event = &Event;
        KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
      }
      result = v11[0];
      if ( LODWORD(v11[0]) != -1073741670 && LODWORD(v11[0]) != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
