/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01066DC
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C000FBDC (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C000FD20 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C000FDBC (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C000FE2C (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0108B2C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ @ 0x1C01E86AC (-_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned __int8 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int ColorDepths; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rax
  int ColorimetryData; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  int ColorDataRaw; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  int HDRCaps; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int128 v43; // xmm1
  _OWORD v44[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v45; // [rsp+60h] [rbp+20h] BYREF
  char v46; // [rsp+68h] [rbp+28h] BYREF
  char v47; // [rsp+6Ah] [rbp+2Ah]
  unsigned __int8 v48; // [rsp+6Dh] [rbp+2Dh]
  unsigned __int8 v49; // [rsp+6Eh] [rbp+2Eh]
  unsigned __int8 v50; // [rsp+6Fh] [rbp+2Fh]

  if ( !*((_QWORD *)this + 16) )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v39);
  }
  v5 = *((_DWORD *)this + 28);
  v45 = 0;
  v5 <<= 7;
  v6 = (unsigned __int8 *)operator new(v5, 0x4D677844u, PagedPool);
  DXGMONITOR::_GetContiguousEDID(this, v5, &v45, v6);
  if ( v5 != v45 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( v45 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v45, v6, (DXGMONITOR *)((char *)this + 528));
    v16 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v16;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 7);
      WdLogEvent5_WdWarning(v17);
      v44[0] = 0uLL;
      *((_OWORD *)this + 33) = 0uLL;
      *((_DWORD *)this + 136) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v45, v6, (DXGMONITOR *)((char *)this + 548));
    v23 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v24 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      *(_QWORD *)(v24 + 24) = v23;
      *(_QWORD *)(v24 + 32) = *((unsigned int *)this + 7);
      *(_QWORD *)((char *)this + 548) = 0LL;
    }
    if ( *((_DWORD *)this + 147) != 2 )
    {
      ColorDataRaw = EDID_V1_GetColorDataRaw(v45, v6, (struct DISPLAY_COLOR_DATA_RAW *)v44);
      v30 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v42 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
        *(_QWORD *)(v42 + 24) = v30;
        *(_QWORD *)(v42 + 32) = *((unsigned int *)this + 7);
        WdLogEvent5_WdWarning(v42);
        memset(v44, 0, sizeof(v44));
        v43 = v44[1];
        *(_OWORD *)((char *)this + 556) = v44[0];
        *(_OWORD *)((char *)this + 572) = v43;
      }
      else
      {
        *(_OWORD *)((char *)this + 556) = v44[0];
        *(_OWORD *)((char *)this + 572) = v44[1];
        *((_DWORD *)this + 147) = 1;
      }
    }
    HDRCaps = EDID_V1_GetHDRCaps(v45, v6, (struct DISPLAY_HDR_CAPS *)&v46);
    v36 = HDRCaps;
    if ( HDRCaps >= 0 )
    {
      if ( !*((_DWORD *)this + 149) )
      {
        *((_DWORD *)this + 149) = v48;
        *((_DWORD *)this + 148) = v50;
        *((_DWORD *)this + 150) = v49;
        *((_BYTE *)this + 604) = 1;
      }
      *((_BYTE *)this + 605) = v47;
    }
    else
    {
      v37 = WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      *(_QWORD *)(v37 + 24) = v36;
      *(_QWORD *)(v37 + 32) = *((unsigned int *)this + 7);
      *((_DWORD *)this + 149) = 0;
      *((_DWORD *)this + 148) = 0;
      *((_DWORD *)this + 150) = 0;
      *((_BYTE *)this + 605) = 0;
    }
  }
  else
  {
    v41 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v41 + 24) = *((unsigned int *)this + 7);
    WdLogEvent5_WdWarning(v41);
    v44[0] = 0uLL;
    *(_QWORD *)((char *)this + 548) = 0LL;
    *((_OWORD *)this + 33) = 0uLL;
    *((_DWORD *)this + 136) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_WORD *)this + 302) = 0;
    *((_DWORD *)this + 149) = 2700000;
    *((_DWORD *)this + 150) = 2700000;
    *((_DWORD *)this + 148) = 5000;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return 0LL;
}
