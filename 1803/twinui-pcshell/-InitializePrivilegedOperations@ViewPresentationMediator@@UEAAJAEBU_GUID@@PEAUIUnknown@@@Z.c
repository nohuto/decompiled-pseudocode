/*
 * XREFs of ?InitializePrivilegedOperations@ViewPresentationMediator@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801F6470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@@Z @ 0x1801390A8 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@_ea_1801390A8.c)
 */

__int64 __fastcall ViewPresentationMediator::InitializePrivilegedOperations(
        ViewPresentationMediator *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data4;
  if ( v4 )
  {
    v7 = InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,>(
           a2,
           a3,
           (__int64 *)this + 10);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v5 = (char *)this + 72;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287,
      v5);
    return 0;
  }
  return v6;
}
