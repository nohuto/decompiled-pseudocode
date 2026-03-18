/*
 * XREFs of UsbhIdleIrp_WaitWorker @ 0x1C00573B8
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0056DEC (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001350 (UsbhSetIdleIrpState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00572C0 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_WaitWorker(ULONG_PTR a1, ULONG_PTR a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 v12; // rcx
  int v13; // r9d

  Log(a1, 0x10000, 1936938871, a2, (__int64)a3);
  v11 = PdoExt(v10);
  switch ( a4 )
  {
    case 1:
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState((unsigned int)(a4 - 1), a2, 1, 1, NewIrql);
      v13 = -2147483631;
      break;
    case 2:
      UsbhSetIdleIrpState((unsigned int)(a4 - 2), a2, 2, 2, NewIrql);
      return 259LL;
    case 3:
      UsbhSetIdleIrpState((unsigned int)(a4 - 3), a2, 3, 0, NewIrql);
      return 0LL;
    default:
      v12 = (unsigned int)(a4 - 5);
      if ( a4 == 5 )
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v12, a2, 5, 0, NewIrql);
        v13 = v11[358];
      }
      else if ( a4 == 6 )
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v12, a2, 6, 0, NewIrql);
        v13 = -1073741536;
      }
      else
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v12, a2, a4, a5, NewIrql);
        v13 = -1073741823;
      }
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
}
