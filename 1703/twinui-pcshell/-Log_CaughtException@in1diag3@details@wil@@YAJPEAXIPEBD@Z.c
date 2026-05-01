/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800711B8
 * Callers:
 *     _CSplashScreen::OnViewAdded_::_1_::catch$3 @ 0x18019AAE1 (_CSplashScreen--OnViewAdded_--_1_--catch$3.c)
 *     _CSplashScreen::OnViewRemoved_::_1_::catch$28 @ 0x18019AB1E (_CSplashScreen--OnViewRemoved_--_1_--catch$28.c)
 *     __lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f_::operator()_::_1_::catch$1 @ 0x18019B713 (__lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f_--operator()_--_1_--catch$1.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::catch$63 @ 0x18019D17E (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--catch$63.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$24 @ 0x18019E0E8 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--catch$24.c)
 *     _ViewEventDispatcher::OverrideNavigationLevelForView_::_1_::catch$5 @ 0x18019E831 (_ViewEventDispatcher--OverrideNavigationLevelForView_--_1_--catch$5.c)
 *     __lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()_::_1_::catch$79 @ 0x18019F17D (__lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator()_--_1_--catch$79.c)
 *     _XamlTaskbarManager::CreateInitialTaskbars_::_1_::catch$12 @ 0x18019FF05 (_XamlTaskbarManager--CreateInitialTaskbars_--_1_--catch$12.c)
 *     _ThumbnailInteropDevice::OnThumbnailSourceSizeChange_::_1_::catch$12 @ 0x1801A47BF (_ThumbnailInteropDevice--OnThumbnailSourceSizeChange_--_1_--catch$12.c)
 *     _ThumbnailInteropFactoryBase::OnSourceSizeChanged_::_1_::catch$20 @ 0x1801A4942 (_ThumbnailInteropFactoryBase--OnSourceSizeChanged_--_1_--catch$20.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800253C8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
