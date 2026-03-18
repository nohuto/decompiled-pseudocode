/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C00B6A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007774 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C008FFAC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C00902B4 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
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
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v17; // rax
  __int64 v18; // rcx
  struct DXGSESSIONDATA *v19; // rsi
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  UINT v25; // esi
  ULONG64 v26; // r9
  UINT i; // edx
  __int64 v28; // r8
  unsigned int v29; // r15d
  size_t v30; // r11
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v32; // rcx
  UINT v33; // r8d
  __int64 v34; // r9
  struct DXGGLOBAL *v35; // rax
  __int64 v36; // r8
  DXGADAPTER *v37; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  DXGADAPTER *v43; // rcx
  bool v44; // zf
  _QWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 hAdapter; // rcx
  char v51; // [rsp+30h] [rbp-148h]
  unsigned __int8 v52[3]; // [rsp+31h] [rbp-147h] BYREF
  int v53; // [rsp+34h] [rbp-144h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+38h] [rbp-140h] BYREF
  __int64 v55; // [rsp+50h] [rbp-128h]
  UINT v56; // [rsp+58h] [rbp-120h]
  int v57; // [rsp+5Ch] [rbp-11Ch]
  UINT v58; // [rsp+60h] [rbp-118h]
  ULONG64 v59; // [rsp+68h] [rbp-110h]
  struct _KTHREAD **v60; // [rsp+70h] [rbp-108h]
  DXGADAPTER *v61; // [rsp+78h] [rbp-100h] BYREF
  struct DXGADAPTER *v62; // [rsp+88h] [rbp-F0h] BYREF
  struct DXGADAPTER *v63; // [rsp+90h] [rbp-E8h] BYREF
  struct DXGSESSIONDATA *v64; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v65; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v66[80]; // [rsp+B0h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-78h] BYREF
  char v68; // [rsp+130h] [rbp-48h]
  __m128i si128; // [rsp+138h] [rbp-40h]
  int v70; // [rsp+148h] [rbp-30h]
  int v71; // [rsp+14Ch] [rbp-2Ch]
  int v72; // [rsp+150h] [rbp-28h]

  v59 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v60 = Current;
  if ( Current )
  {
    memset(&Src, 0, sizeof(Src));
    v52[0] = 0;
    v51 = 0;
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
      v13 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v47[3] = v10;
        v47[4] = Src.VidPnSourceId;
        v47[5] = v13;
        WdLogEvent5_WdEvent(v47);
LABEL_44:
        v37 = v61;
        if ( v61 )
          DXGADAPTER::ReleaseReferenceNoTracking(v61);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v37, &EventProfilerExit, v36, 2017);
        return (unsigned int)v13;
      }
      v14 = v63;
      if ( !v63 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v48 + 24) = 5200LL;
        WdLogEvent5_WdAssertion(v48);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v14, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v14);
      Global = DXGGLOBAL::GetGlobal(v15);
      v17 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 73));
      v19 = v17;
      v64 = v17;
      if ( v17 )
      {
        v68 = 0;
        v20 = *(_DWORD *)v17;
        if ( (unsigned int)PsGetCurrentProcessSessionId(v18) != v20 )
        {
          v51 = 1;
          CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v19 + 2324));
        }
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
        v13 = v21;
        v53 = v21;
        if ( v21 < 0 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
          v49[3] = v13;
          v49[4] = Current;
          hAdapter = Src.hAdapter;
          v49[6] = v14;
        }
        else
        {
          v23 = *((_QWORD *)v14 + 288);
          if ( Src.VidPnSourceId < *(_DWORD *)(v23 + 80)
            && ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v23, Src.VidPnSourceId) )
          {
            LODWORD(v13) = DxgkpGetDisplayModeList(v14, (struct COREADAPTERACCESS *)v66, 0, &Src, v52, 0LL);
            v53 = v13;
            goto LABEL_16;
          }
          LODWORD(v13) = -1071774972;
          v53 = -1071774972;
          v49 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23);
          v49[3] = -1071774972LL;
          v49[4] = v14;
          hAdapter = Src.VidPnSourceId;
        }
        v49[5] = hAdapter;
        WdLogEvent5_WdDmmEvent(v49);
LABEL_16:
        if ( v51 && v68 )
        {
          KeUnstackDetachProcess(&ApcState);
          v68 = 0;
        }
        if ( (int)v13 >= 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v70 = 31;
          v71 = 119;
          v72 = 113;
          v25 = Src.ModeCount * (*((_QWORD *)v14 + 289) != 0LL ? 1 : 7);
          v26 = v59;
          if ( (_BYTE)v55 )
          {
            if ( *(_DWORD *)(v59 + 16) < v25 )
            {
              LODWORD(v13) = -1073741789;
              v53 = -1073741789;
            }
            else
            {
              v28 = *(_QWORD *)(v59 + 8);
              v55 = v28;
              v29 = 0;
              v57 = 0;
              while ( 1 )
              {
                v24 = (-(__int64)(*((_QWORD *)v14 + 289) != 0LL) & 0xFFFFFFFFFFFFFFFAuLL) + 7;
                if ( v29 >= v24 )
                  break;
                v30 = 44LL * Src.ModeCount;
                pModeList = Src.pModeList;
                v32 = (char *)(v28 + 44LL * Src.ModeCount * v29);
                if ( (unsigned __int64)&v32[v30] > MmUserProbeAddress || &v32[v30] <= v32 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v32, pModeList, v30);
                if ( v29 )
                {
                  v33 = 0;
                  v56 = 0;
                  v34 = v55;
                  while ( v33 < Src.ModeCount )
                  {
                    *(_DWORD *)(44LL * (v33 + Src.ModeCount * v29) + v34 + 8) = si128.m128i_i32[v29];
                    v56 = ++v33;
                  }
                }
                v57 = ++v29;
                v28 = v55;
              }
              for ( i = 0; ; ++i )
              {
                v58 = i;
                if ( i >= v25 )
                  break;
                v24 = (unsigned __int64)Src.pModeList;
                if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
                {
                  v24 = 44LL * i;
                  *(_DWORD *)(v24 + v28 + 16) = 64;
                  *(_DWORD *)(v24 + v28 + 20) = 1;
                  *(_DWORD *)(v24 + v28 + 12) = 64;
                }
              }
              v26 = v59;
            }
          }
          *(_DWORD *)(v26 + 16) = v25;
        }
        if ( v52[0] )
        {
          v24 = (unsigned __int64)Src.pModeList;
          if ( Src.pModeList )
            ExFreePoolWithTag(Src.pModeList, 0);
          Src.pModeList = 0LL;
        }
        v35 = DXGGLOBAL::GetGlobal(v24);
        DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((struct _KTHREAD ****)v35 + 73), (struct _KTHREAD **)v64);
        if ( v68 )
        {
          KeUnstackDetachProcess(&ApcState);
          v68 = 0;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
        goto LABEL_44;
      }
      v46 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v46 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v46);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    }
    else
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
      v45[3] = -1073741811LL;
      v45[4] = Current;
      v45[5] = Src.hAdapter;
      WdLogEvent5_WdWarning(v45);
    }
    v43 = v61;
    if ( v61 )
      DXGADAPTER::ReleaseReferenceNoTracking(v61);
    v44 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v39 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    *(_QWORD *)(v39 + 32) = PsGetCurrentProcess(v41, v40);
    WdLogEvent5_WdError(v39);
    v43 = (DXGADAPTER *)qword_1C005F010;
    v44 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v43, &EventProfilerExit, v42, 2017);
  return 3221225485LL;
}
