/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70
 * Callers:
 *     MonitorGetMonitorInformationForTargets @ 0x1C009F304 (MonitorGetMonitorInformationForTargets.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01E2648 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0013F74 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DmmGetNextVideoPresentTarget @ 0x1C00E9720 (DmmGetNextVideoPresentTarget.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        __int64 a4)
{
  _QWORD *Owner; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rsi
  char v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  bool v29; // bp
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  MONITOR_MGR *v40; // rcx
  struct DXGMONITOR *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  int MonitorInstance; // ebx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // [rsp+20h] [rbp-78h]
  int v76; // [rsp+28h] [rbp-70h]
  __int64 v77[3]; // [rsp+40h] [rbp-58h] BYREF
  struct DXGMONITOR *v78; // [rsp+A0h] [rbp+8h] BYREF
  int (__high *v79)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // [rsp+A8h] [rbp+10h]
  void *v80; // [rsp+B0h] [rbp+18h]
  unsigned int v81; // [rsp+B8h] [rbp+20h] BYREF

  v81 = a4;
  v80 = a3;
  v79 = a2;
  if ( !a2 )
  {
    v51 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v51);
  }
  Owner = this->Owner;
  v81 = -1;
  result = DmmGetNextVideoPresentTarget(Owner[2], 0xFFFFFFFFLL, &v81);
  if ( (int)result < 0 )
    return result;
  while ( 1 )
  {
    v9 = 0;
    v10 = v81;
    v11 = 0;
    v12 = *((_QWORD *)this->Owner + 2);
    if ( !v12 )
    {
      v74 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v74 + 24) = 0LL;
      goto LABEL_76;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 144)) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v8, v7, v13, v14);
      WdLogEvent5_WdAssertion(v52);
    }
    v15 = *(_QWORD *)(v12 + 2280);
    if ( !v15 )
    {
      v74 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v74 + 24) = v12;
LABEL_76:
      WdLogEvent5_WdError(v74);
      MonitorInstance = -1071775742;
      goto LABEL_77;
    }
    v16 = *(_QWORD *)(v15 + 88);
    if ( !v16 )
    {
      v73 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v73 + 24) = v12;
      WdLogEvent5_WdError(v73);
      MonitorInstance = -1071774923;
      goto LABEL_77;
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v16 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
    v21 = *(_QWORD *)(v16 + 80);
    v77[0] = v21;
    v22 = (_QWORD *)(v21 + 24);
    if ( (_QWORD *)*v22 == v22 )
    {
      v23 = 0LL;
    }
    else
    {
      v23 = *v22 - 8LL;
      if ( !v23 )
        break;
      while ( *(_DWORD *)(v23 + 24) != (_DWORD)v10 )
      {
        v24 = *(_QWORD *)(v23 + 8);
        if ( v24 == v21 + 24 )
          v23 = 0LL;
        else
          v23 = v24 - 8;
        if ( !v23 )
          goto LABEL_70;
      }
    }
    if ( !v23 )
      break;
    if ( !*(_QWORD *)(v23 + 40) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v53);
    }
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 40) + 88LL);
    if ( !*(_QWORD *)(v25 + 8) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v54);
    }
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8) + 16LL);
    if ( *(_DWORD *)(v26 + 276) == 21299
      && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v26 + 2280) + 16LL)) < 1105 )
    {
LABEL_27:
      v29 = 0;
      goto LABEL_28;
    }
    if ( *(_DWORD *)(v23 + 120) == -1 )
    {
      v27 = *(_DWORD *)(v23 + 400);
      if ( v27 == -1 )
      {
        v28 = *(_DWORD *)(v23 + 80);
        if ( v28 >= 4 && v28 < 14 || v28 < 0 || v28 > 3 && v28 != 14 )
          goto LABEL_27;
        v29 = 1;
      }
      else
      {
        v29 = v27 == 1;
      }
    }
    else
    {
      v29 = 1;
    }
LABEL_28:
    if ( v21 )
    {
      v30 = (void (__fastcall ***)(_QWORD, __int64))(v21 + 64);
      v31 = _InterlockedDecrement((volatile signed __int32 *)(v21 + 72));
      if ( v31 )
      {
        if ( v31 < 0 )
        {
          v55 = WdLogNewEntry5_WdError(v30, v17);
          *(_QWORD *)(v55 + 24) = v31;
          WdLogEvent5_WdError(v55);
        }
      }
      else if ( v30 )
      {
        (**v30)(v30, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40), v17, v19, v20);
    v36 = v81;
    if ( v81 == -1 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
      WdLogEvent5_WdAssertion(v56);
    }
    if ( this == (struct _FAST_MUTEX *)-168LL )
    {
      v57 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
      WdLogEvent5_WdAssertion(v57);
    }
    KeAcquireGuardedMutex(this + 3);
    v40 = *(MONITOR_MGR **)&this[2].Contention;
    if ( v40 == (MONITOR_MGR *)&this[2].Contention )
      goto LABEL_46;
    v41 = 0LL;
    if ( v40 )
      v41 = *(struct DXGMONITOR **)&this[2].Contention;
    if ( !v41 )
    {
LABEL_46:
      v46 = WdLogNewEntry5_WdTrace(v40, v37, v38, v39);
      *(_QWORD *)(v46 + 24) = v36;
      *(_QWORD *)(v46 + 32) = this;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v60 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
        WdLogEvent5_WdAssertion(v60);
      }
      KeReleaseGuardedMutex(this + 3);
    }
    else
    {
      while ( *((_DWORD *)v41 + 7) != (_DWORD)v36 )
      {
        v41 = *(struct DXGMONITOR **)v41;
        if ( v41 == (struct DXGMONITOR *)&this[2].Contention || !v41 )
          goto LABEL_46;
      }
      v78 = v41;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v58 = WdLogNewEntry5_WdAssertion(v40, v37, v38, v39);
        WdLogEvent5_WdAssertion(v58);
      }
      KeReleaseGuardedMutex(this + 3);
      v9 = *((_DWORD *)v41 + 94);
      LOBYTE(v42) = 1;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v81, v42, (ULONG **)&v78);
      if ( MonitorInstance < 0 )
      {
        if ( MonitorInstance != -1073741275 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
          v59[3] = v81;
          goto LABEL_78;
        }
      }
      else
      {
        v11 = 1;
      }
    }
    LOBYTE(v76) = v11;
    LOBYTE(v75) = v29;
    result = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))v79)(
               *((_QWORD *)this->Owner + 2),
               v80,
               v81,
               v9,
               v75,
               v76);
    if ( v81 != -1 && (int)result >= 0 )
    {
      result = DmmGetNextVideoPresentTarget(*((_QWORD *)this->Owner + 2), v81, &v81);
      if ( (int)result >= 0 )
        continue;
    }
    return result;
  }
LABEL_70:
  v63 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v63 + 24) = v10;
  if ( !*(_QWORD *)(v16 + 8) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v62, v61, v64, v65);
    WdLogEvent5_WdAssertion(v66);
  }
  *(_QWORD *)(v63 + 32) = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
  WdLogEvent5_WdWarning(v63);
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(v77, v67);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40), v68, v69, v70);
  MonitorInstance = -1071774971;
LABEL_77:
  v59 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
  v59[3] = v81;
  v59[5] = MonitorInstance;
LABEL_78:
  v59[4] = this;
  WdLogEvent5_WdError(v59);
  return (unsigned int)MonitorInstance;
}
