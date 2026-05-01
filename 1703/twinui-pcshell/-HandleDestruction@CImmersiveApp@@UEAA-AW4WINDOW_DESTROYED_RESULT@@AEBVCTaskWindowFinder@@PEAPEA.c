/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180055160
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180016F3C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18003BDF4 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180050450 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180056F30 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800571D4 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180057844 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800580AC (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     memset @ 0x180194E50 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  bool v8; // bl
  bool v9; // si
  char v10; // bl
  struct IApplicationPresentationLayer *v11; // rdx
  int v13; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  unsigned __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h]

  *a3 = 0LL;
  v6 = 0;
  v7 = a1 + 136;
  v16 = 0LL;
  if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
              (_QWORD *)(a1 + 376),
              a2,
              (__int64)a3,
              &v15) < 0 )
  {
    if ( (int)CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
                (CImmersiveApp::CImmersiveWindowCollection *)v7,
                a2,
                (bool *)&v15,
                a3) >= 0 )
    {
      v8 = (*(_DWORD *)(a1 + 408) & 2) != 0;
      v9 = (*(_DWORD *)(a1 + 408) & 4) != 0 && (!*(_BYTE *)(v7 + 184) || *(_BYTE *)(v7 + 185));
      CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(a1 - 88));
      if ( *(_QWORD *)(a1 + 296) )
      {
        if ( v9 )
        {
          GetSystemTimeAsFileTime((LPFILETIME)(a1 + 540));
          if ( v8 )
          {
            v6 = 2;
            *(_QWORD *)(a1 + 524) = *(_QWORD *)(a1 + 540);
          }
          else
          {
            v6 = 1;
          }
          *(_DWORD *)(a1 + 408) &= ~2u;
          v11 = *(struct IApplicationPresentationLayer **)(a1 + 272);
          *(_DWORD *)(a1 + 456) |= 1u;
          CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 456), v11);
        }
        else if ( (_BYTE)v15 && v8 )
        {
          *(_DWORD *)(a1 + 408) &= ~2u;
          v6 = 4;
        }
        else
        {
          v6 = 3;
        }
      }
      else
      {
        v10 = *(_BYTE *)(a1 + 560);
        *(_DWORD *)(a1 + 408) = 0;
        *(_DWORD *)(a1 + 496) = 0;
        CImmersiveApp::_ClearForegroundBoostHintedProcess((CImmersiveApp *)(a1 - 88));
        *(_DWORD *)(a1 + 620) = 1;
        memset((void *)(a1 + 500), 0, 0x30uLL);
        GetSystemTimeAsFileTime((LPFILETIME)(a1 + 508));
        CImmersiveApp::_RemoveFromChain((CImmersiveApp *)(a1 - 88));
        v6 = (v10 != 0) + 5;
      }
      if ( !*(_BYTE *)(a1 + 560) && v6 == 5 )
      {
        v13 = 6;
        v14 = 0LL;
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 88),
          (const struct APP_CHANGE_INFO *const)&v13,
          1uLL);
      }
    }
  }
  else
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      (__int64 *)(v7 + 240),
      v15);
    return 7;
  }
  return v6;
}
