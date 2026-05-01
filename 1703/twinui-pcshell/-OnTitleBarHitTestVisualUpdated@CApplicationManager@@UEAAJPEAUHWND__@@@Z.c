/*
 * XREFs of ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180016290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180015FC4 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnTitleBarHitTestVisualUpdated(CApplicationManager *this, HWND a2)
{
  int FrameByHwnd; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct IApplicationFrameProxy *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd((CApplicationManager *)((char *)this - 296), a2, &v11);
  v3 = FrameByHwnd;
  if ( FrameByHwnd < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DBF,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)FrameByHwnd);
    goto LABEL_11;
  }
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v11 + 144LL))(v11, &v10);
  v3 = v4;
  if ( v4 < 0 )
  {
    v5 = 7618LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
  v3 = v4;
  if ( v4 < 0 )
  {
    v5 = 7619LL;
    goto LABEL_7;
  }
  v3 = 0;
LABEL_9:
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
LABEL_11:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v3;
}
