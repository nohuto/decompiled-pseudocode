/*
 * XREFs of ?GetMany@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x1801AE900
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        _DWORD *a5)
{
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // eax
  __int64 i; // rbx

  if ( a3 )
    memset(a4, 0, 36LL * a3);
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 48);
  v10 = *(_DWORD **)(a1 + 40);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, char *, _DWORD *))(*(_QWORD *)v10 + 128LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v9 = v11;
    if ( *(_DWORD *)(a1 + 52) != v10[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( i = 0LL; (unsigned int)i < *a5; i = (unsigned int)(i + 1) )
          memset(&a4[36 * i], 0, 0x24uLL);
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
