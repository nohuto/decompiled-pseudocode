/*
 * XREFs of WPP_SF__guid_d @ 0x180076F00
 * Callers:
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x1800701FC (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x1800755D0 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800D9D48 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_d(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
