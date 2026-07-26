/*
 * XREFs of ndisMRegisterPDCTaskClient @ 0x1C00EBC44
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C00FD754 (PdcTaskClientRegister.c)
 */

void __fastcall ndisMRegisterPDCTaskClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x95u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  if ( (int)PdcTaskClientRegister(a1, a1 + 5520) < 0 && (unsigned __int8)byte_1C0098752 >= 2u )
    WPP_SF_q(0x96u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x97u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
}
