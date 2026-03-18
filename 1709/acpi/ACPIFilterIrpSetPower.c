/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C002B480
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002A000 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIBuildRegRequest @ 0x1C004433C (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0048978 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C004B170 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C004F960 (ACPIInternalCheckPowerReferences.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rbp
  _IO_STACK_LOCATION *v8; // rax
  _IO_STACK_LOCATION *v9; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  KIRQL v15; // al
  _QWORD *v16; // r12
  _QWORD *v17; // r15
  _QWORD *v18; // rcx
  ULONG_PTR v19; // rsi
  KIRQL v20; // al
  void *v21; // r12
  __int64 (__fastcall *v22)(); // r8
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]
  _QWORD *v24; // [rsp+70h] [rbp+18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0 )
      v7 = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 712), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    {
      *(_BYTE *)(v6 + 508) = 1;
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      v11 = *(_QWORD **)(v6 + 368);
      while ( v11 )
      {
        v12 = v11[1];
        v11 = (_QWORD *)*v11;
        if ( (*(_DWORD *)(v12 + 16) & 0x810LL) == 0 )
          _InterlockedOr64((volatile signed __int64 *)(v12 + 16), 0x800uLL);
      }
      v13 = *(_QWORD **)(v6 + 368);
      while ( v13 )
      {
        v14 = v13[1];
        v13 = (_QWORD *)*v13;
        if ( (*(_BYTE *)(v14 + 16) & 0x10) == 0 )
        {
          v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v16 = (_QWORD *)(v14 + 48);
          v17 = *(_QWORD **)(v14 + 48);
          v24 = (_QWORD *)(v14 + 48);
          while ( v17 != v16 )
          {
            v18 = v17 - 5;
            v17 = (_QWORD *)*v17;
            v19 = v18[4];
            if ( *((_DWORD *)v18 + 5) == 1 )
            {
              KeReleaseSpinLock(&AcpiPowerLock, v15);
              v20 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
              NewIrql = v20;
              if ( !v19 || v19 == v6 || (unsigned int)(*(_DWORD *)(v19 + 320) - 2) > 1 || *(_BYTE *)(v19 + 508) )
              {
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
              }
              else
              {
                v21 = *(void **)(v19 + 736);
                if ( v21 )
                {
                  ACPIInitReferenceDeviceExtension(v19);
                  ObfReferenceObject(v21);
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, NewIrql);
                  if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v19) == 1 )
                  {
                    *(_BYTE *)(v19 + 508) = 1;
                    PoFxNotifySurprisePowerOn(v21);
                  }
                  ObfDereferenceObject(v21);
                  ACPIInitDereferenceDeviceExtensionUnlocked(v19);
                }
                else
                {
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
                }
                v16 = v24;
              }
              v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
            }
          }
          KeReleaseSpinLock(&AcpiPowerLock, v15);
        }
      }
      v22 = (__int64 (__fastcall *)())&ACPIDeviceIrpDelayedDeviceOnRequest;
      if ( !v7 )
        v22 = (__int64 (__fastcall *)())&ACPIDeviceIrpForwardRequest;
      ACPIDeviceIrpDeviceRequest(a1, (__int64)a2, v22);
    }
    else if ( v7 )
    {
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      ACPIBuildRegRequest(a1, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = 0;
      v9 = a2->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
      v9[-1].Context = ACPIDeviceIrpCompleteRequest;
      v9[-1].Control = -32;
      PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 728), a2);
    }
    if ( v7 )
      AMLIDereferenceHandleEx((__int64)v7);
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 680), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, &ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  return 259LL;
}
