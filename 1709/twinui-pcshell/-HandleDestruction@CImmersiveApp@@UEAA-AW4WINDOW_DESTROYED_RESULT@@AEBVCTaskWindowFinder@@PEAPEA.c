/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800575B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180017FB0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18003D018 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800526FC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800597E0 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180059E90 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18005A6E0 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rsi
  bool v8; // bl
  bool v9; // si
  char v10; // bl
  struct IApplicationPresentationLayer *v11; // rdx
  int v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  *a3 = 0LL;
  v6 = 0;
  v16 = 0LL;
  v7 = (__int64 *)(a1 + 392);
  if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
              (_QWORD *)(a1 + 392),
              a2,
              (__int64)a3,
              &v15) < 0 )
  {
    if ( (int)CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
                (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152),
                a2,
                (bool *)&v15,
                a3) >= 0 )
    {
      v8 = (*(_DWORD *)(a1 + 424) & 2) != 0;
      v9 = (*(_DWORD *)(a1 + 424) & 4) != 0 && (!*(_BYTE *)(a1 + 336) || *(_BYTE *)(a1 + 337));
      CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(a1 - 112));
      if ( *(_QWORD *)(a1 + 312) )
      {
        if ( v9 )
        {
          GetSystemTimeAsFileTime((LPFILETIME)(a1 + 556));
          if ( v8 )
          {
            v6 = 2;
            *(_QWORD *)(a1 + 540) = *(_QWORD *)(a1 + 556);
          }
          else
          {
            v6 = 1;
          }
          *(_DWORD *)(a1 + 424) &= ~2u;
          v11 = *(struct IApplicationPresentationLayer **)(a1 + 288);
          *(_DWORD *)(a1 + 472) |= 1u;
          CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 472), v11);
        }
        else if ( (_BYTE)v15 && v8 )
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
        v10 = *(_BYTE *)(a1 + 576);
        *(_DWORD *)(a1 + 424) = 0;
        *(_DWORD *)(a1 + 512) = 0;
        CImmersiveApp::_ClearForegroundBoostHintedProcess((CImmersiveApp *)(a1 - 112));
        *(_DWORD *)(a1 + 636) = 1;
        memset((void *)(a1 + 516), 0, 0x30uLL);
        GetSystemTimeAsFileTime((LPFILETIME)(a1 + 524));
        CImmersiveApp::_RemoveFromChain((CImmersiveApp *)(a1 - 112));
        v6 = (v10 != 0) + 5;
      }
      if ( !*(_BYTE *)(a1 + 576) && v6 == 5 )
      {
        v13 = 6;
        v14 = 0LL;
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 112),
          (const struct APP_CHANGE_INFO *const)&v13,
          1uLL);
      }
    }
  }
  else
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v7,
      v15);
    return 7;
  }
  return v6;
}
