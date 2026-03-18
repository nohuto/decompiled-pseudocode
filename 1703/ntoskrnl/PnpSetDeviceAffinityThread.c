/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x140080DB0
 * Callers:
 *     PnpSendIrp @ 0x140080D08 (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x1405C6CE0 (PnpCallAddDevice.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KeAndGroupAffinityEx @ 0x140080B50 (KeAndGroupAffinityEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PnpSetDeviceAffinityThread(__int64 a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v3; // r8d
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
  KeQueryNodeActiveAffinity(*(_WORD *)(a1 + 660), &Affinity, 0LL);
  KeAndGroupAffinityEx((unsigned __int16 *)KeActiveProcessors, (__int64)&Affinity, (char *)&Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
