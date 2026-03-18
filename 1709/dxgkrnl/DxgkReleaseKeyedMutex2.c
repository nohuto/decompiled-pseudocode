/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x1C01C1AB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028764 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00297C8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C01BFDB4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  DXGKEYEDMUTEX *v8; // rcx
  bool v9; // zf
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGKEYEDMUTEX *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  _QWORD *v21; // rax
  DXGKEYEDMUTEX *v22; // rcx
  unsigned int v23[4]; // [rsp+30h] [rbp-38h]
  void *v24[2]; // [rsp+40h] [rbp-28h]
  unsigned int v25[2]; // [rsp+50h] [rbp-18h]
  DXGKEYEDMUTEX *v26; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v27; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2069);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = (DXGKEYEDMUTEX *)qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v8, &EventProfilerExit, v7, 2069);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v23 = *(_OWORD *)v3;
  *(_OWORD *)v24 = *(_OWORD *)(v3 + 16);
  *(_QWORD *)v25 = *(_QWORD *)(v3 + 32);
  v11 = (unsigned int)*(_OWORD *)v3;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v26, v23[0], Current, &v27);
  v15 = v27;
  if ( !v27 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v11;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    v8 = v26;
    if ( v26 )
      DXGKEYEDMUTEX::ReleaseReference(v26);
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  v17 = DXGKEYEDMUTEX::ReleaseSync(v27, v11, *(__int64 *)&v23[2], (struct _LIST_ENTRY *)v24[0], (char *)v24[1], v25[0]);
  v20 = v17;
  if ( v17 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v21[3] = v11;
    v21[4] = v15;
    v21[5] = v20;
    WdLogEvent5_WdError(v21);
  }
  v22 = v26;
  if ( v26 )
    DXGKEYEDMUTEX::ReleaseReference(v26);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v22, &EventProfilerExit, v19, 2069);
  return (unsigned int)v20;
}
