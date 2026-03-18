/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C0062EA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D61E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     NtUserSetDisplayConfig @ 0x1C00E3450 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68 (-DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_I.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F95B0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C0057B04 (LogDiagSDC.c)
 *     DrvQueryMDEVPowerState @ 0x1C0057D10 (DrvQueryMDEVPowerState.c)
 *     PowerDimUndimResend @ 0x1C0062AF0 (PowerDimUndimResend.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063698 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     SafeEnableMDEV @ 0x1C009BE80 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C009BED0 (SafeDisableMDEV.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00A25FC (DrvSetDisplayConfigValidateParams.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00F7DF8 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        __int64 a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        __int64 a7,
        char a8,
        bool *a9,
        _BYTE *a10,
        __int64 a11)
{
  unsigned int v11; // edi
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // ebx
  ULONG TimeIncrement; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct tagDESKTOP *v21; // rsi
  __int64 v22; // r12
  PVOID CurrentProcess; // rax
  int v24; // r14d
  __int64 v25; // rbx
  struct tagMONITOR *CachedMonitor; // rax
  int v27; // ecx
  unsigned int v28; // r14d
  void *v29; // r8
  __int64 v30; // r12
  int v31; // eax
  unsigned int v32; // edi
  _QWORD *v33; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  char *v37; // rcx
  __int16 v38; // ax
  __int64 v39; // r12
  _DWORD *v40; // r15
  int TargetVirtualization; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r8
  int *v46; // rcx
  int v47; // edx
  __int64 v48; // rax
  void *v49; // rdx
  char v50; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int8 v51; // [rsp+89h] [rbp-18h] BYREF
  unsigned __int8 v52[2]; // [rsp+8Ah] [rbp-17h] BYREF
  int v53; // [rsp+8Ch] [rbp-15h] BYREF
  int v54; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v55; // [rsp+94h] [rbp-Dh]
  __int64 v56; // [rsp+98h] [rbp-9h]
  struct _MDEV *v57[7]; // [rsp+A0h] [rbp-1h] BYREF
  unsigned int v59; // [rsp+F8h] [rbp+57h]

  v59 = a3;
  v11 = (unsigned int)a5;
  v12 = a1;
  v57[0] = 0LL;
  v54 = 0;
  v55 = (unsigned int)a5;
  v13 = (unsigned __int16)a5 & 0xC000;
  LOBYTE(a5) = 0;
  v50 = 0;
  v14 = (int)a4;
  v53 = 0;
  if ( v13 == 49152 )
  {
    v35 = WdLogNewEntry5_WdError(49152LL, a2, a3);
    LODWORD(v25) = -1073741581;
    *(_QWORD *)(v35 + 24) = -1073741581LL;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v25;
  }
  if ( (v11 & 0x4000) != 0 )
  {
    if ( a2 )
    {
      v36 = 0;
      if ( a1 )
      {
        v37 = (char *)a2 + 12;
        do
        {
          v38 = *(_WORD *)v37;
          *((_WORD *)v37 + 1) = *(_WORD *)v37;
          if ( v38 == -1 || (v11 & 0x10) != 0 )
            *(_WORD *)v37 = v36;
          else
            *(_DWORD *)v37 |= 0xFFFFu;
          *((_DWORD *)v37 + 14) &= 0xDu;
          ++v36;
          v37 += 72;
        }
        while ( v36 < v12 );
      }
    }
    v11 = v11 & 0xFFFF3FFF | 0x8000;
  }
  v56 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v21 = (struct tagDESKTOP *)a7;
  v22 = v56 * TimeIncrement;
  v56 = v22;
  if ( !a7 || (*(_DWORD *)(a7 + 48) & 8) != 0 )
    v21 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 51);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v17, v19, v20);
  v24 = (int)a6;
  if ( CurrentProcess == gpepCSRSS || !a8 || ((unsigned __int8)a6 & 0x10) != 0 )
  {
    if ( !v21 )
      v21 = grpdeskRitInput;
LABEL_8:
    LODWORD(v25) = DrvSetDisplayConfigValidateParams(v12, (_DWORD)a2, v59, v14, v11, (unsigned int)a6, a8);
    if ( (int)v25 < 0 )
    {
      v32 = 1;
      goto LABEL_33;
    }
    if ( (v11 & 0x8000) == 0 )
    {
      if ( (v11 & 0x20) == 0 || !a2 )
      {
        LODWORD(v25) = 0;
        goto LABEL_12;
      }
      v39 = 0LL;
      if ( v12 )
      {
        v40 = (_DWORD *)((char *)a2 + 8);
        while ( 1 )
        {
          TargetVirtualization = GetTargetVirtualization(
                                   *(struct _LUID *)((char *)a2 + 72 * v39 + 20),
                                   v40[5],
                                   &v51,
                                   v52,
                                   0LL,
                                   0LL);
          v25 = TargetVirtualization;
          if ( TargetVirtualization < 0 )
            break;
          if ( v51 && !v52[0] )
          {
            v45 = a1;
            v46 = (int *)((char *)a2 + 40);
            v47 = -1;
            do
            {
              if ( *(v40 - 2) == *(v46 - 10) && *(v40 - 1) == *(v46 - 9) && *v40 == *(v46 - 8) )
              {
                if ( v47 == -1 )
                  v47 = *v46;
                else
                  *v46 = v47;
              }
              v46 += 18;
              --v45;
            }
            while ( v45 );
          }
          v39 = (unsigned int)(v39 + 1);
          v40 += 18;
          if ( (unsigned int)v39 >= a1 )
            goto LABEL_13;
        }
        v48 = WdLogNewEntry5_WdError(v43, v42, v44);
        *(_QWORD *)(v48 + 24) = v25;
        WdLogEvent5_WdError(v48);
LABEL_12:
        if ( (int)v25 >= 0 )
          goto LABEL_13;
        return (unsigned int)v25;
      }
    }
LABEL_13:
    if ( (v11 & 0x80) != 0 )
    {
      if ( gbMDEVDisabled )
      {
        v32 = 27;
      }
      else
      {
        if ( (unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 1)) )
        {
          CachedMonitor = CreateCachedMonitor();
          v27 = v53;
          if ( !CachedMonitor )
            v27 = 16;
          v53 = v27;
          SetPointer(0LL);
          FreeAllSpbs();
          if ( qword_1C018DCD0 )
            StopFade();
          bSetDevDragRect(*((_QWORD *)gpDispInfo + 4), 0LL, 0LL, 0LL);
          goto LABEL_21;
        }
        v32 = 28;
      }
      LODWORD(v25) = -1073741823;
      goto LABEL_32;
    }
LABEL_21:
    v28 = v24 | 0x40;
    if ( v21 )
      v29 = (void *)***((_QWORD ***)v21 + 1);
    else
      v29 = 0LL;
    v30 = a11;
    v31 = DrvSetDisplayConfig(
            a1,
            a2,
            v59,
            a4,
            v11,
            v28 | 0x100,
            v29,
            a8,
            0LL,
            *((struct _MDEV **)gpDispInfo + 1),
            v57,
            (unsigned int *)&v54,
            (unsigned int *)&v53,
            (char *)&a5,
            &v50,
            a11);
    LODWORD(v25) = v31;
    if ( (v11 & 0x80) != 0 )
    {
      if ( v31 >= 0 )
        goto LABEL_25;
      if ( v50 )
      {
        if ( v21 )
          v49 = (void *)***((_QWORD ***)v21 + 1);
        else
          v49 = 0LL;
        v31 = DrvSetDisplayConfig(
                0,
                0LL,
                0,
                0LL,
                2447,
                0x102u,
                v49,
                0,
                0LL,
                *((struct _MDEV **)gpDispInfo + 1),
                v57,
                0LL,
                0LL,
                (char *)&a5,
                0LL,
                v30);
      }
      if ( v31 >= 0 )
      {
LABEL_25:
        gppiFullscreen = 0LL;
        LODWORD(v25) = v31;
        if ( !(_BYTE)a5 )
        {
          *((struct _MDEV **)gpDispInfo + 1) = v57[0];
          PowerDimUndimResend();
          LODWORD(v25) = xxxResetDisplayDevice(v21, 0LL, (v28 >> 4) & 1);
          v32 = 36;
          if ( (int)v25 < 0 )
            goto LABEL_28;
          goto LABEL_27;
        }
        if ( (v28 & 4) != 0 )
        {
LABEL_27:
          v32 = v53;
LABEL_28:
          if ( v21 )
          {
            v33 = (_QWORD *)*((_QWORD *)v21 + 1);
            if ( (*(_DWORD *)(*v33 + 52LL) & 1) == 0 )
              xxxInternalInvalidate(v33[2], 1LL, 66693LL);
          }
          SetPointer(1LL);
          zzzUpdateCursorImage();
          goto LABEL_32;
        }
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
      }
      xxxUserResetDisplayDevice();
      goto LABEL_27;
    }
    v32 = v53;
LABEL_32:
    v22 = v56;
    v12 = a1;
LABEL_33:
    if ( a9 )
      *a9 = v32 - 27 <= 1;
    if ( a10 )
      *a10 = (_BYTE)a5;
    if ( (int)v25 >= 0 && v32 == 29 )
      LODWORD(v25) = -1073741266;
    LogDiagSDC(v12, a2, v59, a4, v55, v25, v54, v32, v22, (char)a5);
    return (unsigned int)v25;
  }
  if ( v21 == grpdeskRitInput )
    goto LABEL_8;
  return 3221225506LL;
}
