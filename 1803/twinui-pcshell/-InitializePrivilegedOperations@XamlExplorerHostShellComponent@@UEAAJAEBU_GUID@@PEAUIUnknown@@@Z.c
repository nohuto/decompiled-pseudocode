/*
 * XREFs of ?InitializePrivilegedOperations@XamlExplorerHostShellComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801F8970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::InitializePrivilegedOperations(
        XamlExplorerHostShellComponent *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rbx
  RTL_SRWLOCK *v10[2]; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+28h] BYREF

  v10[1] = (RTL_SRWLOCK *)-2LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data4;
  if ( !v5 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    ((void (__fastcall *)(struct IUnknown *, GUID *, RTL_SRWLOCK **))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287,
      &v11);
    v6 = (__int64)v11;
    v7 = *((_QWORD *)this + 13);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v10, (RTL_SRWLOCK *)(v7 + 104));
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v7 + 40), v6);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v10);
    v8 = v11;
    if ( *((RTL_SRWLOCK **)this + 15) != v11 )
    {
      v10[0] = v11;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v10);
      v10[0] = *((RTL_SRWLOCK **)this + 15);
      *((_QWORD *)this + 15) = v8;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
