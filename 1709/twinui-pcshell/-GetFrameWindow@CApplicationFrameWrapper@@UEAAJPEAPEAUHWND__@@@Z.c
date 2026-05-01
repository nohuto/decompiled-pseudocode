/*
 * XREFs of ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x18004D0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetFrameWindow(CApplicationFrameWrapper *this, HWND *a2)
{
  HWND v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( *((_BYTE *)this + 56) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v3 = (HWND)*((_QWORD *)this + 8);
    if ( v3 )
    {
      *a2 = v3;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)0x80070490LL);
      return 2147943568LL;
    }
  }
}
