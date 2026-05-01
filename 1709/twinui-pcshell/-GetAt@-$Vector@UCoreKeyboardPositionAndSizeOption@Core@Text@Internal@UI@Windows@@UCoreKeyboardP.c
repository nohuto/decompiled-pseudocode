/*
 * XREFs of ?GetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801AD2B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v4; // r14
  unsigned int v6; // edi
  int *v7; // rbx
  int v8; // ebp
  __int64 v9; // rax
  int v10; // edx
  __int128 v11; // xmm1

  v4 = a2;
  memset(a3, 0, 0x24uLL);
  v6 = 0;
  v7 = (int *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( *v7 >= 0 )
      ++*v7;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 40) )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = *(_DWORD *)(v9 + 36 * v4 + 32);
    v11 = *(_OWORD *)(v9 + 36 * v4 + 16);
    *a3 = *(_OWORD *)(v9 + 36 * v4);
    a3[1] = v11;
    *((_DWORD *)a3 + 8) = v10;
    v8 = 0;
  }
  else
  {
    v8 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --*v7;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v6;
}
