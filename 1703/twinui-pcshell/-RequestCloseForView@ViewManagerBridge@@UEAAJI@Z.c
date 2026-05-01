/*
 * XREFs of ?RequestCloseForView@ViewManagerBridge@@UEAAJI@Z @ 0x1801095C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$RequestCloseForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x18010D2D0 (--$RequestCloseForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::RequestCloseForView(ViewManagerBridge *this, unsigned int a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( *((_BYTE *)this + 137) )
  {
    v4 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return v4;
  }
  ViewManagerInteropTraceLogging::RequestCloseForView<unsigned int &>(&v8);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 12) + 160LL))(
         *((_QWORD *)this + 12),
         a2,
         0LL);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v6);
    return v4;
  }
  return 0LL;
}
