/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C01C1FE0
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

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  int v15; // r15d
  _DWORD *v16; // r8
  DXGKEYEDMUTEX *v17; // r9
  int v18; // r8d
  _DWORD *v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]
  __int64 v30[8]; // [rsp+58h] [rbp-40h]
  unsigned int v31; // [rsp+A8h] [rbp+10h] BYREF
  int v32; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v33; // [rsp+B8h] [rbp+20h] BYREF

  v29 = 0LL;
  v28 = 2051;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2051);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2051);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v30 = *v12;
    v31 = 0;
    v33 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v15 = DXGGLOBAL::CreateKeyedMutex(Global, v30[0], &v33, &v31, 0LL, 0, 0);
    if ( v15 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = v31;
      v17 = v33;
      v18 = *((_DWORD *)v33 + 8);
      v32 = v18;
      v19 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v18;
      DXGKEYEDMUTEX::ReleaseReference(v17);
    }
    if ( v15 < 0 )
    {
      if ( v31 )
        DXGKEYEDMUTEX::DestroyHandle(v31, v14);
    }
    else
    {
      v20 = v31;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v21 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *((_DWORD *)Current + 62) )
      {
        v22 = *((_QWORD *)Current + 29);
        v23 = ((unsigned int)v20 >> 25) & 0x60;
        if ( (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16 * v21 + 8) & 0x1F) != 0 )
        {
          v24 = 2 * ((v20 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v22 + 8 * v24 + 8) & 0x2000) == 0 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v23);
            *(_QWORD *)(v25 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v25);
            v22 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v22 + 8 * v24 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v28);
    return (unsigned int)v15;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v28);
    return 3221225485LL;
  }
}
