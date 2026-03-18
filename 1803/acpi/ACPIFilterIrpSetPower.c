/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C0024BB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIBuildRegRequest @ 0x1C001104C (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C001B1CC (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001BA88 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C00210C0 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C0029AA4 (ACPIInternalCheckPowerReferences.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  ULONG_PTR v3; // rbp
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  KIRQL v12; // al
  _QWORD *v13; // r12
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  ULONG_PTR v16; // rbp
  KIRQL v17; // al
  KIRQL v18; // r13
  void *v19; // r12
  __int64 (__fastcall *v20)(); // r8
  _IO_STACK_LOCATION *v21; // rax
  _IO_STACK_LOCATION *v22; // rax
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  v3 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0 )
      v7 = AMLIGetNamedChild(*(_QWORD **)(DeviceExtension + 712), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    {
      *(_BYTE *)(v6 + 508) = 1;
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      v8 = *(_QWORD **)(v6 + 368);
      if ( v8 )
      {
        do
        {
          v9 = v8[1];
          v8 = (_QWORD *)*v8;
          if ( (*(_DWORD *)(v9 + 16) & 0x810LL) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(v9 + 16), 0x800uLL);
        }
        while ( v8 );
        v10 = *(_QWORD **)(v6 + 368);
        if ( v10 )
        {
          do
          {
            v11 = v10[1];
            v10 = (_QWORD *)*v10;
            if ( (*(_BYTE *)(v11 + 16) & 0x10) == 0 )
            {
              v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
              v13 = (_QWORD *)(v11 + 48);
              v14 = *(_QWORD **)(v11 + 48);
              v25 = (_QWORD *)(v11 + 48);
              if ( v14 != (_QWORD *)(v11 + 48) )
              {
                do
                {
                  v15 = v14 - 5;
                  v14 = (_QWORD *)*v14;
                  v16 = v15[4];
                  if ( *((_DWORD *)v15 + 5) == 1 )
                  {
                    KeReleaseSpinLock(&AcpiPowerLock, v12);
                    v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                    v18 = v17;
                    if ( !v16 || v16 == v6 || (unsigned int)(*(_DWORD *)(v16 + 320) - 2) > 1 || *(_BYTE *)(v16 + 508) )
                    {
                      KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
                    }
                    else
                    {
                      v19 = *(void **)(v16 + 736);
                      if ( v19 )
                      {
                        ACPIInitReferenceDeviceExtension(v16);
                        ObfReferenceObject(v19);
                        KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
                        if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v16) == 1 )
                        {
                          *(_BYTE *)(v16 + 508) = 1;
                          PoFxNotifySurprisePowerOn(v19);
                        }
                        ObfDereferenceObject(v19);
                        ACPIInitDereferenceDeviceExtensionUnlocked(v16);
                      }
                      else
                      {
                        KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
                      }
                      v13 = v25;
                    }
                    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
                  }
                }
                while ( v14 != v13 );
              }
              KeReleaseSpinLock(&AcpiPowerLock, v12);
            }
          }
          while ( v10 );
          v3 = a1;
        }
      }
      v20 = (__int64 (__fastcall *)())ACPIDeviceIrpDelayedDeviceOnRequest;
      if ( !v7 )
        v20 = (__int64 (__fastcall *)())ACPIDeviceIrpForwardRequest;
      ACPIDeviceIrpDeviceRequest(v3, (__int64)a2, v20);
    }
    else if ( v7 )
    {
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      ACPIBuildRegRequest(
        v3,
        (__int64)a2,
        (void (__fastcall *)(__int64, __int64, _QWORD))ACPIDeviceIrpDelayedDeviceOffRequest);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      v21 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v21[-1].MajorFunction = *(_OWORD *)&v21->MajorFunction;
      *(_OWORD *)&v21[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v21->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v21[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v21->Parameters.SetQuota + 6);
      v21[-1].FileObject = v21->FileObject;
      v21[-1].Control = 0;
      v22 = a2->Tail.Overlay.CurrentStackLocation;
      v22[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
      v22[-1].Context = ACPIDeviceIrpCompleteRequest;
      v22[-1].Control = -32;
      PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 728), a2);
    }
    if ( v7 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 680), 1u);
    ACPIDeviceIrpWarmEjectRequest(
      (_QWORD *)DeviceExtension,
      (__int64)a2,
      (void (__fastcall *)(__int64, __int64, _QWORD))ACPIDeviceIrpForwardRequest,
      0);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(v3, a2);
  }
  return 259LL;
}
