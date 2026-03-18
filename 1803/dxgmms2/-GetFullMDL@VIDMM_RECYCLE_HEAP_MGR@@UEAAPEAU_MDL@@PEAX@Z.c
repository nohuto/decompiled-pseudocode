/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C006DB80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C006F8DC (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  bool v3; // zf
  struct _KTHREAD **v4; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  struct _MDL *result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _MDL *v15; // rdi
  struct _KTHREAD **v16; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  struct _KTHREAD **v32; // [rsp+20h] [rbp-18h] BYREF
  char v33; // [rsp+28h] [rbp-10h]

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328) == 0LL;
  v4 = (struct _KTHREAD **)((char *)this + 1328);
  v33 = 0;
  v32 = v4;
  if ( v3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v21 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v21);
    if ( v33 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v24);
      v25[5] = &v32;
      v25[3] = 275LL;
      v25[4] = 4LL;
      v25[6] = 0LL;
      v25[7] = 0LL;
      WdLogEvent5_WdCriticalError(v25);
    }
  }
  v5 = v32;
  KeEnterCriticalRegion();
  if ( v5[1] == KeGetCurrentThread() )
  {
    v26 = *((_DWORD *)v5 + 6);
    if ( v26 <= 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v27 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v27);
      v26 = *((_DWORD *)v5 + 6);
    }
    v11 = v26 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *((_DWORD *)v5 + 7);
        if ( v20 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v9, (__int64)&EventBlockThread, v10, v20);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5);
      ExAcquirePushLockExclusiveEx(v5 + 2, 0LL);
    }
    if ( v5[1] )
    {
      v28 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v28 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v28);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v29 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v5[1] = KeGetCurrentThread();
    v11 = 1;
  }
  *((_DWORD *)v5 + 6) = v11;
  v33 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v15 = result;
  if ( v33 )
  {
    v16 = v32;
    v33 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v32[1] != CurrentThread )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v13, v14);
      v30[3] = 275LL;
      v30[4] = 4LL;
      v30[5] = v16;
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    v18 = *((_DWORD *)v16 + 6);
    if ( v18 <= 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(CurrentThread, v13);
      *(_QWORD *)(v31 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v31);
      v18 = *((_DWORD *)v16 + 6);
    }
    v19 = v18 - 1;
    *((_DWORD *)v16 + 6) = v19;
    if ( !v19 )
    {
      v16[1] = 0LL;
      ExReleasePushLockExclusiveEx(v16 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    return v15;
  }
  return result;
}
