/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x140006F84
 * Callers:
 *     PnpSendIrp @ 0x140006EE4 (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x140604510 (PnpCallAddDevice.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     KeAndGroupAffinityEx @ 0x1400D3700 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PnpSetDeviceAffinityThread(__int64 a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v3; // r9d
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !a1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 660);
  if ( v3 > 0xFFFFFFFD )
    return 0LL;
  if ( v3 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  KeQueryNodeActiveAffinity(v3, &Affinity, 0LL);
  KeAndGroupAffinityEx(KeActiveProcessors, &Affinity, &Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
