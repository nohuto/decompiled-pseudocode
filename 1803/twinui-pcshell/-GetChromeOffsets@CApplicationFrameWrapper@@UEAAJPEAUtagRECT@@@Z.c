/*
 * XREFs of ?GetChromeOffsets@CApplicationFrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x180016E10
 * Callers:
 *     ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x180014734 (-_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetChromeOffsets(CApplicationFrameWrapper *this, struct tagRECT *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = 0LL;
  *a2 = 0u;
  if ( *((_BYTE *)this + 72) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x8007139FLL,
      0);
    return 2147947423LL;
  }
  else
  {
    *a2 = *(struct tagRECT *)((char *)this + 88);
  }
  return result;
}
