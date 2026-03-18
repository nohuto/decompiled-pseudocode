/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0108BA8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00116C4 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C0011760 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C00117D0 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C0013A38 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C010BA54 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C010BB10 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  int v4; // r14d
  unsigned int v5; // esi
  unsigned __int8 *v6; // rdi
  unsigned int v7; // r14d
  unsigned __int8 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int ColorDepths; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rax
  int ColorimetryData; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  int ColorDataRaw; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  int HDRCaps; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int64 v40; // rax
  _OWORD v41[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v42; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int8 v43; // [rsp+65h] [rbp+25h]
  unsigned __int8 v44; // [rsp+66h] [rbp+26h]
  unsigned __int8 v45; // [rsp+67h] [rbp+27h]

  if ( !*((_QWORD *)this + 16) )
  {
    v34 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !*((_DWORD *)this + 28) )
  {
    v35 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v35);
  }
  v4 = *((_DWORD *)this + 28);
  v5 = 0;
  v6 = 0LL;
  v42 = 0;
  if ( !v4 )
    goto LABEL_27;
  v7 = v4 << 7;
  v8 = (unsigned __int8 *)operator new(v7, 0x4D677844u, PagedPool);
  v6 = v8;
  if ( v8 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v7, &v42, v8);
    v5 = v42;
    if ( v7 != v42 )
    {
      v36 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v36);
    }
  }
  else
  {
    v37 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    WdLogEvent5_WdWarning(v37);
  }
  if ( v5 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v5, v6, (DXGMONITOR *)((char *)this + 568));
    v16 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 7);
      WdLogEvent5_WdWarning(v17);
      v41[0] = 0uLL;
      *(_OWORD *)((char *)this + 568) = 0uLL;
      *((_DWORD *)this + 146) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v5, v6, (DXGMONITOR *)((char *)this + 588));
    v21 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v22 = WdLogNewEntry5_WdTrace(v20, v19);
      *(_QWORD *)(v22 + 24) = v21;
      *(_QWORD *)(v22 + 32) = *((unsigned int *)this + 7);
      *(_QWORD *)((char *)this + 588) = 0LL;
    }
    if ( *((_DWORD *)this + 157) != 2 )
    {
      ColorDataRaw = EDID_V1_GetColorDataRaw(v5, v6, (struct DISPLAY_COLOR_DATA_RAW *)v41);
      v27 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v38 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v38 + 24) = v27;
        *(_QWORD *)(v38 + 32) = *((unsigned int *)this + 7);
        WdLogEvent5_WdWarning(v38);
        memset(v41, 0, sizeof(v41));
        v39 = v41[1];
        *(_OWORD *)((char *)this + 596) = v41[0];
        *(_OWORD *)((char *)this + 612) = v39;
      }
      else
      {
        *(_OWORD *)((char *)this + 596) = v41[0];
        *(_OWORD *)((char *)this + 612) = v41[1];
        *((_DWORD *)this + 157) = 1;
      }
    }
    HDRCaps = EDID_V1_GetHDRCaps(v5, v6, (struct DISPLAY_HDR_CAPS *)&v42);
    v31 = HDRCaps;
    if ( HDRCaps >= 0 )
    {
      if ( !*((_DWORD *)this + 159) )
      {
        *((_DWORD *)this + 159) = v43;
        *((_DWORD *)this + 158) = v45;
        *((_DWORD *)this + 160) = v44;
        *((_BYTE *)this + 648) = 1;
      }
      *((_BYTE *)this + 649) = BYTE2(v42);
    }
    else
    {
      v32 = WdLogNewEntry5_WdTrace(v30, v29);
      *(_QWORD *)(v32 + 24) = v31;
      *(_QWORD *)(v32 + 32) = *((unsigned int *)this + 7);
      *((_DWORD *)this + 159) = 0;
      *((_DWORD *)this + 158) = 0;
      *((_DWORD *)this + 160) = 0;
      *((_BYTE *)this + 649) = 0;
    }
  }
  else
  {
LABEL_27:
    v40 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v40 + 24) = *((unsigned int *)this + 7);
    WdLogEvent5_WdWarning(v40);
    v41[0] = 0uLL;
    *(_QWORD *)((char *)this + 588) = 0LL;
    *(_OWORD *)((char *)this + 568) = 0uLL;
    *((_DWORD *)this + 146) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_WORD *)this + 324) = 0;
    *((_DWORD *)this + 159) = 2700000;
    *((_DWORD *)this + 160) = 2700000;
    *((_DWORD *)this + 158) = 5000;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return 0LL;
}
