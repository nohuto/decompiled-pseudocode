/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0002F1C (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0006B78 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B5B4 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DmmEnablePathsFromVidPnSource @ 0x1C0099FDC (DmmEnablePathsFromVidPnSource.c)
 *     DmmDisablePathsFromVidPnSource @ 0x1C009A290 (DmmDisablePathsFromVidPnSource.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7474 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172854 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGPROCESS *Current; // rax
  bool v22; // zf
  struct _ERESOURCE *CurrentThread; // rsi
  DXGADAPTER *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 i; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _BYTE *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r14
  _QWORD *v65; // rax
  _BYTE v67[16]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v68[8]; // [rsp+50h] [rbp-69h] BYREF
  DXGADAPTER *v69; // [rsp+58h] [rbp-61h]
  DXGADAPTER *v70; // [rsp+60h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-51h] BYREF
  char v72; // [rsp+98h] [rbp-21h]
  _QWORD v73[2]; // [rsp+A0h] [rbp-19h] BYREF

  v73[0] = 0LL;
  v9 = 0;
  v73[1] = 0LL;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal(
                                                               (__int64)this,
                                                               (__int64)a2,
                                                               (__int64)a3,
                                                               (__int64)a4)
                                                 + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v13, v14);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId,
                                                     v16,
                                                     v17);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
    *(_QWORD *)(v32 + 24) = 1926LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v72 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2323]);
  v18 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v18) )
      {
        v19 = *((_QWORD *)this + 14);
        v20 = 3208LL * (unsigned int)v18;
        if ( *(_QWORD *)(v20 + v19 + 688) )
        {
          v22 = *(_DWORD *)(v20 + v19 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent(v19);
          v22 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v73 + v18) = v22;
        if ( v22 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v18, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, (unsigned int)v18, v33, v34) )
          {
            v9 = 1;
            v35 = DmmEnablePathsFromVidPnSource(a2, v18, 1, a3, a6);
            v40 = v35;
            if ( v35 < 0 )
            {
              v54 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
              v54[3] = *((_QWORD *)this + 2);
              v54[4] = (unsigned int)v18;
              v54[5] = v40;
              WdLogEvent5_WdError(v54);
LABEL_48:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_30;
            }
            v43 = *((_QWORD *)DXGGLOBAL::GetGlobal(v37, v36, v38, v39) + 117);
            if ( *(_BYTE *)v43 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v42, v41, v44, v45) + 24) = 206LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v67, *(struct DXGFASTMUTEX *const *)(v43 + 8), v44, v45);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v67);
              v49 = (_BYTE *)(v43 + 16);
              v50 = 18LL;
              do
              {
                *v49 = 0;
                v49 += 48;
                --v50;
              }
              while ( v50 );
              ++*(_DWORD *)(v43 + 880);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v46, v47, v48) + 24) = 228LL;
              if ( v67[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v67, v51, v52, v53);
            }
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_29;
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v69 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v24 = v69;
    v70 = *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL);
    if ( v69 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v69, CurrentThread);
    if ( v70 && v24 != v70 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v70, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 72LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v73,
            *((unsigned int *)this + 20),
            a5) )
    {
      v55 = WdLogNewEntry5_WdEvent(v25);
      v56 = 0LL;
      v57 = v55;
      *(_QWORD *)(v55 + 24) = a2;
      v58 = (_QWORD *)(v55 + 32);
      do
      {
        v59 = *((unsigned __int8 *)v73 + v56++);
        *v58++ = v59;
      }
      while ( v56 < 2 );
      *(_QWORD *)(v57 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v57);
    }
    v26 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v73 + v26) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v26, 1u) )
          {
            v28 = DmmDisablePathsFromVidPnSource(a2, v26);
            v31 = v28;
            if ( v28 < 0 )
              break;
          }
        }
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= *((_DWORD *)this + 20) )
          goto LABEL_23;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v60[3] = *((_QWORD *)this + 2);
      v60[4] = (unsigned int)v26;
      v60[5] = v31;
      WdLogEvent5_WdError(v60);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v68);
      goto LABEL_48;
    }
LABEL_23:
    if ( v72 )
    {
      KeUnstackDetachProcess(&ApcState);
      v72 = 0;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)v73 + i) )
      {
        v61 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, i);
        v64 = v61;
        if ( v61 < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
          v65[3] = *((_QWORD *)this + 2);
          v65[4] = (unsigned int)i;
          v65[5] = v64;
          WdLogEvent5_WdError(v65);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v68);
  }
LABEL_29:
  *a4 = v9;
LABEL_30:
  if ( v72 )
    KeUnstackDetachProcess(&ApcState);
}
