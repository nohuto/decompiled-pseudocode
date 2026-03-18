/*
 * XREFs of ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C14C0
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ??$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF540 (--$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::UpdateHolographicDisplay(
        CHolographicManager *this,
        struct CHolographicDisplay *a2)
{
  CHolographicInteropTaskQueue *v4; // rcx
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 18);
    CompositorTracing::DwmHolographicDisplayUpdate<unsigned int>(&v5);
  }
  v4 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 192) )
      CHolographicInteropTaskQueue::PostMessageW(
        v4,
        8u,
        (struct IUnknown *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
