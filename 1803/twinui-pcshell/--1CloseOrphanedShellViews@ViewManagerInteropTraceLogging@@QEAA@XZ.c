/*
 * XREFs of ??1CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB7D0
 * Callers:
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x1801DBBBC (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CloseOrphanedShellViews::~CloseOrphanedShellViews(
        ViewManagerInteropTraceLogging::CloseOrphanedShellViews *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CloseOrphanedShellViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
