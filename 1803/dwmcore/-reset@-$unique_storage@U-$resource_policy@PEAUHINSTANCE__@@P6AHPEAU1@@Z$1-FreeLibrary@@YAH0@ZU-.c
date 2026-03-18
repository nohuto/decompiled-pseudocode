/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18017A5E8
 * Callers:
 *     ??1Dwm3DRECompositorThunk@@MEAA@XZ @ 0x18017A56C (--1Dwm3DRECompositorThunk@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        HMODULE *a1,
        HMODULE a2)
{
  HMODULE v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    FreeLibrary(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
