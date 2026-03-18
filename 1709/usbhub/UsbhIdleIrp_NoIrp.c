/*
 * XREFs of UsbhIdleIrp_NoIrp @ 0x1C0056F70
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0056DEC (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001350 (UsbhSetIdleIrpState.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhSetPdoIdleReady @ 0x1C0024AC0 (UsbhSetPdoIdleReady.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00256A0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00572C0 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_NoIrp(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v7; // rbx
  _DWORD *v10; // r14
  _DWORD *v11; // r15
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // r9
  int v15; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx

  v7 = a4;
  v10 = PdoExt(a2);
  v11 = FdoExt(a1);
  Log(a1, 0x10000, 1936936521, a2, (__int64)a3);
  Log(a1, 0x10000, 1936936498, 0LL, v7);
  if ( (_DWORD)v7 == 1 )
  {
    UsbhEtwLogDeviceIrpEvent((__int64)v10, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_DISPATCH);
    if ( (v10[353] & 2) == 0 && v11[820] != 6 )
    {
      if ( UsbhLatchPdo(a1, *((_WORD *)v10 + 710), (__int64)v10, 0x656C6449u) != a2 )
      {
        if ( !a3 )
          UsbhTrapFatal_Dbg(a1, a1);
        UsbhSetIdleIrpState(v18, a2, 1, 0, NewIrql);
        Log(a1, 0x10000, 1768180019, a2, (__int64)a3);
        v14 = 3221225486LL;
        return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
      }
      UsbhSetIdleIrpState(v18, a2, 1, 1, NewIrql);
      v10[358] = 0;
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      Log(*((_QWORD *)v10 + 147), 16, 1768180018, 0LL, (__int64)a3);
      IoCsqInsertIrp((PIO_CSQ)(v10 + 364), a3, 0LL);
      UsbhQueueWorkItemWithRetry(a1, (__int64)(v10 + 384), (__int64)UsbhPdoIdleCC_Worker, 0, a2, 0, 0x69505353u);
      return 259;
    }
    UsbhSetIdleIrpState(v17, a2, 1, 1, NewIrql);
    v15 = 1768180017;
LABEL_26:
    a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    Log(*((_QWORD *)v10 + 147), 16, v15, 0LL, (__int64)a3);
    IoCsqInsertIrp((PIO_CSQ)(v10 + 364), a3, 0LL);
    return 259;
  }
  if ( (_DWORD)v7 != 3 )
  {
    if ( (_DWORD)v7 == 5 )
    {
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v12, a2, 5, v13, NewIrql);
      v14 = (unsigned int)v10[358];
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
    }
    if ( (_DWORD)v7 == 6 )
    {
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v12, a2, 6, v13, NewIrql);
      v14 = 3221225760LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
    }
    if ( (_DWORD)v7 != 7 )
    {
      UsbhSetIdleIrpState(v12, a2, v7, a5, NewIrql);
      v14 = 3221225473LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
    }
    if ( !a3 )
      UsbhTrapFatal_Dbg(a1, a1);
    UsbhSetIdleIrpState(v12, a2, 7, 5, NewIrql);
    UsbhSetPdoIdleReady(a1, a2, (__int64)a3);
    v15 = 1768180020;
    goto LABEL_26;
  }
  UsbhSetIdleIrpState(v12, a2, 3, v13, NewIrql);
  return 0;
}
