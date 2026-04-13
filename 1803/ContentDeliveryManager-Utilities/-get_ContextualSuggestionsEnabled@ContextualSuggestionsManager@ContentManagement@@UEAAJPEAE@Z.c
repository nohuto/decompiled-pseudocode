/*
 * XREFs of ?get_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAE@Z @ 0x18000FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::ContextualSuggestionsManager::get_ContextualSuggestionsEnabled(
        ContentManagement::ContextualSuggestionsManager *this,
        unsigned __int8 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x231,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
