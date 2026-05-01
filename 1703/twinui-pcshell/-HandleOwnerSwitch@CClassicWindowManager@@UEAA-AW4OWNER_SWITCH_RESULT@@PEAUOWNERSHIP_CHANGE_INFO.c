/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180035FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18003565C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180035770 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x1800357F8 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 a2)
{
  CClassicWindowManager *v4; // rdi
  unsigned int v5; // r15d
  int ClassicWindow; // eax
  struct IClassicWindow *v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 i; // rsi
  struct IClassicWindow *v11; // rbx
  struct IClassicWindow *v12; // rbx
  __int64 v13; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  int v16; // [rsp+30h] [rbp-10h]
  struct IClassicWindow *v17; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v4 = (CClassicWindowManager *)(a1 - 56);
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 56) >> 64)));
  v5 = 0;
  v17 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(v4, *(HWND *)a2, &v17, &v18);
  if ( ClassicWindow < 0 )
  {
    if ( ClassicWindow == -2147319765 )
    {
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( IsWindowVisible(*(HWND *)a2) )
        {
          v5 = 1;
        }
        else
        {
          v7 = *CClassicWindowManager::GetClassicWindowOwner(v4, (struct IClassicWindow **)&v18, *(HWND *)a2);
          v8 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
          if ( v7 )
            CClassicWindowManager::RecomputeOwnerForDirectOwnees(v4, 0LL, 0LL);
        }
      }
      else if ( (*(_BYTE *)(a2 + 8) & 0x12) != 0 )
      {
        v9 = *((_QWORD *)v4 + 23);
        for ( i = 0LL; i < v9; ++i )
        {
          v11 = *(struct IClassicWindow **)(*((_QWORD *)v4 + 22) + 8 * i);
          if ( v11 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(*((_QWORD *)v4 + 22) + 8 * i));
          CClassicWindowManager::RecomputeOwner(v4, v11);
          if ( v11 )
            (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v17, *(_DWORD *)(a2 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 152LL))(v17) )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(a1 + 112) + 16LL))(a1 + 112, v18);
      v5 = 2;
    }
  }
  v12 = v17;
  if ( v17 && !v5 )
  {
    v13 = *(_QWORD *)(a2 + 16);
    if ( v13 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v12 + 80LL))(v12, a2 + 16);
    v12 = v17;
  }
  if ( v12 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v16 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
