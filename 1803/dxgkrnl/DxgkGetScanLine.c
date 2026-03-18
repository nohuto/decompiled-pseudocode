/*
 * XREFs of DxgkGetScanLine @ 0x1C010BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C010C4B0 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C010DC8C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01BC3B0 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C01D4CF8 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rsi
  int PairingAdapters; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  struct DXGADAPTER *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int8 IsVSyncAvailable; // al
  __int64 v25; // r9
  __int64 v26; // rdx
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  int ScanLine; // ebx
  _BYTE *v30; // rdx
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v40; // rax
  DXGADAPTER *v41; // rcx
  REMOTE_VSYNC *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // edx
  unsigned int v52; // eax
  UINT v53; // ecx
  __int64 v54; // rax
  int v55; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+38h] [rbp-C0h]
  struct DXGADAPTER *v57; // [rsp+40h] [rbp-B8h] BYREF
  DXGADAPTER *v58; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v59[4]; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v60; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v61[80]; // [rsp+70h] [rbp-88h] BYREF
  _DXGKARG_GETSCANLINE v62; // [rsp+C0h] [rbp-38h] BYREF

  v56 = 0LL;
  v55 = 2034;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2034);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v55, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdError(v6);
    ScanLine = -1073741811;
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_33;
  }
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v59 = *v8;
  *(_QWORD *)&v62.VidPnTargetId = 0LL;
  v62.ScanLine = 0;
  if ( !v59[0] && (unsigned int)_guard_dispatch_icall_fptr() )
  {
    Global = DXGGLOBAL::GetGlobal(v38);
    ScanLine = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 632), &v62);
    goto LABEL_23;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v58, v59[0], Current, &v57);
  v12 = v57;
  if ( !v57 )
  {
    v40 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v40 + 24) = v59[0];
    ScanLine = -1073741811;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
    v41 = v58;
    if ( !v58 )
      goto LABEL_33;
    goto LABEL_57;
  }
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    if ( *((_BYTE *)v12 + 185) && DXGVAILOBJECT::IsFeatureEnabled() )
      v42 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v13) + 696);
    else
      v42 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v13) + 632);
    ScanLine = REMOTE_VSYNC::GetScanLine(v42, &v62);
LABEL_21:
    if ( v58 )
      DXGADAPTER::ReleaseReferenceNoTracking(v58);
LABEL_23:
    if ( ScanLine >= 0 )
    {
      v30 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v30 = (_BYTE *)MmUserProbeAddress;
      *v30 = v62.InVerticalBlank;
      v31 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v31 = (_DWORD *)MmUserProbeAddress;
      *v31 = v62.ScanLine;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v32, &EventProfilerExit, v33, v55);
      return 0LL;
    }
    goto LABEL_33;
  }
  v14 = v59[1];
  PairingAdapters = DxgkpGetPairingAdapters(v12, v59[1], 0LL, 0LL, &v57, &v60);
  v18 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v43[3] = v12;
    v43[4] = v14;
    v43[5] = v18;
    WdLogEvent5_WdEvent(v43);
  }
  else
  {
    v19 = v57;
    if ( !v57 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v46 + 24) = 6699LL;
      WdLogEvent5_WdAssertion(v46);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, v19, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v19);
    LODWORD(v18) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61);
    if ( (int)v18 >= 0 )
    {
      v23 = *((_QWORD *)v19 + 307);
      if ( !v23 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v47 + 24) = 6713LL;
        WdLogEvent5_WdAssertion(v47);
        v23 = *((_QWORD *)v19 + 307);
      }
      if ( (unsigned int)v14 >= *(_DWORD *)(v23 + 80) )
      {
        v48 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v48 + 24) = v14;
        ScanLine = -1073741811;
        *(_QWORD *)(v48 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v48);
      }
      else
      {
        IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v19, v14);
        v25 = *((_QWORD *)v19 + 307);
        if ( !IsVSyncAvailable )
        {
          v50 = *(_QWORD *)(v25 + 112);
          v51 = *(_DWORD *)(v50 + 3760 * v14 + 1076) + 20;
          v52 = *(_DWORD *)(v50 + 3760 * v14 + 1016);
          v62.InVerticalBlank = v51 > v52;
          v53 = 0;
          if ( v51 <= v52 )
            v53 = v51;
          *(_DWORD *)(*(_QWORD *)(v25 + 112) + 3760 * v14 + 1076) = v53;
          v62.ScanLine = v53;
          ScanLine = 0;
          goto LABEL_20;
        }
        v26 = *(unsigned int *)(3760 * v14 + *(_QWORD *)(v25 + 112) + 1068);
        v62.VidPnTargetId = v26;
        if ( (_DWORD)v26 != -1 )
        {
          v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 307);
          if ( !*((_QWORD *)v19 + 308) )
          {
            v54 = *((_QWORD *)v27 + 33);
            if ( !v54 )
            {
              ScanLine = -1073741811;
              goto LABEL_20;
            }
            if ( !*(_BYTE *)(v54 + 96) )
            {
              BLTQUEUE::GetScanLineEmulation(
                (BLTQUEUE *)(*(_QWORD *)(v54 + 8) + 2704 * v14),
                &v62.ScanLine,
                &v62.InVerticalBlank);
              v28 = 0;
              goto LABEL_19;
            }
            v27 = *(ADAPTER_DISPLAY **)(v54 + 88);
          }
          v28 = ADAPTER_DISPLAY::DdiGetScanLine(v27, &v62);
LABEL_19:
          ScanLine = v28;
LABEL_20:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
          goto LABEL_21;
        }
        v49 = (_QWORD *)WdLogNewEntry5_WdEvent(3760 * v14, v26);
        v49[3] = v14;
        v49[4] = v59[0];
        ScanLine = -1071774912;
        v49[5] = -1071774912LL;
        WdLogEvent5_WdEvent(v49);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
      v41 = v58;
      if ( !v58 )
      {
LABEL_33:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v36, &EventProfilerExit, v37, v55);
        return (unsigned int)ScanLine;
      }
LABEL_57:
      DXGADAPTER::ReleaseReferenceNoTracking(v41);
      goto LABEL_33;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
  }
  if ( v58 )
    DXGADAPTER::ReleaseReferenceNoTracking(v58);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v55);
  return (unsigned int)v18;
}
