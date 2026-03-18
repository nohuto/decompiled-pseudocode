/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0002060 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007774 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C000EDE0 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACB60 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BB5F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00BBD0C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176394 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
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
  __int64 v10; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  struct _ETHREAD *CurrentThread; // rsi
  DXGADAPTER *v20; // rdi
  __int64 v21; // rdi
  __int64 i; // rdi
  struct DXGPROCESS *Current; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  _BYTE *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r14
  _QWORD *v47; // rax
  _BYTE v49[16]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v50[8]; // [rsp+50h] [rbp-69h] BYREF
  DXGADAPTER *v51; // [rsp+58h] [rbp-61h]
  DXGADAPTER *v52; // [rsp+60h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-51h] BYREF
  char v54; // [rsp+98h] [rbp-21h]
  _QWORD v55[2]; // [rsp+A0h] [rbp-19h] BYREF

  v55[0] = 0LL;
  v9 = 0;
  v55[1] = 0LL;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId,
                                                     v13);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 2388LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v54 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2324]);
  v14 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v14) )
      {
        v16 = *((_QWORD *)this + 14);
        v17 = 3760LL * (unsigned int)v14;
        if ( *(_QWORD *)(v17 + v16 + 688) )
        {
          v18 = *(_DWORD *)(v17 + v16 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent(v16, v15);
          v18 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v55 + v14) = v18;
        if ( v18 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v14, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v14) )
          {
            v9 = 1;
            v28 = DmmEnablePathsFromVidPnSource(a2, v14, 1u, a3, a6);
            v30 = v28;
            if ( v28 < 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdError(v29);
              v37[3] = *((_QWORD *)this + 2);
              v37[4] = (unsigned int)v14;
              v37[5] = v30;
              WdLogEvent5_WdError(v37);
LABEL_48:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_30;
            }
            v33 = *((_QWORD *)DXGGLOBAL::GetGlobal(v29) + 117);
            if ( *(_BYTE *)v33 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31) + 24) = 201LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v49, *(struct DXGFASTMUTEX *const *)(v33 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
              v35 = (_BYTE *)(v33 + 16);
              v36 = 18LL;
              do
              {
                *v35 = 0;
                v35 += 32;
                --v36;
              }
              while ( v36 );
              ++*(_DWORD *)(v33 + 592);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v34) + 24) = 223LL;
              if ( v49[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49);
            }
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_29;
    CurrentThread = KeGetCurrentThread();
    v51 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v20 = v51;
    v52 = *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL);
    if ( v51 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v51, CurrentThread);
    if ( v52 && v20 != v52 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v52, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 96LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v55,
            *((unsigned int *)this + 20),
            a5) )
    {
      v38 = WdLogNewEntry5_WdEvent();
      v39 = 0LL;
      v40 = v38;
      *(_QWORD *)(v38 + 24) = a2;
      v41 = (_QWORD *)(v38 + 32);
      do
      {
        v42 = *((unsigned __int8 *)v55 + v39++);
        *v41++ = v42;
      }
      while ( v39 < 2 );
      *(_QWORD *)(v40 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v40);
    }
    v21 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v55 + v21) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v21, 1u) )
          {
            v24 = DmmDisablePathsFromVidPnSource(a2, v21);
            v26 = v24;
            if ( v24 < 0 )
              break;
          }
        }
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= *((_DWORD *)this + 20) )
          goto LABEL_23;
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v43[3] = *((_QWORD *)this + 2);
      v43[4] = (unsigned int)v21;
      v43[5] = v26;
      WdLogEvent5_WdError(v43);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v50);
      goto LABEL_48;
    }
LABEL_23:
    if ( v54 )
    {
      KeUnstackDetachProcess(&ApcState);
      v54 = 0;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)v55 + i) )
      {
        v44 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, i);
        v46 = v44;
        if ( v44 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v45);
          v47[3] = *((_QWORD *)this + 2);
          v47[4] = (unsigned int)i;
          v47[5] = v46;
          WdLogEvent5_WdError(v47);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v50);
  }
LABEL_29:
  *a4 = v9;
LABEL_30:
  if ( v54 )
    KeUnstackDetachProcess(&ApcState);
}
