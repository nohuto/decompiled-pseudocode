/*
 * XREFs of SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C003F8A4
 * Callers:
 *     Control_TransferData_Free @ 0x1C0025058 (Control_TransferData_Free.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002AD10 (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0030854 (Bulk_Stage_FreeScatterGatherList.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

void *__fastcall SecureDmaEnabler_ReleaseResourcesAfterDma(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = VslDeleteSecureSection(a2[2]);
    if ( v4 < 0 )
    {
      v6 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0x12u,
        (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids,
        v6);
    }
  }
  return memset(a2, 0, 0x20uLL);
}
