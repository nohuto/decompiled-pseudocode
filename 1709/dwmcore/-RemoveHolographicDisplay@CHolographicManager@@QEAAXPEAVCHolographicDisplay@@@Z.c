/*
 * XREFs of ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C0EE4
 * Callers:
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BD0B0 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 *     ?UninitializeClientDisplays@CHolographicManager@@AEAAXXZ @ 0x1801C1444 (-UninitializeClientDisplays@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF448 (--$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  unsigned int Ptr; // edx
  __int64 v5; // rcx
  struct CHolographicDisplay **i; // r8
  __int64 v7; // rdx
  CHolographicInteropTaskQueue *v8; // rcx
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
  {
    v9 = *((_DWORD *)a2 + 18);
    CompositorTracing::DwmHolographicDisplayRemove<unsigned int>(&v9);
  }
  AcquireSRWLockExclusive(this + 10);
  Ptr = (unsigned int)this[14].Ptr;
  v5 = 0LL;
  for ( i = (struct CHolographicDisplay **)this[11].Ptr; (unsigned int)v5 < Ptr; v5 = (unsigned int)(v5 + 1) )
  {
    if ( a2 == i[v5] )
      break;
  }
  if ( (unsigned int)v5 < Ptr )
  {
    if ( (unsigned int)v5 < Ptr - 1 )
    {
      do
      {
        v7 = (unsigned int)(v5 + 1);
        i[v5] = i[v7];
        v5 = v7;
      }
      while ( (unsigned int)v7 < LODWORD(this[14].Ptr) - 1 );
    }
    --LODWORD(this[14].Ptr);
    v8 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v8 && LOBYTE(this[24].Ptr) )
      CHolographicInteropTaskQueue::PostMessageW(
        v8,
        7u,
        (struct IUnknown *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CMILCOMBase::InternalRelease(a2);
  }
  ReleaseSRWLockExclusive(this + 10);
}
