/*
 * XREFs of UsbhFdoPnp @ 0x1C00080A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall UsbhFdoPnp(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int MinorFunction; // ecx
  KIRQL v7; // al
  __int64 (__fastcall *v8)(); // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _DEVICE_OBJECT *v13; // rcx
  __int64 v14; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *(_DWORD *)(v4 + 20) = MinorFunction;
  *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1264), 1u) + 1) & 0xF)
           + v4
           + 1268) = MinorFunction;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *(_DWORD *)(v4 + 1256) && CurrentStackLocation->MinorFunction < 0x20u )
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v7);
    v8 = (__int64 (__fastcall *)())off_1C005B8C8[2 * CurrentStackLocation->MinorFunction];
    if ( v8 != UsbhFdoPnp_DoDefault )
      return ((__int64 (__fastcall *)(__int64, IRP *))v8)(a1, a2);
    v10 = *(_QWORD *)(a1 + 64);
    if ( !v10 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v10 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v11 = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( (UsbhLogMask & 2) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v12 = 1717912678;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v12 + 24) = a2;
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v13 = *(struct _DEVICE_OBJECT **)(v10 + 1208);
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v7);
    v14 = FdoExt(a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v13 = *(struct _DEVICE_OBJECT **)(v14 + 1208);
  }
  return IofCallDriver(v13, a2);
}
