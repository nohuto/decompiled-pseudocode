/*
 * XREFs of ?v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18001C900
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellComponentWithGITSite::v_DelegatingQueryService(
        CImmersiveShellComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  IUnknown **GITSitePtr; // rax
  HRESULT Service; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this - 32, &v12);
  Service = IUnknown_QueryService(*GITSitePtr, a2, a3, a4);
  v9 = v12;
  v10 = Service;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v10;
}
