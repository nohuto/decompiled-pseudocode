/*
 * XREFs of ??_ECHwLightCollectionBuffer@@EEAAPEAXI@Z @ 0x180016300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CHwLightCollectionBuffer *__fastcall CHwLightCollectionBuffer::`vector deleting destructor'(
        CHwLightCollectionBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x208uLL);
  return this;
}
