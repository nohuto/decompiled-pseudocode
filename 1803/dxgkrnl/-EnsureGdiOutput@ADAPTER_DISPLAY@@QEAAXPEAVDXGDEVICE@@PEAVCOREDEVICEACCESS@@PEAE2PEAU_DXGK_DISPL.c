/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A4EC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014A60 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0019A00 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019C0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0019D58 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E2018 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C010F350 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156EAC (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r12
  __int64 v10; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  struct _ERESOURCE *CurrentThread; // r14
  DXGADAPTER *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rax
  struct DXGPROCESS *Current; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r14
  _QWORD *v49; // rax
  _BYTE v51[8]; // [rsp+40h] [rbp-69h] BYREF
  DXGADAPTER *v52; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v53; // [rsp+50h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-51h] BYREF
  char v55; // [rsp+88h] [rbp-21h]
  _QWORD v56[2]; // [rsp+90h] [rbp-19h] BYREF

  v56[0] = 0LL;
  v9 = 0;
  v56[1] = 0LL;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 2401LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v55 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2324]);
  v13 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v13) )
      {
        v24 = *((_QWORD *)this + 14);
        v25 = 3760LL * (unsigned int)v13;
        if ( *(_QWORD *)(v25 + v24 + 688) )
        {
          v26 = *(_DWORD *)(v25 + v24 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent(v24, v14);
          v26 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v56 + v13) = v26;
        if ( v26 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v13, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v13) )
          {
            v9 = 1;
            v29 = DmmEnablePathsFromVidPnSource(a2, v13, 1u, a3, a6);
            v31 = v29;
            if ( v29 < 0 )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v30);
              v36[3] = *((_QWORD *)this + 2);
              v36[4] = (unsigned int)v13;
              v36[5] = v31;
              WdLogEvent5_WdError(v36);
LABEL_43:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_26;
            }
            Global = DXGGLOBAL::GetGlobal(v30);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v33, v34, v35);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_25;
    v15 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v16 = *((_QWORD *)a2 + 2);
    CurrentThread = (struct _ERESOURCE *)KeGetCurrentThread();
    v52 = v15;
    v18 = *(DXGADAPTER **)(v16 + 16);
    v53 = v18;
    if ( v15 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v52, CurrentThread);
    if ( v18 && v15 != v18 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner((PERESOURCE *)v53, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 104LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v56,
            *((unsigned int *)this + 20),
            a5) )
    {
      v37 = WdLogNewEntry5_WdEvent(v20, v19);
      v38 = 0LL;
      v39 = v37;
      *(_QWORD *)(v37 + 24) = a2;
      v40 = (_QWORD *)(v37 + 32);
      do
      {
        v41 = *((unsigned __int8 *)v56 + v38++);
        *v40++ = v41;
      }
      while ( v38 < 2 );
      *(_QWORD *)(v39 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v39);
    }
    v21 = *((_DWORD *)this + 20);
    v22 = 0LL;
    if ( v21 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v56 + v22) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v22, 1u) )
          {
            v42 = DmmDisablePathsFromVidPnSource(a2, v22);
            v44 = v42;
            if ( v42 < 0 )
              break;
          }
        }
        v21 = *((_DWORD *)this + 20);
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v21 )
          goto LABEL_19;
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v45[3] = *((_QWORD *)this + 2);
      v45[4] = (unsigned int)v22;
      v45[5] = v44;
      WdLogEvent5_WdError(v45);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v51);
      goto LABEL_43;
    }
LABEL_19:
    if ( v55 )
    {
      KeUnstackDetachProcess(&ApcState);
      v21 = *((_DWORD *)this + 20);
      v55 = 0;
    }
    v23 = 0LL;
    if ( v21 )
    {
      do
      {
        if ( *((_BYTE *)v56 + v23) )
        {
          v46 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, v23);
          v48 = v46;
          if ( v46 < 0 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v47);
            v49[3] = *((_QWORD *)this + 2);
            v49[4] = (unsigned int)v23;
            v49[5] = v48;
            WdLogEvent5_WdError(v49);
          }
        }
        v23 = (unsigned int)(v23 + 1);
      }
      while ( (unsigned int)v23 < *((_DWORD *)this + 20) );
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v51);
  }
LABEL_25:
  *a4 = v9;
LABEL_26:
  if ( v55 )
    KeUnstackDetachProcess(&ApcState);
}
