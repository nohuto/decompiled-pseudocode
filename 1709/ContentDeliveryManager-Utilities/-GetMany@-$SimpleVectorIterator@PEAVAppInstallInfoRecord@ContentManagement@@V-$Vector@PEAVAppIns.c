/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18001B8A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  unsigned int v5; // esi
  int v6; // ebx
  __int64 v7; // r13
  unsigned __int32 v8; // r15d
  bool v9; // zf
  signed __int32 v10; // eax
  _DWORD *v11; // rax
  __int64 i; // rbx
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 j; // rbx
  _QWORD *v17; // rdi
  __int64 v18; // rcx

  *a4 = 0;
  v5 = a2;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  v6 = *(_DWORD *)(a1 + 88);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v6 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 80);
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(**(_QWORD **)(a1 + 72) + 128LL))(
             *(_QWORD *)(a1 + 72),
             v8,
             v5,
             a3,
             a4);
      if ( v6 < 0 )
        break;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 80), v8 + *a4, v8);
      v9 = v8 == v10;
      v8 = v10;
      if ( v9 )
        break;
      v11 = a4;
      for ( i = 0LL; (unsigned int)i < *a4; v11 = a4 )
      {
        v13 = a3;
        v14 = *((_QWORD *)a3 + i);
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *((_QWORD *)a3 + i) = 0LL;
          v13 = a3;
        }
        v13[i] = 0LL;
        i = (unsigned int)(i + 1);
      }
      *v11 = 0;
      v5 = a2;
    }
    if ( *(_DWORD *)(a1 + 92) != *(_DWORD *)(v7 + 128) )
    {
      *(_DWORD *)(a1 + 88) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v15 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v15 = a4 )
        {
          v17 = a3;
          v18 = *((_QWORD *)a3 + j);
          if ( v18 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            *((_QWORD *)a3 + j) = 0LL;
            v17 = a3;
          }
          v17[j] = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v15 = 0;
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
