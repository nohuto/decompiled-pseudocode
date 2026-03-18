/*
 * XREFs of IopFreeBandwidthContract @ 0x1407225F8
 * Callers:
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     IopAllocateIrpMustSucceed @ 0x140106AA0 (IopAllocateIrpMustSucceed.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rdi
  struct _KEVENT *p_Event; // rcx
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  result = 0LL;
  v13[0] = 0LL;
  v13[1] = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v15[0] = 0LL;
      v15[1] = 0LL;
      v16 = 0;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = Object;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(MustSucceed + 80) = p_Event;
      *(_QWORD *)(MustSucceed + 72) = v13;
      v10 = *(_QWORD *)(MustSucceed + 184);
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v10 - 72) = 6;
      *(_QWORD *)(v10 - 24) = Object;
      *(_DWORD *)(v10 - 64) = 20;
      *(_DWORD *)(v10 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)v15;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v8);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v11 = &Object->Event;
        if ( !v4 )
          v11 = &Event;
        KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
      }
      result = v13[0];
      if ( LODWORD(v13[0]) != -1073741670 && LODWORD(v13[0]) != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
