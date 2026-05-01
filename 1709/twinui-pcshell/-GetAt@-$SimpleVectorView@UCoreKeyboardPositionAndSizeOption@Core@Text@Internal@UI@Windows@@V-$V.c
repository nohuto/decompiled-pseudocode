/*
 * XREFs of ?GetAt@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801AE790
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        unsigned int a2,
        void *a3)
{
  int v6; // ebx
  _DWORD *v7; // r14
  int v8; // eax

  memset(a3, 0, 0x24uLL);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD **)(a1 + 40);
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(*(_QWORD *)v7 + 48LL))(*(_QWORD *)(a1 + 40), a2, a3);
    v6 = v8;
    if ( *(_DWORD *)(a1 + 52) != v7[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        memset(a3, 0, 0x24uLL);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
