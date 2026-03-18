/*
 * XREFs of DpiPowerArbiterThread @ 0x1C0122680
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C000F9EC (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C003D2EC (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C003D338 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0042628 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0042714 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C0102804 (MonitorAdapterPowerChange.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0104760 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DmmResetModeState @ 0x1C0105124 (DmmResetModeState.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C016E57C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0174928 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C0174F08 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C0174F6C (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0195AF4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C0197604 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     DmmAdapterPowerChange @ 0x1C01D4908 (DmmAdapterPowerChange.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // bl
  int v10; // r15d
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct _LIST_ENTRY *v14; // r14
  int Blink; // ecx
  char v16; // r12
  int v17; // eax
  char v18; // r13
  bool v19; // bp
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // eax
  int v26; // edx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  DXGADAPTER *v64; // rcx
  __int64 v65; // rdx
  DXGADAPTER *v66; // rcx
  DXGGLOBAL *Global; // rax
  int v68; // eax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  char started; // al
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // ebp
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rbp
  _QWORD *v94; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 3784) == 7;
  *(_QWORD *)(v1 + 3760) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3736);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v27 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v27 + 24) = v2;
      WdLogEvent5_WdError(v27);
LABEL_27:
      v4 = (void *)(v1 + 3736);
      if ( *(_DWORD *)(v1 + 3784) == 7 )
        goto LABEL_124;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v14 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_27;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v16 = 0;
      v17 = (int)PowerActionQueueEntry[1].Blink;
      v18 = 0;
      LODWORD(v2) = 0;
      v19 = Blink != 64;
      if ( v17 != 1 )
        break;
      if ( ((*(_DWORD *)(v1 + 3784) - 1) & 0xFFFFFFFD) != 0 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3600), 1u);
        ExReleaseResourceLite((PERESOURCE)(v1 + 3600));
        KeLeaveCriticalRegion();
        v20 = (int)v14[2].Blink;
        v21 = *(_QWORD *)(v1 + 3704);
        if ( (v20 & 0x40) == 0 )
        {
          v22 = 6LL;
          if ( (v20 & 0x18) == 0 )
            v22 = 3LL;
          DxgkAcquireAdapterCoreSync(v21, v22);
LABEL_19:
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            LOBYTE(v23) = 1;
            MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3704), v23, (__int64)v14[5].Flink, v24);
            LOBYTE(v72) = 1;
            DmmAdapterPowerChange(*(_QWORD *)(v1 + 3704), v72);
          }
          DmmResetModeState(*(_QWORD *)(v1 + 3704), 0xFFFFFFFFLL);
          v25 = (int)v14[2].Blink;
          if ( (v25 & 0x20) != 0 )
          {
            v73 = *(_QWORD *)(v1 + 3704);
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v73) )
            {
              v78 = WdLogNewEntry5_WdAssertion(v75, v74, v76, v77);
              *(_QWORD *)(v78 + 24) = 3467LL;
              WdLogEvent5_WdAssertion(v78);
            }
            v79 = *(_QWORD *)(v73 + 2288);
            if ( v79 )
              ADAPTER_RENDER::FlushScheduler(v79, 6, 0xFFFFFFFF, 0);
          }
          else
          {
            if ( (v25 & 0x10) != 0 )
            {
              v26 = 3;
              goto LABEL_24;
            }
            if ( (v25 & 8) != 0 )
            {
              v26 = 2;
              goto LABEL_24;
            }
            if ( (v25 & 0x40) != 0 )
            {
              v80 = (_QWORD *)WdLogNewEntry5_WdPower();
              v80[3] = v1;
              v80[4] = 1LL;
              v80[5] = 0LL;
              WdLogEvent5_WdPower(v80);
              if ( *(_BYTE *)(v1 + 5096) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(_QWORD *)(v1 + 3704), 4LL);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v82 = *(_QWORD *)(v1 + 3704);
              if ( started )
              {
                DXGADAPTER::ApplyCoreSyncAction(v82, 3);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 3784) == 1 )
                {
                  if ( *(_BYTE *)(v1 + 5096) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(_QWORD *)(v1 + 3704), 4LL);
                  goto LABEL_25;
                }
                v83 = (_QWORD *)WdLogNewEntry5_WdPower();
                v83[3] = v1;
                v83[4] = 0LL;
                v83[5] = 0LL;
                WdLogEvent5_WdPower(v83);
                v82 = *(_QWORD *)(v1 + 3704);
                v84 = 5LL;
              }
              else
              {
                v84 = 2LL;
              }
              DxgkReleaseAdapterCoreSync(v82, v84);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              if ( *(_BYTE *)(v1 + 5096) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(_QWORD *)(v1 + 3704), 1LL);
LABEL_26:
              v9 = v19;
              goto LABEL_10;
            }
            v26 = 1;
LABEL_24:
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3704), v26);
          }
LABEL_25:
          *(_DWORD *)(v1 + 3784) = 1;
          goto LABEL_26;
        }
        DxgkAcquireAdapterCoreSync(v21, 4LL);
        if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3704), 2LL) )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdPower();
          v71[3] = v1;
          v71[4] = 0LL;
          v71[5] = 0LL;
          WdLogEvent5_WdPower(v71);
          goto LABEL_19;
        }
        v70 = (_QWORD *)WdLogNewEntry5_WdPower();
        v70[3] = v1;
        v70[4] = 0LL;
        v70[5] = 0LL;
        WdLogEvent5_WdPower(v70);
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
        LODWORD(v2) = -1073741823;
        goto LABEL_26;
      }
      v9 = Blink != 64;
      if ( *(_BYTE *)(v1 + 481) )
      {
        if ( *(_DWORD *)(v1 + 280) <= 1u )
        {
          v9 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 482) )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
            goto LABEL_80;
          }
        }
      }
LABEL_10:
      if ( v9 )
      {
        LODWORD(v14[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v14[3], 0, 0);
      }
    }
    v8 = 2LL;
    v9 = Blink != 64;
    if ( v17 == 2 )
    {
      if ( *(_DWORD *)(v1 + 3784) != 1 )
        goto LABEL_10;
      *(_DWORD *)(v1 + 3784) = 2;
      v10 = (int)v14[2].Blink;
      if ( *(_BYTE *)(v1 + 481) )
      {
        v68 = *(_DWORD *)(v1 + 280);
        if ( !v68 || (v9 = Blink != 64, v68 == 1) )
        {
          v9 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 482) && v10 != 64 )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdPower();
            v69[3] = v1;
            v69[4] = 0LL;
            v69[5] = 0LL;
            WdLogEvent5_WdPower(v69);
            LODWORD(v14[4].Blink) = 0;
            v9 = 0;
            KeSetEvent((PRKEVENT)&v14[3], 0, 0);
            v14 = 0LL;
            if ( *(_BYTE *)(v1 + 5096) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(_QWORD *)(v1 + 3704), 1LL);
          }
        }
      }
      LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3704), 5LL);
      if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
      {
        if ( v10 == 64 )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          if ( *(_BYTE *)(v1 + 5096) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(_QWORD *)(v1 + 3704), 1LL);
        }
        KeSetEvent((PRKEVENT)(v1 + 3896), 0, 0);
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
      }
      goto LABEL_9;
    }
    if ( v17 <= 2 )
      goto LABEL_10;
    if ( v17 <= 4 )
    {
      if ( *(_DWORD *)(v1 + 3784) == 3 || !*(_QWORD *)(v1 + 3704) )
      {
        *(_DWORD *)(v1 + 3784) = 3;
        goto LABEL_80;
      }
      v9 = Blink != 64;
      if ( v17 == 4 )
      {
        KeClearEvent((PRKEVENT)(v1 + 3920));
        LODWORD(v14[4].Blink) = 0;
        v9 = 0;
        KeSetEvent((PRKEVENT)&v14[3], 0, 0);
        v14 = 0LL;
      }
      v64 = *(DXGADAPTER **)(v1 + 3704);
      if ( v64 )
        DXGADAPTER::PrepareToRemove(v64);
      if ( *(_QWORD *)(v1 + 488) )
      {
        KeSetEvent((PRKEVENT)(v1 + 3896), 0, 0);
        PoFxUnregisterDevice(*(_QWORD *)(v1 + 488), v65);
        *(_QWORD *)(*(_QWORD *)(v1 + 3704) + 2328LL) = 0LL;
        *(_QWORD *)(v1 + 488) = 0LL;
      }
      if ( *(_DWORD *)(v1 + 3784) == 1 )
        LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3704), (*(_BYTE *)(v1 + 3712) & 0x18) != 0 ? 5 : 2);
      v66 = *(DXGADAPTER **)(v1 + 3704);
      if ( v66 )
        DXGADAPTER::Stop(v66, *(_BYTE *)(v1 + 1148), *(_BYTE *)(v1 + 1149));
      Global = DXGGLOBAL::GetGlobal((__int64)v66, v8, v12, v13);
      DXGGLOBAL::NotifyAdapterRemoval(Global);
      *(_DWORD *)(v1 + 3784) = 3;
      KeSetEvent((PRKEVENT)(v1 + 3920), 0, 0);
      goto LABEL_9;
    }
    if ( v17 != 5 )
    {
      if ( v17 == 6 )
      {
        v28 = *(_DWORD *)(v1 + 3788);
        if ( (v28 & 4) != 0 )
        {
          v29 = *(_QWORD *)(v1 + 2728);
          *(_DWORD *)(v1 + 3788) = v28 & 0xFFFFFFFB;
          v30 = (*(__int64 (__fastcall **)(__int64))(v1 + 2760))(v29);
          v34 = v30;
          if ( v30 < 0 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31, v33);
            v35[3] = 275LL;
            v35[4] = 21LL;
            v35[5] = *(_QWORD *)(v1 + 2760);
            v35[6] = v34;
            WdLogEvent5_WdCriticalError(v35);
          }
        }
        v36 = *(_DWORD *)(v1 + 3788);
        v37 = *(_QWORD *)(v1 + 3704);
        if ( (v36 & 1) != 0 )
        {
          *(_DWORD *)(v1 + 3788) = v36 & 0xFFFFFFFE;
          v38 = DxgkReleaseAdapterCoreSync(v37, 5LL);
          v2 = v38;
          if ( v38 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
            v42[3] = 275LL;
            v42[4] = 21LL;
            v42[5] = v2;
            WdLogEvent5_WdCriticalError(v42);
          }
        }
        else
        {
          v43 = DxgkResumeMemorySegments(v37);
          v2 = v43;
          if ( v43 < 0 )
          {
            v46 = WdLogNewEntry5_WdError(v45, v44);
            *(_QWORD *)(v46 + 24) = v2;
            WdLogEvent5_WdError(v46);
          }
          if ( (*(_DWORD *)(v1 + 3788) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3704), 2LL) < 0 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47, v49);
            v50[3] = 275LL;
            v50[4] = 21LL;
            v50[5] = v2;
            WdLogEvent5_WdCriticalError(v50);
          }
          *(_DWORD *)(v1 + 3788) &= ~2u;
        }
        *(_DWORD *)(v1 + 3784) = 6;
      }
      else
      {
        v9 = Blink != 64;
        if ( v17 != 7 )
          goto LABEL_10;
        if ( *(_DWORD *)(v1 + 3784) == 1 )
          LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3704), 5LL);
        *(_DWORD *)(v1 + 3784) = 7;
      }
LABEL_80:
      v9 = v19;
LABEL_9:
      if ( (int)v2 < 0 )
      {
        if ( v18 == 1 )
        {
          v87 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3704));
          if ( v87 < 0 )
          {
            v88 = WdLogNewEntry5_WdError(v86, v85);
            *(_QWORD *)(v88 + 24) = (int)v2;
            WdLogEvent5_WdError(v88);
            LODWORD(v2) = v87;
          }
        }
        if ( v16 == 1 )
        {
          v89 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3704), 5LL);
          v93 = v89;
          if ( v89 < 0 )
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v91, v90, v92);
            v94[3] = 275LL;
            v94[4] = 21LL;
            v94[5] = v93;
            WdLogEvent5_WdCriticalError(v94);
          }
        }
      }
      goto LABEL_10;
    }
    if ( (Blink & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3704), 3LL);
      DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3704), 1);
    }
    else
    {
      if ( (Blink & 2) != 0 )
        goto LABEL_54;
      v57 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3704), 2LL);
      v2 = v57;
      if ( v57 < 0 )
      {
        v60 = WdLogNewEntry5_WdError(v59, v58);
        *(_QWORD *)(v60 + 24) = v2;
        goto LABEL_61;
      }
    }
    v16 = 1;
LABEL_54:
    if ( ((__int64)v14[2].Blink & 1) == 0 )
    {
      v51 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3704));
      v2 = v51;
      if ( v51 < 0 )
      {
        v56 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
        *(_QWORD *)(v56 + 24) = v2;
        WdLogEvent5_WdWarning(v56);
        goto LABEL_80;
      }
      v18 = 1;
    }
    if ( ((__int64)v14[2].Blink & 4) == 0
      || (v61 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2752))(*(_QWORD *)(v1 + 2728)), v2 = v61, v61 >= 0) )
    {
      *(_DWORD *)(v1 + 3784) = 5;
      *(_DWORD *)(v1 + 3788) |= LODWORD(v14[2].Blink);
      goto LABEL_80;
    }
    v60 = WdLogNewEntry5_WdError(v63, v62);
    *(_QWORD *)(v60 + 24) = *(_QWORD *)(v1 + 2752);
    *(_QWORD *)(v60 + 32) = v2;
LABEL_61:
    WdLogEvent5_WdError(v60);
    goto LABEL_80;
  }
LABEL_124:
  PsTerminateSystemThread(v2);
}
