/*
 * XREFs of ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00BE8A0
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B8B64 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF290 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00BE7C4 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<void *,1>::resize(unsigned int *a1)
{
  if ( !Rtl::KArray<void *,1>::reserve(a1, 0LL) )
    return 0;
  a1[1] = 0;
  return 1;
}
