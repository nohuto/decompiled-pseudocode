/*
 * XREFs of ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18010DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800F79F0 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800F8404 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18010E130 (-TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInter.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     WPP_SF_qSd @ 0x1801122B4 (WPP_SF_qSd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::TransferAllWindowsBetweenGloms(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal *a3,
        const struct TransferWindowOptions *a4)
{
  int v8; // r14d
  struct IImmersiveApplication **v9; // rax
  __int64 v10; // r8
  bool v11; // bl
  unsigned int i; // esi
  __int64 v13; // rbx
  char v14; // bl
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  HWND v21[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v21[1] = (HWND)-2LL;
  v8 = -2147019873;
  v9 = (struct IImmersiveApplication **)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                                          (CImmersiveAppFinderByApplication *)&v22,
                                          a2);
  v11 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
               (__int64)this + 456,
               v9,
               v10,
               v21) < 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( v11 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 352LL))(
           a2,
           1LL,
           &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
           &v19);
    if ( v8 >= 0 )
    {
      LODWORD(v22) = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v22);
      if ( v8 >= 0 )
      {
        for ( i = 0; i < (unsigned int)v22; ++i )
        {
          v20 = 0LL;
          v13 = v19;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v13 + 32LL))(
                 v13,
                 i,
                 &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                 &v20) >= 0
            && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v20 + 32LL))(v20, v21) >= 0 )
          {
            CApplicationManager::TransferWindowBetweenGloms(this, v21[0], a2, a3, a4);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        }
      }
    }
    if ( ((*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 280LL))(a2) & 1) != 0 )
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 240, a2, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  else if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v14 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v15 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, (_DWORD)a2, v15, v14);
  }
  return (unsigned int)v8;
}
