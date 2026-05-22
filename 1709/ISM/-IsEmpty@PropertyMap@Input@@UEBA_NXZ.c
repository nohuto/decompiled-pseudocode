/*
 * XREFs of ?IsEmpty@PropertyMap@Input@@UEBA_NXZ @ 0x180016CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Input::PropertyMap::IsEmpty(Input::PropertyMap *this)
{
  return *((_DWORD *)this + 10) == 0;
}
