/*
 * XREFs of ?v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18001D400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponentWithGITSite::v_DelegatingQueryService(
        CImmersiveShellComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int Service; // ebx
  IUnknown *v8; // rcx
  IUnknown *punk[3]; // [rsp+20h] [rbp-18h] BYREF

  punk[1] = (IUnknown *)-2LL;
  punk[0] = 0LL;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 5) + 32LL))(
    (char *)this - 40,
    &GUID_00000000_0000_0000_c000_000000000046,
    punk);
  Service = IUnknown_QueryService(punk[0], a2, a3, a4);
  v8 = punk[0];
  if ( punk[0] )
  {
    punk[0] = 0LL;
    ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return Service;
}
