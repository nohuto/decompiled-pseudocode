/*
 * XREFs of ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18004EB20 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x18004FCE0 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x1800F1B9C (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1801D70E4 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801E22B0 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Z @ 0x1801F32CC (-RuntimeClassInitialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::String::_InitializeHelper(HSTRING *this, const unsigned __int16 *a2)
{
  unsigned __int64 v3; // rax
  HRESULT result; // eax
  HRESULT v5; // ebx
  HSTRING v6; // rcx
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  string = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > 0xFFFFFFFF )
    return -2147024362;
  result = WindowsCreateString(a2, v3, &string);
  v5 = result;
  if ( result >= 0 )
  {
    v6 = *this;
    *this = string;
    WindowsDeleteString(v6);
    return v5;
  }
  return result;
}
