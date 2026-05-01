/*
 * XREFs of ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800803E0
 * Callers:
 *     <none>
 * Callees:
 *     ?v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180080550 (-v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080600 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitas.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CImmersiveShellComponent::QueryService(
        CImmersiveShellComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  CImmersiveShellComponentWithGITSite *v4; // rsi
  unsigned __int64 v6; // rbx
  __int64 (__fastcall *v10)(CImmersiveShellComponent *__hidden, const struct _GUID *, const struct _GUID *, void **); // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int (*v14)(CImmersiveShellComponentWithGITSite *__hidden, const struct _GUID *, const struct _GUID *, void **); // rax
  int result; // eax
  CImmersiveShellComponentWithGITSite *v16; // rbx
  __int64 (__fastcall *v17)(CImmersiveShellComponentWithGITSite *, const struct _GUID *, void **); // rax
  int Interface; // eax
  int v19; // edi
  void (__fastcall *v20)(CImmersiveShellComponentWithGITSite *); // rax

  v4 = (CImmersiveShellComponent *)((char *)this - 8);
  v6 = 0LL;
  v10 = *(__int64 (__fastcall **)(CImmersiveShellComponent *__hidden, const struct _GUID *, const struct _GUID *, void **))(*((_QWORD *)this - 1) + 72LL);
  if ( v10 == CImmersiveShellComponent::v_QueryService )
  {
    *a4 = 0LL;
  }
  else
  {
    result = ((__int64 (__fastcall *)(CImmersiveShellComponentWithGITSite *))v10)(v4);
    if ( result >= 0 )
      return result;
  }
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 2);
    while ( 1 )
    {
      v13 = *(_QWORD *)&a2->Data1 - *v12;
      if ( *(_QWORD *)&a2->Data1 == *v12 )
        v13 = *(_QWORD *)a2->Data4 - v12[1];
      if ( !v13 )
        break;
      ++v6;
      v12 += 4;
      if ( v6 >= v11 )
        goto LABEL_9;
    }
    v16 = *(CImmersiveShellComponentWithGITSite **)(32 * v6 + *((_QWORD *)this + 2) + 16);
    if ( v16 )
    {
      (*(void (__fastcall **)(CImmersiveShellComponentWithGITSite *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    else if ( v4 )
    {
      (*(void (__fastcall **)(CImmersiveShellComponentWithGITSite *))(*(_QWORD *)v4 + 8LL))(v4);
      v16 = v4;
    }
    v17 = **(__int64 (__fastcall ***)(CImmersiveShellComponentWithGITSite *, const struct _GUID *, void **))v16;
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::QueryInterface(
                    v16,
                    a3,
                    a4);
    else
      Interface = v17(v16, a3, a4);
    v19 = Interface;
    v20 = *(void (__fastcall **)(CImmersiveShellComponentWithGITSite *))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v20 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::Release )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::Release(v16);
      return v19;
    }
    else
    {
      v20(v16);
      return v19;
    }
  }
  else
  {
LABEL_9:
    v14 = *(int (**)(CImmersiveShellComponentWithGITSite *__hidden, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v4 + 96LL);
    if ( v14 == CImmersiveShellComponentWithGITSite::v_DelegatingQueryService )
      return CImmersiveShellComponentWithGITSite::v_DelegatingQueryService(v4, a2, a3, a4);
    else
      return ((__int64 (__fastcall *)(CImmersiveShellComponentWithGITSite *, const struct _GUID *, const struct _GUID *, void **))v14)(
               v4,
               a2,
               a3,
               a4);
  }
}
