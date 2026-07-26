/*
 * XREFs of ndisMRegisterPDCTaskClient @ 0x1C00E1D94
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C00F4264 (PdcTaskClientRegister.c)
 */

void __fastcall ndisMRegisterPDCTaskClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x95u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
  if ( (int)PdcTaskClientRegister(a1, a1 + 5616) < 0 && (unsigned __int8)byte_1C0092612 >= 2u )
    WPP_SF_q(0x96u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x97u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
}
