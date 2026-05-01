/*
 * XREFs of ?IndexOf@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x1801AD470
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@IU678295@PEAIPEAE@Z @ 0x1801AE2DC (-IndexOfInternal@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCor.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E3058 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOf(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  RTL_SRWLOCK *v4; // rdi
  _DWORD *v5; // rbp
  int v6; // r15d
  int v11; // esi
  int v12; // eax
  __int128 v13; // xmm1
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 i; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+50h] [rbp-38h]

  *a3 = 0;
  v4 = (RTL_SRWLOCK *)(a1 + 80);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v17 = 36LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 0x24uLL) )
      v17 = -1LL;
    v5 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); v5[v16 + 8] = *(_DWORD *)(v19 + 4 * v16 + 32) )
      {
        v19 = *(_QWORD *)(a1 + 56);
        v16 = 9 * i;
        ++v6;
        i = (unsigned int)(i + 1);
        *(_OWORD *)&v5[v16] = *(_OWORD *)(v19 + 4 * v16);
        *(_OWORD *)&v5[v16 + 4] = *(_OWORD *)(v19 + 4 * v16 + 16);
      }
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v12 = *((_DWORD *)a2 + 8);
    v13 = a2[1];
    v14 = *(_QWORD *)(a1 + 56);
    v15 = *(_DWORD *)(a1 + 40);
    v23 = *a2;
    v24 = v13;
    v25 = v12;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
            a1,
            v14,
            v15,
            (unsigned int)&v23,
            (__int64)a3,
            (__int64)a4);
  }
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --LODWORD(v4->Ptr);
  else
    ReleaseSRWLockShared(v4);
  if ( v11 >= 0 && v6 )
  {
    v20 = *((_DWORD *)a2 + 8);
    v21 = a2[1];
    v23 = *a2;
    v24 = v21;
    v25 = v20;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
            v16,
            (_DWORD)v5,
            v6,
            (unsigned int)&v23,
            (__int64)a3,
            (__int64)a4);
  }
  operator delete(v5);
  return (unsigned int)v11;
}
