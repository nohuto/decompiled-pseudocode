/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C023AECC
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C00477A4 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00478F0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C0047BA4 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C0047D70 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0239C38 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C023BF3C (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned __int8 *v8; // rsi
  unsigned int v9; // edi
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // rdi
  __int64 v17; // rax
  int ColorDepths; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  int ColorimetryData; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  int ColorDataRaw; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rax
  __int128 v37; // xmm1
  int HDRCaps; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rax
  _OWORD v46[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v47; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int8 v48; // [rsp+65h] [rbp+25h]
  unsigned __int8 v49; // [rsp+66h] [rbp+26h]
  unsigned __int8 v50; // [rsp+67h] [rbp+27h]

  if ( !*((_QWORD *)this + 18) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 32);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 32);
  }
  v7 = 0;
  v8 = 0LL;
  v47 = 0;
  if ( v5 )
  {
    v9 = v5 << 7;
    v10 = (unsigned __int8 *)operator new[](v9, 0x4D677844u, PagedPool);
    v8 = v10;
    if ( v10 )
    {
      DXGMONITOR::_GetContiguousEDID(this, v9, &v47, v10);
      v7 = v47;
      if ( v9 != v47 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v14);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      WdLogEvent5_WdWarning(v15);
    }
  }
  v16 = (_OWORD *)((char *)this + 588);
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v17);
    v46[0] = 0uLL;
    *((_QWORD *)this + 76) = 0LL;
    *v16 = 0uLL;
    *((_DWORD *)this + 151) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_DWORD *)this + 163) = 5000;
    *((_DWORD *)this + 164) = 2700000;
    *((_DWORD *)this + 165) = 2700000;
    *((_BYTE *)this + 668) = 0;
    *((_DWORD *)this + 168) = 3;
LABEL_25:
    *((_BYTE *)this + 676) = 0;
    goto LABEL_26;
  }
  ColorDepths = EDID_V1_GetColorDepths(v7, v8, (DXGMONITOR *)((char *)this + 588));
  v22 = ColorDepths;
  if ( ColorDepths < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v22;
    *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v23);
    v46[0] = 0uLL;
    *v16 = 0uLL;
    *((_DWORD *)this + 151) = 0;
  }
  ColorimetryData = EDID_V1_GetColorimetryData(v7, v8, (DXGMONITOR *)((char *)this + 608));
  v29 = ColorimetryData;
  if ( ColorimetryData < 0 )
  {
    v30 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
    *(_QWORD *)(v30 + 24) = v29;
    *(_QWORD *)(v30 + 32) = *((unsigned int *)this + 11);
    *((_QWORD *)this + 76) = 0LL;
  }
  if ( *((_DWORD *)this + 162) != 2 )
  {
    ColorDataRaw = EDID_V1_GetColorDataRaw(v7, v8, (struct DISPLAY_COLOR_DATA_RAW *)v46);
    v35 = ColorDataRaw;
    if ( ColorDataRaw < 0 )
    {
      v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v36 + 24) = v35;
      *(_QWORD *)(v36 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v36);
      memset(v46, 0, sizeof(v46));
      v37 = v46[1];
      *(_OWORD *)((char *)this + 616) = v46[0];
      *(_OWORD *)((char *)this + 632) = v37;
    }
    else
    {
      *(_OWORD *)((char *)this + 616) = v46[0];
      *(_OWORD *)((char *)this + 632) = v46[1];
      *((_DWORD *)this + 162) = 1;
    }
  }
  HDRCaps = EDID_V1_GetHDRCaps(v7, v8, (struct DISPLAY_HDR_CAPS *)&v47);
  v43 = HDRCaps;
  if ( HDRCaps < 0 )
  {
    v44 = WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    *(_QWORD *)(v44 + 24) = v43;
    *(_QWORD *)(v44 + 32) = *((unsigned int *)this + 11);
    *((_DWORD *)this + 164) = 0;
    *((_DWORD *)this + 163) = 0;
    *((_DWORD *)this + 165) = 0;
    goto LABEL_25;
  }
  if ( !*((_DWORD *)this + 164) )
  {
    *((_DWORD *)this + 164) = v48;
    *((_DWORD *)this + 163) = v50;
    *((_DWORD *)this + 165) = v49;
    *((_BYTE *)this + 668) = 1;
    *((_DWORD *)this + 168) = 1;
  }
  *((_BYTE *)this + 676) = BYTE2(v47);
LABEL_26:
  if ( v8 )
    operator delete[](v8);
  return 0LL;
}
