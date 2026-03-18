/*
 * XREFs of UsbhGenDispatch @ 0x1C0012330
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_c @ 0x1C002845C (WPP_RECORDER_SF_c.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapBadIrp @ 0x1C003BB00 (UsbhTrapBadIrp.c)
 */

__int64 __fastcall UsbhGenDispatch(ULONG_PTR a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rdx
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR); // rax
  unsigned int Status; // edi
  int MinorFunction; // ecx
  unsigned __int8 v12; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v5 == 1329877064 )
  {
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    v7 = off_1C005AF08[2 * CurrentStackLocation->MajorFunction];
    if ( (char *)v7 == (char *)&UsbhPdoPnp )
    {
      if ( !v5 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v5 != 1329877064 )
        UsbhTrapFatal_Dbg(a1, v5);
      MinorFunction = CurrentStackLocation->MinorFunction;
      *(_DWORD *)(v5 + 1164) = MinorFunction;
      *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 888), 1u) + 1) & 0xF)
               + v5
               + 892) = MinorFunction;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
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
      v7 = (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))off_1C005AAC8[2 * v12];
    }
    return (unsigned int)v7(a1, (ULONG_PTR)a2);
  }
  else
  {
    if ( *(_DWORD *)v5 != 541218120 )
    {
      Status = -1073741811;
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return Status;
    }
    if ( CurrentStackLocation->MajorFunction > 0x1Bu )
      UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
    return ((unsigned int (__fastcall *)(ULONG_PTR, IRP *))off_1C005AD48[2 * CurrentStackLocation->MajorFunction])(
             a1,
             a2);
  }
}
