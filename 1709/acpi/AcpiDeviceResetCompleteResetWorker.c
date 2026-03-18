/*
 * XREFs of AcpiDeviceResetCompleteResetWorker @ 0x1C004A8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     AcpiDeviceResetDereference @ 0x1C004AA70 (AcpiDeviceResetDereference.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C004AF58 (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiDeviceResetCompleteResetWorker(volatile signed __int32 *P)
{
  volatile signed __int32 *v1; // rdi
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r15
  __int64 v5; // r9
  _QWORD **v6; // rsi
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  char v9; // bl
  KIRQL v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  PIRP Irp; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  void *v17; // rbp
  __int64 v18; // rcx
  char v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  void (__fastcall *v22)(__int64); // [rsp+38h] [rbp-40h]
  void (__fastcall *v23)(__int64); // [rsp+40h] [rbp-38h]

  v1 = P;
  _InterlockedAdd(P, 1u);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = *((_QWORD *)v1 + 9);
  LOBYTE(v5) = v2;
  v6 = (_QWORD **)(v4 + 48);
  v7 = *(_QWORD **)(v4 + 48);
  if ( v7 != (_QWORD *)(v4 + 48) )
  {
    do
    {
      v8 = v7 - 5;
      v7 = (_QWORD *)*v7;
      v9 = AcpiResetDeviceAlreadyProcessed(v4, v8, v3, v5);
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      if ( !v9 && (v11 = v8[4]) != 0 && (v12 = *(_QWORD *)(v11 + 720)) != 0 )
        Irp = IoAllocateIrp(*(_BYTE *)(v12 + 76), 0);
      else
        Irp = 0LL;
      if ( Irp )
      {
        Irp->IoStatus.Information = 0LL;
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        Irp->IoStatus.Status = -1073741637;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&v20;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
        CurrentStackLocation[-1].Parameters.Create.Options = 65576;
        if ( (int)IoSynchronousCallDriver(*(_QWORD *)(v8[4] + 720LL), Irp) >= 0 )
        {
          v23(v21);
          v22(v21);
        }
        IoFreeIrp(Irp);
      }
      LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    }
    while ( v7 != v6 );
    v1 = P;
  }
  v15 = *v6;
  while ( v15 != v6 )
  {
    v16 = *(v15 - 1);
    v15 = (_QWORD *)*v15;
    v17 = *(void **)(v16 + 904);
    *(_QWORD *)(v16 + 904) = 0LL;
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    if ( v17 )
      AcpiDeviceResetDereference(v17);
    LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  v18 = *((_QWORD *)v1 + 3);
  if ( v18 )
  {
    *(_DWORD *)(v18 + 48) = *((_DWORD *)v1 + 8);
    IofCompleteRequest(*((PIRP *)v1 + 3), 0);
  }
  *((_QWORD *)v1 + 3) = 0LL;
  return AcpiDeviceResetDereference((PVOID)v1);
}
