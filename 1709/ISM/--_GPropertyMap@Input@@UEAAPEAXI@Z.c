/*
 * XREFs of ??_GPropertyMap@Input@@UEAAPEAXI@Z @ 0x180016C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x180016C64 (--1PropertyMap@Input@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Input::PropertyMap *__fastcall Input::PropertyMap::`scalar deleting destructor'(Input::PropertyMap *this, char a2)
{
  Input::PropertyMap::~PropertyMap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
