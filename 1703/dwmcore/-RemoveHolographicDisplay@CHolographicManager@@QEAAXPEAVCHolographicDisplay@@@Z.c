/*
 * XREFs of ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801A643C
 * Callers:
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A45E0 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicDisplay(
        CHolographicManager *this,
        struct CHolographicDisplay *a2)
{
  CHolographicInteropTaskQueue *v2; // rcx

  v2 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  if ( v2 )
    CHolographicInteropTaskQueue::PostMessageW(
      v2,
      7u,
      (struct IUnknown *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)),
      0LL,
      0LL,
      0LL,
      0LL);
}
