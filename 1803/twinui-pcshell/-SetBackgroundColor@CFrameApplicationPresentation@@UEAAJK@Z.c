/*
 * XREFs of ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180137370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_a6a06181077b1d12a093be78b8047c2c___ @ 0x180136240 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_a6a06181077b1d12a093be78b8047c2c___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBackgroundColor(CFrameApplicationPresentation *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD2(v5) = a2;
  *(_QWORD *)&v5 = this;
  v2 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_a6a06181077b1d12a093be78b8047c2c___(
         (unsigned int *)this,
         &v5);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
