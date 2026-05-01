/*
 * XREFs of ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180057290
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0001@@W4GHOST_STATUS@@@Z @ 0x18005AC44 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005ADE0 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005AE60 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B270 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
    v3 = *(_DWORD *)(a1 + 348) >> 1;
    if ( (*(_DWORD *)(a1 + 348) & 2) != 0 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v9);
      v4 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152);
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
      v7 = a1 + 152;
      if ( *(_BYTE *)(v7 + 184) && !*(_BYTE *)(v7 + 185) && (v3 & 1) == 0 )
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v7);
    }
  }
  else
  {
    v8 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152);
    if ( *(_BYTE *)(a1 + 336)
      && !*(_BYTE *)(a1 + 337)
      && !(unsigned int)SHIsSameObject(
                          (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 112)),
                          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr)
      && *(_QWORD *)(a1 + 312) )
    {
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v8) )
        CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v8, 2LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v8, 0LL, 2LL);
    }
  }
}
