/*
 * XREFs of ?UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z @ 0x1800D14B8
 * Callers:
 *     ?HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z @ 0x1800D061C (-HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CStartSizingFrame@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800D0B00 (-OnClientWindowReadyForPresentationChanged@CStartSizingFrame@@AEAAJPEAUIClientWindowState@ViewMa.c)
 *     ?InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z @ 0x1800D0E6C (-InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartSizingFrame::UpdateBackgroundTransform(CStartSizingFrame *this, const struct tagRECT *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  v3 = *((_QWORD *)this + 19);
  v4 = *((_QWORD *)this + 14);
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v9);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
      if ( v5 >= 0 )
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v9);
    }
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x233,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
