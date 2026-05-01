/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30
 * Callers:
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18003D2A4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18003D358 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x180005DE4 (CClassicWindowManager--ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180006F2C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18011AE40 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r15
  int v6; // r12d
  unsigned int v7; // r14d
  volatile int *v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 (__fastcall ***v14)(); // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int128 v18; // [rsp+60h] [rbp-18h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+50h] BYREF
  volatile int *v21; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+60h] BYREF

  v4 = a1 - 72;
  v5 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v16 = v5;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1LL);
  v17 = v6;
  v7 = 0;
  v8 = (volatile int *)*a2;
  v19 = 0LL;
  v21 = v8;
  v20 = 0LL;
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (_QWORD *)(v4 + 192),
         &v21,
         &v20,
         &v22,
         v14);
  if ( v9 < 0
    || (v13 = v22,
        v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v4 + 192) + 8 * v22))(
               *(_QWORD *)(*(_QWORD *)(v4 + 192) + 8 * v22),
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v19),
        v9 < 0) )
  {
    if ( v9 == -2147319765 )
    {
      if ( (a2[1] & 1) != 0 )
      {
        if ( IsWindowVisible((HWND)*a2) )
        {
          v7 = 1;
        }
        else
        {
          v12 = *(_QWORD *)CClassicWindowManager::GetClassicWindowOwner(v4, &v20, *a2);
          Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v20);
          if ( v12 )
          {
            v20 = 0LL;
            *(_QWORD *)&v15 = &v20;
            *((_QWORD *)&v15 + 1) = v4;
            v18 = v15;
            v21 = 0LL;
            *(_QWORD *)&v15 = &v21;
            *((_QWORD *)&v15 + 1) = &v18;
            CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___(v4, (__int64)&v15);
          }
        }
      }
      else if ( (a2[1] & 0x12) != 0 )
      {
        CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___(v4, v4);
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v19, *((unsigned int *)a2 + 2));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 152LL))(v19) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 112) + 16LL))(a1 + 112, v13);
      v7 = 2;
    }
  }
  v10 = v19;
  if ( v19 && !v7 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a2 + 2);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 80LL))(v10, a2 + 2);
    v10 = v19;
  }
  if ( v10 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}
