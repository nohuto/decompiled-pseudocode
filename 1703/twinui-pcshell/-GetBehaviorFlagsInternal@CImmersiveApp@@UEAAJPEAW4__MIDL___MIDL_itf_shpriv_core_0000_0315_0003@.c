/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0003@@@Z @ 0x180052B40
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180050130 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        signed __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0315_0003 *a2)
{
  __int64 v4; // rcx
  signed int Object; // ebx
  struct IUnknown *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+39h] [rbp-17h]
  char v14; // [rsp+3Ah] [rbp-16h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = 0LL;
  v15 = 0LL;
  Object = *(_BYTE *)(this + 560) != 0 ? 0x8007139F : 0;
  if ( !*(_BYTE *)(this + 560) )
  {
    v6 = (struct IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr(this - 48, &v16);
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
    Object = IAMPrivate_QueryObject(
               v6,
               (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
               &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
               (void **)v7);
    v8 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( Object >= 0 )
    {
      v12 = 0LL;
      Object = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15 + 56LL))(
                 v15,
                 *(_QWORD *)(this + 416),
                 &v12);
      if ( Object >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 324);
        Object = 0;
        if ( v13 || v14 )
        {
          v16 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 104LL))(
                 v15,
                 this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 88) >> 64),
                 &v16) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          v9 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
      }
      v10 = v12;
      if ( (_QWORD)v12 )
      {
        *(_QWORD *)&v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v4 = v15;
  }
  if ( v4 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)Object;
}
