/*
 * XREFs of UsbhGenDispatch @ 0x1C0010810
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_c @ 0x1C0029394 (WPP_RECORDER_SF_c.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapBadIrp @ 0x1C003CE80 (UsbhTrapBadIrp.c)
 */

__int64 __fastcall UsbhGenDispatch(ULONG_PTR a1, IRP *a2, int a3)
{
  __int64 v3; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 (__fastcall *v7)(int, PIRP); // rax
  unsigned int Status; // ebx
  int MinorFunction; // ecx
  unsigned __int8 v12; // al
  int v13; // ecx
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax

  v3 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)v3 == 1329877064 )
  {
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    v7 = (__int64 (__fastcall *)(int, PIRP))off_1C005BF08[2 * CurrentStackLocation->MajorFunction];
    if ( (char *)v7 == (char *)&UsbhPdoPnp )
    {
      if ( !v3 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v3 != 1329877064 )
        UsbhTrapFatal_Dbg(a1, v3);
      MinorFunction = CurrentStackLocation->MinorFunction;
      *(_DWORD *)(v3 + 1164) = MinorFunction;
      *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 888), 1u) + 1) & 0xF)
               + v3
               + 892) = MinorFunction;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          a3,
          15,
          (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids,
          CurrentStackLocation->MinorFunction);
      v12 = CurrentStackLocation->MinorFunction;
      if ( v12 >= 0x20u )
      {
        Status = a2->IoStatus.Status;
        IofCompleteRequest(a2, 0);
        return Status;
      }
      v7 = (__int64 (__fastcall *)(int, PIRP))off_1C005BAC8[2 * v12];
    }
  }
  else
  {
    if ( *(_DWORD *)v3 != 541218120 )
    {
      Status = -1073741811;
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return Status;
    }
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    v7 = (__int64 (__fastcall *)(int, PIRP))off_1C005BD48[2 * CurrentStackLocation->MajorFunction];
    if ( (char *)v7 == (char *)UsbhFdoPnp )
    {
      if ( !v3 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v3 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v3);
      v13 = CurrentStackLocation->MinorFunction;
      *(_DWORD *)(v3 + 20) = v13;
      *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1264), 1u) + 1) & 0xF)
               + v3
               + 1268) = v13;
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( !*(_DWORD *)(v3 + 1256) || CurrentStackLocation->MinorFunction >= 0x20u )
      {
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
        v18 = FdoExt(a1);
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v18 + 1208), a2);
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
      v7 = off_1C005B8C8[2 * CurrentStackLocation->MinorFunction];
      if ( (char *)v7 == (char *)UsbhFdoPnp_DoDefault )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( !v15 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v15 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        v16 = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
        if ( (UsbhLogMask & 2) != 0 )
        {
          v17 = *(_QWORD *)(v15 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
          *(_DWORD *)v17 = 1717912678;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = v16;
          *(_QWORD *)(v17 + 24) = a2;
        }
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v15 + 1208), a2);
      }
    }
  }
  return ((unsigned int (__fastcall *)(ULONG_PTR))v7)(a1);
}
