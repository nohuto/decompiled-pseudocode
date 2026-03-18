/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00C7850
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0008AE0 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C009EC10 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00C75FC (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00C79F4 (DxgkQueryDmmInterface.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C7A64 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01DD18C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z @ 0x1C0214100 (-DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        struct _LUID *a2,
        __int64 a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  int DmmInterface; // eax
  __int64 v18; // rcx
  struct _DPI_INFORMATION *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // rcx
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v37; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v38; // r8
  int PlateauIndexForScaleFactor; // eax
  int v40; // r10d
  unsigned int v41; // r9d
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  _BYTE v45[4]; // [rsp+38h] [rbp-51h] BYREF
  int v46; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v47; // [rsp+40h] [rbp-49h] BYREF
  __int64 v48; // [rsp+48h] [rbp-41h]
  unsigned int v49[10]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v50[8]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v51[32]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v52[40]; // [rsp+A0h] [rbp+17h] BYREF
  struct _DXGDMM_INTERFACE *v53; // [rsp+E8h] [rbp+5Fh] BYREF

  v48 = 0LL;
  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v47 = 2172;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2172);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 2172);
  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdError(v9);
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_14;
  }
  v45[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v45, 0);
  v12 = v10;
  if ( v10 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, (struct DXGADAPTER *const)a1, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50);
    v15 = v13;
    if ( v13 < 0 )
      goto LABEL_20;
    LOBYTE(v53) = 0;
    IsEmergencyMonitorConnected(a1, v8, (unsigned __int8 *)&v53);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
    v46 = 0;
    if ( (_BYTE)v53 )
      v46 = dword_1C007A718;
    else
      DpiPersistence::ReadDpiFromRegistry(
        (struct _LUID *)(a1 + 268),
        (const struct _LUID *)(unsigned int)v8,
        1,
        (struct _UNICODE_STRING *)&v46);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50);
    v15 = v16;
    if ( v16 < 0 )
    {
LABEL_20:
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v27[3] = v15;
      v27[4] = PsGetCurrentProcess();
      v28 = v27;
      v27[5] = a1;
LABEL_28:
      WdLogEvent5_WdError(v28);
      goto LABEL_29;
    }
    if ( (_DWORD)v6 != -1 )
    {
      LOBYTE(v53) = 0;
      IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, v8, v6, (bool *)&v53);
      v15 = IsVidPnTargetConnectedToSource;
      if ( IsVidPnTargetConnectedToSource < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v34[6] = v6;
LABEL_27:
        v34[5] = v8;
        v28 = v34;
        v34[4] = a1;
        v34[3] = v15;
        goto LABEL_28;
      }
      if ( !(_BYTE)v53 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
        LODWORD(v15) = -1071774937;
        v35[3] = a1;
        v35[4] = v8;
        v35[5] = v6;
LABEL_29:
        LODWORD(v20) = v15;
LABEL_11:
        COREACCESS::~COREACCESS((COREACCESS *)v52);
        COREACCESS::~COREACCESS((COREACCESS *)v51);
        goto LABEL_12;
      }
    }
    v53 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1);
    v15 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v19 = a5;
      LODWORD(v20) = UpdateGdiInfoForVidPnSource(v53, a1, v8, v46, a4, a5);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
      if ( *((_DWORD *)v19 + 21) == 1234568 )
      {
        v36 = *((_DWORD *)v19 + 2);
        memset(v49, 0, 0x20uLL);
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v49);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)v19 + 3), (__int64)v49, v37);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v36, (__int64)v49, v38);
        v42 = DpiPersistence::WriteDpiToHKLMRegistry(
                (DpiPersistence *)(a1 + 268),
                (const struct _LUID *)(unsigned int)v8,
                PlateauIndexForScaleFactor - v40,
                v41);
        v20 = v42;
        if ( v42 < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43);
          *(_QWORD *)(v44 + 24) = v20;
          WdLogEvent5_WdError(v44);
          LODWORD(v20) = 0;
        }
      }
      goto LABEL_11;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    goto LABEL_27;
  }
  v26 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v26 + 24) = v12;
  WdLogEvent5_WdError(v26);
  LODWORD(v20) = v12;
LABEL_12:
  if ( v45[0] )
    DxgkReleaseSessionModeChangeLock(v21);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v47);
  return (unsigned int)v20;
}
