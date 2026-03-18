/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C01A2480
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  int *v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8

  v3 = (int *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2091);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v10 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v10 = (int *)MmUserProbeAddress;
    v11 = *v10;
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)Current + 10));
    if ( !*((_DWORD *)Current + 120) )
      *((_DWORD *)Current + 120) = v11;
    v15 = *((_DWORD *)Current + 120);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)Current + 10), v12, v13, v14);
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (int *)MmUserProbeAddress;
    *v3 = v15;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2091);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v8, 2091);
    return 3221225485LL;
  }
}
