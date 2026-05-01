/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800F167C
 * Callers:
 *     ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18010B2C0 (-SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DAT.c)
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18010B360 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004361C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F08B0 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1800F7A4C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        CApplicationManager *a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  signed int First; // ebx
  int v11; // ecx
  char v12; // al
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-30h]
  void *ppv[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  IUnknown *punk; // [rsp+98h] [rbp+28h] BYREF

  ppv[1] = (void *)-2LL;
  punk = 0LL;
  ppv[0] = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)ppv);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (__int64)a1,
            (__int64)ppv,
            &punk,
            0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  if ( First >= 0 )
  {
    ppv[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
    First = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, ppv);
    if ( First >= 0 )
    {
      v11 = 0;
      if ( (a4 & 0x30) != 0 )
      {
        v12 = -CIAMGlobals::IsCalledOnIAMThread(0LL);
        First = v12 == 0 ? 0x8001010E : 0;
        if ( !v12 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            3847LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)First);
          goto LABEL_10;
        }
        if ( (a4 & 0x30) == 0 || (((a4 & 0x30) - 1LL) & a4 & 0x30) != 0 )
        {
          First = -2147024809;
          goto LABEL_10;
        }
        v13 = a4 & 0x10;
        a4 &= 0xFFFFFFCF;
        v11 = v13 != 0 ? 1 : 8;
      }
      LODWORD(v16) = a6;
      LODWORD(v15) = *((_DWORD *)a1 + 206);
      First = CApplicationManager::_SetViewPositionHelper(
                a1,
                0LL,
                a3,
                0LL,
                a4,
                v15,
                a5,
                0LL,
                v16,
                v11,
                (__int64)a2,
                (__int64)punk);
    }
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return (unsigned int)First;
}
