/*
 * XREFs of ?Reset@CAppTransitionTargetManager@@UEAAXXZ @ 0x1802AF6A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18019B3A4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

void __fastcall CAppTransitionTargetManager::Reset(CAppTransitionTargetManager *this)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h]

  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)this + 40);
  BYTE2(v2) = 1;
  HIDWORD(v2) = -1;
  LOWORD(v2) = 0;
  *((_DWORD *)this + 27) = 0;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 88) = v2;
}
