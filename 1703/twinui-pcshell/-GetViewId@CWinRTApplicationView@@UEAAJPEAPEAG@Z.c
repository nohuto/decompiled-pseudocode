/*
 * XREFs of ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18007F3A0
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800730E0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x1800802A0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005A980 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetViewId(CWinRTApplicationView *this, unsigned __int16 **a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  void *v7; // rcx
  _QWORD v9[3]; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a2 = 0LL;
  pv[0] = 0LL;
  v3 = *((_QWORD *)this + 19);
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v3 + 40LL))(v3, pv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    memset(v9, 0, sizeof(v9));
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           (__int64)v9,
           (__int64)L"WRT:%s",
           pv[0]);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0LL;
      *a2 = (unsigned __int16 *)v9[0];
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x39,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v6);
      v7 = (void *)v9[0];
    }
    if ( v7 )
      CoTaskMemFree(v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v5;
}
