/*
 * XREFs of DxgkGetScanLine @ 0x1C017BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0176C74 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01A3B24 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C01B47CC (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  DXGADAPTER *v10; // rcx
  bool v11; // zf
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGADAPTER *v22; // r15
  __int64 v23; // rax
  __int64 v24; // r14
  int PairingAdapters; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  struct DXGADAPTER *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r15d
  __int64 v38; // r8
  __int64 v39; // rax
  ADAPTER_DISPLAY *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned int v45; // edx
  unsigned int v46; // eax
  UINT v47; // ecx
  _QWORD *v48; // rax
  ADAPTER_DISPLAY *v49; // rcx
  int ScanLine; // eax
  struct DXGGLOBAL *Global; // rax
  _BYTE *v52; // rdx
  _DWORD *v53; // rdx
  struct DXGADAPTER *v54; // [rsp+30h] [rbp-B8h] BYREF
  DXGADAPTER *v55; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v56[4]; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v58[80]; // [rsp+60h] [rbp-88h] BYREF
  _DXGKARG_GETSCANLINE v59; // [rsp+B0h] [rbp-38h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = (DXGADAPTER *)qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v10, &EventProfilerExit, v9, 2034);
    return (unsigned int)v8;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v56 = *v13;
  *(_QWORD *)&v59.VidPnTargetId = 0LL;
  v59.ScanLine = 0;
  if ( !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v55, v56[0], Current, &v54);
    v22 = v54;
    if ( !v54 )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = v56[0];
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_16;
    }
    v24 = v56[1];
    PairingAdapters = DxgkpGetPairingAdapters(v54, v56[1], 0LL, 0LL, &v54, &v57);
    v8 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v27);
      v30[3] = v22;
      v30[4] = v24;
      v30[5] = v8;
      WdLogEvent5_WdEvent(v30);
      goto LABEL_16;
    }
    v31 = v54;
    if ( !v54 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v32 + 24) = 5647LL;
      WdLogEvent5_WdAssertion(v32);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, v31, 0LL);
    DXGADAPTER::ReleaseReference(v31);
    v37 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58);
    if ( v37 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
      if ( v55 )
        DXGADAPTER::ReleaseReference(v55);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C006E790, &EventProfilerExit, v38, 2034);
      return (unsigned int)v37;
    }
    if ( !*((_QWORD *)v31 + 285) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
      *(_QWORD *)(v39 + 24) = 5661LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v40 = (ADAPTER_DISPLAY *)*((_QWORD *)v31 + 285);
    if ( (unsigned int)v24 >= *((_DWORD *)v40 + 20) )
    {
      v41 = WdLogNewEntry5_WdWarning(v40, v33, v35, v36);
      *(_QWORD *)(v41 + 24) = v24;
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v41 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v41);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
LABEL_16:
      v10 = v55;
      if ( v55 )
        DXGADAPTER::ReleaseReference(v55);
      goto LABEL_18;
    }
    if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(v40, (unsigned int)v24, v35, v36) )
    {
      v43 = *((_QWORD *)v31 + 285);
      v44 = *(_QWORD *)(v43 + 112);
      v45 = *(_DWORD *)(v44 + 3208 * v24 + 1036) + 20;
      v46 = *(_DWORD *)(v44 + 3208 * v24 + 976);
      v59.InVerticalBlank = v45 > v46;
      v47 = 0;
      if ( v45 <= v46 )
        v47 = v45;
      *(_DWORD *)(*(_QWORD *)(v43 + 112) + 3208 * v24 + 1036) = v47;
      v59.ScanLine = v47;
      LODWORD(v8) = 0;
      goto LABEL_50;
    }
    v59.VidPnTargetId = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 285) + 112LL) + 3208 * v24 + 1028);
    if ( v59.VidPnTargetId == -1 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdEvent(3208 * v24);
      v48[3] = v24;
      v48[4] = v56[0];
      LODWORD(v8) = -1071774912;
      v48[5] = -1071774912LL;
      WdLogEvent5_WdEvent(v48);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
      if ( v55 )
        DXGADAPTER::ReleaseReference(v55);
      goto LABEL_6;
    }
    if ( *((_QWORD *)v31 + 286) )
    {
      v49 = (ADAPTER_DISPLAY *)*((_QWORD *)v31 + 285);
    }
    else
    {
      v42 = *(_QWORD *)(*((_QWORD *)v31 + 285) + 264LL);
      if ( !v42 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_50;
      }
      if ( !*(_BYTE *)(v42 + 96) )
      {
        BLTQUEUE::GetScanLineEmulation(
          (BLTQUEUE *)(*(_QWORD *)(v42 + 8) + 2704 * v24),
          &v59.ScanLine,
          &v59.InVerticalBlank);
        ScanLine = 0;
LABEL_49:
        LODWORD(v8) = ScanLine;
LABEL_50:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
        v10 = v55;
        if ( v55 )
          DXGADAPTER::ReleaseReference(v55);
        goto LABEL_53;
      }
      v49 = *(ADAPTER_DISPLAY **)(v42 + 88);
    }
    ScanLine = ADAPTER_DISPLAY::DdiGetScanLine(v49, &v59, v42);
    goto LABEL_49;
  }
  Global = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
  LODWORD(v8) = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 624), &v59);
LABEL_53:
  if ( (int)v8 < 0 )
  {
LABEL_18:
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  v52 = (_BYTE *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v52 = (_BYTE *)MmUserProbeAddress;
  *v52 = v59.InVerticalBlank;
  v53 = (_DWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v53 = (_DWORD *)MmUserProbeAddress;
  *v53 = v59.ScanLine;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v10, &EventProfilerExit, v9, 2034);
  return 0LL;
}
