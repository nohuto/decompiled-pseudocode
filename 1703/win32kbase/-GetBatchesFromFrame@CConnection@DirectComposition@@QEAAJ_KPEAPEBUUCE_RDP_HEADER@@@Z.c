/*
 * XREFs of ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0015DC0
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0014320 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0014B78 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatchesFromFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  char *v3; // rbp
  DirectComposition::CCompositionFrame *v6; // rdi
  int Batches; // ebx
  volatile signed __int32 *i; // rcx
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v3 = (char *)this + 200;
  v6 = 0LL;
  Batches = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
  v3[8] = 0;
  for ( i = (volatile signed __int32 *)*((_QWORD *)this + 24);
        i != (volatile signed __int32 *)((char *)this + 184);
        i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
  {
    if ( *((_QWORD *)i + 8) == a2 )
    {
      _InterlockedAdd(i - 2, 1u);
      v6 = (DirectComposition::CCompositionFrame *)(i - 2);
      Batches = 0;
      break;
    }
  }
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  if ( Batches >= 0 )
  {
    v10 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v10, 1u);
    if ( *((_DWORD *)this + 37) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      {
        v11 = *((_QWORD *)v6 + 11);
        *((_QWORD *)v6 + 11) = 0LL;
        v12 = (_QWORD *)*((_QWORD *)this + 14);
        if ( v12 )
        {
          while ( *v12 )
            v12 = (_QWORD *)*v12;
          *v12 = v11;
        }
        else
        {
          *((_QWORD *)this + 14) = v11;
        }
        Batches = DirectComposition::CConnection::RetrieveBatches(this, a2, a3);
      }
      else
      {
        Batches = -1073740024;
      }
    }
    else
    {
      Batches = -1073741300;
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 1));
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 && v6 )
    {
      if ( *((_DWORD *)v6 + 20) != 3 )
        DirectComposition::CCompositionFrame::Discard(v6);
      Win32FreePool(v6);
    }
  }
  return (unsigned int)Batches;
}
