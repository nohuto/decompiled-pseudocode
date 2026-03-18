/*
 * XREFs of DpiPowerArbiterThread @ 0x1C01F11D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C003A0B0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C003A16C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C003A4B4 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C003A5A0 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C003A678 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C014848C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C014D9CC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C015C5B0 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C015C9F4 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C015CA54 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C019FB34 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C01A1D94 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C0211CDC (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C02150D0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C022D4BC (MonitorAdapterPowerChange.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  int Blink; // ecx
  char v9; // r12
  int v10; // eax
  char v11; // r13
  bool v12; // si
  __int64 v13; // rdx
  bool v14; // bl
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  DXGADAPTER *v40; // rcx
  struct _LIST_ENTRY *v41; // r15
  int v42; // eax
  DXGGLOBAL *Global; // rax
  __int64 v44; // rcx
  int v45; // esi
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rsi
  _QWORD *v50; // rax
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  int v52; // r14d
  _QWORD *v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  int v58; // edx
  int v59; // eax
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // edx
  _QWORD *v65; // rax
  bool started; // al
  __int64 v67; // rcx
  _QWORD *v68; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 3808) == 7;
  *(_QWORD *)(v1 + 3784) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3760);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = v2;
      WdLogEvent5_WdError(v7);
LABEL_67:
      v4 = (void *)(v1 + 3760);
      if ( *(_DWORD *)(v1 + 3808) == 7 )
        goto LABEL_68;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v41 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_67;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v9 = 0;
      v10 = (int)PowerActionQueueEntry[1].Blink;
      v11 = 0;
      LODWORD(v2) = 0;
      v12 = Blink != 64;
      if ( v10 == 1 )
      {
        if ( ((*(_DWORD *)(v1 + 3808) - 1) & 0xFFFFFFFD) != 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3624), 1u);
          ExReleaseResourceLite((PERESOURCE)(v1 + 3624));
          KeLeaveCriticalRegion();
          v54 = (int)v41[2].Blink;
          v55 = *(_QWORD *)(v1 + 3728);
          if ( (v54 & 0x40) != 0 )
          {
            DxgkAcquireAdapterCoreSync(v55, 4);
            if ( !DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v1 + 3728), 2) )
            {
              v56 = (_QWORD *)WdLogNewEntry5_WdPower();
              v56[3] = v1;
              v56[4] = 0LL;
              v56[5] = 0LL;
              WdLogEvent5_WdPower(v56);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              LODWORD(v2) = -1073741823;
LABEL_89:
              v14 = v12;
              goto LABEL_64;
            }
            v57 = (_QWORD *)WdLogNewEntry5_WdPower();
            v57[3] = v1;
            v57[4] = 0LL;
            v57[5] = 0LL;
            WdLogEvent5_WdPower(v57);
          }
          else
          {
            v58 = 6;
            if ( (v54 & 0x18) == 0 )
              v58 = 3;
            DxgkAcquireAdapterCoreSync(v55, v58);
          }
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            MonitorAdapterPowerChange(*(DXGADAPTER **)(v1 + 3728));
            DmmAdapterPowerChange(*(void *const *)(v1 + 3728), 1u);
          }
          DmmResetModeState(*(void *const *)(v1 + 3728), 0xFFFFFFFF);
          v59 = (int)v41[2].Blink;
          if ( (v59 & 0x20) != 0 )
          {
            v60 = *(_QWORD *)(v1 + 3728);
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v60) )
            {
              v62 = WdLogNewEntry5_WdAssertion(v61);
              *(_QWORD *)(v62 + 24) = 3558LL;
              WdLogEvent5_WdAssertion(v62);
            }
            v63 = *(_QWORD *)(v60 + 2464);
            if ( v63 )
              ADAPTER_RENDER::FlushScheduler(v63, 6, 0xFFFFFFFF, 0);
          }
          else
          {
            if ( (v59 & 0x10) != 0 )
            {
              v64 = 3;
            }
            else if ( (v59 & 8) != 0 )
            {
              v64 = 2;
            }
            else
            {
              if ( (v59 & 0x40) != 0 )
              {
                v65 = (_QWORD *)WdLogNewEntry5_WdPower();
                v65[3] = v1;
                v65[4] = 1LL;
                v65[5] = 0LL;
                WdLogEvent5_WdPower(v65);
                if ( *(_BYTE *)(v1 + 5296) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*(__int64 **)(v1 + 3728), 4u, 1);
                started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
                v67 = *(_QWORD *)(v1 + 3728);
                if ( started )
                {
                  DXGADAPTER::ApplyCoreSyncAction(v67, 3);
                  DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                  if ( *(_DWORD *)(v1 + 3808) == 1 )
                  {
                    if ( *(_BYTE *)(v1 + 5296) )
                      DxgkNotifySharedPowerGraphicsPowerTransition(*(__int64 **)(v1 + 3728), 4u, 0);
                    goto LABEL_118;
                  }
                  v68 = (_QWORD *)WdLogNewEntry5_WdPower();
                  v68[3] = v1;
                  v68[4] = 0LL;
                  v68[5] = 0LL;
                  WdLogEvent5_WdPower(v68);
                  v67 = *(_QWORD *)(v1 + 3728);
                }
                DxgkReleaseAdapterCoreSync(v67);
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                if ( *(_BYTE *)(v1 + 5296) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*(__int64 **)(v1 + 3728), 1u, 0);
                goto LABEL_89;
              }
              v64 = 1;
            }
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3728), v64);
          }
LABEL_118:
          *(_DWORD *)(v1 + 3808) = 1;
          goto LABEL_89;
        }
        v14 = Blink != 64;
        if ( !*(_BYTE *)(v1 + 481) )
          goto LABEL_64;
        if ( *(_DWORD *)(v1 + 280) > 1u )
          goto LABEL_64;
        v14 = Blink != 64;
        if ( *(_BYTE *)(v1 + 482) )
          goto LABEL_64;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
        goto LABEL_70;
      }
      v13 = 2LL;
      v14 = Blink != 64;
      if ( v10 == 2 )
      {
        if ( *(_DWORD *)(v1 + 3808) != 1 )
          goto LABEL_64;
        *(_DWORD *)(v1 + 3808) = 2;
        v14 = Blink != 64;
        v52 = (int)v41[2].Blink;
        if ( *(_BYTE *)(v1 + 481) )
        {
          if ( *(_DWORD *)(v1 + 280) <= 1u )
          {
            v14 = Blink != 64;
            if ( !*(_BYTE *)(v1 + 482) && v52 != 64 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdPower();
              v53[3] = v1;
              v53[4] = 0LL;
              v53[5] = 0LL;
              WdLogEvent5_WdPower(v53);
              LODWORD(v41[4].Blink) = 0;
              v14 = 0;
              KeSetEvent((PRKEVENT)&v41[3], 0, 0);
              v41 = 0LL;
              if ( *(_BYTE *)(v1 + 5296) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(__int64 **)(v1 + 3728), 1u, 0);
            }
          }
        }
        LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728));
        if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
        {
          if ( v52 == 64 )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            if ( *(_BYTE *)(v1 + 5296) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(__int64 **)(v1 + 3728), 1u, 0);
          }
          KeSetEvent((PRKEVENT)(v1 + 3920), 0, 0);
          DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
        }
        goto LABEL_57;
      }
      if ( v10 <= 2 )
        goto LABEL_64;
      if ( v10 <= 4 )
      {
        if ( *(_DWORD *)(v1 + 3808) != 3 )
        {
          v40 = *(DXGADAPTER **)(v1 + 3728);
          if ( v40 )
          {
            if ( v10 == 4 )
            {
              KeClearEvent((PRKEVENT)(v1 + 3944));
              LODWORD(v41[4].Blink) = 0;
              v14 = 0;
              KeSetEvent((PRKEVENT)&v41[3], 0, 0);
              v40 = *(DXGADAPTER **)(v1 + 3728);
              v41 = 0LL;
            }
            else
            {
              v14 = v12;
            }
            if ( v40 )
            {
              DXGADAPTER::PrepareToRemove(v40);
              v40 = *(DXGADAPTER **)(v1 + 3728);
            }
            if ( *(_QWORD *)(v1 + 488) )
            {
              KeSetEvent((PRKEVENT)(v1 + 3920), 0, 0);
              PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
              *(_QWORD *)(*(_QWORD *)(v1 + 3728) + 2504LL) = 0LL;
              v40 = *(DXGADAPTER **)(v1 + 3728);
              *(_QWORD *)(v1 + 488) = 0LL;
            }
            if ( *(_DWORD *)(v1 + 3808) == 1 )
            {
              v42 = DxgkReleaseAdapterCoreSync((__int64)v40);
              v40 = *(DXGADAPTER **)(v1 + 3728);
              LODWORD(v2) = v42;
            }
            if ( v40 )
            {
              LOBYTE(v13) = *(_BYTE *)(v1 + 1148);
              DXGADAPTER::Stop(v40, v13, *(_BYTE *)(v1 + 1149));
            }
            Global = DXGGLOBAL::GetGlobal((__int64)v40);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v1 + 3808) = 3;
            KeSetEvent((PRKEVENT)(v1 + 3944), 0, 0);
            goto LABEL_57;
          }
        }
        *(_DWORD *)(v1 + 3808) = 3;
        goto LABEL_70;
      }
      if ( v10 != 5 )
      {
        if ( v10 == 6 )
        {
          v15 = *(_DWORD *)(v1 + 3812);
          if ( (v15 & 4) != 0 )
          {
            v16 = *(_QWORD *)(v1 + 2744);
            *(_DWORD *)(v1 + 3812) = v15 & 0xFFFFFFFB;
            v17 = (*(__int64 (__fastcall **)(__int64))(v1 + 2776))(v16);
            v19 = v17;
            if ( v17 < 0 )
            {
              v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18);
              v20[3] = 275LL;
              v20[4] = 21LL;
              v20[5] = *(_QWORD *)(v1 + 2776);
              v20[6] = v19;
              WdLogEvent5_WdCriticalError(v20);
            }
          }
          v21 = *(_DWORD *)(v1 + 3812);
          v22 = *(_QWORD *)(v1 + 3728);
          if ( (v21 & 1) != 0 )
          {
            *(_DWORD *)(v1 + 3812) = v21 & 0xFFFFFFFE;
            v23 = DxgkReleaseAdapterCoreSync(v22);
            v2 = v23;
            if ( v23 < 0 )
            {
              v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24);
              v25[3] = 275LL;
              v25[4] = 21LL;
              v25[5] = v2;
              WdLogEvent5_WdCriticalError(v25);
            }
          }
          else
          {
            LODWORD(v2) = DxgkResumeMemorySegments(v22, v13);
            if ( (int)v2 < 0 )
            {
              v27 = WdLogNewEntry5_WdError(v26);
              *(_QWORD *)(v27 + 24) = (int)v2;
              WdLogEvent5_WdError(v27);
            }
            if ( (*(_DWORD *)(v1 + 3812) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728)) < 0 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
              v29[3] = 275LL;
              v29[4] = 21LL;
              v29[5] = (int)v2;
              WdLogEvent5_WdCriticalError(v29);
            }
            *(_DWORD *)(v1 + 3812) &= ~2u;
          }
          *(_DWORD *)(v1 + 3808) = 6;
        }
        else
        {
          if ( v10 != 7 )
            goto LABEL_64;
          if ( *(_DWORD *)(v1 + 3808) == 1 )
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728));
          *(_DWORD *)(v1 + 3808) = 7;
        }
        goto LABEL_70;
      }
      if ( (Blink & 1) != 0 )
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3728), 3);
        DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3728), 1);
      }
      else
      {
        if ( (Blink & 2) != 0 )
          goto LABEL_31;
        v35 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3728), 2);
        v2 = v35;
        if ( v35 < 0 )
        {
          v37 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v37 + 24) = v2;
          goto LABEL_37;
        }
      }
      v9 = 1;
LABEL_31:
      v30 = (int)v41[2].Blink;
      if ( (v30 & 1) != 0 )
        goto LABEL_39;
      v31 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3728));
      v2 = v31;
      if ( v31 >= 0 )
      {
        v30 = (int)v41[2].Blink;
        v11 = 1;
LABEL_39:
        if ( (v30 & 4) == 0
          || (v38 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2768))(*(_QWORD *)(v1 + 2744)), v2 = v38, v38 >= 0) )
        {
          *(_DWORD *)(v1 + 3808) = 5;
          *(_DWORD *)(v1 + 3812) |= LODWORD(v41[2].Blink);
          goto LABEL_70;
        }
        v37 = WdLogNewEntry5_WdError(v39);
        *(_QWORD *)(v37 + 24) = *(_QWORD *)(v1 + 2768);
        *(_QWORD *)(v37 + 32) = v2;
LABEL_37:
        WdLogEvent5_WdError(v37);
        goto LABEL_70;
      }
      v34 = WdLogNewEntry5_WdWarning(v32, v13, v33);
      *(_QWORD *)(v34 + 24) = v2;
      WdLogEvent5_WdWarning(v34);
LABEL_70:
      v14 = v12;
LABEL_57:
      if ( (int)v2 < 0 )
      {
        if ( v11 == 1 )
        {
          v45 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3728), v13);
          if ( v45 < 0 )
          {
            v46 = WdLogNewEntry5_WdError(v44);
            *(_QWORD *)(v46 + 24) = (int)v2;
            WdLogEvent5_WdError(v46);
            LODWORD(v2) = v45;
          }
        }
        if ( v9 == 1 )
        {
          v47 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728));
          v49 = v47;
          if ( v47 < 0 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48);
            v50[3] = 275LL;
            v50[4] = 21LL;
            v50[5] = v49;
            WdLogEvent5_WdCriticalError(v50);
          }
        }
      }
LABEL_64:
      if ( v14 )
      {
        LODWORD(v41[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v41[3], 0, 0);
      }
    }
  }
LABEL_68:
  PsTerminateSystemThread(v2);
}
