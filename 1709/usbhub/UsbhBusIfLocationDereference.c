/*
 * XREFs of UsbhBusIfLocationDereference @ 0x1C0027370
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhBusIfLocationDereference(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1176);
  if ( !v1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  result = *(_QWORD *)(v1 + 64);
  if ( !result )
    UsbhTrapFatal_Dbg(v1, 0LL);
  if ( *(_DWORD *)result != 541218120 )
    UsbhTrapFatal_Dbg(v1, *(_QWORD *)(v1 + 64));
  _InterlockedDecrement((volatile signed __int32 *)(result + 3420));
  return result;
}
