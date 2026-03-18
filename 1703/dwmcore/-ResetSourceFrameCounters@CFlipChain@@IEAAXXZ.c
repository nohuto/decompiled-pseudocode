/*
 * XREFs of ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x1801640FC
 * Callers:
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18012D914 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180163F9C (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipChain::ResetSourceFrameCounters(CFlipChain *this)
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( *((_DWORD *)this + 44) == -1 )
    ++*((_DWORD *)this + 42);
  LODWORD(v1) = 0;
  HIDWORD(v1) = *((_DWORD *)this + 50);
  *((_QWORD *)this + 15) = v1;
  ++*((_DWORD *)this + 30);
  *((_QWORD *)this + 22) = v1;
  *((_QWORD *)this + 23) = v1;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 24) = 0LL;
}
