/*
 * XREFs of ??$As@UIViewCUIEventStore@@@?$ComPtr@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewCUIEventStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800FAD0C
 * Callers:
 *     ?SetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x1801CD250 (-SetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore>::As<IViewCUIEventStore>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92,
           a2);
}
