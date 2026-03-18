/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C01A78B0
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

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  ULONG64 v12; // rax
  DXGGLOBAL *v13; // rcx
  int v14; // esi
  _DWORD *v15; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24[2]; // [rsp+30h] [rbp-38h]
  unsigned int v25[2]; // [rsp+40h] [rbp-28h]
  unsigned int v26; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v27; // [rsp+80h] [rbp+18h] BYREF
  struct DXGPROCESS *v28; // [rsp+88h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2067);
  Current = DXGPROCESS::GetCurrent(a1);
  v28 = Current;
  if ( Current )
  {
    v12 = a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_OWORD *)v24 = *(_OWORD *)v12;
    *(_QWORD *)v25 = *(_QWORD *)(v12 + 16);
    v27 = 0LL;
    v26 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v4, v7, v8);
    v14 = DXGGLOBAL::OpenKeyedMutex(v13, LODWORD(v24[0]), &v27, &v26, (char *)v24[1], v25[0]);
    if ( v14 >= 0 )
    {
      v15 = (_DWORD *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v26;
    }
    if ( v14 < 0 )
    {
      v23 = v26;
      if ( v26 )
        DXGKEYEDMUTEX::DestroyHandle(v26);
    }
    else
    {
      v16 = v26;
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
      Template_q(v23, &EventProfilerExit, (__int64)v15, 2067);
    return (unsigned int)v14;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v10, 2067);
    return 3221225485LL;
  }
}
