/*
 * XREFs of UsbhFdoPnp_DoDefault @ 0x1C0025E50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_DoDefault(__int64 a1, IRP *a2)
{
  __int64 v2; // r8
  __int64 MinorFunction; // r9
  __int64 v4; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v2 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (UsbhLogMask & 2) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
    *(_DWORD *)v4 = 1717912678;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = MinorFunction;
    *(_QWORD *)(v4 + 24) = a2;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 1208), a2);
}
