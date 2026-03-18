/*
 * XREFs of DpiPowerArbiterThread @ 0x1C0121B80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C00110F4 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C002DD3C (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C002DDF8 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00338DC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C00339C8 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     MonitorAdapterPowerChange @ 0x1C0101C8C (MonitorAdapterPowerChange.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0102064 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0104990 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C0171D4C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C017842C (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C01787C8 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C0178828 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C01AAD1C (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C01AC664 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C01EB590 (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  struct _LIST_ENTRY *v8; // r14
  int Blink; // ecx
  char v10; // r12
  int v11; // eax
  char v12; // r13
  bool v13; // bp
  bool v14; // bl
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  DXGADAPTER *v55; // rcx
  int v56; // edx
  DXGADAPTER *v57; // rcx
  DXGGLOBAL *Global; // rax
  int v59; // eax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  char started; // al
  __int64 v69; // rcx
  _QWORD *v70; // rax
  int v71; // edx
  __int64 v72; // rcx
  int v73; // ebp
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rbp
  _QWORD *v80; // rax

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
      v22 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v22 + 24) = v2;
      WdLogEvent5_WdError(v22);
LABEL_13:
      v4 = (void *)(v1 + 3760);
      if ( *(_DWORD *)(v1 + 3808) == 7 )
        goto LABEL_126;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v8 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_13;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v10 = 0;
      v11 = (int)PowerActionQueueEntry[1].Blink;
      v12 = 0;
      LODWORD(v2) = 0;
      v13 = Blink != 64;
      if ( v11 != 1 )
        break;
      if ( ((*(_DWORD *)(v1 + 3808) - 1) & 0xFFFFFFFD) != 0 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3624), 1u);
        ExReleaseResourceLite((PERESOURCE)(v1 + 3624));
        KeLeaveCriticalRegion();
        v16 = (int)v8[2].Blink;
        v17 = *(_QWORD *)(v1 + 3728);
        if ( (v16 & 0x40) == 0 )
        {
          v18 = 6;
          if ( (v16 & 0x18) == 0 )
            v18 = 3;
          DxgkAcquireAdapterCoreSync(v17, v18);
LABEL_20:
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            LOBYTE(v19) = 1;
            MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3728), v19, (__int64)v8[5].Flink);
            DmmAdapterPowerChange(*(void *const *)(v1 + 3728), 1u);
          }
          DmmResetModeState(*(PERESOURCE **)(v1 + 3728), -1);
          v20 = (int)v8[2].Blink;
          if ( (v20 & 0x20) != 0 )
          {
            v63 = *(_QWORD *)(v1 + 3728);
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v63) )
            {
              v65 = WdLogNewEntry5_WdAssertion(v64);
              *(_QWORD *)(v65 + 24) = 3546LL;
              WdLogEvent5_WdAssertion(v65);
            }
            v66 = *(_QWORD *)(v63 + 2312);
            if ( v66 )
              ADAPTER_RENDER::FlushScheduler(v66, 6, 0xFFFFFFFF, 0);
          }
          else
          {
            if ( (v20 & 0x10) != 0 )
            {
              v21 = 3;
              goto LABEL_25;
            }
            if ( (v20 & 8) != 0 )
            {
              v21 = 2;
              goto LABEL_25;
            }
            if ( (v20 & 0x40) != 0 )
            {
              v67 = (_QWORD *)WdLogNewEntry5_WdPower();
              v67[3] = v1;
              v67[4] = 1LL;
              v67[5] = 0LL;
              WdLogEvent5_WdPower(v67);
              if ( *(_BYTE *)(v1 + 5232) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3728), PowerDeviceD3, 1u);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v69 = *(_QWORD *)(v1 + 3728);
              if ( started )
              {
                DXGADAPTER::ApplyCoreSyncAction(v69, 3);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 3808) == 1 )
                {
                  if ( *(_BYTE *)(v1 + 5232) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3728), PowerDeviceD3, 0);
                  goto LABEL_26;
                }
                v70 = (_QWORD *)WdLogNewEntry5_WdPower();
                v70[3] = v1;
                v70[4] = 0LL;
                v70[5] = 0LL;
                WdLogEvent5_WdPower(v70);
                v69 = *(_QWORD *)(v1 + 3728);
                v71 = 5;
              }
              else
              {
                v71 = 2;
              }
              DxgkReleaseAdapterCoreSync(v69, v71);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              if ( *(_BYTE *)(v1 + 5232) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3728), PowerDeviceD0, 0);
LABEL_27:
              v14 = v13;
              goto LABEL_11;
            }
            v21 = 1;
LABEL_25:
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3728), v21);
          }
LABEL_26:
          *(_DWORD *)(v1 + 3808) = 1;
          goto LABEL_27;
        }
        DxgkAcquireAdapterCoreSync(v17, 4);
        if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3728), 2LL) )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdPower();
          v62[3] = v1;
          v62[4] = 0LL;
          v62[5] = 0LL;
          WdLogEvent5_WdPower(v62);
          goto LABEL_20;
        }
        v61 = (_QWORD *)WdLogNewEntry5_WdPower();
        v61[3] = v1;
        v61[4] = 0LL;
        v61[5] = 0LL;
        WdLogEvent5_WdPower(v61);
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
        LODWORD(v2) = -1073741823;
        goto LABEL_27;
      }
      v14 = Blink != 64;
      if ( *(_BYTE *)(v1 + 481) )
      {
        if ( *(_DWORD *)(v1 + 280) <= 1u )
        {
          v14 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 482) )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
            goto LABEL_82;
          }
        }
      }
LABEL_11:
      if ( v14 )
      {
        LODWORD(v8[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v8[3], 0, 0);
      }
    }
    v14 = Blink != 64;
    if ( v11 == 2 )
    {
      if ( *(_DWORD *)(v1 + 3808) != 1 )
        goto LABEL_11;
      *(_DWORD *)(v1 + 3808) = 2;
      v15 = (int)v8[2].Blink;
      if ( *(_BYTE *)(v1 + 481) )
      {
        v59 = *(_DWORD *)(v1 + 280);
        if ( !v59 || (v14 = Blink != 64, v59 == 1) )
        {
          v14 = Blink != 64;
          if ( !*(_BYTE *)(v1 + 482) && v15 != 64 )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdPower();
            v60[3] = v1;
            v60[4] = 0LL;
            v60[5] = 0LL;
            WdLogEvent5_WdPower(v60);
            LODWORD(v8[4].Blink) = 0;
            v14 = 0;
            KeSetEvent((PRKEVENT)&v8[3], 0, 0);
            v8 = 0LL;
            if ( *(_BYTE *)(v1 + 5232) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3728), PowerDeviceD0, 0);
          }
        }
      }
      LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728), 5);
      if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
      {
        if ( v15 == 64 )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          if ( *(_BYTE *)(v1 + 5232) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3728), PowerDeviceD0, 0);
        }
        KeSetEvent((PRKEVENT)(v1 + 3920), 0, 0);
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
      }
      goto LABEL_10;
    }
    if ( v11 <= 2 )
      goto LABEL_11;
    if ( v11 <= 4 )
    {
      if ( *(_DWORD *)(v1 + 3808) == 3 || !*(_QWORD *)(v1 + 3728) )
      {
        *(_DWORD *)(v1 + 3808) = 3;
        goto LABEL_82;
      }
      v14 = Blink != 64;
      if ( v11 == 4 )
      {
        KeClearEvent((PRKEVENT)(v1 + 3944));
        LODWORD(v8[4].Blink) = 0;
        v14 = 0;
        KeSetEvent((PRKEVENT)&v8[3], 0, 0);
        v8 = 0LL;
      }
      v55 = *(DXGADAPTER **)(v1 + 3728);
      if ( v55 )
        DXGADAPTER::PrepareToRemove(v55);
      if ( *(_QWORD *)(v1 + 488) )
      {
        KeSetEvent((PRKEVENT)(v1 + 3920), 0, 0);
        PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
        *(_QWORD *)(*(_QWORD *)(v1 + 3728) + 2352LL) = 0LL;
        *(_QWORD *)(v1 + 488) = 0LL;
      }
      if ( *(_DWORD *)(v1 + 3808) == 1 )
      {
        v56 = 5;
        if ( (*(_BYTE *)(v1 + 3736) & 0x18) == 0 && *(_BYTE *)(v1 + 1148) )
          v56 = 2;
        LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728), v56);
      }
      v57 = *(DXGADAPTER **)(v1 + 3728);
      if ( v57 )
        DXGADAPTER::Stop(v57, *(_BYTE *)(v1 + 1148), *(_BYTE *)(v1 + 1149));
      Global = DXGGLOBAL::GetGlobal((__int64)v57);
      DXGGLOBAL::NotifyAdapterRemoval(Global);
      *(_DWORD *)(v1 + 3808) = 3;
      KeSetEvent((PRKEVENT)(v1 + 3944), 0, 0);
      goto LABEL_10;
    }
    if ( v11 != 5 )
    {
      if ( v11 == 6 )
      {
        v23 = *(_DWORD *)(v1 + 3812);
        if ( (v23 & 4) != 0 )
        {
          v24 = *(_QWORD *)(v1 + 2744);
          *(_DWORD *)(v1 + 3812) = v23 & 0xFFFFFFFB;
          v25 = (*(__int64 (__fastcall **)(__int64))(v1 + 2776))(v24);
          v29 = v25;
          if ( v25 < 0 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
            v30[3] = 275LL;
            v30[4] = 21LL;
            v30[5] = *(_QWORD *)(v1 + 2776);
            v30[6] = v29;
            WdLogEvent5_WdCriticalError(v30);
          }
        }
        v31 = *(_DWORD *)(v1 + 3812);
        v32 = *(_QWORD *)(v1 + 3728);
        if ( (v31 & 1) != 0 )
        {
          *(_DWORD *)(v1 + 3812) = v31 & 0xFFFFFFFE;
          v33 = DxgkReleaseAdapterCoreSync(v32, 5);
          v2 = v33;
          if ( v33 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34, v36);
            v37[3] = 275LL;
            v37[4] = 21LL;
            v37[5] = v2;
            WdLogEvent5_WdCriticalError(v37);
          }
        }
        else
        {
          v38 = DxgkResumeMemorySegments(v32);
          v2 = v38;
          if ( v38 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v40 + 24) = v2;
            WdLogEvent5_WdError(v40);
          }
          if ( (*(_DWORD *)(v1 + 3812) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728), 2) < 0 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41, v43);
            v44[3] = 275LL;
            v44[4] = 21LL;
            v44[5] = v2;
            WdLogEvent5_WdCriticalError(v44);
          }
          *(_DWORD *)(v1 + 3812) &= ~2u;
        }
        *(_DWORD *)(v1 + 3808) = 6;
      }
      else
      {
        v14 = Blink != 64;
        if ( v11 != 7 )
          goto LABEL_11;
        if ( *(_DWORD *)(v1 + 3808) == 1 )
          LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728), 5);
        *(_DWORD *)(v1 + 3808) = 7;
      }
LABEL_82:
      v14 = v13;
LABEL_10:
      if ( (int)v2 < 0 )
      {
        if ( v12 == 1 )
        {
          v73 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3728));
          if ( v73 < 0 )
          {
            v74 = WdLogNewEntry5_WdError(v72);
            *(_QWORD *)(v74 + 24) = (int)v2;
            WdLogEvent5_WdError(v74);
            LODWORD(v2) = v73;
          }
        }
        if ( v10 == 1 )
        {
          v75 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3728), 5);
          v79 = v75;
          if ( v75 < 0 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v77, v76, v78);
            v80[3] = 275LL;
            v80[4] = 21LL;
            v80[5] = v79;
            WdLogEvent5_WdCriticalError(v80);
          }
        }
      }
      goto LABEL_11;
    }
    if ( (Blink & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3728), 3);
      DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3728), 1);
    }
    else
    {
      if ( (Blink & 2) != 0 )
        goto LABEL_53;
      v50 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3728), 2);
      v2 = v50;
      if ( v50 < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v51);
        *(_QWORD *)(v52 + 24) = v2;
        goto LABEL_60;
      }
    }
    v10 = 1;
LABEL_53:
    if ( ((__int64)v8[2].Blink & 1) == 0 )
    {
      v45 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3728));
      v2 = v45;
      if ( v45 < 0 )
      {
        v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v49 + 24) = v2;
        WdLogEvent5_WdWarning(v49);
        goto LABEL_82;
      }
      v12 = 1;
    }
    if ( ((__int64)v8[2].Blink & 4) == 0
      || (v53 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2768))(*(_QWORD *)(v1 + 2744)), v2 = v53, v53 >= 0) )
    {
      *(_DWORD *)(v1 + 3808) = 5;
      *(_DWORD *)(v1 + 3812) |= LODWORD(v8[2].Blink);
      goto LABEL_82;
    }
    v52 = WdLogNewEntry5_WdError(v54);
    *(_QWORD *)(v52 + 24) = *(_QWORD *)(v1 + 2768);
    *(_QWORD *)(v52 + 32) = v2;
LABEL_60:
    WdLogEvent5_WdError(v52);
    goto LABEL_82;
  }
LABEL_126:
  PsTerminateSystemThread(v2);
}
