/*
 * XREFs of ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B16E8
 * Callers:
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B0730 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801B1CA0 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a632cef2db327014c3fb5d2881c4369e___ @ 0x1801B2894 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a632cef2db327014c3fb5d2881c4369e___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::RelaunchWithDelay(AccessibilityExperienceManager *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  wil::details::in1diag3 *v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v1 = CMarshaledInterface::Marshal(
         &v12,
         &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa,
         (struct IUnknown *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL)),
         1);
  v4 = retaddr;
  if ( v1 < 0 )
  {
    v5 = (unsigned int)v1;
    v6 = 482LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v5);
    goto LABEL_10;
  }
  v7 = v12;
  v13 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a632cef2db327014c3fb5d2881c4369e___(
         v7,
         v2,
         v3,
         &v13,
         -2LL);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v4 = retaddr;
  if ( v8 < 0 )
  {
    v5 = (unsigned int)v8;
    v6 = 502LL;
    goto LABEL_9;
  }
LABEL_10:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
