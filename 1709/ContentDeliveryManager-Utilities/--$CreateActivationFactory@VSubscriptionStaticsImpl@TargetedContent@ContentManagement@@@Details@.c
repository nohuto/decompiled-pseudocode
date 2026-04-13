/*
 * XREFs of ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800245B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CF4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<ContentManagement::TargetedContent::SubscriptionStaticsImpl>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  volatile signed __int32 *v4; // rdi
  char *v9; // rax
  char *v10; // rbx
  Microsoft::WRL::FtmBase *v11; // r14
  bool v12; // zf
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  int v15; // edi
  int v16; // esi
  signed __int32 v17; // eax
  int v18; // ebx
  char *v20; // [rsp+20h] [rbp-28h]

  v4 = 0LL;
  v20 = 0LL;
  v9 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v16 = -2147024882;
    goto LABEL_33;
  }
  v11 = (Microsoft::WRL::FtmBase *)(v9 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_QWORD *)v10 + 11) = 0LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *(_QWORD *)v11 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v10 + 6) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>'};
  *((_DWORD *)v10 + 19) = 1;
  *((_DWORD *)v10 + 24) = 4;
  if ( !v12 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v10 = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable';
  *(_QWORD *)v11 = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v10 + 6) = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>'};
  v13 = _InterlockedIncrement((volatile signed __int32 *)v10 + 19);
  if ( (v10[96] & 4) == 0 && v13 == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  v20 = v10;
  v14 = _InterlockedDecrement((volatile signed __int32 *)v10 + 19);
  if ( v14 )
  {
    if ( (v10[96] & 4) == 0 && v14 == 1 )
      goto LABEL_13;
  }
  else
  {
    v15 = *((_DWORD *)v10 + 24) >> 2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 56LL))(v10, 1LL);
    if ( (v15 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  if ( *(_DWORD *)a3 != 53
    || *(_DWORD *)(a3 + 4) != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a3 + 8) != *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a3 + 12) != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( (int)Microsoft::WRL::FtmBase::CanCastTo(v11, (const struct _GUID *)a3, a4) < 0 )
    {
      if ( *(_DWORD *)a3 != 1828647805
        || *(_DWORD *)(a3 + 4) != *(_DWORD *)&GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data2
        || *(_DWORD *)(a3 + 8) != *(_DWORD *)GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data4
        || *(_DWORD *)(a3 + 12) != *(_DWORD *)&GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data4[4] )
      {
        v16 = -2147467262;
LABEL_30:
        if ( v16 < 0 )
        {
          v4 = (volatile signed __int32 *)v10;
          goto LABEL_33;
        }
        goto LABEL_19;
      }
      *a4 = (char *)v11 + 40;
    }
    v16 = 0;
    goto LABEL_30;
  }
  *a4 = v10;
LABEL_19:
  if ( (*a1 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v10 + 19);
  v4 = 0LL;
  *((_DWORD *)v10 + 24) = *(_DWORD *)a1;
  v16 = 0;
  *((_QWORD *)v10 + 11) = a2;
  v20 = 0LL;
LABEL_33:
  if ( v4 )
  {
    v17 = _InterlockedDecrement(v4 + 19);
    if ( v17 )
    {
      if ( (v20[96] & 4) == 0 && v17 == 1 )
        goto LABEL_40;
    }
    else
    {
      v18 = *((_DWORD *)v20 + 24) >> 2;
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 1LL);
      if ( (v18 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_40:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)v16;
}
