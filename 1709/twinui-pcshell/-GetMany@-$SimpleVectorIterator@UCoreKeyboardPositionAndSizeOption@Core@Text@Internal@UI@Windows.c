/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x1801AE4A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // ebx
  _DWORD *v9; // r15
  unsigned __int32 v10; // r14d
  _DWORD *v11; // rax
  __int64 j; // rbx
  bool v13; // zf
  signed __int32 v14; // eax
  _DWORD *v15; // rax
  __int64 i; // rbx

  *a4 = 0;
  v5 = a2;
  if ( a2 )
  {
    v6 = 0LL;
    v7 = a2;
    do
    {
      memset((void *)(v6 + a3), 0, 0x24uLL);
      v6 += 36LL;
      --v7;
    }
    while ( v7 );
  }
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 32);
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v9 + 128LL))(
             *(_QWORD *)(a1 + 32),
             v10,
             v5,
             a3,
             a4);
      if ( v8 >= 0 )
        *(_DWORD *)(a1 + 40) = v10 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v10,
               v5,
               a3,
               a4);
        if ( v8 < 0 )
          break;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v10 + *a4, v10);
        v13 = v10 == v14;
        v10 = v14;
        if ( v13 )
          break;
        v15 = a4;
        for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
        {
          memset((void *)(a3 + 36 * i), 0, 0x24uLL);
          v15 = a4;
        }
        *v15 = 0;
        v5 = a2;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v9[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v11 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
        {
          memset((void *)(a3 + 36 * j), 0, 0x24uLL);
          v11 = a4;
        }
        *v11 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL);
  }
  return (unsigned int)v8;
}
