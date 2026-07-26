/*
 * XREFs of NdisMSendResourcesAvailable @ 0x1C0053DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMQueueWorkItem @ 0x1C00605C4 (ndisMQueueWorkItem.c)
 */

void __fastcall NdisMSendResourcesAvailable(__int64 a1)
{
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x1Au, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  if ( *(_QWORD *)(a1 + 144) )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 1508655;
    ndisMQueueWorkItem(a1, 1LL);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x1Bu, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1);
}
