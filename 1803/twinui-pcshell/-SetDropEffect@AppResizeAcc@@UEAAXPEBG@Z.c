/*
 * XREFs of ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1802E62D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1802E5E28 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x1802E5F40 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 */

void __fastcall AppResizeAcc::SetDropEffect(IRawElementProviderSimple *this, const unsigned __int16 *a2)
{
  const WCHAR *v2; // r8
  IRawElementProviderSimple *v3; // rbx
  const WCHAR *v4; // r10
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rax
  struct IRawElementProviderSimpleVtbl *v8; // rcx

  v2 = a2;
  v3 = this + 10;
  v4 = &word_18035ABCC;
  lpVtbl = this[11].lpVtbl;
  v8 = this[10].lpVtbl;
  if ( !a2 )
    v2 = &word_18035ABCC;
  if ( lpVtbl == (struct IRawElementProviderSimpleVtbl *)-1LL )
  {
    if ( v8 )
    {
      do
        lpVtbl = (struct IRawElementProviderSimpleVtbl *)((char *)lpVtbl + 1);
      while ( *((_WORD *)&v8->QueryInterface + (_QWORD)lpVtbl) );
    }
    else
    {
      LODWORD(lpVtbl) = 0;
    }
  }
  if ( v8 )
    v4 = (const WCHAR *)v8;
  if ( CompareStringOrdinal(v4, (int)lpVtbl, v2, -(a2 != 0LL), 0) != 2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (__int64)v3,
      (__int64)a2,
      0xFFFFFFFFFFFFFFFFuLL);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)&this[-2], 30139);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)&this[-2], 30140);
    AppResizeAcc::ProcessPendingNotifications(this - 2, 1);
  }
}
