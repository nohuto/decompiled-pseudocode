/*
 * XREFs of UsbhPostInterrupt @ 0x1C000AE90
 * Callers:
 *     UsbhBusResume_Action @ 0x1C000E1D0 (UsbhBusResume_Action.c)
 *     UsbhBusPause_Action @ 0x1C000E8D0 (UsbhBusPause_Action.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043720 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhPostInterrupt(PDEVICE_OBJECT DeviceObject)
{
  void *DeviceExtension; // rdx
  __int64 v3; // rcx
  unsigned __int16 *v4; // rdi
  IRP *v5; // rbp
  unsigned __int64 v6; // r14
  __int16 v7; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // rcx
  _IO_STACK_LOCATION *v13; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( !DeviceObject )
      goto LABEL_19;
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v3 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v3 = 1047622249;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  if ( !DeviceObject )
LABEL_19:
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  v4 = (unsigned __int16 *)DeviceObject->DeviceExtension;
  if ( !v4 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v5 = (IRP *)*((_QWORD *)v4 + 333);
  v6 = *((_QWORD *)v4 + 334);
  if ( !v6 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  if ( !v5 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)v6 = 589952;
  *(_QWORD *)(v6 + 24) = *((_QWORD *)v4 + 330);
  *(_DWORD *)(v6 + 32) = 2;
  *(_DWORD *)(v6 + 36) = v4[1316];
  *(_QWORD *)(v6 + 40) = *((_QWORD *)v4 + 335);
  memset(*((void **)v4 + 335), 0, v4[1316]);
  *(_QWORD *)(v6 + 48) = 0LL;
  v7 = *(char *)(*((_QWORD *)v4 + 151) + 76LL);
  IoInitializeIrp(v5, 72 * v7 + 208, v7);
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  if ( _InterlockedIncrement((volatile signed __int32 *)v4 + 678) )
  {
    if ( IoSetCompletionRoutineEx(DeviceObject, v5, UsbhHubIsr, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v13 = v5->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhHubIsr;
      v13[-1].Context = DeviceObject;
      v13[-1].Control = -32;
    }
    result = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 151), v5);
    v10 = result;
    if ( (UsbhLogMask & 4) != 0 )
    {
      v11 = DeviceObject->DeviceExtension;
      if ( v11 )
      {
        result = 1047621993;
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_DWORD *)v12 = 1047621993;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  else
  {
    Log((_DWORD)DeviceObject, 4, 1769042750, 0, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)v4 + 678);
    return KeSetEvent((PRKEVENT)v4 + 112, 0, 0);
  }
  return result;
}
