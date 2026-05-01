/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18016C1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged(
        CPeopleBarFlyoutExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  return SingleViewLightDismissHelper::UpdateLightDismiss(
           (char *)this + 640,
           *((unsigned int *)this + 168),
           *((_QWORD *)this + 17));
}
