/*
 * XREFs of UsbhIdleIrp_CB_Pending @ 0x1C0056D9C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0056EE8 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001350 (UsbhSetIdleIrpState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00573BC (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Pending(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL a6)
{
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r9

  Log(a1, 0x10000, 1936938851, a2, (__int64)a3);
  v11 = PdoExt(v10);
  if ( a4 == 1 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState((unsigned int)(a4 - 1), a2, 1, 2, a6);
    v13 = 2147483665LL;
    return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
  }
  v12 = (unsigned int)(a4 - 4);
  if ( a4 == 4 )
  {
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    if ( a3->Cancel )
    {
      UsbhSetIdleIrpState(v12, a2, 4, 0, a6);
      v13 = 3221225760LL;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
    }
    UsbhSetIdleIrpState(v12, a2, 4, 4, a6);
    IoCsqInsertIrp((PIO_CSQ)(v11 + 364), a3, 0LL);
    return 259LL;
  }
  if ( a4 == 5 )
  {
    UsbhSetIdleIrpState(v12, a2, 5, 3, a6);
    return 259LL;
  }
  UsbhSetIdleIrpState(v12, a2, a4, a5, a6);
  v13 = 3221225473LL;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
}
