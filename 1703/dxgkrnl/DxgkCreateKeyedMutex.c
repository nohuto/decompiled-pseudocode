/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C01A6F90
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01A5554 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  _OWORD *v12; // rax
  DXGGLOBAL *Global; // rax
  __int64 v14; // r8
  int v15; // r14d
  _DWORD *v16; // r8
  DXGKEYEDMUTEX *v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28[2]; // [rsp+48h] [rbp-40h]
  unsigned int v29; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h]
  DXGKEYEDMUTEX *v31; // [rsp+A8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2051);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v28 = *v12;
    v29 = 0;
    v31 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v4, v7, v8);
    v15 = DXGGLOBAL::CreateKeyedMutex(Global, v28[0], &v31, &v29, 0LL, 0, 0);
    if ( v15 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = v29;
      v17 = v31;
      v18 = *((unsigned int *)v31 + 8);
      v30 = *((_DWORD *)v31 + 8);
      v19 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v18;
      DXGKEYEDMUTEX::ReleaseReference(v17, (__int64)v19, v18, (__int64)v17);
    }
    if ( v15 < 0 )
    {
      v27 = v29;
      if ( v29 )
        DXGKEYEDMUTEX::DestroyHandle(v29);
    }
    else
    {
      v20 = v29;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
      v21 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *((_DWORD *)Current + 52) )
      {
        v22 = *((_QWORD *)Current + 24);
        v23 = *(unsigned int *)(v22 + 16 * v21 + 8);
        v24 = ((unsigned int)v20 >> 26) & 0x30;
        if ( (((unsigned int)v20 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x30) && (v23 & 0xF) != 0 )
        {
          v25 = 2 * ((v20 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v22 + 8 * v25 + 8) & 0x1000) == 0 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v24, v23, v22, 0xFFFFFFLL);
            *(_QWORD *)(v26 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v26);
          }
          *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v25 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v27, &EventProfilerExit, v14, 2051);
    return (unsigned int)v15;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v10, 2051);
    return 3221225485LL;
  }
}
