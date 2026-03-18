/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1C00FA1C4
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0057D10 (DrvQueryMDEVPowerState.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68 (-DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_I.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C00F7C00 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct _MDEV *a1,
        __int64 a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5,
        _BYTE *a6)
{
  struct tagDESKTOP *v7; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  char v16; // cl
  int updated; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v38; // [rsp+20h] [rbp-99h]
  unsigned __int8 v39[4]; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v40[3]; // [rsp+44h] [rbp-75h] BYREF
  _DWORD v41[28]; // [rsp+50h] [rbp-69h] BYREF

  v7 = grpdeskRitInput;
  memset(v41, 0, sizeof(v41));
  v10 = ((__int64 (__fastcall *)(_DWORD *))qword_1C018BA30)(v41);
  v14 = v10;
  if ( v10 >= 0 )
  {
    v16 = v41[0];
    *a4 = (v41[0] & 0x20) != 0;
    *a5 = (v16 & 0x10) != 0;
    *a6 = v16 & 1;
    if ( (v16 & 2) != 0 )
    {
      v40[0] = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, v40, 0, 0);
      v14 = updated;
      if ( updated < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = v14;
        *(_QWORD *)(v21 + 32) = v40[0];
        WdLogEvent5_WdError(v21);
        LODWORD(v14) = 0;
      }
      v16 = v41[0];
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
    memset(v41, 0, sizeof(v41));
    v16 = LOBYTE(v41[0]) | 4;
    LOBYTE(v41[0]) |= 4u;
  }
  if ( (v16 & 4) != 0 )
  {
    v22 = v41[1];
    if ( !v41[1] )
      v22 = 2191;
    v41[1] = v22;
    if ( (v16 & 8) != 0 )
      v41[1] = v22 | 0x100;
    if ( (unsigned int)DrvQueryMDEVPowerState((__int64)a1) )
    {
      LODWORD(v38) = v41[1];
      v33 = DrvProcessSetDisplayConfigParameters(
              *(struct DISPLAYCONFIG_PATH_INFO **)&v41[4],
              v41[2],
              *(struct DISPLAYCONFIG_MODE_INFO **)&v41[8],
              v41[6],
              v38,
              v7,
              v39,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v41[10]);
      v31 = v33;
      if ( v33 < 0 )
      {
        LODWORD(v14) = v33;
        v32 = WdLogNewEntry5_WdError(v35, v34, v36);
        *(_QWORD *)(v32 + 32) = 1LL;
        goto LABEL_16;
      }
      if ( v39[0] )
        DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
    }
    else
    {
      v26 = v41[1];
      if ( (v41[1] & 0x200) != 0 )
      {
        LODWORD(v38) = v41[1] & 0xFFFFFF7F;
        v27 = DrvProcessSetDisplayConfigParameters(
                *(struct DISPLAYCONFIG_PATH_INFO **)&v41[4],
                v41[2],
                *(struct DISPLAYCONFIG_MODE_INFO **)&v41[8],
                v41[6],
                v38,
                v7,
                0LL,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v41[10]);
        v31 = v27;
        if ( v27 < 0 )
        {
          LODWORD(v14) = v27;
          v32 = WdLogNewEntry5_WdError(v29, v28, v30);
          *(_QWORD *)(v32 + 32) = 0LL;
LABEL_16:
          *(_QWORD *)(v32 + 24) = v31;
LABEL_17:
          WdLogEvent5_WdError(v32);
          goto LABEL_26;
        }
        v26 = v41[1] & 0x1100 | 0x88F;
        v41[1] = v26;
      }
      else if ( (v41[1] & 0xF) == 0 )
      {
        v32 = WdLogNewEntry5_WdError(v24, v23, v25);
        goto LABEL_17;
      }
      gulDelayedSwitchAction = v26;
    }
  }
LABEL_26:
  if ( *(_QWORD *)&v41[8] )
    ExFreePoolWithTag(*(PVOID *)&v41[8], 0);
  if ( *(_QWORD *)&v41[4] )
    ExFreePoolWithTag(*(PVOID *)&v41[4], 0);
  if ( *(_QWORD *)&v41[26] )
    **(_DWORD **)&v41[26] = v14;
  return (unsigned int)v14;
}
