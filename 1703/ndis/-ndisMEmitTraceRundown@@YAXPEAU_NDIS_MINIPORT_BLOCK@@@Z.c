/*
 * XREFs of ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F9D8
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C0050710 (ndisEnableWppTracingCallback.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F880 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_DDDDD @ 0x1C004FF7C (WPP_SF_DDDDD.c)
 *     WPP_SF_qqZ @ 0x1C0050190 (WPP_SF_qqZ.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // bp
  bool v3; // zf
  _NDIS_FILTER_BLOCK *i; // rdi
  _NDIS_OPEN_BLOCK *j; // rdi

  if ( byte_1C0092609 )
  {
    WPP_SF_qqZ(90LL, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, a1, a1->DriverHandle, a1->pAdapterInstanceName);
    if ( byte_1C0092609 )
    {
      WPP_SF_DDDDD(
        a1->DriverHandle,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        *((unsigned __int16 *)&a1->NetLuid.Info + 3),
        (a1->NetLuid.Value >> 24) & 0xFFFFFF);
      if ( byte_1C0092609 )
        WPP_SF_dd(0x5Cu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, a1->State, a1->PnPDeviceState);
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v3 = a1->LowestFilter == 0LL;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 75438;
  if ( v3 )
  {
    if ( byte_1C0092609 )
      WPP_SF_(0x5Du, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  }
  else
  {
    if ( byte_1C0092609 )
      WPP_SF_(0x5Eu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
    for ( i = a1->LowestFilter; i; i = i->HigherFilter )
    {
      if ( byte_1C0092609 )
        WPP_SF_qqZ(95LL, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, i, i->FilterDriver, i->FilterFriendlyName);
    }
  }
  if ( a1->OpenQueue )
  {
    if ( byte_1C0092609 )
      WPP_SF_(0x61u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
    for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
    {
      if ( byte_1C0092609 )
        WPP_SF_qqZ(
          98LL,
          &WPP_bde249736f00345f1574c6c7be067711_Traceguids,
          j,
          j->ProtocolHandle,
          &j->ProtocolHandle->Name);
    }
  }
  else if ( byte_1C0092609 )
  {
    WPP_SF_(0x60u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v2);
}
