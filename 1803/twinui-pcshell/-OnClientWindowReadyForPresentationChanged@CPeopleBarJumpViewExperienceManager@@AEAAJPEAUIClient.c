/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18016EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnClientWindowReadyForPresentationChanged(
        CPeopleBarJumpViewExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  return SingleViewLightDismissHelper::UpdateLightDismiss(
           (char *)this + 280,
           *((unsigned int *)this + 74),
           *((_QWORD *)this + 10));
}
