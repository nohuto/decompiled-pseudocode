/*
 * XREFs of ?MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D894 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall XamlAllUpViewHost::MonitorAdded(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  int FrameForMonitor; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  FrameForMonitor = XamlAllUpViewHost::CreateFrameForMonitor((XamlAllUpViewHost *)((char *)this - 8), a2);
  v3 = FrameForMonitor;
  if ( FrameForMonitor < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)FrameForMonitor);
  return v3;
}
