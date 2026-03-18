/*
 * XREFs of ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x1400070EC
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001210 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001D20 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007180 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

void __fastcall CDwmAppHost::OnReportEvent(CDwmAppHost *this, int a2, unsigned int a3, char a4)
{
  unsigned int v5; // r8d

  v5 = HIWORD(a2) | 0x40000000;
  if ( a4 )
    CDwmAppHost::ReportEventWithDword(this, a2, v5, a3);
  else
    CDwmAppHost::ReportEventW(this, a2, v5, 0LL);
}
