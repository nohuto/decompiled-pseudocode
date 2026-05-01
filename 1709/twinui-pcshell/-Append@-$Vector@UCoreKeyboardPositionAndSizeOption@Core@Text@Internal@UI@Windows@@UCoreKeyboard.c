/*
 * XREFs of ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801AD790
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x1801ADF9C (-InsertAtInternal@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int128 v5; // xmm1
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-18h]

  v4 = *(_DWORD *)(a2 + 32);
  LOBYTE(a4) = 1;
  v5 = *(_OWORD *)(a2 + 16);
  v7[0] = *(_OWORD *)a2;
  v7[1] = v5;
  v8 = v4;
  return ((__int64 (__fastcall *)(__int64, _QWORD, _OWORD *, __int64))Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal)(
           a1,
           0LL,
           v7,
           a4);
}
