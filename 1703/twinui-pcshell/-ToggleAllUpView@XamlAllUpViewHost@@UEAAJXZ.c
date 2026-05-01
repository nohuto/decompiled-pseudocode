/*
 * XREFs of ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x18012D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18012D0E0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x18012D690 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::ToggleAllUpView(XamlAllUpViewHost *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  if ( *((_BYTE *)this + 104) )
  {
    v2 = XamlAllUpViewHost::DismissViewAnimated(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 330LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v2);
      goto LABEL_8;
    }
  }
  else
  {
    v2 = XamlAllUpViewHost::Show(
           (unsigned __int64)this,
           *((IUnknown **)this + 24),
           *((_QWORD *)this + 25),
           *((_DWORD *)this + 52));
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 334LL;
      goto LABEL_6;
    }
  }
  v3 = 0;
LABEL_8:
  if ( v7 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
