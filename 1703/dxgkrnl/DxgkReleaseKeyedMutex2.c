/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x1C01A7D40
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0039380 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C01A6180 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  DXGKEYEDMUTEX *v9; // rcx
  bool v10; // zf
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGKEYEDMUTEX *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  _QWORD *v27; // rax
  DXGKEYEDMUTEX *v28; // rcx
  unsigned int v29[4]; // [rsp+30h] [rbp-38h]
  void *v30[2]; // [rsp+40h] [rbp-28h]
  unsigned int v31[2]; // [rsp+50h] [rbp-18h]
  DXGKEYEDMUTEX *v32; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v33; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2069);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = (DXGKEYEDMUTEX *)qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v9, &EventProfilerExit, v8, 2069);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v29 = *(_OWORD *)v3;
  *(_OWORD *)v30 = *(_OWORD *)(v3 + 16);
  *(_QWORD *)v31 = *(_QWORD *)(v3 + 32);
  v12 = (unsigned int)*(_OWORD *)v3;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v32, v29[0], Current, &v33);
  v17 = v33;
  if ( !v33 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    v9 = v32;
    if ( v32 )
      DXGKEYEDMUTEX::ReleaseReference(v32, v19, v8, v20);
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  v21 = DXGKEYEDMUTEX::ReleaseSync(v33, v12, *(__int64 *)&v29[2], (__int64)v30[0], (char *)v30[1], v31[0]);
  v26 = v21;
  if ( v21 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v27[3] = v12;
    v27[4] = v17;
    v27[5] = v26;
    WdLogEvent5_WdError(v27);
  }
  v28 = v32;
  if ( v32 )
    DXGKEYEDMUTEX::ReleaseReference(v32, v22, v24, v25);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v28, &EventProfilerExit, v24, 2069);
  return (unsigned int)v26;
}
