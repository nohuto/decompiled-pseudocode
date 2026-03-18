/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C01A2640
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8

  v3 = (_DWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2090);
  Current = DXGPROCESS::GetCurrent(a1);
  v7 = Current;
  if ( Current )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)Current + 10));
    v11 = *((_DWORD *)v7 + 120);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v7 + 10), v12, v13, v14);
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = v11;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v15, &EventProfilerExit, v16, 2090);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v9, 2090);
    return 3221225485LL;
  }
}
