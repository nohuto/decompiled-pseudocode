/*
 * XREFs of ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803123D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F60DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18031225C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::Clone(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v6; // rdx
  int Instance; // ebx
  PVOID Ptr; // r14
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  void *v13; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+58h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v15);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Instance = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&this[3], v6, (CAppLayout **)&v13);
  if ( Instance >= 0 )
  {
    Ptr = this[9].Ptr;
    v9 = 0LL;
    if ( Ptr )
    {
      while ( Instance >= 0 )
      {
        v10 = this[8].Ptr;
        v14 = 0LL;
        v11 = v10[v9];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 88LL))(v11, &v14);
        if ( Instance >= 0 )
          Instance = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v13 + 224LL))(v13, v14, 1LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        if ( ++v9 >= (unsigned __int64)Ptr )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( Instance >= 0 )
        Instance = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v13)(v13, a2, a3);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  return (unsigned int)Instance;
}
