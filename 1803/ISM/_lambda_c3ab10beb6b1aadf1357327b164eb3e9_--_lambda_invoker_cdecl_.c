/*
 * XREFs of _lambda_c3ab10beb6b1aadf1357327b164eb3e9_::_lambda_invoker_cdecl_ @ 0x1800328F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x180037440 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c3ab10beb6b1aadf1357327b164eb3e9_::_lambda_invoker_cdecl_(ControllerProcessor *this)
{
  unsigned int v2; // edi
  int v3; // r14d
  _DWORD *v4; // r15
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // rcx
  POINT v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  POINT pt; // [rsp+28h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  _BYTE v13[16]; // [rsp+50h] [rbp-20h] BYREF

  v12 = -2LL;
  v2 = 0;
  v3 = 0;
  v4 = (_DWORD *)((char *)this + 1956);
  *(_QWORD *)((char *)this + 1956) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
  v11 = 0uLL;
  v9 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 861);
  if ( v5 && (**v5)(v5, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, &v9) >= 0 )
    v11 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  CursorAttraction::ApplyCursorAttraction(
    (ControllerProcessor *)((char *)this + 6932),
    &pt,
    (const struct tagRECT *)((char *)this + 1956));
  v7 = pt;
  if ( (*((_BYTE *)this + 1952) & 8) == 0 || PtInRect((const RECT *)((char *)this + 2004), pt) )
  {
    if ( *v4 != v7.x || *((_DWORD *)this + 490) != pt.y )
    {
      v3 = ControllerProcessor::SetPointerPosition(this, v7, 0);
      if ( v3 < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
    }
    return (unsigned int)v3;
  }
  return v2;
}
