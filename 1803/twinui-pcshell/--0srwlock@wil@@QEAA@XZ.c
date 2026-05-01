/*
 * XREFs of ??0srwlock@wil@@QEAA@XZ @ 0x1800FBB68
 * Callers:
 *     ??0CActivatedEventArgsBase@@QEAA@XZ @ 0x1800719A0 (--0CActivatedEventArgsBase@@QEAA@XZ.c)
 *     ??0CActivatedEventArgsWithViewIdBase@@QEAA@XZ @ 0x180071DB4 (--0CActivatedEventArgsWithViewIdBase@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F348 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F3DC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028C50C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802A43C0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag__ea_1802A43C0.c)
 *     ??$create@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1802C35F4 (--$create@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A.c)
 *     ??0?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD@Z @ 0x1802C36B0 (--0-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D2230 (-AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180302620 (--0-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x180311E28 (--0CAppLayout@@QEAA@XZ.c)
 *     ??0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180314D08 (--0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x180314DA4 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4@Z @ 0x180314E60 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicati.c)
 * Callees:
 *     <none>
 */

wil::srwlock *__fastcall wil::srwlock::srwlock(wil::srwlock *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
