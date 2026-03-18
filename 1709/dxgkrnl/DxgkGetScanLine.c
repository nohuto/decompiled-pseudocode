/*
 * XREFs of DxgkGetScanLine @ 0x1C00FDDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00FE364 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01BD6DC (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C01CE140 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // r15
  __int64 v12; // r14
  int PairingAdapters; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  struct DXGADAPTER *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r15d
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  ADAPTER_DISPLAY *v27; // rcx
  int ScanLine; // eax
  __int64 v29; // r8
  DXGADAPTER *v30; // rcx
  _BYTE *v31; // rdx
  _DWORD *v32; // rdx
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // edx
  unsigned int v45; // eax
  UINT v46; // ecx
  _QWORD *v47; // rax
  __int64 v48; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v50; // [rsp+30h] [rbp-B8h] BYREF
  DXGADAPTER *v51; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v52[4]; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v54[80]; // [rsp+60h] [rbp-88h] BYREF
  _DXGKARG_GETSCANLINE v55; // [rsp+B0h] [rbp-38h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v34 = WdLogNewEntry5_WdError(v4);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_32;
  }
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v52 = *v6;
  *(_QWORD *)&v55.VidPnTargetId = 0LL;
  v55.ScanLine = 0;
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    Global = DXGGLOBAL::GetGlobal(v7);
    LODWORD(v18) = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 624), &v55);
    goto LABEL_22;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v51, v52[0], Current, &v50);
  v11 = v50;
  if ( !v50 )
  {
    v36 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v36 + 24) = v52[0];
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v36);
    goto LABEL_40;
  }
  v12 = v52[1];
  PairingAdapters = DxgkpGetPairingAdapters(v50, v52[1], 0LL, 0LL, &v50, &v53);
  v18 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14, v16, v17);
    v38[3] = v11;
    v38[4] = v12;
    v38[5] = v18;
    WdLogEvent5_WdEvent(v38);
    goto LABEL_40;
  }
  v19 = v50;
  if ( !v50 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v39 + 24) = 5955LL;
    WdLogEvent5_WdAssertion(v39);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v19, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v19);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54);
  if ( v23 >= 0 )
  {
    if ( !*((_QWORD *)v19 + 288) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v41 + 24) = 5969LL;
      WdLogEvent5_WdAssertion(v41);
    }
    if ( (unsigned int)v12 < *(_DWORD *)(*((_QWORD *)v19 + 288) + 80LL) )
    {
      if ( !DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)v19, v12) )
      {
        v42 = *((_QWORD *)v19 + 288);
        v43 = *(_QWORD *)(v42 + 112);
        v44 = *(_DWORD *)(v43 + 3760 * v12 + 1076) + 20;
        v45 = *(_DWORD *)(v43 + 3760 * v12 + 1016);
        v55.InVerticalBlank = v44 > v45;
        v46 = 0;
        if ( v44 <= v45 )
          v46 = v44;
        *(_DWORD *)(*(_QWORD *)(v42 + 112) + 3760 * v12 + 1076) = v46;
        v55.ScanLine = v46;
        LODWORD(v18) = 0;
        goto LABEL_20;
      }
      v26 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v19 + 288) + 112LL) + 3760 * v12 + 1068);
      v55.VidPnTargetId = v26;
      if ( (_DWORD)v26 != -1 )
      {
        if ( *((_QWORD *)v19 + 289) )
        {
          v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
        }
        else
        {
          v48 = *(_QWORD *)(*((_QWORD *)v19 + 288) + 264LL);
          if ( !v48 )
          {
            LODWORD(v18) = -1073741811;
LABEL_20:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
            v30 = v51;
            if ( v51 )
              DXGADAPTER::ReleaseReferenceNoTracking(v51);
LABEL_22:
            if ( (int)v18 >= 0 )
            {
              v31 = (_BYTE *)(a1 + 8);
              if ( a1 + 8 >= MmUserProbeAddress )
                v31 = (_BYTE *)MmUserProbeAddress;
              *v31 = v55.InVerticalBlank;
              v32 = (_DWORD *)(a1 + 12);
              if ( a1 + 12 >= MmUserProbeAddress )
                v32 = (_DWORD *)MmUserProbeAddress;
              *v32 = v55.ScanLine;
              if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(MmUserProbeAddress, &EventProfilerExit, v29, 2034);
              return 0LL;
            }
            goto LABEL_33;
          }
          if ( !*(_BYTE *)(v48 + 96) )
          {
            BLTQUEUE::GetScanLineEmulation(
              (BLTQUEUE *)(*(_QWORD *)(v48 + 8) + 2704 * v12),
              &v55.ScanLine,
              &v55.InVerticalBlank);
            ScanLine = 0;
            goto LABEL_19;
          }
          v27 = *(ADAPTER_DISPLAY **)(v48 + 88);
        }
        ScanLine = ADAPTER_DISPLAY::DdiGetScanLine(v27, &v55);
LABEL_19:
        LODWORD(v18) = ScanLine;
        goto LABEL_20;
      }
      v47 = (_QWORD *)WdLogNewEntry5_WdEvent(3760 * v12, v26, v24, v25);
      v47[3] = v12;
      v47[4] = v52[0];
      LODWORD(v18) = -1071774912;
      v47[5] = -1071774912LL;
      WdLogEvent5_WdEvent(v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      if ( v51 )
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
LABEL_32:
      v30 = (DXGADAPTER *)qword_1C005F010;
      v35 = (qword_1C005F010 & 2) == 0;
      goto LABEL_34;
    }
    v37 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v37 + 24) = v12;
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_40:
    v30 = v51;
    if ( v51 )
      DXGADAPTER::ReleaseReferenceNoTracking(v51);
LABEL_33:
    v35 = (qword_1C005F010 & 2) == 0;
LABEL_34:
    if ( !v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v30, &EventProfilerExit, v29, 2034);
    return (unsigned int)v18;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
  if ( v51 )
    DXGADAPTER::ReleaseReferenceNoTracking(v51);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C005F010, &EventProfilerExit, v40, 2034);
  return (unsigned int)v23;
}
