/*
 * XREFs of ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5AEC
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF730 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B202C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5A1C (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<void *>::resize(unsigned int *a1)
{
  if ( !Rtl::KArray<void *>::reserve(a1, 0LL) )
    return 0;
  a1[1] = 0;
  return 1;
}
