/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1801105D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180111804 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r15
  unsigned int v8; // r12d
  SIZE_T v9; // rbx
  HSTRING *v10; // r14
  HRESULT v13; // ebx
  RTL_SRWLOCK *v14; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v17; // [rsp+20h] [rbp-48h] BYREF
  LPVOID v18; // [rsp+70h] [rbp+8h]
  HRESULT v19; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0LL;
  v19 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = a3;
  v10 = a4;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  v18 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v17, a1 + 104, &v19);
  if ( !*(_DWORD *)(a1 + 80) || (v18 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v19;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    if ( a2 > v8 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        if ( a3 )
        {
          do
          {
            if ( (unsigned int)v7 + a2 >= v8 )
              break;
            v13 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * ((unsigned int)v7 + a2)), &v10[v7]);
            if ( v13 < 0 )
              break;
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < a3 );
        }
      }
      else if ( a3 )
      {
        do
        {
          if ( (unsigned int)v5 + a2 >= v8 )
            break;
          v13 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * ((unsigned int)v5 + a2)), &v10[v5]);
          if ( v13 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < a3 );
      }
    }
  }
  if ( v17 )
  {
    v14 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v14->Ptr);
    else
      ReleaseSRWLockShared(v14);
  }
  if ( v13 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      do
      {
        WindowsDeleteString(*v10);
        *v10++ = 0LL;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v8 )
          break;
        v13 = 0;
        LODWORD(v5) = v5 + 1;
      }
    }
    *a5 = v5;
  }
  operator delete(v18);
  return (unsigned int)v13;
}
