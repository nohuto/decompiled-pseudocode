/*
 * XREFs of _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent_::_1_::catch$53 @ 0x1800B2854
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent_::_1_::catch_53(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 344),
                           (void *)0x10F,
                           (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           a4);
  return &loc_1800308AF;
}
