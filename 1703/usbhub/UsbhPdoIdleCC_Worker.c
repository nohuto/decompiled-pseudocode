/*
 * XREFs of UsbhPdoIdleCC_Worker @ 0x1C0057690
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhIdleIrp_Event @ 0x1C0056EE8 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhPdoIdleCC_Worker(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rbp
  KIRQL v7; // al
  int v8; // ebx
  PIRP v9; // rbx
  __int64 *v10; // r10
  __int64 v11; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  v6 = (__int64)v5;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_ffb6dafc59903cb34fef89ac9d19df64_Traceguids,
      *((unsigned __int16 *)v5 + 710));
  Log(a1, 0x10000, 1768189015, a3, *(unsigned __int16 *)(v6 + 1420));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2040));
  v8 = *(_DWORD *)(v6 + 1528);
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2040), v7);
  if ( v8 == 1 )
  {
    KeWaitForSingleObject((PVOID)(v6 + 2048), Executive, 0, 0, 0LL);
    v9 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 1456), 0LL);
    Log(a1, 16, 1919764785, a3, (__int64)v9);
    if ( v9 )
    {
      UsbhIdleIrp_Event(a1, a3, v9, 2, 0);
      KeSetEvent((PRKEVENT)(v6 + 2048), 0, 0);
      if ( *(_DWORD *)(v6 + 792) == 1 )
      {
        Log(
          a1,
          16,
          1231249969,
          (__int64)v9->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters,
          (__int64)v9);
        if ( v10 )
        {
          if ( *v10 )
          {
            Log(a1, 16, 1231249970, *v10, v10[1]);
            (*(void (__fastcall **)(_QWORD))v11)(*(_QWORD *)(v11 + 8));
          }
        }
      }
      KeWaitForSingleObject((PVOID)(v6 + 2048), Executive, 0, 0, 0LL);
      UsbhIdleIrp_Event(a1, a3, v9, 4, *(_DWORD *)(v6 + 1432));
      KeSetEvent((PRKEVENT)(v6 + 2048), 0, 0);
    }
    else
    {
      KeSetEvent((PRKEVENT)(v6 + 2048), 0, 0);
      UsbhIdleIrp_Event(a1, a3, 0LL, 3, 0);
    }
    UsbhUnlatchPdo(a1, a3, v6, 0x656C6449u);
  }
  else
  {
    UsbhUnlatchPdo(a1, a3, v6, 0x656C6449u);
    Log(a1, 0x10000, 1768189006, a3, *(unsigned __int16 *)(v6 + 1420));
  }
}
