/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00E2A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000C4B4 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00E2740 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00E4C28 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00E4D80 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01D4624 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z @ 0x1C01ED848 (-DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r14
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  struct _DPI_INFORMATION *v18; // r15
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v32; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v33; // r8
  int PlateauIndexForScaleFactor; // eax
  int v35; // r10d
  unsigned int v36; // r9d
  _BYTE v37[4]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v38[36]; // [rsp+34h] [rbp-4Dh] BYREF
  _BYTE v39[8]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v40[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v41[40]; // [rsp+88h] [rbp+7h] BYREF
  struct _DXGDMM_INTERFACE *v42; // [rsp+E0h] [rbp+5Fh] BYREF

  v5 = a3;
  v7 = (unsigned int)a2;
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v37[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v37, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = v11;
    WdLogEvent5_WdError(v22);
    goto LABEL_12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, (struct DXGADAPTER *const)a1, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_18;
  LOBYTE(v42) = 0;
  IsEmergencyMonitorConnected((DXGADAPTER *)a1, v7, (unsigned __int8 *)&v42);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v39);
  *(_DWORD *)v38 = 0;
  if ( (_BYTE)v42 )
    *(_DWORD *)v38 = dword_1C00607D4;
  else
    DpiPersistence::ReadDpiFromRegistry(
      (struct _LUID *)(a1 + 268),
      (const struct _LUID *)(unsigned int)v7,
      1,
      (struct _UNICODE_STRING *)v38);
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
  v11 = v14;
  if ( v14 < 0 )
  {
LABEL_18:
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v23[3] = v11;
    v23[4] = PsGetCurrentProcess(v25, v24);
    v26 = v23;
    v23[5] = a1;
LABEL_25:
    WdLogEvent5_WdError(v26);
    goto LABEL_11;
  }
  if ( (_DWORD)v5 == -1 )
    goto LABEL_8;
  LOBYTE(v42) = 0;
  IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, v7, v5, (bool *)&v42);
  v11 = IsVidPnTargetConnectedToSource;
  if ( IsVidPnTargetConnectedToSource < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v29[6] = v5;
LABEL_24:
    v29[5] = v7;
    v26 = v29;
    v29[4] = a1;
    v29[3] = v11;
    goto LABEL_25;
  }
  if ( (_BYTE)v42 )
  {
LABEL_8:
    v42 = 0LL;
    v16 = DxgkQueryDmmInterface((DXGADAPTER *)a1, v15, &v42);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v18 = a5;
      LODWORD(v11) = UpdateGdiInfoForVidPnSource(v42, a1, v7, *(int *)v38, a4, a5);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v39);
      if ( *((_DWORD *)v18 + 21) == 1234568 )
      {
        v31 = *((_DWORD *)v18 + 2);
        memset(&v38[4], 0, 0x20uLL);
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)&v38[4]);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)v18 + 3), (__int64)&v38[4], v32);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                       (DpiInternal *)v31,
                                       (__int64)&v38[4],
                                       v33);
        LODWORD(v11) = DpiPersistence::WriteDpiToHKLMRegistry(
                         (DpiPersistence *)(a1 + 268),
                         (const struct _LUID *)(unsigned int)v7,
                         PlateauIndexForScaleFactor - v35,
                         v36);
      }
      goto LABEL_11;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    goto LABEL_24;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v15);
  LODWORD(v11) = -1071774937;
  v30[3] = a1;
  v30[4] = v7;
  v30[5] = v5;
LABEL_11:
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  COREACCESS::~COREACCESS((COREACCESS *)v40);
LABEL_12:
  if ( v37[0] )
    DxgkReleaseSessionModeChangeLock(v19);
  return (unsigned int)v11;
}
