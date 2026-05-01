/*
 * XREFs of ?Solidify@GhostDivider@@UEAAXXZ @ 0x1802EC530
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1802EC470 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1802EBB1C (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

void __fastcall GhostDivider::Solidify(GhostDivider *this)
{
  __int64 *v1; // rdi
  __int64 (__fastcall ***v3)(CWin32ApplicationView *, struct _GUID *, void **); // rdx
  __int64 v4; // rbx
  HWND PreviousWindow; // rax
  int v6; // eax
  __int64 *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v15[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)this + 4);
  v3 = (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))*((_QWORD *)this + 5);
  *((_BYTE *)this + 84) = 1;
  v4 = *v1;
  PreviousWindow = GhostDivider::GetPreviousWindow(this, v3);
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HWND))(v4 + 40))(v1, *((_QWORD *)this + 3), PreviousWindow);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      178LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v6);
  v7 = (__int64 *)((char *)this + 56);
  v14 = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v14);
  v8 = *(_QWORD *)((char *)this + 76);
  v9 = *((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, GUID *, char *))(*(_QWORD *)v9 + 72LL))(
          v9,
          0LL,
          v8,
          0LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 56);
  if ( v10 >= 0 )
  {
    v11 = *v7;
    LODWORD(v13) = *((_DWORD *)this + 16);
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64 *))(*(_QWORD *)v11 + 88LL))(
      v11,
      LambdaCustomPaintProc<_lambda_96edf2fb798d729d000c76ff579fff9f_,HDC__ *>,
      &v13);
    v12 = *v7;
    v13 = 0LL;
    v15[0] = 0;
    v15[1] = 0;
    v15[2] = *((_DWORD *)this + 19);
    v15[3] = *((_DWORD *)this + 20);
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, v15, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      181LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
}
