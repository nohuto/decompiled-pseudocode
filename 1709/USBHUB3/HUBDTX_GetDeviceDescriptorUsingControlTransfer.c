/*
 * XREFs of HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C00234BC
 * Callers:
 *     HUBDSM_GettingAlternateDeviceDescriptor @ 0x1C001ADD0 (HUBDSM_GettingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0022F80 (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetDeviceDescriptorUsingControlTransfer(__int64 a1)
{
  int Descriptor; // eax
  __int64 v3; // [rsp+28h] [rbp-20h]

  Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1732, 18, 1, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v3) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x28u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
