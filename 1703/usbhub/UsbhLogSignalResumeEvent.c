/*
 * XREFs of UsbhLogSignalResumeEvent @ 0x1C0007CB0
 * Callers:
 *     UsbhiSignalResumeEvent @ 0x1C0007C00 (UsbhiSignalResumeEvent.c)
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhLogSignalResumeEvent(__int64 a1, __int64 a2)
{
  int v3; // r14d
  unsigned int v4; // edi
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // bp
  int v7; // r10d

  v3 = a1;
  v4 = 0;
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  Log(v3, 16, 1936282195, *(_DWORD *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    Log(v3, v7, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v5, v6);
  return v4;
}
