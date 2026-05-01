/*
 * XREFs of _lambda_e97912004d4e96f3bec37740b2aa1798_::__lambda_e97912004d4e96f3bec37740b2aa1798_ @ 0x1800F9828
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0f20f2____::_1_::dtor$2 @ 0x1800B145C (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0_ea_1800B145C.c)
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa8acc1eed1698d6ba192654be930d00____::_1_::dtor$2 @ 0x1800B1548 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_aa8acc1eed1698d6ba192654be9_ea_1800B1548.c)
 *     _CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons_::_1_::dtor$4 @ 0x1800B1604 (_CFrameApplicationPresentation--SynchronizeWindowTitleAndButtons_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e97912004d4e96f3bec37740b2aa1798_::__lambda_e97912004d4e96f3bec37740b2aa1798_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1);
}
