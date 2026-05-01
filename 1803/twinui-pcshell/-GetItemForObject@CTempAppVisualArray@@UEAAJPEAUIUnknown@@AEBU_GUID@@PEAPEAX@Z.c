/*
 * XREFs of ?GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F5210
 * Callers:
 *     ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x1802F4C90 (-AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCTempAppVisualFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByView@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802F4AE8 (--$FindEx@VCTempAppVisualFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisual@@@WR.c)
 */

__int64 __fastcall CTempAppVisualArray::GetItemForObject(
        CTempAppVisualArray *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // rcx
  CWinRTApplicationView *v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CWinRTApplicationView *v16; // [rsp+68h] [rbp+28h] BYREF
  CWinRTApplicationView *v17; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CWinRTApplicationView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 177LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\tempappvisual.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v13 = 0LL;
  v17 = v16;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v17);
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITemporaryAppVisual>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITemporaryAppVisual>>>::FindEx<CTempAppVisualFinderByView>(
         (_QWORD *)this + 2,
         (__int64)&v17,
         &v13,
         &v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v9 >= 0 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8 * v14);
    v8 = (**v11)(v11, a3, a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    v10 = 181LL;
    goto LABEL_6;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return (unsigned int)v9;
}
