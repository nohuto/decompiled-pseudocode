/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800076AC
 * Callers:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180007824 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CF90 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DE00 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x18000E4A0 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  __int64 i; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+80h] [rbp+8h] BYREF
  const unsigned __int16 *v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  v17 = a2;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 0LL;
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v18 = 0LL;
      v10 = **(_QWORD **)(i + *((_QWORD *)this + 5));
      v19 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v10)(
              v10,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v12 >= 0
        && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v18 + 88LL))(v18, v17, &v16) >= 0
        && v16 )
      {
        break;
      }
      v13 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( ++v8 >= v7 )
        return *a3 == 0LL ? 0x80070490 : 0;
    }
    *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v8);
    if ( a4 )
      *a4 = v8;
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}
