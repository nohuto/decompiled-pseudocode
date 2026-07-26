/*
 * XREFs of ndisPnPQueryStopDevice @ 0x1C010F4F0
 * Callers:
 *     ndisPnPIrpQueryStop @ 0x1C00EE078 (ndisPnPIrpQueryStop.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00B4124 (ndisPnPQueryRemoveDevice.c)
 */

__int64 __fastcall ndisPnPQueryStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  KIRQL v3; // dl
  bool v4; // zf
  unsigned __int64 *p_Lock; // rcx

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x4Fu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1);
  if ( (a1->PnPCapabilities & 1) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v4 = a1->UserModeOpenReferences == 0;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    p_Lock = &a1->Lock;
    if ( v4 )
    {
      KeReleaseSpinLock(p_Lock, v3);
      v2 = ndisPnPQueryRemoveDevice(a1);
    }
    else
    {
      v2 = -1073741823;
      KeReleaseSpinLock(p_Lock, v3);
    }
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x50u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1);
  return v2;
}
