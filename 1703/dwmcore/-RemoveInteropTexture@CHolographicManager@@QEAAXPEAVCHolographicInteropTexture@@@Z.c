/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801A6478
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A3A90 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  unsigned int Ptr; // ecx
  struct CHolographicInteropTexture **v5; // r9
  unsigned int i; // r8d
  __int64 v7; // rcx
  CHolographicInteropTaskQueue *v8; // rcx

  AcquireSRWLockExclusive(this + 9);
  Ptr = (unsigned int)this[13].Ptr;
  v5 = (struct CHolographicInteropTexture **)this[10].Ptr;
  for ( i = 0; i < Ptr; ++i )
  {
    if ( a2 == v5[i] )
      break;
  }
  if ( i < Ptr )
  {
    if ( i < Ptr - 1 )
    {
      do
      {
        v7 = i++;
        v5[v7] = v5[i];
      }
      while ( i < LODWORD(this[13].Ptr) - 1 );
    }
    --LODWORD(this[13].Ptr);
    v8 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v8 )
      CHolographicInteropTaskQueue::PostMessageW(
        v8,
        3u,
        (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CMILCOMBase::InternalRelease(a2);
  }
  ReleaseSRWLockExclusive(this + 9);
}
