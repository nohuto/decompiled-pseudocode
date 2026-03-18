/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D9110
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00A9020 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000B260 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014A60 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00AA2F0 (MonitorGetLinkInfoFromTarget.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00E1E4C (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C01576A8 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  struct _LUID v7; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  struct DXGADAPTER **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  bool v22; // di
  __int64 v23; // rcx
  _QWORD *v25; // rax
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  ADAPTER_DISPLAY **v32; // rcx
  unsigned int v33; // edx
  int LinkInfoFromTarget; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  unsigned int v39; // r9d
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  int CachedStereoStates; // eax
  _QWORD *v46; // rax
  unsigned __int8 v47[4]; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int8 v48[4]; // [rsp+34h] [rbp-95h] BYREF
  struct DXGADAPTER *v49; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-89h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v51; // [rsp+48h] [rbp-81h] BYREF
  __int64 v52; // [rsp+60h] [rbp-69h] BYREF
  int v53; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v54; // [rsp+70h] [rbp-59h]
  unsigned __int64 v55; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v56[8]; // [rsp+80h] [rbp-49h] BYREF
  struct DXGADAPTER *v57; // [rsp+88h] [rbp-41h]
  char v58; // [rsp+90h] [rbp-39h]
  DXGADAPTER *v59; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v60[16]; // [rsp+A8h] [rbp-21h] BYREF
  DXGADAPTER *v61; // [rsp+B8h] [rbp-11h]
  _BYTE v62[88]; // [rsp+C8h] [rbp-1h] BYREF
  LONG HighPart; // [rsp+134h] [rbp+6Bh]
  unsigned __int8 v64; // [rsp+140h] [rbp+77h] BYREF
  char v65; // [rsp+148h] [rbp+7Fh] BYREF

  HighPart = a1.HighPart;
  v7 = a1;
  if ( !a4 || !a3 )
  {
    v27 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v27 + 24) = 8742LL;
    WdLogEvent5_WdAssertion(v27);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v10 = Current;
  *a4 = 0;
  if ( !Current )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v7.LowPart = -1073741811;
    v46[3] = 0LL;
    v46[4] = a3;
    v46[5] = a4;
    v46[6] = -1073741811LL;
    WdLogEvent5_WdError(v46);
    return v7.LowPart;
  }
  v51.hAdapter = 0;
  v51.VidPnSourceId = a2;
  v51.pModeList = 0LL;
  *(_QWORD *)&v51.ModeCount = 0LL;
  Global = DXGGLOBAL::GetGlobal(v9);
  v54 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v7, &v55);
  v13 = v54;
  if ( !v54 )
  {
    v28 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v28 + 24) = HighPart;
    *(_QWORD *)(v28 + 32) = v7.LowPart;
    WdLogEvent5_WdError(v28);
    v7.LowPart = -1073741811;
    return v7.LowPart;
  }
  v49 = 0LL;
  v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v49);
  if ( (int)DxgkpGetPairingAdapters(v13, v51.VidPnSourceId, 0LL, 0LL, v14, &v50) >= 0 )
  {
    if ( !v49 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v30 + 24) = 8773LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v65 = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v65, 0);
    v7 = (struct _LUID)v19;
    if ( v19 < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v20);
      *(struct _LUID *)(v31 + 24) = v7;
      WdLogEvent5_WdError(v31);
LABEL_19:
      if ( v65 )
        DxgkReleaseSessionModeChangeLock(v23);
      goto LABEL_21;
    }
    v57 = v49;
    v58 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v59, v49, 0LL);
    if ( *((_DWORD *)v49 + 44) == 1 )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v49 + 307), v51.VidPnSourceId) )
      {
        *(_WORD *)v47 = 0;
        v22 = 0;
        v7.LowPart = ADAPTER_DISPLAY::GetCachedStereoStates(
                       *((ADAPTER_DISPLAY **)v49 + 307),
                       v51.VidPnSourceId,
                       v47,
                       &v47[1]);
        if ( v7.LowPart != -1073741275 )
          goto LABEL_12;
        v32 = (ADAPTER_DISPLAY **)v49;
        v33 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 307) + 112LL) + 3760LL * v51.VidPnSourceId + 1068);
        if ( v33 == -1 )
        {
LABEL_41:
          v64 = 0;
          v7.LowPart = DxgkpGetDisplayModeList(v32, &v59, 0, &v51, &v64);
          if ( (v7.LowPart & 0x80000000) != 0 )
          {
            pModeList = v51.pModeList;
          }
          else
          {
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v49 + 307), v51.VidPnSourceId);
            pModeList = v51.pModeList;
            v39 = 0;
            if ( v51.ModeCount )
            {
              while ( 1 )
              {
                v40 = v39;
                if ( (*((_DWORD *)&v51.pModeList[v40].Flags + 1) & 0x10) != 0 )
                {
                  v47[1] = 1;
                  if ( v51.pModeList[v40].Width == *(_DWORD *)DisplayModeInfo
                    && v51.pModeList[v40].Height == *((_DWORD *)DisplayModeInfo + 1)
                    && v51.pModeList[v40].Format == *((_DWORD *)DisplayModeInfo + 2) )
                  {
                    break;
                  }
                }
                if ( ++v39 >= v51.ModeCount )
                  goto LABEL_49;
              }
              v47[0] = 1;
            }
LABEL_49:
            v22 = 1;
          }
          if ( v64 )
          {
            operator delete[](pModeList);
            v51.pModeList = 0LL;
          }
          goto LABEL_12;
        }
        v52 = 0LL;
        v53 = 0;
        LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v49, v33, (__int64)&v52);
        v7 = (struct _LUID)LinkInfoFromTarget;
        if ( LinkInfoFromTarget < 0 )
        {
          if ( LinkInfoFromTarget == -1073741275 )
          {
LABEL_40:
            v32 = (ADAPTER_DISPLAY **)v49;
            goto LABEL_41;
          }
          v36 = WdLogNewEntry5_WdDmmEvent(v35);
          *(struct _LUID *)(v36 + 24) = v7;
          WdLogEvent5_WdDmmEvent(v36);
        }
        else
        {
          if ( (v52 & 0x100000000LL) == 0 )
            *(_WORD *)v47 = 0;
          v7.LowPart = (v52 & 0x100000000LL) != 0 ? 0xC0000225 : 0;
          v22 = !(v52 & 0x100000000LL);
        }
        if ( v7.LowPart != -1073741275 )
        {
LABEL_12:
          if ( (v7.LowPart & 0x80000000) == 0 )
          {
            if ( v22 )
            {
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v61) )
              {
                if ( DXGADAPTER::IsCoreResourceSharedOwner(v61) )
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v59);
                v41 = COREADAPTERACCESS::AcquireExclusive(&v59);
                v43 = v41;
                if ( v41 < 0 )
                {
                  v44 = WdLogNewEntry5_WdDmmEvent(v42);
                  *(_QWORD *)(v44 + 24) = v43;
                  WdLogEvent5_WdDmmEvent(v44);
                }
              }
              *(_WORD *)v48 = 0;
              CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                                     *((ADAPTER_DISPLAY **)v49 + 307),
                                     v51.VidPnSourceId,
                                     v48,
                                     &v48[1]);
              v7.LowPart = CachedStereoStates;
              if ( CachedStereoStates < 0 )
              {
                if ( CachedStereoStates == -1073741275 )
                  v7.LowPart = ADAPTER_DISPLAY::SetCachedStereoStates(
                                 *((_QWORD *)v49 + 307),
                                 v51.VidPnSourceId,
                                 v47[1] != 0,
                                 v47[0] != 0);
              }
              else
              {
                *(_WORD *)v47 = *(_WORD *)v48;
              }
            }
            if ( (v7.LowPart & 0x80000000) == 0 )
            {
              *a3 = v47[0];
              *a4 = v47[1];
            }
          }
          goto LABEL_16;
        }
        goto LABEL_40;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
      v7.LowPart = -1071774238;
      v25[3] = v49 != 0LL;
      v25[4] = v51.VidPnSourceId;
      v25[5] = -1071774238LL;
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v49);
      v7.LowPart = -1073741130;
      v25[3] = v10;
      v25[4] = v51.hAdapter;
      v26 = v49 == 0LL;
      v25[6] = -1073741130LL;
      v25[5] = !v26;
    }
    WdLogEvent5_WdDmmEvent(v25);
LABEL_16:
    COREACCESS::~COREACCESS((COREACCESS *)v62);
    COREACCESS::~COREACCESS((COREACCESS *)v60);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    v13 = v54;
    goto LABEL_19;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  v7.LowPart = 0;
  v29[3] = 1LL;
  v29[4] = v51.VidPnSourceId;
  v29[5] = 0LL;
LABEL_21:
  if ( v49 )
    DXGADAPTER::ReleaseReferenceNoTracking(v49);
  v49 = 0LL;
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  return v7.LowPart;
}
