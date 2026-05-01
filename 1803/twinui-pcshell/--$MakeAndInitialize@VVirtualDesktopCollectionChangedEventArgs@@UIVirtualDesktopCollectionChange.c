/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@@Z @ 0x18025BE90
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAW4VirtualDesktopCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIVirtualDesktop@5678@@Z @ 0x18025BFAC (--$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCol_ea_18025BFAC.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008F2D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ @ 0x18025CB6C (--0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferencesChangedEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18025EAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_18025EAA0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
        VirtualDesktopCollectionChangedEventArgs **a1,
        _DWORD *a2,
        __int64 *a3)
{
  VirtualDesktopCollectionChangedEventArgs *v6; // rax
  int CanCastTo; // edi
  VirtualDesktopCollectionChangedEventArgs *v8; // rax
  __int64 v9; // rdi
  VirtualDesktopCollectionChangedEventArgs *v10; // rbx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (VirtualDesktopCollectionChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = VirtualDesktopCollectionChangedEventArgs::VirtualDesktopCollectionChangedEventArgs(v6);
    v9 = *a3;
    v10 = v8;
    *((_DWORD *)v8 + 16) = *a2;
    if ( *((_QWORD *)v8 + 9) != v9 )
    {
      v16 = v9;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v16);
      v16 = *((_QWORD *)v10 + 9);
      *((_QWORD *)v10 + 9) = v9;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_d4ae0bbe_851b_4613_af6d_994543c27f93, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v10;
      (*(void (__fastcall **)(VirtualDesktopCollectionChangedEventArgs *))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
      goto LABEL_12;
    }
    if ( InlineIsEqualGUID(v12, v13) )
    {
      *a1 = v10;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v10 + 8,
                    v14,
                    a1);
      if ( CanCastTo < 0 )
      {
LABEL_12:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v10);
        return (unsigned int)CanCastTo;
      }
    }
    (*(void (__fastcall **)(VirtualDesktopCollectionChangedEventArgs *))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_12;
  }
  return (unsigned int)-2147024882;
}
