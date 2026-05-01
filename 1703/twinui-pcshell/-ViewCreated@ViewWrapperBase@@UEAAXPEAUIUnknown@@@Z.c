/*
 * XREFs of ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x180113BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x180116FB8 (-CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::ViewCreated(ViewWrapperBase *this, struct IUnknown *a2)
{
  __int64 v4; // rcx
  char *v5; // rbx
  bool v6; // zf
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-18h]

  if ( *((struct IUnknown **)this + 20) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((_DWORD *)this + 77) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 18) + 448LL) + 72LL))(
      *(_QWORD *)(*((_QWORD *)this + 18) + 448LL),
      *((_QWORD *)this + 20));
  v5 = (char *)this - 8;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)v5);
  ViewWrapperBase::CommitActivationTimeoutPolicy((ViewWrapperBase *)v5);
  v6 = *((_DWORD *)v5 + 58) == 1;
  v7 = *(_OWORD *)(v5 + 196);
  v8 = *(_OWORD *)(v5 + 212);
  v11 = *((_DWORD *)v5 + 57);
  v9 = v7;
  v10 = v8;
  if ( v6 )
    DWORD2(v10) = *((_DWORD *)v5 + 59);
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int128 *))(**(_QWORD **)(*((_QWORD *)v5 + 19) + 448LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)v5 + 19) + 448LL),
    *((_QWORD *)v5 + 21),
    v5 + 176,
    &v9);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 176LL))(v5);
}
