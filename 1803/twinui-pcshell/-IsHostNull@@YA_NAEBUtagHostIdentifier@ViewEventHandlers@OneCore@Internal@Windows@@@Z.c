/*
 * XREFs of ?IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803015A0
 * Callers:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x18002FCE0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x18002FF80 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180300820 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHostNull(const struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a1)
{
  bool result; // al

  result = 1;
  if ( (*(_DWORD *)a1 || *((_DWORD *)a1 + 1)) && (*(_DWORD *)a1 != 1 || *((_DWORD *)a1 + 2)) )
    return 0;
  return result;
}
