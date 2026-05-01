/*
 * XREFs of ?IndexOfInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@IU678295@PEAIPEAE@Z @ 0x1802556DC
 * Callers:
 *     ?IndexOf@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x180255550 (-IndexOf@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
        __int64 a1,
        __m256i *a2,
        unsigned int a3,
        __m256i *a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // r10d
  char v8; // si
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned __int64 v11; // r9
  __m256i v13; // [rsp+0h] [rbp-60h]
  __m256i v14; // [rsp+30h] [rbp-30h]

  v6 = 0;
  if ( a3 )
  {
    v13 = *a4;
    v8 = a4->m256i_i64[1];
    v9 = *(_OWORD *)a4->m256i_i8;
    v10 = a4->m256i_i64[3];
    v11 = HIDWORD(a4->m256i_i64[0]);
    while ( 1 )
    {
      v14 = *a2;
      if ( __PAIR64__(v11, v9) == a2->m256i_i64[0]
        && v8 == v14.m256i_i8[8]
        && v13.m256i_i8[9] == v14.m256i_i8[9]
        && __PAIR128__(__PAIR64__(v10, v13.m256i_u32[5]), *(unsigned __int64 *)((char *)&v13.m256i_u64[1] + 4)) == *(_OWORD *)((char *)&v14.m256i_u64[1] + 4) )
      {
        break;
      }
      ++v6;
      a2 = (__m256i *)((char *)a2 + 40);
      if ( v6 >= a3 )
        return 0LL;
    }
    *a6 = 1;
    *a5 = v6;
  }
  return 0LL;
}
