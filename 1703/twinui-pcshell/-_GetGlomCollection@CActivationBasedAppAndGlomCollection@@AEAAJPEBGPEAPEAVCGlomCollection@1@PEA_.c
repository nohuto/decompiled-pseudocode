/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000731C
 * Callers:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000746C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CCD0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DB50 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x18000E1F0 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001240C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ??ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA?BV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800072EC (--ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA-BV-$ComPtr@UIImmersiveApplicationI.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  __int64 i; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rax
  bool v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // [rsp+80h] [rbp+48h] BYREF
  const unsigned __int16 *v18; // [rsp+88h] [rbp+50h]
  __int64 v19; // [rsp+90h] [rbp+58h] BYREF
  __int64 v20; // [rsp+98h] [rbp+60h] BYREF

  v18 = a2;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 0LL;
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v19 = 0LL;
      v10 = CActivationBasedAppAndGlomCollection::CGlomCollection::operator[](
              (_QWORD *)(i + *((_QWORD *)this + 5)),
              &v20,
              0LL);
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
      v12 = (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*v10)(
              *v10,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              v11) >= 0;
      v13 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v12
        && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v19 + 88LL))(v19, v18, &v17) >= 0
        && v17 )
      {
        break;
      }
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( ++v8 >= v7 )
        return *a3 == 0LL ? 0x80070490 : 0;
    }
    *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v8);
    if ( a4 )
      *a4 = v8;
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}
