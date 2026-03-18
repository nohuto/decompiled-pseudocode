/*
 * XREFs of UsbhIncPdoIoCount @ 0x1C000A1B0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_WaitWake @ 0x1C00088F0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoSystemControl @ 0x1C0009EC0 (UsbhPdoSystemControl.c)
 *     UsbhCreatePdo @ 0x1C0016280 (UsbhCreatePdo.c)
 *     UsbhPdoDeviceControl @ 0x1C0028F30 (UsbhPdoDeviceControl.c)
 *     UsbhPdoPower_Sequence @ 0x1C0047110 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoSuccess @ 0x1C0056130 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhIncPdoIoCount(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  int v17; // [rsp+50h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = (KSPIN_LOCK *)(v7 + 1208);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1208));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1208), v9);
    return 3221225486LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      v12[3] = a2;
      v13 = v7 + 1216;
      LOBYTE(v17) = HIBYTE(a3);
      BYTE1(v17) = BYTE2(a3);
      BYTE2(v17) = BYTE1(a3);
      *((_DWORD *)v12 + 8) = a4;
      HIBYTE(v17) = a3;
      *(_DWORD *)v12 = v17;
      v14 = v12 + 1;
      v15 = *(_QWORD **)(v13 + 8);
      if ( *v15 != v13 )
        __fastfail(3u);
      *v14 = v13;
      v12[2] = v15;
      *v15 = v14;
      *(_QWORD *)(v13 + 8) = v14;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1256);
    }
    KeReleaseSpinLock(v8, v10);
    return 0LL;
  }
}
