/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAI@Z @ 0x180197280
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  unsigned int v5; // esi
  int v6; // ebx
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  _DWORD *v9; // rax
  __int64 j; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  unsigned __int32 v13; // r15d
  bool v14; // zf
  signed __int32 v15; // eax
  _DWORD *v16; // rax
  __int64 i; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rcx

  *a4 = 0;
  v5 = a2;
  if ( a2 )
    memset(a3, 0, 8LL * a2);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD **)(a1 + 32);
  if ( v6 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v8 = *(_DWORD *)(a1 + 40);
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v7 + 128LL))(
             *(_QWORD *)(a1 + 32),
             v8,
             v5,
             a3,
             a4);
      if ( v6 >= 0 )
        *(_DWORD *)(a1 + 40) = v8 + *a4;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 40);
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v13,
               v5,
               a3,
               a4);
        if ( v6 < 0 )
          break;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v13 + *a4, v13);
        v14 = v13 == v15;
        v13 = v15;
        if ( v14 )
          break;
        v16 = a4;
        for ( i = 0LL; (unsigned int)i < *a4; v16 = a4 )
        {
          v18 = a3;
          v19 = *((_QWORD *)a3 + i);
          if ( v19 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            *((_QWORD *)a3 + i) = 0LL;
            v18 = a3;
          }
          v18[i] = 0LL;
          i = (unsigned int)(i + 1);
        }
        *v16 = 0;
        v5 = a2;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v7[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v9 = a4 )
        {
          v11 = a3;
          v12 = *((_QWORD *)a3 + j);
          if ( v12 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            *((_QWORD *)a3 + j) = 0LL;
            v11 = a3;
          }
          v11[j] = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v9 = 0;
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
