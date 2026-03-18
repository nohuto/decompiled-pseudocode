/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C0068740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C006B798 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  int *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _MDL *result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _MDL *v12; // rdi
  int *v13; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  struct _KTHREAD **v27; // [rsp+20h] [rbp-18h] BYREF
  char v28; // [rsp+28h] [rbp-10h]

  v2 = (int *)((char *)this + 1184);
  v28 = 0;
  v27 = (struct _KTHREAD **)((char *)this + 1184);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1184LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(-1184LL, a2);
    *(_QWORD *)(v17 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v17);
    if ( v28 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
      v21[5] = &v27;
      v21[3] = 275LL;
      v21[4] = 4LL;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
    v2 = (int *)v27;
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v2 + 1) == KeGetCurrentThread() )
  {
    if ( v2[6] <= 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v22 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v22);
    }
    ++v2[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v16 = v2[7];
        if ( v16 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v7, (__int64)&EventBlockThread, v8, v16);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2);
      ExAcquirePushLockExclusiveEx(v2 + 4, 0LL);
    }
    if ( *((_QWORD *)v2 + 1) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v23 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( v2[6] )
    {
      v24 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v24 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v24);
    }
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    v2[6] = 1;
  }
  v28 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v12 = result;
  if ( v28 )
  {
    v13 = (int *)v27;
    v28 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v27[1] != CurrentThread )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v10, v11);
      v25[3] = 275LL;
      v25[4] = 4LL;
      v25[5] = v13;
      v25[6] = 0LL;
      v25[7] = 0LL;
      WdLogEvent5_WdCriticalError(v25);
    }
    if ( v13[6] <= 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(CurrentThread, v10);
      *(_QWORD *)(v26 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v13[6]-- == 1 )
    {
      *((_QWORD *)v13 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 4, 0LL);
    }
    KeLeaveCriticalRegion();
    return v12;
  }
  return result;
}
