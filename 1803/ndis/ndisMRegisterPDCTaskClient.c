/*
 * XREFs of ndisMRegisterPDCTaskClient @ 0x1C00EE7F8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C00FFB30 (PdcTaskClientRegister.c)
 */

void __fastcall ndisMRegisterPDCTaskClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x98u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  if ( (int)PdcTaskClientRegister(a1, a1 + 5536) < 0 && (unsigned __int8)byte_1C0099612 >= 2u )
    WPP_SF_q(0x99u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x9Au, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
}
