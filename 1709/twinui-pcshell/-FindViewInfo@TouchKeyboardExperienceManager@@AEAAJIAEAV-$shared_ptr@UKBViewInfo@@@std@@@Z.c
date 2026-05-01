/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z @ 0x1801995CC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z @ 0x1801997BC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1801999E8 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180199B24 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1801A3AA0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, int a2, __int64 *a3)
{
  RTL_SRWLOCK *v3; // rdi
  PVOID Ptr; // rax
  __int64 i; // rdx
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1 + 48;
  AcquireSRWLockShared(a1 + 48);
  Ptr = a1[50].Ptr;
  for ( i = (__int64)a1[49].Ptr;
        (PVOID)i != Ptr && (*(_BYTE *)(*(_QWORD *)i + 32LL) || *(_DWORD *)(*(_QWORD *)i + 36LL) != a2);
        i += 16LL )
  {
    ;
  }
  if ( (PVOID)i == Ptr )
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56A,
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
