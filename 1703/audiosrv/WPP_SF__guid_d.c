/*
 * XREFs of WPP_SF__guid_d @ 0x180090954
 * Callers:
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180044920 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x18008A28C (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x18008F0F0 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_d(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
