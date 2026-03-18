/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C00AD370
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014A60 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C00E292C (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C00E2960 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r15
  struct _D3DKMT_GETDISPLAYMODELIST *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rsi
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct DXGADAPTER *v15; // r14
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v18; // dl
  struct DXGSESSIONDATA *v19; // rax
  __int64 v20; // rcx
  struct DXGSESSIONDATA *v21; // rsi
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  UINT v26; // esi
  ULONG64 v27; // r9
  __int64 v28; // r8
  unsigned int v29; // r15d
  size_t v30; // r11
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v32; // rcx
  UINT i; // edx
  UINT v34; // r8d
  __int64 v35; // r9
  struct DXGGLOBAL *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 hAdapter; // rcx
  char v49; // [rsp+30h] [rbp-158h]
  unsigned __int8 v50[3]; // [rsp+31h] [rbp-157h] BYREF
  int v51; // [rsp+34h] [rbp-154h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+38h] [rbp-150h] BYREF
  int v53; // [rsp+50h] [rbp-138h] BYREF
  __int64 v54; // [rsp+58h] [rbp-130h]
  __int64 v55; // [rsp+60h] [rbp-128h]
  UINT v56; // [rsp+68h] [rbp-120h]
  int v57; // [rsp+6Ch] [rbp-11Ch]
  UINT v58; // [rsp+70h] [rbp-118h]
  ULONG64 v59; // [rsp+78h] [rbp-110h]
  struct _KTHREAD **v60; // [rsp+80h] [rbp-108h]
  DXGADAPTER *v61; // [rsp+88h] [rbp-100h] BYREF
  struct DXGADAPTER *v62; // [rsp+98h] [rbp-F0h] BYREF
  struct DXGADAPTER *v63; // [rsp+A0h] [rbp-E8h] BYREF
  struct DXGSESSIONDATA *v64; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v65; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v66[80]; // [rsp+C0h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-78h] BYREF
  char v68; // [rsp+140h] [rbp-48h]
  __m128i si128; // [rsp+148h] [rbp-40h]
  int v70; // [rsp+158h] [rbp-30h]
  int v71; // [rsp+15Ch] [rbp-2Ch]
  int v72; // [rsp+160h] [rbp-28h]

  v59 = a1;
  v54 = 0LL;
  v53 = 2017;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2017);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v60 = Current;
  if ( Current )
  {
    memset(&Src, 0, sizeof(Src));
    v50[0] = 0;
    v49 = 0;
    v6 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
    Src = *v6;
    LODWORD(v55) = Src.pModeList != 0LL;
    Src.pModeList = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, Src.hAdapter, Current, &v62);
    v10 = v62;
    if ( v62 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v62, Src.VidPnSourceId, 0LL, 0LL, &v63, &v65);
      v14 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
        v45[3] = v10;
        v45[4] = Src.VidPnSourceId;
        v45[5] = v14;
        WdLogEvent5_WdEvent(v45);
LABEL_44:
        if ( v61 )
          DXGADAPTER::ReleaseReferenceNoTracking(v61);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v37, &EventProfilerExit, v38, v53);
        return (unsigned int)v14;
      }
      v15 = v63;
      if ( !v63 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v46 + 24) = 5119LL;
        WdLogEvent5_WdAssertion(v46);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v15, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v15);
      Global = DXGGLOBAL::GetGlobal(v16);
      v19 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 74), v18);
      v21 = v19;
      v64 = v19;
      if ( v19 )
      {
        v68 = 0;
        v22 = *(_DWORD *)v19;
        if ( (unsigned int)PsGetCurrentProcessSessionId(v20) != v22 )
        {
          v49 = 1;
          CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v21 + 2324));
        }
        v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
        v14 = v23;
        v51 = v23;
        if ( v23 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v47[3] = v14;
          v47[4] = Current;
          hAdapter = Src.hAdapter;
          v47[6] = v15;
        }
        else
        {
          v24 = *((_QWORD *)v15 + 307);
          if ( Src.VidPnSourceId < *(_DWORD *)(v24 + 80)
            && ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v24, Src.VidPnSourceId) )
          {
            LODWORD(v14) = DxgkpGetDisplayModeList(v15, (struct COREADAPTERACCESS *)v66, 0, &Src, v50);
            v51 = v14;
            goto LABEL_16;
          }
          LODWORD(v14) = -1071774972;
          v51 = -1071774972;
          v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v47[3] = -1071774972LL;
          v47[4] = v15;
          hAdapter = Src.VidPnSourceId;
        }
        v47[5] = hAdapter;
        WdLogEvent5_WdDmmEvent(v47);
LABEL_16:
        if ( v49 && v68 )
        {
          KeUnstackDetachProcess(&ApcState);
          v68 = 0;
        }
        if ( (int)v14 >= 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v70 = 31;
          v71 = 119;
          v72 = 113;
          v26 = Src.ModeCount * (*((_QWORD *)v15 + 308) != 0LL ? 1 : 7);
          v27 = v59;
          if ( (_BYTE)v55 )
          {
            if ( *(_DWORD *)(v59 + 16) < v26 )
            {
              LODWORD(v14) = -1073741789;
              v51 = -1073741789;
            }
            else
            {
              v28 = *(_QWORD *)(v59 + 8);
              v55 = v28;
              v29 = 0;
              v57 = 0;
              while ( 1 )
              {
                v25 = (-(__int64)(*((_QWORD *)v15 + 308) != 0LL) & 0xFFFFFFFFFFFFFFFAuLL) + 7;
                if ( v29 >= v25 )
                  break;
                v30 = 44LL * Src.ModeCount;
                pModeList = Src.pModeList;
                v32 = (char *)(v28 + 44LL * Src.ModeCount * v29);
                if ( (unsigned __int64)&v32[v30] > MmUserProbeAddress || &v32[v30] <= v32 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v32, pModeList, v30);
                if ( v29 )
                {
                  v34 = 0;
                  v56 = 0;
                  v35 = v55;
                  while ( v34 < Src.ModeCount )
                  {
                    *(_DWORD *)(44LL * (v34 + Src.ModeCount * v29) + v35 + 8) = si128.m128i_i32[v29];
                    v56 = ++v34;
                  }
                }
                v57 = ++v29;
                v28 = v55;
              }
              for ( i = 0; ; ++i )
              {
                v58 = i;
                if ( i >= v26 )
                  break;
                if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
                {
                  v25 = 44LL * i;
                  *(_DWORD *)(v25 + v28 + 16) = 64;
                  *(_DWORD *)(v25 + v28 + 20) = 1;
                  *(_DWORD *)(v25 + v28 + 12) = 64;
                }
              }
              v27 = v59;
            }
          }
          *(_DWORD *)(v27 + 16) = v26;
        }
        if ( v50[0] )
        {
          operator delete[](Src.pModeList);
          Src.pModeList = 0LL;
        }
        v36 = DXGGLOBAL::GetGlobal(v25);
        DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v36 + 74), v64);
        if ( v68 )
        {
          KeUnstackDetachProcess(&ApcState);
          v68 = 0;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
        goto LABEL_44;
      }
      v44 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v44 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v44);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
      v43[3] = -1073741811LL;
      v43[4] = Current;
      v43[5] = Src.hAdapter;
      WdLogEvent5_WdWarning(v43);
    }
    if ( v61 )
      DXGADAPTER::ReleaseReferenceNoTracking(v61);
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    *(_QWORD *)(v40 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v40);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v53);
  return 3221225485LL;
}
