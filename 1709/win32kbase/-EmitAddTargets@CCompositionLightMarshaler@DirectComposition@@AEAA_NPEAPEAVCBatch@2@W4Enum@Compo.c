/*
 * XREFs of ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C0002EEC
 * Callers:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002CB0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0002D88 (--$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComp.c)
 *     ??$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0002DE0 (--$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposi.c)
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        int a3)
{
  if ( a3 )
    return DirectComposition::CCompositionLightMarshaler::EmitAddTargets<MILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
             a1,
             a2,
             *(_QWORD *)(a1 + 56),
             (unsigned int *)(a1 + 64),
             a1 + 68);
  else
    return DirectComposition::CCompositionLightMarshaler::EmitAddTargets<MILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
             a1,
             a2,
             *(_QWORD *)(a1 + 40),
             (unsigned int *)(a1 + 48),
             a1 + 52);
}
