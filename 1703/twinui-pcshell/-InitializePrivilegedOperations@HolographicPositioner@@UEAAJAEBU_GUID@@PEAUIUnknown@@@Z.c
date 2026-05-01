/*
 * XREFs of ?InitializePrivilegedOperations@HolographicPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800D9700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::InitializePrivilegedOperations(
        HolographicPositioner *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  _QWORD *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2 )
  {
    v4 = (_QWORD *)((char *)this + 56);
    v5 = 0;
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2,
      v4);
  }
  else
  {
    v5 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80004001LL);
  }
  return v5;
}
