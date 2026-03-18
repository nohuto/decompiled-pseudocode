/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0099030 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00991B0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00993A0 (DxgkGetDisplayModeList.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C0099B24 (MonitorGetMonitorOrientationsFromTarget.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6FA4 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00E71A0 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E7260 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E7358 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90A4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C011790C (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     _CombineModeList @ 0x1C018EB64 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01B0C8C (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        ADAPTER_DISPLAY **a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5,
        struct DXGK_STEREO_PARAMS *a6)
{
  __int64 v6; // rbx
  unsigned __int8 *v7; // rax
  ADAPTER_DISPLAY **v9; // rsi
  __int64 v10; // rdx
  ADAPTER_DISPLAY *v11; // rax
  ADAPTER_DISPLAY *v12; // rcx
  int CachedStereoStates; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 pModeList; // rcx
  __int64 v19; // rdx
  ADAPTER_DISPLAY *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct SESSION_VIEW *SessionViewOwner; // rax
  int v27; // eax
  ADAPTER_DISPLAY *v28; // rcx
  int CachedModeList; // eax
  int ModeList; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  ADAPTER_DISPLAY *v35; // rcx
  __int64 v36; // rax
  SESSION_VIEW *v37; // r11
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v39; // r11
  struct DISPLAY_SOURCE *v40; // rbx
  struct DXGADAPTER *v41; // rsi
  int v42; // r8d
  int v43; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *v44; // rbx
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int DisplayModeList; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  UINT *p_ModeCount; // rsi
  int v61; // eax
  _QWORD *v62; // rax
  UINT v63; // edx
  __int64 v64; // rax
  UINT v65; // edx
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  unsigned __int8 v71; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v72[11]; // [rsp+59h] [rbp-68h] BYREF
  int v73; // [rsp+64h] [rbp-5Dh] BYREF
  struct DISPLAY_SOURCE *NextDisplaySource; // [rsp+68h] [rbp-59h]
  PVOID v75; // [rsp+70h] [rbp-51h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v76; // [rsp+78h] [rbp-49h] BYREF
  SESSION_VIEW *v77; // [rsp+90h] [rbp-31h]
  __int64 v78; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v79[32]; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v80[72]; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v84; // [rsp+130h] [rbp+6Fh] BYREF

  v7 = a5;
  v9 = a1;
  while ( 1 )
  {
    v73 = 0;
    v75 = 0LL;
    LOBYTE(v6) = 0;
    *v7 = 0;
    v10 = 3208LL * a4->VidPnSourceId;
    v11 = v9[285];
    *(_DWORD *)&v72[3] = v6;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                v9,
                *(unsigned int *)(v10 + *((_QWORD *)v11 + 14) + 1028),
                &v72[7]) >= 0 )
      *(_DWORD *)&v72[3] = *(_DWORD *)&v72[7] != 0;
    v12 = v9[285];
    if ( a6 )
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                             v12,
                             a4->VidPnSourceId,
                             (unsigned __int8 *)a6,
                             (unsigned __int8 *)a6 + 1);
    else
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedModeList(v12, a4);
    pModeList = 0x80000000LL;
    LODWORD(v6) = CachedStereoStates;
    if ( (int)(CachedStereoStates + 0x80000000) >= 0 && CachedStereoStates != -1073741275 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v69[3] = a4->VidPnSourceId;
      v69[5] = (int)v6;
      v69[4] = v9;
      WdLogEvent5_WdDmmEvent(v69);
      return (unsigned int)v6;
    }
    if ( CachedStereoStates == -1073741275 )
      break;
LABEL_8:
    if ( (_DWORD)v6 != -1071775483 || a3 )
      return (unsigned int)v6;
    v7 = a5;
    if ( *a5 )
    {
      v68 = WdLogNewEntry5_WdAssertion(pModeList, v14, v15, v16);
      *(_QWORD *)(v68 + 24) = 5102LL;
      WdLogEvent5_WdAssertion(v68);
      v7 = a5;
    }
    a3 = 1;
  }
  v19 = 3208LL * a4->VidPnSourceId;
  v20 = v9[285];
  LOBYTE(v84) = 0;
  v21 = *(_DWORD *)(v19 + *((_QWORD *)v20 + 14) + 1028);
  if ( v21 != -1 && (int)DxgkQueryMonitorTypeLockHeld((DXGADAPTER *)v9, v21, 0LL, (__int64)&v84, 0LL, 0LL, 0LL, 0LL) < 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v36 + 24) = 4836LL;
    WdLogEvent5_WdAssertion(v36);
  }
  COREADAPTERACCESS::Release(a2);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v9[285], a4->VidPnSourceId);
  v77 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) && !a3
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v37),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*((_QWORD *)v9[285] + 14) + 3208LL * a4->VidPnSourceId))
    || (NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v39, PrimaryDisplaySource),
        (v40 = NextDisplaySource) == 0LL) )
  {
LABEL_18:
    v27 = COREADAPTERACCESS::AcquireExclusive(a2, 1u);
    v6 = v27;
    if ( v27 < 0 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v58[3] = v6;
    }
    else
    {
      v28 = v9[285];
      if ( a6 )
        CachedModeList = ADAPTER_DISPLAY::GetCachedStereoStates(
                           v28,
                           a4->VidPnSourceId,
                           (unsigned __int8 *)a6,
                           (unsigned __int8 *)a6 + 1);
      else
        CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(v28, a4);
      LODWORD(v6) = CachedModeList;
      if ( CachedModeList >= 0 )
        goto LABEL_31;
      if ( CachedModeList == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(v9[285], a3, a4, a6);
        v6 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( v73 )
          {
            p_ModeCount = &a4->ModeCount;
            v61 = CombineModeList((int)a4 + 16, (int)a4 + 8, v73, (_DWORD)v75, 1);
            v6 = v61;
            LODWORD(v84) = v61;
            if ( v61 < 0 )
            {
              v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
              v62[3] = a1;
              v62[4] = a4->VidPnSourceId;
              v62[5] = v6;
              WdLogEvent5_WdDmmEvent(v62);
              pModeList = (__int64)a4->pModeList;
              *p_ModeCount = 0;
              if ( pModeList )
                ExFreePoolWithTag((PVOID)pModeList, 0);
              a4->pModeList = 0LL;
              goto LABEL_31;
            }
            v63 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v64 = v63++;
                *((_DWORD *)&a4->pModeList[v64].Flags + 1) &= ~0x80u;
              }
              while ( v63 < *p_ModeCount );
              LODWORD(v6) = v84;
            }
            v9 = a1;
          }
          *a5 = 1;
          if ( v72[3] )
          {
            v65 = 0;
            if ( a4->ModeCount )
            {
              do
              {
                v66 = v65++;
                *((_DWORD *)&a4->pModeList[v66].Flags + 1) &= ~0x80u;
              }
              while ( v65 < a4->ModeCount );
              v9 = a1;
            }
          }
          v35 = v9[285];
          if ( a6 )
            ADAPTER_DISPLAY::SetCachedStereoStates(v35, a4->VidPnSourceId, *(_BYTE *)a6 != 0, *((_BYTE *)a6 + 1) != 0);
          else
            LODWORD(v6) = ADAPTER_DISPLAY::SetCachedModeList(v35, a4);
          if ( (int)v6 < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v67[3] = a4->VidPnSourceId;
            v67[5] = (int)v6;
            v67[4] = a4;
            WdLogEvent5_WdDmmEvent(v67);
          }
          else
          {
            *a5 = 0;
          }
          LODWORD(v6) = 0;
LABEL_31:
          if ( v75 )
            ExFreePoolWithTag(v75, 0);
          v9 = a1;
          goto LABEL_8;
        }
        if ( a3 && ModeList == -1071775483 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
          *(_QWORD *)(v59 + 24) = 5011LL;
          WdLogEvent5_WdAssertion(v59);
        }
        v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v58[3] = a4->VidPnSourceId;
        v58[4] = v6;
      }
      else
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v58[3] = a4->VidPnSourceId;
        v58[5] = (int)v6;
        v58[4] = v9;
      }
    }
    WdLogEvent5_WdDmmEvent(v58);
    goto LABEL_31;
  }
  while ( 1 )
  {
    v41 = *(struct DXGADAPTER **)(*((_QWORD *)v40 + 1) + 16LL);
    v71 = 0;
    memset(&v76, 0, sizeof(v76));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v78, v41, 0LL);
    v43 = COREADAPTERACCESS::AcquireExclusive(&v78, v42 + 1);
    v6 = v43;
    if ( v43 < 0 )
      break;
    v44 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v41, *((unsigned int *)NextDisplaySource + 257), &v72[7]) >= 0 )
    {
      v45 = v72[3];
      if ( *(_DWORD *)&v72[7] )
        v45 = 1;
      v72[3] = v45;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v41, v44[257], 0LL, (__int64)v72, 0LL, 0LL, 0LL, 0LL) < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
      *(_QWORD *)(v50 + 24) = 4909LL;
      WdLogEvent5_WdAssertion(v50);
    }
    if ( (_BYTE)v84 == v72[0] )
    {
      v76.VidPnSourceId = v44[4];
      DisplayModeList = DxgkpGetDisplayModeList(v41, (struct COREADAPTERACCESS *)&v78, a3, &v76, &v71, a6);
      v6 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v53, v52, v54, v55);
          *(_QWORD *)(v56 + 24) = 4928LL;
          WdLogEvent5_WdAssertion(v56);
        }
LABEL_58:
        v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v57[3] = v41;
        v57[4] = v76.VidPnSourceId;
        v57[5] = v6;
        WdLogEvent5_WdDmmEvent(v57);
        COREACCESS::~COREACCESS((COREACCESS *)v80);
        COREACCESS::~COREACCESS((COREACCESS *)v79);
        goto LABEL_31;
      }
      v6 = (int)CombineModeList((unsigned int)&v73, (unsigned int)&v75, v76.ModeCount, v76.pModeList, 1);
      if ( v71 && v76.pModeList )
        ExFreePoolWithTag(v76.pModeList, 0);
      if ( (int)v6 < 0 )
        goto LABEL_58;
      v44 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v77, (const struct DISPLAY_SOURCE *)v44);
    v40 = NextDisplaySource;
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( !v40 )
    {
      v9 = a1;
      goto LABEL_18;
    }
  }
  v70 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v70 + 24) = v41;
  *(_QWORD *)(v70 + 32) = v6;
  WdLogEvent5_WdDmmEvent(v70);
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  COREACCESS::~COREACCESS((COREACCESS *)v79);
  return (unsigned int)v6;
}
