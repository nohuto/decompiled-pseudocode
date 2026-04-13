/*
 * XREFs of ?GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004C770
 * Callers:
 *     ?GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180053A80 (-GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Ser_ea_180053A80.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::GetRuntimeClassName(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Services.TargetedContent.Internal.TargetedContentActionInternal", 0x47u, a2);
}
