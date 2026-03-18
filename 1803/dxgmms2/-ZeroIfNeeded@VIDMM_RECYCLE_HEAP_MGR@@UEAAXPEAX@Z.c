/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C006D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006F7E0 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  bool v3; // zf
  DXGFASTMUTEX *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGFASTMUTEX *v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  DXGFASTMUTEX *v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328) == 0LL;
  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v19 = 0;
  v18 = v4;
  if ( v3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v11 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v11);
    if ( v19 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
      v15[5] = &v18;
      v15[3] = 275LL;
      v15[4] = 4LL;
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
  }
  DXGFASTMUTEX::Acquire(v18);
  v19 = 1;
  VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(a2);
  if ( v19 )
  {
    v8 = v18;
    v19 = 0;
    if ( *((struct _KTHREAD **)v18 + 1) != KeGetCurrentThread() )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
      v16[3] = 275LL;
      v16[4] = 4LL;
      v16[5] = v8;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    v9 = *((_DWORD *)v8 + 6);
    if ( v9 <= 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v17 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v17);
      v9 = *((_DWORD *)v8 + 6);
    }
    v10 = v9 - 1;
    *((_DWORD *)v8 + 6) = v10;
    if ( !v10 )
    {
      *((_QWORD *)v8 + 1) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v8 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
