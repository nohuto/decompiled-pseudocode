/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x180044430 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___ @ 0x1801023D4 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x180106C60 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180106CF0 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x180106DC0 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180106E90 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18010DF10 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18010E550 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18010F918 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180111498 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x1800F10EC (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x1800F8374 (--$GetAppPosition@VCImmersiveAppFinderByHostId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmers.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18010F198 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801113C4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     WPP_SF_S @ 0x180112198 (WPP_SF_S.c)
 *     WPP_SF_qSdL @ 0x180112350 (WPP_SF_qSdL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_ForgetApplicationNoLock(
        CApplicationManager *a1,
        struct IImmersiveApplicationInternal *a2,
        unsigned int a3)
{
  char v3; // si
  char v6; // bl
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r8
  const unsigned __int16 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int i; // esi
  __int64 v16; // rbx
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  HWND v21[3]; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+98h] [rbp+28h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp+38h] BYREF

  v21[1] = (HWND)-2LL;
  v3 = a3;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(a2, a3, &v22);
  CApplicationManager::_RemoveApplication(a1, a2);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v7 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, (_DWORD)a2, v7, v6, v3);
  }
  v20 = -1LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( (**(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
         a2,
         &GUID_068fc85a_d4d0_45b0_ab39_311de750a277,
         &v19) >= 0
    && (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v20) >= 0 )
  {
    v23 = v20;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
                (int)a1 + 616,
                (int)&v23,
                v10,
                (int)v21) < 0 )
    {
      v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
      CApplicationManager::_DeleteApplicationData(a1, v11, &v20);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v12 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, v12);
      }
    }
  }
  if ( v22 )
  {
    v23 = (unsigned __int64)a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v23);
    (*(void (__fastcall **)(_QWORD *, unsigned __int64 *))(*((_QWORD *)a1 + 87) + 8LL))((_QWORD *)a1 + 87, &v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 352LL))(
           a2,
           1LL,
           &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
           &v18) >= 0 )
    {
      v23 = 0LL;
      for ( i = 0; ; ++i )
      {
        v16 = v18;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, unsigned __int64 *))(*(_QWORD *)v16 + 32LL))(
               v16,
               i,
               &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
               &v23) < 0 )
          break;
        if ( (*(int (__fastcall **)(unsigned __int64, HWND *))(*(_QWORD *)v23 + 32LL))(v23, v21) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded((__int64)a1, (__int64)a2, v21[0], 1);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
}
