/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00CCED4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  char v9; // bl
  unsigned __int8 v10; // si
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rax

  v9 = a3;
  v10 = a2;
  if ( gForceDisconnect )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v9 )
    gForceDisconnect = 1;
  if ( gOldModeChange )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  gOldModeChange = 1;
  v14 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, (__int64 *)a5, 0, 1, v10, 1, 0);
  gOldModeChange = 0;
  v19 = v14;
  switch ( v14 )
  {
    case 0:
      goto LABEL_15;
    case 2:
      if ( v10 || *a5 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        WdLogEvent5_WdAssertion(v22);
      }
LABEL_15:
      v21 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v19 == 2;
      goto LABEL_16;
    case 3:
      v20 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v20);
      break;
  }
  v21 = -1073741823;
  *(_DWORD *)a6 = 16;
LABEL_16:
  gForceDisconnect = 0;
  if ( a8 )
    *a8 = v19;
  return v21;
}
