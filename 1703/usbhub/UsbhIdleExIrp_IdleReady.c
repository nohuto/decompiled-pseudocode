/*
 * XREFs of UsbhIdleExIrp_IdleReady @ 0x1C00569E0
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0056EE8 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001350 (UsbhSetIdleIrpState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleExIrp_IdleReady(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL a6)
{
  __int64 v10; // rcx
  _DWORD *v11; // r14
  __int64 v12; // r9

  Log(a1, 0x10000, 1936938851, a2, a3);
  v11 = PdoExt(a2);
  switch ( a4 )
  {
    case 1:
      goto LABEL_10;
    case 5:
      UsbhSetIdleIrpState(v10, a2, 5, 0, a6);
      v12 = (unsigned int)v11[358];
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    case 6:
      UsbhSetIdleIrpState(v10, a2, 6, 0, a6);
      v12 = 3221225760LL;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    case 7:
LABEL_10:
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v10, a2, a4, 5, a6);
      v12 = 2147483665LL;
      break;
    case 8:
      UsbhSetIdleIrpState(v10, a2, 8, 0, a6);
      v12 = 0LL;
      break;
    default:
      UsbhSetIdleIrpState(v10, a2, a4, a5, a6);
      v12 = 3221225473LL;
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
}
