/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C01A7260
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

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  _OWORD *v14; // rax
  __int64 v15; // rax
  DXGGLOBAL *Global; // rax
  __int64 v17; // r8
  int v18; // r14d
  _DWORD *v19; // r8
  DXGKEYEDMUTEX *v20; // r9
  __int64 v21; // r8
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31[2]; // [rsp+48h] [rbp-50h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v32[4]; // [rsp+58h] [rbp-40h]
  unsigned int v33; // [rsp+A8h] [rbp+10h] BYREF
  int v34; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v35; // [rsp+B8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2066);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C006E790;
    v12 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2066);
    return 3221225485LL;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v31 = *v14;
  *(_OWORD *)&v32[0].0 = v14[1];
  if ( (v32[3].Value & 0xFFFFFFFE) != 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v7, v8);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    v12 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  v33 = 0;
  v35 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v4, v7, v8);
  v18 = DXGGLOBAL::CreateKeyedMutex(Global, v31[0], &v35, &v33, *(char **)&v32[0].0, v32[2].Value, v32[3]);
  if ( v18 >= 0 )
  {
    v19 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v33;
    v20 = v35;
    v21 = *((unsigned int *)v35 + 8);
    v34 = *((_DWORD *)v35 + 8);
    v22 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = v21;
    DXGKEYEDMUTEX::ReleaseReference(v20, (__int64)v22, v21, (__int64)v20);
  }
  if ( v18 < 0 )
  {
    v30 = v33;
    if ( v33 )
      DXGKEYEDMUTEX::DestroyHandle(v33);
  }
  else
  {
    v23 = v33;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
    v24 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)Current + 52) )
    {
      v25 = *((_QWORD *)Current + 24);
      v26 = *(unsigned int *)(v25 + 16 * v24 + 8);
      v27 = ((unsigned int)v23 >> 26) & 0x30;
      if ( (((unsigned int)v23 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x30) && (v26 & 0xF) != 0 )
      {
        v28 = 2 * ((v23 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v25 + 8 * v28 + 8) & 0x1000) == 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v27, v26, v25, 0xFFFFFFLL);
          *(_QWORD *)(v29 + 24) = 190LL;
          WdLogEvent5_WdAssertion(v29);
        }
        *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v28 + 8) &= ~0x1000u;
      }
    }
    *((_QWORD *)Current + 22) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v30, &EventProfilerExit, v17, 2066);
  return (unsigned int)v18;
}
