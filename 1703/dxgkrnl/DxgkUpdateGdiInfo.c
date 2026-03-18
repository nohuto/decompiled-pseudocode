/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00A70D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0003E70 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00A5188 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00A7230 (DxgkQueryDmmInterface.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00A72A0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BBFE4 (-WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C01D6588 (DmmIsVidPnTargetConnectedToSource.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int DmmInterface; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _DPI_INFORMATION *v20; // r15
  __int64 v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rcx
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v33; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v34; // r8
  int PlateauIndexForScaleFactor; // eax
  int v36; // r10d
  _BYTE v37[4]; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-4Dh] BYREF
  unsigned int v39[10]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v40[8]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v41[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v42[40]; // [rsp+88h] [rbp+7h] BYREF
  struct _DXGDMM_INTERFACE *v43; // [rsp+E0h] [rbp+5Fh] BYREF

  v5 = a2;
  v7 = a3;
  v37[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v37, 0);
  v12 = v9;
  if ( v9 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, (struct DXGADAPTER *const)a1, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
    v12 = v13;
    if ( v13 < 0 )
      goto LABEL_16;
    LOBYTE(v43) = 0;
    IsEmergencyMonitorConnected((DXGADAPTER *)a1, v5, (unsigned __int8 *)&v43);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v40);
    v38 = 0;
    if ( (_BYTE)v43 )
      v38 = dword_1C006F954;
    else
      ReadDpiFromRegistry((const struct _LUID *)(a1 + 268), v5, 1, &v38);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
    v12 = v16;
    if ( v16 < 0 )
    {
LABEL_16:
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v23[3] = v12;
      v23[4] = PsGetCurrentProcess();
      v24 = v23;
      v23[5] = a1;
LABEL_23:
      WdLogEvent5_WdError(v24);
      goto LABEL_10;
    }
    if ( (_DWORD)v7 != -1 )
    {
      LOBYTE(v43) = 0;
      IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, (unsigned int)v5, (unsigned int)v7, &v43);
      v12 = IsVidPnTargetConnectedToSource;
      if ( IsVidPnTargetConnectedToSource < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
        v30[6] = v7;
LABEL_22:
        v30[5] = v5;
        v24 = v30;
        v30[4] = a1;
        v30[3] = v12;
        goto LABEL_23;
      }
      if ( !(_BYTE)v43 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
        LODWORD(v12) = -1071774937;
        v31[3] = a1;
        v31[4] = v5;
        v31[5] = v7;
LABEL_10:
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v41);
        goto LABEL_11;
      }
    }
    v43 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1);
    v12 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v20 = a5;
      LODWORD(v12) = UpdateGdiInfoForVidPnSource(v43, a1, v5, v38, a4, a5);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v40);
      if ( *((_DWORD *)v20 + 21) == 1234568 )
      {
        v32 = *((_DWORD *)v20 + 2);
        memset(v39, 0, 0x20uLL);
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v39);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)v20 + 3), (__int64)v39, v33);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v32, (__int64)v39, v34);
        LODWORD(v12) = WriteDpiToHKLMRegistry((const struct _LUID *)(a1 + 268), v5, PlateauIndexForScaleFactor - v36);
      }
      goto LABEL_10;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    goto LABEL_22;
  }
  v22 = WdLogNewEntry5_WdError(v11, v10);
  *(_QWORD *)(v22 + 24) = v12;
  WdLogEvent5_WdError(v22);
LABEL_11:
  if ( v37[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v12;
}
