/*
 * XREFs of ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180054E40
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058724 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800587A4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::HandleSessionIdleStateChanged(__int64 a1, int a2)
{
  int v3; // eax
  CImmersiveApp::CImmersiveWindowCollection *v4; // rdi
  bool v5; // dl
  __int64 v6; // rcx
  __int64 v7; // rcx
  CImmersiveApp::CImmersiveWindowCollection *v8; // rsi
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 == 2 )
  {
    v3 = *(_DWORD *)(a1 + 332) >> 1;
    if ( (*(_DWORD *)(a1 + 332) & 2) != 0 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v9);
      v4 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136);
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(v4);
      if ( (*((_DWORD *)v4 + 49) & 2) == 0 && (*((_BYTE *)v4 + 196) & 1) == 0 )
      {
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v4);
        if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v4) )
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v4, v5);
      }
      v6 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    else
    {
      v7 = a1 + 136;
      if ( *(_BYTE *)(v7 + 184) && !*(_BYTE *)(v7 + 185) && (v3 & 1) == 0 )
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v7);
    }
  }
  else
  {
    v8 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136);
    if ( *(_BYTE *)(a1 + 320)
      && !*(_BYTE *)(a1 + 321)
      && !(unsigned int)SHIsSameObject(
                          (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 88)),
                          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr)
      && *(_QWORD *)(a1 + 296) )
    {
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v8) )
        CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v8, 2LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v8, 0LL, 2LL);
    }
  }
}
