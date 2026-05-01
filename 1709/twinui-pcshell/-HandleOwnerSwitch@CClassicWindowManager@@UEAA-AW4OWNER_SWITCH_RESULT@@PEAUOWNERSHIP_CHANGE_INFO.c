/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180037690
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180036D8C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180036EA0 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180036F28 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180037648 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 a2)
{
  CClassicWindowManager *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r13
  int v6; // esi
  unsigned int v7; // r15d
  int ClassicWindow; // eax
  struct IClassicWindow *v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned __int64 i; // rsi
  struct IClassicWindow *v13; // rbx
  struct IClassicWindow *v14; // rbx
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-10h]
  struct IClassicWindow *v18; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v4 = (CClassicWindowManager *)(a1 - 80);
  v5 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 80));
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v17 = v6;
  v7 = 0;
  v18 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(v4, *(HWND *)a2, &v18, &v19);
  if ( ClassicWindow < 0 )
  {
    if ( ClassicWindow == -2147319765 )
    {
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( IsWindowVisible(*(HWND *)a2) )
        {
          v7 = 1;
        }
        else
        {
          v9 = *CClassicWindowManager::GetClassicWindowOwner(v4, (struct IClassicWindow **)&v19, *(HWND *)a2);
          v10 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( v9 )
            CClassicWindowManager::RecomputeOwnerForDirectOwnees(v4, 0LL, 0LL);
        }
      }
      else if ( (*(_BYTE *)(a2 + 8) & 0x12) != 0 )
      {
        v11 = *((_QWORD *)v4 + 26);
        for ( i = 0LL; i < v11; ++i )
        {
          v13 = *(struct IClassicWindow **)(*((_QWORD *)v4 + 25) + 8 * i);
          if ( v13 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(*((_QWORD *)v4 + 25) + 8 * i));
          CClassicWindowManager::RecomputeOwner(v4, v13);
          if ( v13 )
            (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v6 = v17;
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v18, *(_DWORD *)(a2 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v18 + 152LL))(v18) )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(a1 + 112) + 16LL))(a1 + 112, v19);
      v7 = 2;
    }
  }
  v14 = v18;
  if ( v18 && !v7 )
  {
    v15 = *(_QWORD *)(a2 + 16);
    if ( v15 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v14 + 80LL))(v14, a2 + 16);
    v14 = v18;
  }
  if ( v14 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}
