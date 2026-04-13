/*
 * XREFs of ?put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z @ 0x18000EDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContextualSuggestionsManager::put_ContextualSuggestionsEnabled(
        ContentManagement::ContextualSuggestionsManager *this,
        char a2)
{
  LOBYTE(this) = a2;
  return ContentManagement::EnableContextualSuggestions(this);
}
