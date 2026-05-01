/*
 * XREFs of ?GetMany@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x1801AD890
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E3058 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  _OWORD *v8; // rbp
  int *v11; // r14
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int i; // ecx
  void *Block; // [rsp+60h] [rbp+8h]
  unsigned int v24; // [rsp+70h] [rbp+18h]

  v5 = 0;
  v6 = a3;
  v24 = 0;
  v7 = 0;
  v8 = a4;
  if ( a3 )
    memset(a4, 0, 36LL * a3);
  v11 = (int *)(a1 + 80);
  Block = 0LL;
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( *v11 >= 0 )
      ++*v11;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v12 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    Block = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !Block )
    {
      v12 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_23;
    }
  }
  v7 = *(_DWORD *)(a1 + 40);
  if ( a2 > v7 )
  {
    v12 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( (_DWORD)v6 )
    {
      v13 = a2;
      do
      {
        if ( v13 >= v7 )
          break;
        v14 = v13++;
        v15 = 9 * v14;
        v16 = *(_QWORD *)(a1 + 56);
        *v8 = *(_OWORD *)(v16 + 4 * v15);
        v8[1] = *(_OWORD *)(v16 + 4 * v15 + 16);
        *((_DWORD *)v8 + 8) = *(_DWORD *)(v16 + 4 * v15 + 32);
        v8 = (_OWORD *)((char *)v8 + 36);
        ++v24;
      }
      while ( v24 < (unsigned int)v6 );
    }
  }
  else if ( (_DWORD)v6 )
  {
    v17 = a2;
    do
    {
      v12 = 0;
      if ( v17 >= v7 )
        break;
      v18 = v17;
      ++v5;
      ++v17;
      v19 = 9 * v18;
      v20 = *(_QWORD *)(a1 + 56);
      *v8 = *(_OWORD *)(v20 + 4 * v19);
      v8[1] = *(_OWORD *)(v20 + 4 * v19 + 16);
      *((_DWORD *)v8 + 8) = *(_DWORD *)(v20 + 4 * v19 + 32);
      v8 = (_OWORD *)((char *)v8 + 36);
    }
    while ( v5 < (unsigned int)v6 );
  }
LABEL_23:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --*v11;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( v12 >= 0 )
  {
    if ( v24 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v7 )
          break;
        v12 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete(Block);
  return (unsigned int)v12;
}
