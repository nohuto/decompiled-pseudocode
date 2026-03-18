/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0067F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C234 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  bool v3; // zf
  DXGFASTMUTEX *v4; // rcx
  __int64 v5; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  __int64 v7; // r8
  struct _KTHREAD **v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  struct _KTHREAD **v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184) == 0LL;
  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184);
  v17 = 0;
  v16 = (struct _KTHREAD **)v4;
  if ( v3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v9 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v9);
    if ( v17 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
      v13[5] = &v16;
      v13[3] = 275LL;
      v13[4] = 4LL;
      v13[6] = 0LL;
      v13[7] = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    v4 = (DXGFASTMUTEX *)v16;
  }
  DXGFASTMUTEX::Acquire(v4);
  v17 = 1;
  if ( !dword_1C0040370 )
    goto LABEL_6;
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        (*((_BYTE *)i + 84) & 2) == 0;
        i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      goto LABEL_6;
  }
  VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(a2);
  if ( v17 )
  {
LABEL_6:
    v8 = v16;
    v17 = 0;
    if ( v16[1] != KeGetCurrentThread() )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v5, v7);
      v14[3] = 275LL;
      v14[4] = 4LL;
      v14[5] = v8;
      v14[6] = 0LL;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    if ( *((int *)v8 + 6) <= 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(i, v5);
      *(_QWORD *)(v15 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v3 = (*((_DWORD *)v8 + 6))-- == 1;
    if ( v3 )
    {
      v8[1] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
