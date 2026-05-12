/*
 * XREFs of RaidAdapterReInitialize @ 0x1C002DBEC
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportHwInitialize @ 0x1C0019FC4 (RaCallMiniportHwInitialize.c)
 *     RaCallMiniportFindAdapter @ 0x1C001A5F4 (RaCallMiniportFindAdapter.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  KIRQL v6; // bl
  int v7; // esi
  char v8; // cl
  GUID v9; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1 + 296;
  strcpy((char *)&v9, "wakeup=1");
  result = RaCallMiniportFindAdapter((PVOID *)(a1 + 296), &v9, a3);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v6 = RaidAdapterAcquireInterruptLock(a1);
    v7 = RaCallMiniportHwInitialize(v3);
    RaidAdapterReleaseInterruptLock(a1, v6);
    v8 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v8;
    if ( v7 >= 0 )
      *(_BYTE *)(a1 + 104) = v8 | 1;
    return (unsigned int)v7;
  }
  return result;
}
