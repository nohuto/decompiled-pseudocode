/*
 * XREFs of ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180130E3C
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CComposition::UnmapDeferredSharedSectionViews(CComposition *this)
{
  __int64 v2; // rdi

  if ( *((_DWORD *)this + 198) )
  {
    v2 = 0LL;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 96) + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 198) );
    *((_DWORD *)this + 198) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 768, 8u);
  }
}
