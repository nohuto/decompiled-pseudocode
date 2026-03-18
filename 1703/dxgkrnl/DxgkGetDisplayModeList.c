/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C00993A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B5B4 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C000D514 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C00DD8F8 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  struct _D3DKMT_GETDISPLAYMODELIST *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *v12; // r15
  int PairingAdapters; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  struct DXGADAPTER *v19; // r15
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v21; // dl
  struct DXGSESSIONDATA *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGSESSIONDATA *v25; // r14
  int v26; // edi
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rcx
  UINT v30; // r14d
  ULONG64 v31; // r9
  UINT i; // edx
  __int64 v33; // r8
  unsigned int v34; // r12d
  size_t v35; // r11
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v37; // rcx
  UINT v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  __int64 v46; // r8
  DXGADAPTER *v47; // rcx
  __int64 v49; // rdi
  __int64 v50; // r8
  DXGADAPTER *v51; // rcx
  bool v52; // zf
  _QWORD *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 hAdapter; // rcx
  __int64 v59; // rax
  char v60; // [rsp+30h] [rbp-148h]
  unsigned __int8 v61[3]; // [rsp+31h] [rbp-147h] BYREF
  int v62; // [rsp+34h] [rbp-144h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+38h] [rbp-140h] BYREF
  __int64 v64; // [rsp+50h] [rbp-128h]
  UINT v65; // [rsp+58h] [rbp-120h]
  int v66; // [rsp+5Ch] [rbp-11Ch]
  UINT v67; // [rsp+60h] [rbp-118h]
  int v68; // [rsp+64h] [rbp-114h]
  ULONG64 v69; // [rsp+68h] [rbp-110h]
  struct _KTHREAD **v70; // [rsp+70h] [rbp-108h]
  DXGADAPTER *v71; // [rsp+78h] [rbp-100h] BYREF
  struct DXGADAPTER *v72; // [rsp+88h] [rbp-F0h] BYREF
  struct DXGADAPTER *v73; // [rsp+90h] [rbp-E8h] BYREF
  struct DXGSESSIONDATA *v74; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v75; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v76[80]; // [rsp+B0h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-78h] BYREF
  char v78; // [rsp+130h] [rbp-48h]
  __m128i si128; // [rsp+138h] [rbp-40h]
  int v80; // [rsp+148h] [rbp-30h]
  int v81; // [rsp+14Ch] [rbp-2Ch]
  int v82; // [rsp+150h] [rbp-28h]

  v69 = a1;
  v68 = 2017;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v70 = Current;
  if ( Current )
  {
    memset(&Src, 0, sizeof(Src));
    v61[0] = 0;
    v60 = 0;
    v7 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
    Src = *v7;
    LODWORD(v64) = Src.pModeList != 0LL;
    Src.pModeList = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v71, Src.hAdapter, Current, &v72);
    v12 = v72;
    if ( v72 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v72, Src.VidPnSourceId, 0LL, 0LL, &v73, &v75);
      v18 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v55[3] = v12;
        v55[4] = Src.VidPnSourceId;
        v55[5] = v18;
        WdLogEvent5_WdEvent(v55);
      }
      else
      {
        v19 = v73;
        if ( !v73 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
          *(_QWORD *)(v56 + 24) = 5196LL;
          WdLogEvent5_WdAssertion(v56);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, v19, 0LL);
        DXGADAPTER::ReleaseReference(v19);
        Global = DXGGLOBAL::GetGlobal();
        v22 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 73), v21);
        v25 = v22;
        v74 = v22;
        if ( v22 )
        {
          v78 = 0;
          v26 = *(_DWORD *)v22;
          if ( (unsigned int)PsGetCurrentProcessSessionId() != v26 )
          {
            v60 = 1;
            CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v25 + 2323));
          }
          v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76);
          v28 = v27;
          v62 = v27;
          if ( v27 < 0 )
          {
            v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v57[3] = v28;
            v57[4] = Current;
            hAdapter = Src.hAdapter;
            v57[6] = v19;
          }
          else
          {
            v29 = *((_QWORD *)v19 + 285);
            if ( Src.VidPnSourceId < *(_DWORD *)(v29 + 80)
              && ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v29, Src.VidPnSourceId) )
            {
              LODWORD(v28) = DxgkpGetDisplayModeList(v19, (struct COREADAPTERACCESS *)v76, 0, &Src, v61, 0LL);
              v62 = v28;
              goto LABEL_16;
            }
            LODWORD(v28) = -1071774972;
            v62 = -1071774972;
            v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v57[3] = -1071774972LL;
            v57[4] = v19;
            hAdapter = Src.VidPnSourceId;
          }
          v57[5] = hAdapter;
          WdLogEvent5_WdDmmEvent(v57);
LABEL_16:
          if ( v60 && v78 )
          {
            KeUnstackDetachProcess(&ApcState);
            v78 = 0;
          }
          if ( (int)v28 >= 0 )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v80 = 31;
            v81 = 119;
            v82 = 113;
            v30 = Src.ModeCount * (*((_QWORD *)v19 + 286) != 0LL ? 1 : 7);
            v31 = v69;
            if ( (_BYTE)v64 )
            {
              if ( *(_DWORD *)(v69 + 16) < v30 )
              {
                LODWORD(v28) = -1073741789;
                v62 = -1073741789;
              }
              else
              {
                v33 = *(_QWORD *)(v69 + 8);
                v64 = v33;
                v34 = 0;
                v66 = 0;
                while ( v34 < (-(__int64)(*((_QWORD *)v19 + 286) != 0LL) & 0xFFFFFFFFFFFFFFFAuLL) + 7 )
                {
                  v35 = 44LL * Src.ModeCount;
                  pModeList = Src.pModeList;
                  v37 = (char *)(v33 + 44LL * Src.ModeCount * v34);
                  if ( (unsigned __int64)&v37[v35] > MmUserProbeAddress || &v37[v35] <= v37 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v37, pModeList, v35);
                  if ( v34 )
                  {
                    v38 = 0;
                    v65 = 0;
                    v39 = v64;
                    while ( v38 < Src.ModeCount )
                    {
                      *(_DWORD *)(44LL * (v38 + Src.ModeCount * v34) + v39 + 8) = si128.m128i_i32[v34];
                      v65 = ++v38;
                    }
                  }
                  v66 = ++v34;
                  v33 = v64;
                }
                for ( i = 0; ; ++i )
                {
                  v67 = i;
                  if ( i >= v30 )
                    break;
                  if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
                  {
                    v40 = 44LL * i;
                    *(_DWORD *)(v40 + v33 + 16) = 64;
                    *(_DWORD *)(v40 + v33 + 20) = 1;
                    *(_DWORD *)(v40 + v33 + 12) = 64;
                  }
                }
                v31 = v69;
              }
            }
            *(_DWORD *)(v31 + 16) = v30;
          }
          if ( v61[0] )
          {
            if ( Src.pModeList )
              ExFreePoolWithTag(Src.pModeList, 0);
            Src.pModeList = 0LL;
          }
          v45 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
          if ( !v74 || v74 != *(struct DXGSESSIONDATA **)(v45 + 120) )
          {
            v59 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
            *(_QWORD *)(v59 + 24) = 3797LL;
            WdLogEvent5_WdAssertion(v59);
          }
          DXGSESSIONDATA::ReleaseSessionModeChangeLock(*(struct _KTHREAD ***)(v45 + 120));
          if ( v78 )
          {
            KeUnstackDetachProcess(&ApcState);
            v78 = 0;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
          v47 = v71;
          if ( v71 )
            DXGADAPTER::ReleaseReference(v71);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q((__int64)v47, &EventProfilerExit, v46, 2017);
          return (unsigned int)v28;
        }
        v54 = WdLogNewEntry5_WdError(v24, v23);
        LODWORD(v18) = -1073741811;
        *(_QWORD *)(v54 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v54);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
      }
    }
    else
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      LODWORD(v18) = -1073741811;
      v53[3] = -1073741811LL;
      v53[4] = Current;
      v53[5] = Src.hAdapter;
      WdLogEvent5_WdWarning(v53);
    }
    v51 = v71;
    if ( v71 )
      DXGADAPTER::ReleaseReference(v71);
    v52 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v49 = WdLogNewEntry5_WdError(v5, v4);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v49 + 24) = -1073741811LL;
    *(_QWORD *)(v49 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v49);
    v51 = (DXGADAPTER *)qword_1C006E790;
    v52 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v51, &EventProfilerExit, v50, 2017);
  return (unsigned int)v18;
}
