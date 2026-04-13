/*
 * XREFs of ??$CreateActivationFactory@VSubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800247F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CF4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  void *v4; // rdi
  char *v9; // rax
  void *v10; // rbx
  Microsoft::WRL::FtmBase *v11; // r14
  bool v12; // zf
  int v13; // esi

  v4 = 0LL;
  v9 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v13 = -2147024882;
    goto LABEL_22;
  }
  v11 = (Microsoft::WRL::FtmBase *)(v9 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_QWORD *)v10 + 11) = 0LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *(_QWORD *)v11 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v10 + 6) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  *((_DWORD *)v10 + 19) = 1;
  *((_DWORD *)v10 + 24) = 4;
  if ( !v12 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v10 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable';
  *(_QWORD *)v11 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v10 + 6) = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  ((void (__fastcall *)(void *))*(&ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'
                                + 1))(v10);
  v4 = v10;
  (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( *(_DWORD *)a3 != 53
    || *(_DWORD *)(a3 + 4) != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a3 + 8) != *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a3 + 12) != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( (int)Microsoft::WRL::FtmBase::CanCastTo(v11, (const struct _GUID *)a3, a4) < 0 )
    {
      if ( *(_DWORD *)a3 != -1350114592
        || *(_DWORD *)(a3 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        || *(_DWORD *)(a3 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        || *(_DWORD *)(a3 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        v13 = -2147467262;
LABEL_17:
        if ( v13 < 0 )
          goto LABEL_22;
        goto LABEL_18;
      }
      *a4 = (char *)v11 + 40;
    }
    v13 = 0;
    goto LABEL_17;
  }
  *a4 = v10;
LABEL_18:
  if ( (*a1 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v10 + 19);
  v4 = 0LL;
  *((_DWORD *)v10 + 24) = *(_DWORD *)a1;
  v13 = 0;
  *((_QWORD *)v10 + 11) = a2;
LABEL_22:
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v13;
}
