/*
 * XREFs of ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x180091070
 * Callers:
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1800210DC (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x18002C9F8 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 * Callees:
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E08 (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::Sequence::ResetTime(int **this, int a2, bool a3)
{
  __int64 v5; // r11

  Components::Animations::Sequence::ConfigureTimer(this);
  *(_DWORD *)(v5 + 208) = a2;
  Components::Animations::Timer::Update((Components::Animations::Timer *)(v5 + 208), 0, a3);
}
