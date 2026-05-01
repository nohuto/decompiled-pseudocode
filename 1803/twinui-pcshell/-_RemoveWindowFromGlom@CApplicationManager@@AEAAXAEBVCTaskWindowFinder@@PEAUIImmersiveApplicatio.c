/*
 * XREFs of ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180111498
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180106260 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18010E130 (-TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInter.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801101D8 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800F79F0 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800F8404 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180109788 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_RemoveWindowFromGlom(
        CApplicationManager *a1,
        __int64 a2,
        struct IImmersiveApplicationInternal *a3,
        __int64 a4,
        void *ppv)
{
  void *v8; // rsi
  struct IImmersiveApplication **v9; // rax
  __int64 v10; // r8
  struct IImmersiveApplicationInternal *v12; // [rsp+30h] [rbp-20h] BYREF
  IMalloc *v13[3]; // [rsp+38h] [rbp-18h] BYREF

  v13[1] = (IMalloc *)-2LL;
  v8 = ppv;
  *(_QWORD *)ppv = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( IUnknown_GetSite((IUnknown *)a3, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0
    && (*(unsigned int (__fastcall **)(void *, struct IImmersiveApplicationInternal *, __int64, void *))(*(_QWORD *)ppv + 56LL))(
         ppv,
         a3,
         a2,
         v8) == 5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 192LL))(a3) )
    {
      v9 = (struct IImmersiveApplication **)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                                              (CImmersiveAppFinderByApplication *)&v12,
                                              a3);
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
        (__int64)a1 + 616,
        v9,
        v10,
        v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      v12 = a3;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
        (_QWORD *)a1 + 77,
        (__int64 *)&v12,
        v13[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    else
    {
      CApplicationManager::_ForgetApplicationNoLock(a1, a3, 3u);
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
}
