/*
 * XREFs of ?GetCount@SwitchItemFilteredCollection@@UEAAJPEAI@Z @ 0x180096C80
 * Callers:
 *     ?GetCount@SwitchItemFilteredCollection@@WKI@EAAJPEAI@Z @ 0x1800AE220 (-GetCount@SwitchItemFilteredCollection@@WKI@EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::GetCount(SwitchItemFilteredCollection *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 6);
  return 0LL;
}
