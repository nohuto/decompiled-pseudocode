/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x1C00188B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  int v6; // ecx
  const GUID *v7; // rdx
  NTSTATUS v8; // eax
  unsigned int v9; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v11; // rcx
  _IO_STACK_LOCATION *v13; // rax
  int v14; // [rsp+60h] [rbp-98h] BYREF
  _DWORD v15[4]; // [rsp+68h] [rbp-90h] BYREF
  int v16; // [rsp+78h] [rbp-80h] BYREF
  __int16 v17; // [rsp+7Ch] [rbp-7Ch]
  __int16 v18; // [rsp+7Eh] [rbp-7Ah]
  __int16 v19; // [rsp+80h] [rbp-78h]
  __int16 v20; // [rsp+82h] [rbp-76h]
  _BYTE v21[16]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v22[40]; // [rsp+98h] [rbp-60h] BYREF

  Log((__int64)DeviceObject, 16, 1716999979, 0LL, (__int64)Tag);
  v4 = FdoExt((__int64)DeviceObject);
  v14 = 0;
  v15[0] = 0;
  if ( dword_1C0069650 )
  {
    v5 = FdoExt((__int64)DeviceObject);
    v16 = v5[1298];
    v17 = *((_WORD *)v5 + 2598);
    v6 = v5[1300];
    v18 = v6;
    v15[2] = v6;
    v19 = *((_WORD *)v5 + 2614);
    v20 = *((_WORD *)v5 + 2615);
    UsbhEtwGetHubInfo((__int64)v5, (__int64)v22);
    if ( Tag && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(Tag, v21) >= 0 )
      v7 = (const GUID *)v21;
    else
      v7 = 0LL;
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH,
      v7,
      (unsigned __int64)&v16,
      12LL,
      v22,
      36LL,
      v15,
      4LL,
      &v14,
      4LL,
      0LL);
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Tag, File, 1u, 0x20u);
  v9 = v8;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v8;
    Log((__int64)DeviceObject, 16, 1717000050, v8, (__int64)Tag);
    UsbhEtwLogHubIrpEvent(DeviceObject, Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, v9);
    IofCompleteRequest(Tag, 0);
    return v9;
  }
  else
  {
    *((_QWORD *)v4 + 611) = Tag;
    if ( _InterlockedCompareExchange(v4 + 1221, 4, 2) == 3 )
    {
      v4[1221] = 7;
      Log((__int64)DeviceObject, 16, 1716999985, 0LL, (__int64)Tag);
      UsbhEtwLogHubIrpEvent(DeviceObject, Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, -1073741536);
      Tag->IoStatus.Status = -1073741536;
      IofCompleteRequest(Tag, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Tag, 0x20u);
      return 3221225760LL;
    }
    else
    {
      Tag->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                             + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(
             DeviceObject,
             Tag,
             (PIO_COMPLETION_ROUTINE)UsbhFdoWaitWake_IoCompletion,
             0LL,
             1u,
             1u,
             1u) < 0 )
      {
        v13 = Tag->Tail.Overlay.CurrentStackLocation;
        v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v13[-1].Context = 0LL;
        v13[-1].Control = -32;
      }
      Log((__int64)DeviceObject, 16, 1716999986, 0LL, (__int64)Tag);
      v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)v4 + 151);
      v4[640] &= ~0x20000u;
      PoCallDriver(v11, Tag);
      return 259LL;
    }
  }
}
