/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C01A7640
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01A6034 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 *v12; // rax
  DXGGLOBAL *v13; // rcx
  _DWORD *v14; // r8
  int v15; // r14d
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+68h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v25; // [rsp+70h] [rbp+18h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2052);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v12 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (__int64 *)MmUserProbeAddress;
    v26 = *v12;
    v25 = 0LL;
    v24 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v4, v7, v8);
    v15 = DXGGLOBAL::OpenKeyedMutex(v13, (unsigned int)v26, &v25, &v24, 0LL, 0);
    if ( v15 >= 0 )
    {
      v14 = (_DWORD *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = v24;
    }
    if ( v15 < 0 )
    {
      v23 = v24;
      if ( v24 )
        DXGKEYEDMUTEX::DestroyHandle(v24);
    }
    else
    {
      v16 = v24;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
      v17 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *((_DWORD *)Current + 52) )
      {
        v18 = *((_QWORD *)Current + 24);
        v19 = *(unsigned int *)(v18 + 16 * v17 + 8);
        v20 = ((unsigned int)v16 >> 26) & 0x30;
        if ( (((unsigned int)v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x30) && (v19 & 0xF) != 0 )
        {
          v21 = 2 * ((v16 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v18 + 8 * v21 + 8) & 0x1000) == 0 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20, v19, v18, 0xFFFFFFLL);
            *(_QWORD *)(v22 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v22);
          }
          *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v21 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v23, &EventProfilerExit, (__int64)v14, 2052);
    return (unsigned int)v15;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v10, 2052);
    return 3221225485LL;
  }
}
