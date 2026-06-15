/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800D5DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800D6E98 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  SIZE_T v5; // rsi
  __int64 v6; // rbx
  HSTRING *v7; // r14
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  HRESULT v12; // edi
  unsigned int i; // ecx
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF
  LPVOID v16; // [rsp+70h] [rbp+8h]
  HRESULT v17; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v6 = 0LL;
  v7 = a4;
  v17 = 0;
  v10 = 0;
  v11 = 0;
  if ( a3 )
    memset(a4, 0, 8LL * a3);
  v16 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(v15, a1 + 96, &v17);
  if ( !*(_DWORD *)(a1 + 72) || (v16 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v12 = v17;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 64);
    if ( a2 > v11 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v12 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( (_DWORD)v5 )
        {
          do
          {
            if ( v10 + a2 >= v11 )
              break;
            v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 80) + 8LL * (v10 + a2)), &v7[v10]);
            if ( v12 < 0 )
              break;
            ++v10;
          }
          while ( v10 < (unsigned int)v5 );
        }
      }
      else if ( (_DWORD)v5 )
      {
        do
        {
          if ( (unsigned int)v6 + a2 >= v11 )
            break;
          v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 80) + 8LL * ((unsigned int)v6 + a2)), &v7[v6]);
          if ( v12 < 0 )
            break;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < (unsigned int)v5 );
      }
    }
  }
  if ( v15[0] )
  {
    if ( *(_DWORD *)v15[0] == 1 )
      --*(_DWORD *)(v15[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v15[0] + 8LL));
  }
  if ( v12 < 0 )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        WindowsDeleteString(*v7);
        *v7++ = 0LL;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    if ( v10 )
    {
      for ( i = 0; i < (unsigned int)v5; ++i )
      {
        if ( i + a2 >= v11 )
          break;
        v12 = 0;
        LODWORD(v6) = v6 + 1;
      }
    }
    *a5 = v6;
  }
  operator delete(v16);
  return (unsigned int)v12;
}
