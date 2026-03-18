/*
 * XREFs of ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C00E9290
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C00232B8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C002376C (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 * Callees:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C00238D0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJ::reinit(EPATHOBJ *this)
{
  if ( *((_QWORD *)this + 1) )
  {
    EPATHOBJ::vFreeBlocks(this);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 64LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 68LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) = 3;
    *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 1) + 92LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 96LL) = 0;
    *(_QWORD *)this = 0LL;
  }
}
