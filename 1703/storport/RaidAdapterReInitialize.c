/*
 * XREFs of RaidAdapterReInitialize @ 0x1C002CC6C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportHwInitialize @ 0x1C0010814 (RaCallMiniportHwInitialize.c)
 *     RaCallMiniportFindAdapter @ 0x1C0010DCC (RaCallMiniportFindAdapter.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  KIRQL v7; // bl
  int v8; // esi
  char v9; // cl
  GUID v10; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1 + 296;
  strcpy((char *)&v10, "wakeup=1");
  result = RaCallMiniportFindAdapter((PVOID *)(a1 + 296), &v10, a3, a4);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v7 = RaidAdapterAcquireInterruptLock(a1);
    v8 = RaCallMiniportHwInitialize(v4);
    RaidAdapterReleaseInterruptLock(a1, v7);
    v9 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v9;
    if ( v8 >= 0 )
      *(_BYTE *)(a1 + 104) = v9 | 1;
    return (unsigned int)v8;
  }
  return result;
}
