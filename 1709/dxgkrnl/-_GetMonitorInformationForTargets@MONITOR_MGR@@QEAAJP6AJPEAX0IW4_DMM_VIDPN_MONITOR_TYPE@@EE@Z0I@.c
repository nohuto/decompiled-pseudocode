/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00B0AB0
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DF830 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01FCE08 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0014EF0 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0014F0C (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C00F3AA8 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        int a4)
{
  void *const *Owner; // rax
  __int64 v8; // rbx
  struct DXGMONITOR *v9; // rdi
  _QWORD *v10; // rax
  unsigned int v11; // ebp
  char v12; // r14
  int IsTargetForcable; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  MONITOR_MGR *v17; // rcx
  int MonitorInstance; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rbp
  DXGFASTMUTEX *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  _QWORD *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r8
  void (__fastcall ***v35)(_QWORD, __int64); // rcx
  int v36; // ebx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  int v52; // [rsp+20h] [rbp-68h]
  int v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+40h] [rbp-48h] BYREF
  __int64 v55; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v56; // [rsp+90h] [rbp+8h] BYREF
  struct DXGMONITOR *v57; // [rsp+98h] [rbp+10h] BYREF
  int v58; // [rsp+A8h] [rbp+20h] BYREF

  v58 = a4;
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v38);
  }
  Owner = (void *const *)this->Owner;
  v56 = -1;
  LODWORD(v8) = DmmGetNextVideoPresentTarget(Owner[2], 0xFFFFFFFF, &v56);
  if ( (int)v8 >= 0 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = this->Owner;
      v11 = 0;
      LOBYTE(v58) = 0;
      v12 = 0;
      IsTargetForcable = DmmIsTargetForcable(v10[2], v56, (unsigned __int8 *)&v58, 0);
      v8 = IsTargetForcable;
      if ( IsTargetForcable < 0 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v51[3] = v56;
        v51[4] = this;
        v51[5] = v8;
        WdLogEvent5_WdError(v51);
        if ( (_DWORD)v8 == -1073741275 )
          LODWORD(v8) = -1073741823;
        return (unsigned int)v8;
      }
      v15 = v56;
      if ( v56 == -1 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v39);
      }
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v40 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v40);
      }
      KeAcquireGuardedMutex(this + 3);
      v17 = *(MONITOR_MGR **)&this[2].Contention;
      if ( v17 == (MONITOR_MGR *)&this[2].Contention )
        goto LABEL_20;
      if ( v17 )
        v9 = *(struct DXGMONITOR **)&this[2].Contention;
      if ( !v9 )
      {
LABEL_20:
        v20 = WdLogNewEntry5_WdTrace(v17, v16);
        *(_QWORD *)(v20 + 24) = v15;
        *(_QWORD *)(v20 + 32) = this;
        if ( this == (struct _FAST_MUTEX *)-168LL )
        {
          v43 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v43);
        }
        KeReleaseGuardedMutex(this + 3);
      }
      else
      {
        while ( *((_DWORD *)v9 + 7) != (_DWORD)v15 )
        {
          v9 = *(struct DXGMONITOR **)v9;
          if ( v9 == (struct DXGMONITOR *)&this[2].Contention || !v9 )
            goto LABEL_20;
        }
        v57 = v9;
        if ( this == (struct _FAST_MUTEX *)-168LL )
        {
          v41 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v41);
        }
        KeReleaseGuardedMutex(this + 3);
        v11 = *((_DWORD *)v9 + 104);
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v56, 1, (ULONG **)&v57);
        LODWORD(v8) = MonitorInstance;
        if ( MonitorInstance < 0 )
        {
          if ( MonitorInstance != -1073741275 )
          {
            v42 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v42 + 24) = v56;
            *(_QWORD *)(v42 + 32) = this;
            WdLogEvent5_WdError(v42);
            return (unsigned int)v8;
          }
        }
        else
        {
          v12 = 1;
        }
      }
      LOBYTE(v53) = v12;
      LOBYTE(v52) = v58;
      v22 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
              *((_QWORD *)this->Owner + 2),
              a3,
              v56,
              v11,
              v52,
              v53);
      v24 = v56;
      LODWORD(v8) = v22;
      if ( v56 == -1 || v22 < 0 )
        return (unsigned int)v8;
      v8 = *((_QWORD *)this->Owner + 2);
      v56 = -1;
      if ( !v8 )
      {
        v50 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v50 + 24) = 0LL;
        WdLogEvent5_WdError(v50);
        LODWORD(v8) = -1071775742;
        return (unsigned int)v8;
      }
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 144)) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v44);
      }
      v25 = *(_QWORD *)(v8 + 2304);
      if ( !v25 )
      {
        v49 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v49 + 24) = v8;
        WdLogEvent5_WdError(v49);
        LODWORD(v8) = -1071775742;
        return (unsigned int)v8;
      }
      v26 = *(_QWORD *)(v25 + 88);
      if ( !v26 )
      {
        v48 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v48 + 24) = v8;
        WdLogEvent5_WdError(v48);
        LODWORD(v8) = -1071774923;
        return (unsigned int)v8;
      }
      v27 = *(DXGFASTMUTEX **)(v26 + 40);
      v55 = *(_QWORD *)(v25 + 88);
      DXGFASTMUTEX::Acquire(v27);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 80) + 72LL));
      v29 = *(_QWORD *)(v26 + 80);
      v54 = v29;
      if ( v24 != -1 )
        break;
      v45 = *(_QWORD *)(v29 + 24);
      v9 = 0LL;
      v34 = 0LL;
      if ( v45 != v29 + 24 )
        v34 = v45 - 8;
LABEL_43:
      if ( !v34 )
      {
        auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v54);
        EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v55);
        LODWORD(v8) = -1073741275;
        return (unsigned int)v8;
      }
      v56 = *(_DWORD *)(v34 + 24);
      if ( v29 )
      {
        v35 = (void (__fastcall ***)(_QWORD, __int64))(v29 + 64);
        v36 = _InterlockedDecrement((volatile signed __int32 *)(v29 + 72));
        if ( v36 )
        {
          if ( v36 < 0 )
          {
            v47 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v47 + 24) = v36;
            WdLogEvent5_WdError(v47);
          }
        }
        else if ( v35 )
        {
          (**v35)(v35, 1LL);
        }
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
    }
    v30 = (_QWORD *)(v29 + 24);
    if ( (_QWORD *)*v30 == v30 )
    {
      v28 = 0LL;
      v31 = 0LL;
    }
    else
    {
      v31 = *v30 - 8LL;
      if ( !v31 )
      {
LABEL_60:
        v46 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v46);
LABEL_41:
        v33 = *(_QWORD *)(v31 + 8);
        v9 = 0LL;
        v34 = v33 - 8;
        if ( v33 == v29 + 24 )
          v34 = 0LL;
        goto LABEL_43;
      }
      v28 = 0LL;
      while ( *(_DWORD *)(v31 + 24) != v24 )
      {
        v32 = *(_QWORD *)(v31 + 8);
        if ( v32 == v29 + 24 )
          v31 = 0LL;
        else
          v31 = v32 - 8;
        if ( !v31 )
          goto LABEL_60;
      }
    }
    if ( v31 )
      goto LABEL_41;
    goto LABEL_60;
  }
  return (unsigned int)v8;
}
