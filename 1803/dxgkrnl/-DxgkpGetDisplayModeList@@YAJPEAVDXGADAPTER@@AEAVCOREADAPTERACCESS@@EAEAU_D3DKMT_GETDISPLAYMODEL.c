/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C00AD370 (DxgkGetDisplayModeList.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D9110 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00DA480 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00B7820 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E1F04 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E21E8 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0152404 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0157538 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     _CombineModeList @ 0x1C0193C64 (_CombineModeList.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01C7A90 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01CFEA0 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        ADAPTER_DISPLAY **a1,
        DXGADAPTER **a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // rax
  struct DXGADAPTER *v7; // rbx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 CachedModeList; // rbx
  __int64 v13; // rcx
  __int64 v15; // rdx
  ADAPTER_DISPLAY *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v21; // r11
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v23; // r11
  struct DISPLAY_SOURCE *v24; // rbx
  struct DXGADAPTER *v25; // rsi
  int v26; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *v27; // rbx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  int DisplayModeList; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v38; // eax
  int ModeList; // eax
  __int64 v40; // rcx
  UINT *p_ModeCount; // rsi
  int v42; // eax
  _QWORD *v43; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  UINT i; // edx
  __int64 v46; // rax
  bool v47; // zf
  unsigned __int8 *v48; // rsi
  UINT v49; // edx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  unsigned __int8 v57; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v58[11]; // [rsp+59h] [rbp-60h] BYREF
  int v59; // [rsp+64h] [rbp-55h] BYREF
  struct DISPLAY_SOURCE *NextDisplaySource; // [rsp+68h] [rbp-51h]
  void *v61; // [rsp+70h] [rbp-49h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v62; // [rsp+78h] [rbp-41h] BYREF
  SESSION_VIEW *v63; // [rsp+90h] [rbp-29h]
  __int64 v64; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v65[32]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v66[72]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v70; // [rsp+130h] [rbp+77h] BYREF

  v5 = a5;
  v7 = (struct DXGADAPTER *)a1;
  while ( 1 )
  {
    v8 = 0;
    v58[3] = 0;
    v61 = 0LL;
    *v5 = 0;
    v9 = 3760LL * a4->VidPnSourceId;
    v10 = *((_QWORD *)v7 + 307);
    v59 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                v7,
                *(unsigned int *)(v9 + *(_QWORD *)(v10 + 112) + 1068),
                &v58[7]) >= 0 )
    {
      v11 = v58[3];
      if ( *(_DWORD *)&v58[7] )
        v11 = 1;
      *(_DWORD *)&v58[3] = v11;
    }
    CachedModeList = (int)ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)v7 + 307), a4);
    v13 = (unsigned int)CachedModeList + 0x80000000;
    if ( (int)v13 >= 0 && (_DWORD)CachedModeList != -1073741275 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v55[3] = a4->VidPnSourceId;
      v55[4] = a1;
      v55[5] = CachedModeList;
      WdLogEvent5_WdDmmEvent(v55);
      return (unsigned int)CachedModeList;
    }
    if ( (_DWORD)CachedModeList == -1073741275 )
      break;
LABEL_8:
    if ( (_DWORD)CachedModeList != -1071775483 || a3 )
      return (unsigned int)CachedModeList;
    v5 = a5;
    if ( *a5 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v54 + 24) = 5026LL;
      WdLogEvent5_WdAssertion(v54);
      v5 = a5;
    }
    v7 = (struct DXGADAPTER *)a1;
    a3 = 1;
  }
  v15 = 3760LL * a4->VidPnSourceId;
  v16 = a1[307];
  LOBYTE(v70) = 0;
  v17 = *(_DWORD *)(v15 + *((_QWORD *)v16 + 14) + 1068);
  if ( v17 != -1 && (int)DxgkQueryMonitorTypeLockHeld((DXGADAPTER *)a1, v17, 0LL, (__int64)&v70, 0LL, 0LL, 0LL) < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 4770LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(a2[3]) )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)a2);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[307], a4->VidPnSourceId);
  v63 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) && !a3
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v21),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*((_QWORD *)a1[307] + 14) + 3760LL * a4->VidPnSourceId))
    || (NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource),
        (v24 = NextDisplaySource) == 0LL) )
  {
LABEL_38:
    v33 = COREADAPTERACCESS::AcquireExclusive(a2);
    CachedModeList = v33;
    if ( v33 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v34[3] = CachedModeList;
LABEL_44:
      WdLogEvent5_WdDmmEvent(v34);
      goto LABEL_66;
    }
    v38 = ADAPTER_DISPLAY::GetCachedModeList(a1[307], a4);
    CachedModeList = v38;
    if ( v38 < 0 )
    {
      if ( v38 != -1073741275 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v34[3] = a4->VidPnSourceId;
        v34[4] = a1;
        v34[5] = CachedModeList;
        goto LABEL_44;
      }
      ModeList = ADAPTER_DISPLAY::CreateModeList(a1[307], a3, a4);
      CachedModeList = ModeList;
      if ( ModeList < 0 )
      {
        if ( a3 && ModeList == -1071775483 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v40);
          *(_QWORD *)(v37 + 24) = 4944LL;
          WdLogEvent5_WdAssertion(v37);
        }
        v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v34[3] = a4->VidPnSourceId;
        v34[4] = CachedModeList;
        goto LABEL_44;
      }
      if ( v8 )
      {
        p_ModeCount = &a4->ModeCount;
        v42 = CombineModeList((int)a4 + 16, (int)a4 + 8, v59, (_DWORD)v61, 1);
        CachedModeList = v42;
        if ( v42 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v43[3] = a1;
          v43[4] = a4->VidPnSourceId;
          v43[5] = CachedModeList;
          WdLogEvent5_WdDmmEvent(v43);
          pModeList = a4->pModeList;
          *p_ModeCount = 0;
          operator delete[](pModeList);
          a4->pModeList = 0LL;
          goto LABEL_66;
        }
        for ( i = 0; i < *p_ModeCount; *((_DWORD *)&a4->pModeList[v46].Flags + 1) &= ~0x80u )
          v46 = i++;
      }
      v47 = v58[3] == 0;
      v48 = a5;
      *a5 = 1;
      if ( !v47 )
      {
        v49 = 0;
        if ( a4->ModeCount )
        {
          do
          {
            v50 = v49++;
            *((_DWORD *)&a4->pModeList[v50].Flags + 1) &= ~0x80u;
          }
          while ( v49 < a4->ModeCount );
          v48 = a5;
        }
      }
      v51 = ADAPTER_DISPLAY::SetCachedModeList(a1[307], a4);
      v52 = v51;
      if ( v51 >= 0 )
      {
        *v48 = 0;
      }
      else
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v53[3] = a4->VidPnSourceId;
        v53[4] = a4;
        v53[5] = v52;
        WdLogEvent5_WdDmmEvent(v53);
      }
      LODWORD(CachedModeList) = 0;
    }
LABEL_66:
    if ( v61 )
      operator delete[](v61);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v25 = *(struct DXGADAPTER **)(*((_QWORD *)v24 + 1) + 16LL);
    v57 = 0;
    memset(&v62, 0, sizeof(v62));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v64, v25, 0LL);
    v26 = COREADAPTERACCESS::AcquireExclusive(&v64);
    CachedModeList = v26;
    if ( v26 < 0 )
      break;
    v27 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v25, *((unsigned int *)NextDisplaySource + 267), &v58[7]) >= 0 )
    {
      v28 = v58[3];
      if ( *(_DWORD *)&v58[7] )
        v28 = 1;
      v58[3] = v28;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v25, v27[267], 0LL, (__int64)v58, 0LL, 0LL, 0LL) < 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v30 + 24) = 4851LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( (_BYTE)v70 == v58[0] )
    {
      v62.VidPnSourceId = v27[4];
      DisplayModeList = DxgkpGetDisplayModeList(v25, (struct COREADAPTERACCESS *)&v64, a3, &v62, &v57);
      CachedModeList = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v35 + 24) = 4869LL;
          WdLogEvent5_WdAssertion(v35);
        }
LABEL_42:
        v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v36[3] = v25;
        v36[4] = v62.VidPnSourceId;
        v36[5] = CachedModeList;
        WdLogEvent5_WdDmmEvent(v36);
        COREACCESS::~COREACCESS((COREACCESS *)v66);
        COREACCESS::~COREACCESS((COREACCESS *)v65);
        goto LABEL_66;
      }
      CachedModeList = (int)CombineModeList((unsigned int)&v59, (unsigned int)&v61, v62.ModeCount, v62.pModeList, 1);
      if ( v57 )
        operator delete[](v62.pModeList);
      if ( (int)CachedModeList < 0 )
        goto LABEL_42;
      v27 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v63, (const struct DISPLAY_SOURCE *)v27);
    v24 = NextDisplaySource;
    COREACCESS::~COREACCESS((COREACCESS *)v66);
    COREACCESS::~COREACCESS((COREACCESS *)v65);
    if ( !v24 )
    {
      v8 = v59;
      goto LABEL_38;
    }
  }
  v56 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v56 + 24) = v25;
  *(_QWORD *)(v56 + 32) = CachedModeList;
  WdLogEvent5_WdDmmEvent(v56);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  COREACCESS::~COREACCESS((COREACCESS *)v65);
  return (unsigned int)CachedModeList;
}
