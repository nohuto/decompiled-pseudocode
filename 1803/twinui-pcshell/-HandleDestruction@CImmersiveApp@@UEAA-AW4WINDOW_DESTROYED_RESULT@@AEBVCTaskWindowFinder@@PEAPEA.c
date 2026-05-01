/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18012E850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18004817C (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F8F08 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800F93EC (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800F952C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18011CC0C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18012D83C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x180131C60 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // esi
  CImmersiveApp::CImmersiveWindowCollection *v7; // rbp
  bool v8; // bl
  int v9; // ebx
  bool v10; // r14
  char v11; // bl
  struct IApplicationPresentationLayer *v12; // rdx
  int v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152);
  v16 = 0LL;
  v8 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
              (_QWORD *)(a1 + 392),
              a2,
              (__int64)a3,
              &v17) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v8 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      (_QWORD *)v7 + 30,
      v17);
    return 7;
  }
  else if ( (int)CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(v7, a2, (bool *)&v16, a3) >= 0 )
  {
    v6 = 2;
    v9 = *(_DWORD *)(a1 + 424) & 2;
    v10 = (*(_DWORD *)(a1 + 424) & 4) != 0 && !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v7);
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(a1 - 112));
    if ( *(_QWORD *)(a1 + 312) )
    {
      if ( v10 )
      {
        GetSystemTimeAsFileTime((LPFILETIME)(a1 + 556));
        if ( v9 )
          *(_QWORD *)(a1 + 540) = *(_QWORD *)(a1 + 556);
        else
          v6 = 1;
        *(_DWORD *)(a1 + 424) &= ~2u;
        v12 = *(struct IApplicationPresentationLayer **)(a1 + 288);
        *(_DWORD *)(a1 + 472) |= 1u;
        CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 472), v12);
      }
      else if ( (_BYTE)v16 && v9 )
      {
        *(_DWORD *)(a1 + 424) &= ~2u;
        v6 = 4;
      }
      else
      {
        v6 = 3;
      }
    }
    else
    {
      v11 = *(_BYTE *)(a1 + 576);
      *(_DWORD *)(a1 + 424) = 0;
      *(_DWORD *)(a1 + 512) = 0;
      CImmersiveApp::_ClearForegroundBoostHintedProcess((HANDLE *)(a1 - 112));
      *(_DWORD *)(a1 + 636) = 1;
      memset_0((void *)(a1 + 516), 0, 0x30uLL);
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 524));
      CImmersiveApp::_RemoveFromChain((CImmersiveApp *)(a1 - 112));
      v6 = (v11 != 0) + 5;
    }
    if ( !*(_BYTE *)(a1 + 576) && v6 == 5 )
    {
      v14 = 6;
      v15 = 0LL;
      CImmersiveApp::_ScheduleApplicationNotifications(
        (RTL_SRWLOCK *)(a1 - 112),
        (const struct APP_CHANGE_INFO *const)&v14,
        1uLL);
    }
  }
  return v6;
}
