/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D284
 * Callers:
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::operator() @ 0x1800A1480 (_lambda_114373a7e1561dd71911e06c6b6df4ef_--operator().c)
 *     _lambda_5e1669f70f5e626cb13f0ae9b344f394_::operator() @ 0x1800A1804 (_lambda_5e1669f70f5e626cb13f0ae9b344f394_--operator().c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18023CF18 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18023E088 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x18023FA6C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FA420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rdi
  _QWORD *Ptr; // rcx
  _QWORD *i; // rdx
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1 + 52;
  AcquireSRWLockShared(a1 + 52);
  Ptr = a1[54].Ptr;
  for ( i = a1[53].Ptr; i != Ptr && (*(_BYTE *)(*i + 32LL) || *(_DWORD *)(*i + 36LL) != a2); i += 2 )
    ;
  if ( i == Ptr )
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v9 = 0;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v9;
}
