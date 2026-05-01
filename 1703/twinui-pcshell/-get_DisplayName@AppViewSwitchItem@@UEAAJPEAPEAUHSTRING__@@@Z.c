/*
 * XREFs of ?get_DisplayName@AppViewSwitchItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180163CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18017FD70 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

__int64 __fastcall AppViewSwitchItem::get_DisplayName(
        ApplicationViewHelpers **this,
        HSTRING *a2,
        unsigned __int16 **a3)
{
  int ViewTitle; // eax
  unsigned int v5; // ebx
  void *v7; // rbx
  __int64 v8; // rax
  HRESULT String; // eax
  unsigned int v10; // edi
  LPVOID pv; // [rsp+28h] [rbp-20h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  pv = 0LL;
  *(_QWORD *)length = -1LL;
  v13 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(this[23], (struct IApplicationView *)&pv, a3);
  v5 = ViewTitle;
  if ( ViewTitle >= 0 )
  {
    v7 = pv;
    LODWORD(v8) = length[0];
    if ( *(_QWORD *)length == -1LL )
    {
      if ( pv )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( *((_WORD *)pv + v8) );
      }
      else
      {
        LODWORD(v8) = 0;
      }
    }
    String = WindowsCreateString((PCNZWCH)pv, v8, a2);
    v10 = String;
    if ( String < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
        (const char *)(unsigned int)String);
    if ( v7 )
      CoTaskMemFree(v7);
    return v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)ViewTitle);
    if ( pv )
      CoTaskMemFree(pv);
    return v5;
  }
}
