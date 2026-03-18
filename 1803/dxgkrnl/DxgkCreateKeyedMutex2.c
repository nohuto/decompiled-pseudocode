/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C01C22F0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01C0140 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD *v14; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF Value; // r14d
  __int64 v16; // rax
  DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  int v19; // r14d
  _DWORD *v20; // r8
  DXGKEYEDMUTEX *v21; // r9
  int v22; // r8d
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+48h] [rbp-60h] BYREF
  __int64 v33; // [rsp+50h] [rbp-58h]
  unsigned __int64 v34[2]; // [rsp+58h] [rbp-50h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v35[4]; // [rsp+68h] [rbp-40h]
  unsigned int v36; // [rsp+B8h] [rbp+10h] BYREF
  int v37; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v38; // [rsp+C8h] [rbp+20h] BYREF

  v33 = 0LL;
  v32 = 2066;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2066);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2066);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v32);
    return 3221225485LL;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v34 = *v14;
  *(_OWORD *)&v35[0].0 = v14[1];
  Value = (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF)v35[3].Value;
  if ( (v35[3].Value & 0xFFFFFFFE) != 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v9);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_6;
  }
  v36 = 0;
  v38 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  v19 = DXGGLOBAL::CreateKeyedMutex(
          Global,
          v34[0],
          &v38,
          &v36,
          *(char **)&v35[0].0,
          v35[2].Value,
          (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)Value);
  if ( v19 >= 0 )
  {
    v20 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v36;
    v21 = v38;
    v22 = *((_DWORD *)v38 + 8);
    v37 = v22;
    v23 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v22;
    DXGKEYEDMUTEX::ReleaseReference(v21);
  }
  if ( v19 < 0 )
  {
    if ( v36 )
      DXGKEYEDMUTEX::DestroyHandle(v36, v18);
  }
  else
  {
    v24 = v36;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v25 = ((unsigned int)v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)Current + 62) )
    {
      v26 = *((_QWORD *)Current + 29);
      v27 = ((unsigned int)v24 >> 25) & 0x60;
      if ( (((unsigned int)v24 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60)
        && (*(_DWORD *)(v26 + 16 * v25 + 8) & 0x1F) != 0 )
      {
        v28 = 2 * ((v24 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v26 + 8 * v28 + 8) & 0x2000) == 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v29 + 24) = 215LL;
          WdLogEvent5_WdAssertion(v29);
          v26 = *((_QWORD *)Current + 29);
        }
        *(_DWORD *)(v26 + 8 * v28 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v32);
  return (unsigned int)v19;
}
