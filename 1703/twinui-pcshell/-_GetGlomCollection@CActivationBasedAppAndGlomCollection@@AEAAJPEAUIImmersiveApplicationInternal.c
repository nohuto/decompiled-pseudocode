/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000746C
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180006EA0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007070 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000731C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64),
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  __int64 (__fastcall **v8)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v9; // rax
  int GlomCollection; // ebx
  __int64 v11; // rcx
  LPVOID pv[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v14 = 0LL;
  v8 = *a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  GlomCollection = (*v8)((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v9);
  if ( GlomCollection >= 0 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    GlomCollection = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 32LL))(v14, pv);
    if ( GlomCollection >= 0 )
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                         this,
                         (const unsigned __int16 *)pv[0],
                         a3,
                         a4);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)GlomCollection;
}
