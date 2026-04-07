/*
 * XREFs of ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DE2C
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007C3A0 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18007B3F4 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DF88 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007E074 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x18007E408 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007EC14 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007F24C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddDisplayCaptureEntry(
        CProjectionBorderManager *this,
        HMONITOR a2,
        unsigned int a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  struct _RTL_GENERIC_TABLE *v4; // r15
  __int64 v6; // rdx
  unsigned int v10; // ebx
  int v11; // r9d
  int updated; // eax
  unsigned int v14; // [rsp+20h] [rbp-50h]
  __int64 Buffer; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+60h] [rbp-10h]

  v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 512);
  v16 = 0;
  v6 = *(_QWORD *)a4;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  Buffer = 0LL;
  v17 = 0LL;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
         (struct _RTL_GENERIC_TABLE *)((char *)this + 512),
         v6) )
  {
    v10 = -2147418113;
    v14 = 863;
LABEL_3:
    v11 = v10;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v14);
    goto LABEL_17;
  }
  Buffer = *(_QWORD *)a4;
  *(_QWORD *)&v17 = a2;
  v16 = a3;
  if ( !RtlInsertElementGenericTable(v4, &Buffer, 0x38u, 0LL) )
  {
    v10 = -2147024882;
    v14 = 869;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture(this);
  if ( a2 )
  {
    updated = CProjectionBorderManager::_AddProjectionBorderForDisplay(this, a2, a4);
    v10 = updated;
    if ( updated < 0 )
    {
      v14 = 874;
LABEL_15:
      v11 = updated;
      goto LABEL_16;
    }
  }
  else
  {
    updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays(this, a4);
    v10 = updated;
    if ( updated < 0 )
    {
      v14 = 878;
      goto LABEL_15;
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(this, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v14 = 881;
    goto LABEL_15;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(this, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v14 = 882;
    goto LABEL_15;
  }
LABEL_17:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v17 + 8);
  return v10;
}
