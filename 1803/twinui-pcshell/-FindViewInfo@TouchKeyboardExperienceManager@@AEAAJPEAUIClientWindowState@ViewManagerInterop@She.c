/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D32C
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18023F480 (-OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FA420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::_Find_if_unchecked_std::shared_ptr_KBViewInfo__const_____ptr64__lambda_42a747e7d0186b6968b291f71e865691___ @ 0x18023B4F8 (std--_Find_if_unchecked_std--shared_ptr_KBViewInfo__const_____ptr64__lambda_42a747e7d0186b6968b2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (RTL_SRWLOCK *)(a1 + 416);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 416));
  v7 = std::_Find_if_unchecked_std::shared_ptr_KBViewInfo__const_____ptr64__lambda_42a747e7d0186b6968b291f71e865691___(
         *(_QWORD ***)(a1 + 424),
         *(_QWORD ***)(a1 + 432),
         a2);
  if ( v7 == *(_QWORD **)(a1 + 432) )
  {
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x863,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v7);
    v8 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
