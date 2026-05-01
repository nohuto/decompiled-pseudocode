/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@@@Z @ 0x18009DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180030C68 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180071448 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180096138 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@@@YAPEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        unsigned __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0318_0003 *a2)
{
  signed int Object; // edi
  struct IUnknown *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  void *v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF

  *(_DWORD *)a2 = 0;
  v11 = 0LL;
  Object = *(_BYTE *)(this + 576) != 0 ? 0x8007139F : 0;
  if ( !*(_BYTE *)(this + 576) )
  {
    v5 = (struct IUnknown *)*CWRLObjectWithGITSite::SiteUnk((CWRLObjectWithGITSite *)(this - 64), &v10);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>>(&v11);
    Object = IAMPrivate_QueryObject(
               v5,
               (struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
               &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
               (void **)v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v10);
    if ( Object >= 0 )
    {
      v10 = 0LL;
      v7 = v11;
      Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease(&v10);
      Object = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v7 + 56LL))(
                 v7,
                 *(_QWORD *)(this + 432),
                 &v10);
      if ( Object >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 340);
        Object = 0;
        if ( *((_BYTE *)v10 + 33) || *((_BYTE *)v10 + 35) )
        {
          v12 = 0LL;
          v8 = v11;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 112LL))(
                 v8,
                 this & ((unsigned __int128)-(__int128)(this - 112) >> 64),
                 &v12) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        }
      }
      Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease(&v10);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  return (unsigned int)Object;
}
