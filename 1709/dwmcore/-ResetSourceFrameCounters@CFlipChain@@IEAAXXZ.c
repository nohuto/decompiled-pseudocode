/*
 * XREFs of ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180165DD8
 * Callers:
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x180165A3C (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180165C70 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipChain::ResetSourceFrameCounters(CFlipChain *this)
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( *((_DWORD *)this + 46) == -1 )
    ++*((_DWORD *)this + 44);
  LODWORD(v1) = 0;
  HIDWORD(v1) = *((_DWORD *)this + 52);
  *((_QWORD *)this + 16) = v1;
  ++*((_DWORD *)this + 32);
  *((_QWORD *)this + 23) = v1;
  *((_QWORD *)this + 24) = v1;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 25) = 0LL;
}
