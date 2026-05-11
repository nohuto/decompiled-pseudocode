/*
 * XREFs of PropertyGetAudioPositionEx @ 0x1C0017E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C0002234 (WPP_RECORDER_SF_ii.c)
 *     WmiLogStreamPosition @ 0x1C0002420 (WmiLogStreamPosition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyGetAudioPositionEx(IRP *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  PKSPIN PinFromIrp; // rax
  __int64 v6; // r8
  _QWORD *Context; // rsi

  v4 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(a1);
  v6 = (__int64)PinFromIrp;
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    if ( *((_BYTE *)Context + 38) )
    {
      v4 = -1073741130;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(PKSPIN, _QWORD *))(*(_QWORD *)(Context[16] + 128LL) + 56LL))(PinFromIrp, a3);
      a3[3] = Context[8];
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ii(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a3[2],
        v6,
        0xAu,
        (__int64)&WPP_5cf5875bba0134d2df7a678813e90d01_Traceguids,
        a3[2],
        a3[3]);
  }
  WmiLogStreamPosition(a3, v4);
  return v4;
}
