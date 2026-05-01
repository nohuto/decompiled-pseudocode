/*
 * XREFs of ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18012C63C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEBG@Z @ 0x1801295EC (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18013A7E0 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x18013AA10 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18013D1FC (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::_InitializeHelper(HSTRING *this, const unsigned __int16 *a2)
{
  HSTRING v3; // r8
  unsigned __int64 v4; // rax
  UINT32 v6; // edx
  signed int v7; // ebx
  HRESULT v8; // eax
  HSTRING v9; // rcx
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  string = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v6 = -1;
  if ( v4 <= 0xFFFFFFFF )
    v6 = v4;
  v7 = v4 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v4 <= 0xFFFFFFFF )
  {
    v8 = WindowsCreateString(a2, v6, &string);
    v3 = string;
    v7 = v8;
  }
  if ( v7 >= 0 )
  {
    v9 = *this;
    *this = v3;
    WindowsDeleteString(v9);
  }
  return (unsigned int)v7;
}
