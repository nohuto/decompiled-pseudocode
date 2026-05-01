/*
 * XREFs of ?IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIIPEAE@Z @ 0x180179510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAI@Z @ 0x180179690 (-GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsHostProcessOwnerOfComponent(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  *a4 = 0;
  if ( (int)Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostProcessIdForComponent(
              this,
              a3,
              &v7) >= 0
    && a2 == v7 )
  {
    *a4 = 1;
  }
  return 0LL;
}
