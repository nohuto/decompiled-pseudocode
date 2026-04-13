/*
 * XREFs of ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001EADC
 * Callers:
 *     ?SetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001A410 (-SetAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAppI.c)
 *     ?ReplaceAll@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001AA60 (-ReplaceAll@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEA.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18001D15C (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1800043E8 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( a2 )
  {
    v12 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v12) < 0 )
    {
      v6 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v6;
      if ( v6 )
      {
        *v6 = 1;
        v6[1] = 0;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v9 = Windows::Internal::Details::Git::Acquire(v7);
        if ( v9 >= 0 )
          v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18017C180 + 24LL))(
                 qword_18017C180,
                 a2,
                 &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
                 v8 + 1);
        if ( v9 < 0 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          {
            if ( v8[1] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18017C180 + 32LL))(qword_18017C180);
            operator delete(v8);
          }
        }
        else
        {
          *(_QWORD *)a1 = v8;
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      else
      {
        v9 = -2147024882;
      }
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)v9;
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  return v4;
}
