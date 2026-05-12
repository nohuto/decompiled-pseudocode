/*
 * XREFs of RaidAdapterReInitialize @ 0x1C0027198
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaCallMiniportHwInitialize @ 0x1C00249CC (RaCallMiniportHwInitialize.c)
 *     RaCallMiniportFindAdapter @ 0x1C002E8E0 (RaCallMiniportFindAdapter.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  KIRQL v4; // bl
  int v5; // esi
  char v6; // cl
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 296;
  strcpy(v7, "wakeup=1");
  result = RaCallMiniportFindAdapter(a1 + 296, v7);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v4 = RaidAdapterAcquireInterruptLock(a1);
    v5 = RaCallMiniportHwInitialize(v1);
    RaidAdapterReleaseInterruptLock(a1, v4);
    v6 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v6;
    if ( v5 >= 0 )
      *(_BYTE *)(a1 + 104) = v6 | 1;
    return (unsigned int)v5;
  }
  return result;
}
