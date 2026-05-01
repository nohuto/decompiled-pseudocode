/*
 * XREFs of ?IndexOf@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x1801AE850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  __int64 *v8; // r15
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  int v13; // eax
  _OWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+50h] [rbp-38h]

  *a3 = 0;
  *a4 = 0;
  v6 = *(_DWORD *)(a1 + 48);
  v8 = *(__int64 **)(a1 + 40);
  if ( v6 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    v10 = *a2;
    v16 = *((_DWORD *)a2 + 8);
    v11 = a2[1];
    v12 = *v8;
    v15[0] = v10;
    v15[1] = v11;
    v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(v12 + 72))(v9, v15);
    v6 = v13;
    if ( *(_DWORD *)(a1 + 52) != *((_DWORD *)v8 + 22) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v13 < 0 )
      {
        RoTransformError((unsigned int)v13, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0;
        *a4 = 0;
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
