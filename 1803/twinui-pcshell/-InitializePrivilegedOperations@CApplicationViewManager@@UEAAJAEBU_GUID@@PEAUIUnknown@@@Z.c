/*
 * XREFs of ?InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18013BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180092220 (-InternalRelease@-$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@@Z @ 0x180139044 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedArrangementOperations_ea_180139044.c)
 */

__int64 __fastcall CApplicationViewManager::InitializePrivilegedOperations(
        CApplicationViewManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data4;
  if ( v4 )
  {
    v7 = InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>>(
           a2,
           a3,
           (__int64 *)this + 57,
           (__int64)this + 464);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E5,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v5 = (char *)this + 448;
    Microsoft::WRL::ComPtr<IPrivilegedSizeConstraintsOperations>::InternalRelease((__int64 *)this + 56);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
      v5);
    return 0;
  }
  return v6;
}
