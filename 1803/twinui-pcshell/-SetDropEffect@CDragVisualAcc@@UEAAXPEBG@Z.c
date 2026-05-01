/*
 * XREFs of ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x1802F9A50
 * Callers:
 *     ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x1802F9760 (-OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x1802F9780 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x1802F9D60 (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::SetDropEffect(IRawElementProviderSimple *this, const unsigned __int16 *a2)
{
  IRawElementProviderSimple *v4; // rbx
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rcx
  const WCHAR *v6; // r10
  const WCHAR *v7; // r8
  struct IRawElementProviderSimpleVtbl *v8; // rax

  if ( BYTE4(this[2].lpVtbl) )
  {
    v4 = this + 16;
    lpVtbl = this[16].lpVtbl;
    v6 = &word_18035ABCC;
    v7 = a2;
    v8 = v4[1].lpVtbl;
    if ( !a2 )
      v7 = &word_18035ABCC;
    if ( v8 == (struct IRawElementProviderSimpleVtbl *)-1LL )
    {
      if ( lpVtbl )
      {
        do
          v8 = (struct IRawElementProviderSimpleVtbl *)((char *)v8 + 1);
        while ( *((_WORD *)&lpVtbl->QueryInterface + (_QWORD)v8) );
      }
      else
      {
        LODWORD(v8) = 0;
      }
    }
    if ( lpVtbl )
      v6 = (const WCHAR *)lpVtbl;
    if ( CompareStringOrdinal(v6, (int)v8, v7, -(a2 != 0LL), 0) != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        (__int64)v4,
        (__int64)a2,
        0xFFFFFFFFFFFFFFFFuLL);
      CDragVisualAcc::_RaiseDropEffectChangeEvent(this - 4);
    }
  }
}
