/*
 * XREFs of HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C001B2B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0022EF4 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSContainerIdHeaderDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v3, 0, a3, 6, v3 + 1732, 8LL);
  if ( MsOsFeatureDescriptor < 0 )
  {
    LODWORD(v6) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      0x50u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v6);
    HUBSM_AddEvent(v3 + 504, 4004);
  }
  return 1000LL;
}
