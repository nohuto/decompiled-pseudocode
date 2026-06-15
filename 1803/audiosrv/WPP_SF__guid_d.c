/*
 * XREFs of WPP_SF__guid_d @ 0x1800AE174
 * Callers:
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x1800A8698 (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x1800ACA58 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_d(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, &WPP_8a9b30d2d367395d6283ded0619f9e6c_Traceguids, a2, a4);
}
