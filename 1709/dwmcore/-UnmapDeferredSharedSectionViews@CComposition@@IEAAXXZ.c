/*
 * XREFs of ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18011B990
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CComposition::UnmapDeferredSharedSectionViews(CComposition *this)
{
  __int64 v2; // rdi

  if ( *((_DWORD *)this + 190) )
  {
    v2 = 0LL;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 92) + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 190) );
    *((_DWORD *)this + 190) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 736, 8u);
  }
}
