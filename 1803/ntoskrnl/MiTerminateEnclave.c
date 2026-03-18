/*
 * XREFs of MiTerminateEnclave @ 0x140752D34
 * Callers:
 *     NtTerminateEnclave @ 0x140753BEC (NtTerminateEnclave.c)
 * Callees:
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiTerminateHardwareEnclave @ 0x140752DD8 (MiTerminateHardwareEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14077F9C8 (PsDereferenceVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14077FC80 (PsTerminateVsmEnclave.c)
 */

__int64 __fastcall MiTerminateEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v9; // rsi
  unsigned int v10; // ebx

  v4 = *(_DWORD *)(a2 + 64);
  v6 = a3;
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 8) == 0 )
      MiTerminateHardwareEnclave(a1, a2);
    return 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(volatile signed __int64 **)(a2 + 72);
    if ( _InterlockedIncrement64(v9 + 2) <= 1 )
      __fastfail(0xEu);
    MiUnlockVad((__int64)CurrentThread, a2, a3, a4);
    v10 = PsTerminateVsmEnclave(v9, v6);
    PsDereferenceVsmEnclave((PVOID)v9);
    MiLockVad((__int64)CurrentThread, a2);
    return v10;
  }
}
