/*
 * XREFs of ?InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180076E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::InitializePrivilegedOperations(
        CApplicationViewManager *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // ebx
  char *v7; // rbx
  __int64 v8; // rcx
  GUID *v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba )
  {
    v4 = (_QWORD *)((char *)this + 440);
    v5 = *((_QWORD *)this + 55);
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
      v4);
    return 0;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4 )
  {
    v7 = (char *)this + 448;
    v8 = *((_QWORD *)this + 56);
    if ( v8 )
    {
      *(_QWORD *)v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
LABEL_10:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(a3, v9, v7);
    v6 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4 )
  {
    v7 = (char *)this + 456;
    v10 = *((_QWORD *)this + 57);
    if ( v10 )
    {
      *(_QWORD *)v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v9 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
    goto LABEL_10;
  }
  v6 = -2147467263;
LABEL_17:
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D2,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
