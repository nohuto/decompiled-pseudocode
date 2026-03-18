/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C00B6A20 (DxgkGetDisplayModeList.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B8DA0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00B99F0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsSharedOwner@COREADAPTERACCESS@@QEAAEXZ @ 0x1C001D7C0 (-IsSharedOwner@COREADAPTERACCESS@@QEAAEXZ.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00AC648 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00AC844 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00AC924 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00ACA1C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00AED34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00B7570 (MonitorGetMonitorOrientationsFromTarget.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C0106614 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     _CombineModeList @ 0x1C01A33A8 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01CAA4C (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
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
  DXGADAPTER **v12; // rcx
  int CachedStereoStates; // eax
  __int64 pModeList; // rcx
  __int64 v15; // rdx
  ADAPTER_DISPLAY *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int **SessionViewOwner; // rax
  SESSION_VIEW *v20; // r11
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v22; // r11
  struct DISPLAY_SOURCE *v23; // rbx
  struct DXGADAPTER *v24; // rsi
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *v28; // rbx
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rax
  int DisplayModeList; // eax
  D3DKMT_DISPLAYMODE *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  DXGADAPTER **v39; // rcx
  int CachedModeList; // eax
  int ModeList; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  UINT *p_ModeCount; // rsi
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  UINT v48; // edx
  __int64 v49; // rax
  UINT v50; // edx
  __int64 v51; // rax
  PERESOURCE **v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  unsigned __int8 v58; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v59[11]; // [rsp+59h] [rbp-68h] BYREF
  int v60; // [rsp+64h] [rbp-5Dh] BYREF
  struct DISPLAY_SOURCE *NextDisplaySource; // [rsp+68h] [rbp-59h]
  PVOID v62; // [rsp+70h] [rbp-51h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v63; // [rsp+78h] [rbp-49h] BYREF
  SESSION_VIEW *v64; // [rsp+90h] [rbp-31h]
  __int64 v65; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v66[32]; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v67[72]; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v71; // [rsp+130h] [rbp+6Fh] BYREF

  v7 = a5;
  v9 = a1;
  while ( 1 )
  {
    v60 = 0;
    v62 = 0LL;
    LOBYTE(v6) = 0;
    *v7 = 0;
    v10 = 3760LL * a4->VidPnSourceId;
    v11 = v9[288];
    *(_DWORD *)&v59[3] = v6;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                v9,
                *(unsigned int *)(v10 + *((_QWORD *)v11 + 14) + 1068),
                &v59[7]) >= 0 )
      *(_DWORD *)&v59[3] = *(_DWORD *)&v59[7] != 0;
    v12 = (DXGADAPTER **)v9[288];
    if ( a6 )
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(v12, a4->VidPnSourceId, (bool *)a6, (bool *)a6 + 1);
    else
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedModeList(v12, a4);
    pModeList = 0x80000000LL;
    LODWORD(v6) = CachedStereoStates;
    if ( (int)(CachedStereoStates + 0x80000000) >= 0 && CachedStereoStates != -1073741275 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(0x80000000LL);
      v55[3] = a4->VidPnSourceId;
      v55[5] = (int)v6;
      v55[4] = v9;
      WdLogEvent5_WdDmmEvent(v55);
      return (unsigned int)v6;
    }
    if ( CachedStereoStates == -1073741275 )
      break;
LABEL_78:
    if ( (_DWORD)v6 != -1071775483 || a3 )
      return (unsigned int)v6;
    v7 = a5;
    if ( *a5 )
    {
      v54 = WdLogNewEntry5_WdAssertion(pModeList);
      *(_QWORD *)(v54 + 24) = 5106LL;
      WdLogEvent5_WdAssertion(v54);
      v7 = a5;
    }
    a3 = 1;
  }
  v15 = 3760LL * a4->VidPnSourceId;
  v16 = v9[288];
  LOBYTE(v71) = 0;
  if ( *(_DWORD *)(v15 + *((_QWORD *)v16 + 14) + 1068) != -1
    && (int)DxgkQueryMonitorTypeLockHeld((DXGADAPTER *)v9, 0LL, (__int64)&v71, 0LL, 0LL, 0LL, 0LL) < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 4831LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( COREADAPTERACCESS::IsSharedOwner((DXGADAPTER **)a2) )
    COREADAPTERACCESS::Release(a2);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v9[288], a4->VidPnSourceId);
  v64 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !a3
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v20),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*((_QWORD *)v9[288] + 14) + 3760LL * a4->VidPnSourceId))
    || (NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, PrimaryDisplaySource),
        (v23 = NextDisplaySource) == 0LL) )
  {
LABEL_37:
    v34 = COREADAPTERACCESS::AcquireExclusive(a2, 1u);
    v6 = v34;
    if ( v34 >= 0 )
    {
      v39 = (DXGADAPTER **)v9[288];
      if ( a6 )
        CachedModeList = ADAPTER_DISPLAY::GetCachedStereoStates(v39, a4->VidPnSourceId, (bool *)a6, (bool *)a6 + 1);
      else
        CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(v39, a4);
      LODWORD(v6) = CachedModeList;
      if ( CachedModeList >= 0 )
        goto LABEL_75;
      if ( CachedModeList == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(v9[288], a3, a4, a6);
        v6 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( v60 )
          {
            p_ModeCount = &a4->ModeCount;
            v45 = CombineModeList((int)a4 + 16, (int)a4 + 8, v60, (_DWORD)v62, 1);
            v6 = v45;
            LODWORD(v71) = v45;
            if ( v45 < 0 )
            {
              v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v46);
              v47[3] = a1;
              v47[4] = a4->VidPnSourceId;
              v47[5] = v6;
              WdLogEvent5_WdDmmEvent(v47);
              pModeList = (__int64)a4->pModeList;
              *p_ModeCount = 0;
              if ( pModeList )
                ExFreePoolWithTag((PVOID)pModeList, 0);
              a4->pModeList = 0LL;
              goto LABEL_75;
            }
            v48 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v49 = v48++;
                *((_DWORD *)&a4->pModeList[v49].Flags + 1) &= ~0x80u;
              }
              while ( v48 < *p_ModeCount );
              LODWORD(v6) = v71;
            }
            v9 = a1;
          }
          *a5 = 1;
          if ( v59[3] )
          {
            v50 = 0;
            if ( a4->ModeCount )
            {
              do
              {
                v51 = v50++;
                *((_DWORD *)&a4->pModeList[v51].Flags + 1) &= ~0x80u;
              }
              while ( v50 < a4->ModeCount );
              v9 = a1;
            }
          }
          v52 = (PERESOURCE **)v9[288];
          if ( a6 )
            ADAPTER_DISPLAY::SetCachedStereoStates(v52, a4->VidPnSourceId, *(_BYTE *)a6 != 0, *((_BYTE *)a6 + 1) != 0);
          else
            LODWORD(v6) = ADAPTER_DISPLAY::SetCachedModeList(v52, a4);
          if ( (int)v6 >= 0 )
          {
            *a5 = 0;
          }
          else
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(pModeList);
            v53[3] = a4->VidPnSourceId;
            v53[5] = (int)v6;
            v53[4] = a4;
            WdLogEvent5_WdDmmEvent(v53);
          }
          LODWORD(v6) = 0;
          goto LABEL_75;
        }
        if ( a3 && ModeList == -1071775483 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v42);
          *(_QWORD *)(v43 + 24) = 5015LL;
          WdLogEvent5_WdAssertion(v43);
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42);
        v36[3] = a4->VidPnSourceId;
        v36[4] = v6;
      }
      else
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(pModeList);
        v36[3] = a4->VidPnSourceId;
        v36[5] = (int)v6;
        v36[4] = v9;
      }
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
      v36[3] = v6;
    }
    WdLogEvent5_WdDmmEvent(v36);
LABEL_75:
    if ( v62 )
      ExFreePoolWithTag(v62, 0);
    v9 = a1;
    goto LABEL_78;
  }
  while ( 1 )
  {
    v24 = *(struct DXGADAPTER **)(*((_QWORD *)v23 + 1) + 16LL);
    v58 = 0;
    memset(&v63, 0, sizeof(v63));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v65, v24, 0LL);
    v26 = COREADAPTERACCESS::AcquireExclusive(&v65, v25 + 1);
    v6 = v26;
    if ( v26 < 0 )
      break;
    v28 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v24, *((unsigned int *)NextDisplaySource + 267), &v59[7]) >= 0 )
    {
      v29 = v59[3];
      if ( *(_DWORD *)&v59[7] )
        v29 = 1;
      v59[3] = v29;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v24, 0LL, (__int64)v59, 0LL, 0LL, 0LL, 0LL) < 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v31 + 24) = 4913LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( (_BYTE)v71 == v59[0] )
    {
      v63.VidPnSourceId = v28[4];
      DisplayModeList = DxgkpGetDisplayModeList(v24, (struct COREADAPTERACCESS *)&v65, a3, &v63, &v58, a6);
      v6 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v33);
          *(_QWORD *)(v37 + 24) = 4932LL;
          WdLogEvent5_WdAssertion(v37);
        }
LABEL_42:
        v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
        v38[3] = v24;
        v38[4] = v63.VidPnSourceId;
        v38[5] = v6;
        WdLogEvent5_WdDmmEvent(v38);
        COREACCESS::~COREACCESS((COREACCESS *)v67);
        COREACCESS::~COREACCESS((COREACCESS *)v66);
        goto LABEL_75;
      }
      v6 = (int)CombineModeList((unsigned int)&v60, (unsigned int)&v62, v63.ModeCount, v63.pModeList, 1);
      if ( v58 )
      {
        v33 = v63.pModeList;
        if ( v63.pModeList )
          ExFreePoolWithTag(v63.pModeList, 0);
      }
      if ( (int)v6 < 0 )
        goto LABEL_42;
      v28 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v64, (const struct DISPLAY_SOURCE *)v28);
    v23 = NextDisplaySource;
    COREACCESS::~COREACCESS((COREACCESS *)v67);
    COREACCESS::~COREACCESS((COREACCESS *)v66);
    if ( !v23 )
    {
      v9 = a1;
      goto LABEL_37;
    }
  }
  v56 = WdLogNewEntry5_WdDmmEvent(v27);
  *(_QWORD *)(v56 + 24) = v24;
  *(_QWORD *)(v56 + 32) = v6;
  WdLogEvent5_WdDmmEvent(v56);
  COREACCESS::~COREACCESS((COREACCESS *)v67);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  return (unsigned int)v6;
}
