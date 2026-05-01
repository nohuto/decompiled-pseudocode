/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180052DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sdql @ 0x18004FF74 (WPP_SF_Sdql.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180059010 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800595BC (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800599B0 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::OnViewReadinessChanged(
        CImmersiveApp *this,
        struct ITaskWindow *a2,
        unsigned __int8 a3)
{
  HWND v5; // rax
  char *v6; // rdi
  HWND v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // bl
  bool v11; // dl
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = (HWND)(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = (char *)this + 136;
  v7 = v5;
  if ( a3
    && (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
              (CImmersiveApp::CImmersiveWindowCollection *)v6,
              v5,
              &v13) >= 0 )
  {
    if ( !v13 )
    {
      v10 = (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)v6 + 19) + 216LL))(**((_QWORD **)v6 + 19)) == 3;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 17) + 24LL))(
        *((_QWORD *)v6 + 17),
        **((_QWORD **)v6 + 19));
      if ( v10 )
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation((CImmersiveApp::CImmersiveWindowCollection *)v6);
    }
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sdql(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v8,
        v9,
        *(const wchar_t **)(*((_QWORD *)v6 + 18) + 504LL),
        *(_DWORD *)(*((_QWORD *)v6 + 18) + 512LL),
        v7,
        a3);
    if ( *((_QWORD *)v6 + 15)
      && !*((_DWORD *)v6 + 49)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 14) + 240LL))(*((_QWORD *)v6 + 14)) )
    {
      CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)v6,
        v7);
LABEL_16:
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)v6);
      return 0LL;
    }
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)v6)
      && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)v6) )
    {
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        (CImmersiveApp::CImmersiveWindowCollection *)v6,
        v11);
      goto LABEL_16;
    }
  }
  return 0LL;
}
