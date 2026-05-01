/*
 * XREFs of ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1802D9230
 * Callers:
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1802D9594 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall PPILayoutOperation::FindLeastRecentlyActivatedItem(
        PPILayoutOperation *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  struct IApplicationView *v7; // rdi
  CWinRTApplicationView *v8; // rbx
  CWinRTApplicationView *v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11; // [rsp+28h] [rbp-21h] BYREF
  CWinRTApplicationView *v12; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-9h] BYREF
  CWinRTApplicationView *v15; // [rsp+50h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 8);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 128LL))(v3, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v10 = 0LL;
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v11 + 24LL))(v11, 1LL, v14) >= 0 )
    {
      v8 = v15;
      v12 = v15;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v12);
      if ( (*(int (__fastcall **)(CWinRTApplicationView *, unsigned __int64 *))(*(_QWORD *)v8 + 184LL))(v8, &v13) >= 0
        && (!v7 || v13 < v6) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v10, &v12);
        v6 = v13;
        v7 = v10;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
    }
    if ( v7 )
    {
      v10 = 0LL;
      *a2 = v7;
    }
    v5 = 0;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v5;
}
