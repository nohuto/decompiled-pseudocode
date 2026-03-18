/*
 * XREFs of UsbhCompletePdoWakeIrps @ 0x1C0003AC0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x1C00018C8 (UsbhCompletePdoWakeIrp.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhCompletePdoWakeIrps(__int64 a1)
{
  int v2; // r12d
  unsigned __int16 i; // di
  __int64 v4; // rdx
  __int64 v5; // rbp
  KIRQL v6; // al
  KIRQL v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rsi
  int v14; // [rsp+48h] [rbp-30h]

  v2 = 0;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v5 = 0LL;
    Log(a1, 256, 1817199695, i, 1885630295LL);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    v7 = v6;
    Log(a1, 8, 1735410772, i, 0LL);
    if ( i )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( !v8 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v8 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      if ( i <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      {
        v9 = *(_QWORD *)(v8 + 3056);
        if ( v9 )
        {
          Log(a1, 8, 1735410750, i, v9 + 2928LL * (i - 1));
          if ( v11 )
          {
            v5 = *(_QWORD *)(v11 + 392);
            if ( v5 )
              v5 = UsbhRefPdo(v10, *(_QWORD *)(v11 + 392), 0LL, 1885630295LL);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v7);
    if ( v5 )
    {
      v13 = PdoExt(v5);
      if ( (*(_DWORD *)(v13 + 1412) & 0x2000) != 0 && UsbhCompletePdoWakeIrp(a1, v5, 0) && (unsigned int)++v2 > 1 )
      {
        LOBYTE(v14) = 0;
        UsbhException(a1, 0, 97, 0, 0, 0, 0, usbfile_fdopwr_c, 3765, v14);
      }
      *(_DWORD *)(v13 + 1412) &= ~0x2000u;
      UsbhUnlatchPdo(a1, v5, 0LL, 1885630295LL);
    }
  }
  result = FdoExt(a1);
  *(_DWORD *)(result + 2560) &= ~0x4000000u;
  return result;
}
