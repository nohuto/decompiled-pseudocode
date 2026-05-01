/*
 * XREFs of ?v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180080550
 * Callers:
 *     ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800803E0 (-QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponentWithGITSite::v_DelegatingQueryService(
        CImmersiveShellComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  RTL_SRWLOCK *v7; // rcx
  __int64 (__fastcall *v8)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  unsigned int Service; // ebx
  IUnknown *v10; // rcx
  IUnknown *punk[3]; // [rsp+20h] [rbp-18h] BYREF

  punk[1] = (IUnknown *)-2LL;
  v7 = (RTL_SRWLOCK *)((char *)this - 40);
  punk[0] = 0LL;
  v8 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v7->Ptr + 4);
  if ( v8 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v7, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
  else
    v8(v7, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
  Service = IUnknown_QueryService(punk[0], a2, a3, a4);
  v10 = punk[0];
  if ( punk[0] )
  {
    punk[0] = 0LL;
    ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
  }
  return Service;
}
