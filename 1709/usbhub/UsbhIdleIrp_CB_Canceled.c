/*
 * XREFs of UsbhIdleIrp_CB_Canceled @ 0x1C0056A58
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0056DEC (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001350 (UsbhSetIdleIrpState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00572C0 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Canceled(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r9

  Log(a1, 0x10000, 1936938851, a2, a3);
  v11 = PdoExt(v10);
  v12 = (unsigned int)(a4 - 1);
  if ( a4 == 1 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(v12, a2, 1, a5, NewIrql);
    v13 = 2147483665LL;
  }
  else if ( a4 == 4 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(v12, a2, 4, 0, NewIrql);
    v13 = (unsigned int)v11[358];
  }
  else
  {
    UsbhSetIdleIrpState(v12, a2, a4, a5, NewIrql);
    v13 = 3221225473LL;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
}
