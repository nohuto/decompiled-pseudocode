/*
 * XREFs of UsbhPostInterrupt @ 0x1C000B700
 * Callers:
 *     UsbhBusPause_Action @ 0x1C000D4D0 (UsbhBusPause_Action.c)
 *     UsbhBusResume_Action @ 0x1C000E6C0 (UsbhBusResume_Action.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0044560 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhPostInterrupt(PDEVICE_OBJECT DeviceObject)
{
  void *DeviceExtension; // rdx
  __int64 v3; // rcx
  unsigned __int16 *v4; // rdi
  IRP *v5; // rbp
  unsigned __int64 v6; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 v9; // r8
  void *v10; // rdx
  __int64 v11; // rcx
  _IO_STACK_LOCATION *v12; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
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
  IoInitializeIrp(v5, 72 * *(char *)(*((_QWORD *)v4 + 151) + 76LL) + 208, *(_BYTE *)(*((_QWORD *)v4 + 151) + 76LL));
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  if ( _InterlockedIncrement((volatile signed __int32 *)v4 + 678) )
  {
    if ( IoSetCompletionRoutineEx(DeviceObject, v5, UsbhHubIsr, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v12 = v5->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhHubIsr;
      v12[-1].Context = DeviceObject;
      v12[-1].Control = -32;
    }
    result = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 151), v5);
    v9 = result;
    if ( (UsbhLogMask & 4) != 0 )
    {
      v10 = DeviceObject->DeviceExtension;
      if ( v10 )
      {
        result = 1047621993;
        v11 = *((_QWORD *)v10 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
        *(_DWORD *)v11 = 1047621993;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v9;
        *(_QWORD *)(v11 + 24) = 0LL;
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
