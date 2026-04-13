/*
 * XREFs of ?IndexOf@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x180017AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@IPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x18001A95C (-IndexOfInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicat.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x18001BE8C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3E58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v5; // r12
  char *v7; // rdi
  unsigned int v8; // r15d
  _DWORD *v9; // rbx
  RTL_SRWLOCK *v10; // rsi
  int v11; // r14d
  int v12; // ecx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  char *v15; // rax
  unsigned int v16; // r12d
  char *v17; // rdx
  char *v18; // rbx
  __int64 v19; // rsi
  __int128 v21; // [rsp+40h] [rbp-58h]
  _DWORD *v22; // [rsp+50h] [rbp-48h]
  int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v5 = (__int64)a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (_DWORD *)(a1 + 112);
  v22 = (_DWORD *)(a1 + 112);
  v10 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
    a2 = v23;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v13 = *(unsigned int *)(a1 + 80);
    v14 = 16 * v13;
    if ( !is_mul_ok(v13, 0x10uLL) )
      v14 = -1LL;
    v15 = (char *)operator new[](v14, (const struct std::nothrow_t *)&TLV::nothrow);
    v7 = v15;
    if ( v15 )
    {
      for ( ; v13; --v13 )
      {
        *(_QWORD *)v15 = 0LL;
        v15[8] = 0;
        v15 += 16;
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v16 = 0;
      if ( *(_DWORD *)(a1 + 80) )
      {
        v11 = 0;
        do
        {
          v12 = 2 * v16;
          v21 = *(_OWORD *)(*(_QWORD *)(a1 + 96) + 16LL * v16);
          v17 = &v7[16 * v16];
          if ( v17 )
          {
            *(_QWORD *)v17 = 0LL;
            v17[8] = 0;
          }
          v17[8] = BYTE8(v21);
          if ( BYTE8(v21) )
          {
            *(_QWORD *)v17 = v21;
            _InterlockedIncrement((volatile signed __int32 *)v21);
          }
          else
          {
            v12 = v21;
            *(_QWORD *)v17 = v21;
            if ( (_QWORD)v21 )
              (*(void (__fastcall **)(_QWORD, char *, _QWORD))(*(_QWORD *)v21 + 8LL))(v21, v17, 0LL);
          }
          ++v8;
          ++v16;
        }
        while ( v16 < *(_DWORD *)(a1 + 80) );
        v9 = v22;
      }
    }
    else
    {
      v11 = -2147024882;
    }
    v5 = (__int64)a3;
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
            -1,
            *(_QWORD *)(a1 + 96),
            *(_DWORD *)(a1 + 80),
            a2,
            v5,
            (__int64)a4);
  }
  if ( *v9 == 1 )
    --LODWORD(v10->Ptr);
  else
    ReleaseSRWLockShared(v10);
  if ( v11 >= 0 )
  {
    if ( !v8 )
      goto LABEL_36;
    v11 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
            v12,
            (_DWORD)v7,
            v8,
            v23,
            v5,
            (__int64)a4);
  }
  if ( v8 )
  {
    v18 = v7;
    v19 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v18);
      v18 += 16;
      --v19;
    }
    while ( v19 );
  }
LABEL_36:
  operator delete[](v7);
  return (unsigned int)v11;
}
