/*
 * XREFs of ?InitializePrivilegedOperations@CDesktopPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1802BF6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePrivilegedOperations(
        CDesktopPositioner *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 80;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
      v5);
  }
  return 0LL;
}
