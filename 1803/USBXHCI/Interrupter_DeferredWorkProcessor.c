/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x1C0016F88
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C0017E60 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C0017FA0 (Interrupter_WdfEvtInterruptWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E8FC (WPP_RECORDER_SF_qq.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C0016F18 (Interrupter_DeferToDpcOrWorkItem.c)
 *     Interrupter_UpdateERDP @ 0x1C0017C54 (Interrupter_UpdateERDP.c)
 *     McTemplateK0q @ 0x1C0017FEC (McTemplateK0q.c)
 *     WPP_RECORDER_SF_ddddxdLL @ 0x1C0018118 (WPP_RECORDER_SF_ddddxdLL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00182B4 (WPP_RECORDER_SF_qdd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001A77C (RootHub_HandlePortStatusChangeEvent.c)
 *     TR_TransferEventHandler @ 0x1C00212AC (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C0031310 (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_TransferEventHandler @ 0x1C003371C (UsbDevice_TransferEventHandler.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  ULONG v7; // r13d
  KIRQL v8; // al
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r14d
  ULONG v13; // r12d
  __m128i *v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rcx
  unsigned __int32 v26; // edx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  unsigned __int32 v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int16 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rcx
  KIRQL v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  KIRQL v41; // di
  struct _IO_WORKITEM *v42; // rcx
  KIRQL v43; // al
  __int64 v44; // rcx
  int v45; // [rsp+20h] [rbp-79h]
  __int64 v46; // [rsp+28h] [rbp-71h]
  char v47; // [rsp+30h] [rbp-69h]
  __m128i v49; // [rsp+78h] [rbp-21h] BYREF
  __int64 v50; // [rsp+88h] [rbp-11h]
  __int64 v51; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v51 = a1;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B340);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 136);
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    HIDWORD(v46) = HIDWORD(a1);
    WPP_RECORDER_SF_qq(*(_QWORD *)(v5 + 72), 5u, 9u, 0x27u, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
  }
  ++*(_DWORD *)(v4 + 44);
  if ( *(_DWORD *)(v4 + 32) )
    v50 = 0LL;
  else
    v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C004B1B0);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
  v9 = *(_DWORD *)(v4 + 96);
  if ( (v9 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v8);
    ++*(_DWORD *)(v4 + 68);
    return;
  }
  *(_DWORD *)(v4 + 96) = v9 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
    McTemplateK0q(v10, &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V1, v11, *(unsigned int *)(v4 + 32));
  v12 = 0;
  v13 = 0;
  v14 = (__m128i *)(*(_QWORD *)(v4 + 136) + 16LL * *(unsigned int *)(v4 + 124));
  while ( 1 )
  {
    if ( (v14->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 120) )
    {
      v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
      *(_DWORD *)(v4 + 96) &= ~8u;
      v41 = v37;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
        McTemplateK0q(v39, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v40, *(unsigned int *)(v4 + 32));
      LOBYTE(v38) = 1;
      Interrupter_UpdateERDP(v4, v38, v40);
      goto LABEL_89;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      HIDWORD(v46) = HIDWORD(v14);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        5u,
        9u,
        0x28u,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
    }
    if ( (v12 & 0x3F) == 0 && KeGetCurrentIrql() >= 2u )
    {
      v15 = KeQueryDpcWatchdogInformation(&WatchdogInformation);
      v17 = 0LL;
      if ( v15 >= 0 )
        break;
    }
LABEL_22:
    v49 = *v14;
    v18 = HIDWORD(_mm_srli_si128(v49, 8).m128i_u64[0]);
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(v49, 8));
    WPP_RECORDER_SF_ddddxdLL(
      *(_QWORD *)(v4 + 16),
      ((unsigned int)v18 >> 2) & 1,
      v19 & 0xFFFFFF,
      (unsigned __int16)v18 >> 10,
      v45,
      *(_DWORD *)(v4 + 124),
      SBYTE3(v18),
      BYTE2(v18) & 0x1F,
      (v18 & 4) != 0,
      v49.m128i_i8[0],
      v19,
      SHIBYTE(v19),
      (unsigned __int16)v18 >> 10);
    ++*(_DWORD *)(v4 + 124);
    ++*(_DWORD *)(v4 + 48);
    v20 = *(_DWORD *)(v4 + 124);
    if ( v20 == *(_DWORD *)(v4 + 116) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v20) = 5;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v20,
          9,
          43,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
          *(_DWORD *)(v4 + 124),
          *(_DWORD *)(v4 + 128),
          *(_DWORD *)(v4 + 120));
      }
      v21 = ++*(_DWORD *)(v4 + 128);
      *(_DWORD *)(v4 + 124) = 0;
      if ( v21 == *(_DWORD *)(v4 + 108) )
      {
        *(_DWORD *)(v4 + 120) = *(_DWORD *)(v4 + 120) != 1;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            5u,
            9u,
            0x2Cu,
            (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
        v22 = *(_QWORD *)(v4 + 160);
        *(_DWORD *)(v4 + 128) = 0;
      }
      else
      {
        v22 = **(_QWORD **)(v4 + 144);
      }
      *(_QWORD *)(v4 + 144) = v22;
      *(_QWORD *)(v4 + 136) = *(_QWORD *)(v22 + 16);
    }
    v23 = v49.m128i_u32[2];
    v24 = 199;
    if ( HIBYTE(v49.m128i_i32[2]) == 199 )
    {
      v25 = *(_QWORD *)(v4 + 8);
      if ( (*(_QWORD *)(v25 + 272) & 0x2000LL) != 0 )
      {
        LOBYTE(v24) = 3;
        WPP_RECORDER_SF_qdd(
          *(_QWORD *)(v25 + 72),
          v24,
          9,
          45,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
          (char)v14,
          199,
          (unsigned __int16)v49.m128i_i16[6] >> 10);
        goto LABEL_80;
      }
    }
    v26 = v49.m128i_u32[3];
    v27 = (unsigned __int16)v49.m128i_i16[6] >> 10;
    if ( v27 == 32 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          5u,
          9u,
          0x2Eu,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
        v26 = v49.m128i_u32[3];
        LODWORD(v23) = v49.m128i_i32[2];
      }
      if ( (v26 & 4) != 0
        && (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 272LL) & 0x20000000000000LL) != 0
        && BYTE3(v23) - 14 <= 1u )
      {
        v26 &= ~4u;
        v49.m128i_i32[3] = v26;
      }
      if ( (v26 & 4) == 0
        || (v49.m128i_i8[0] & 3) == 1
        || (v28 = 0x2000000000LL, (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 272LL) & 0x2000000000LL) != 0) )
      {
        if ( *(_BYTE *)(v6 + 80) )
          v23 = *(_QWORD *)(v6 + 24);
        else
          v23 = *(_QWORD *)(v6 + 72);
        v29 = *(_QWORD *)(v23 + 8 * ((unsigned __int64)v26 >> 24));
        if ( v29 )
        {
          LOBYTE(v23) = a3;
          UsbDevice_TransferEventHandler(v29, &v49, v23);
        }
        else if ( (v49.m128i_i8[0] & 3) != 1 )
        {
          v30 = HIWORD(v26) & 0x1F;
          v31 = HIBYTE(v26);
          v47 = v31;
          LOBYTE(v31) = 3;
          WPP_RECORDER_SF_qdd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v31,
            9,
            47,
            (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
            (char)v14,
            v47,
            v30);
        }
      }
      else
      {
        LOBYTE(v28) = a3;
        TR_TransferEventHandler(&v49, 0LL, v28);
      }
      goto LABEL_80;
    }
    if ( v27 == 37 && HIBYTE(v49.m128i_i32[2]) == 21 )
    {
      ++*(_DWORD *)(v4 + 72);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        3u,
        9u,
        0x30u,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
      v32 = *(_QWORD *)(v4 + 8);
      if ( (*(_QWORD *)(v32 + 272) & 0x10000000LL) != 0 )
        Controller_ReportFatalError(v32, 2, 4113, 0LL, 0LL, 0LL);
      goto LABEL_80;
    }
    if ( a3 )
    {
      KeLowerIrql(0);
      v26 = v49.m128i_u32[3];
      v23 = v49.m128i_u32[2];
    }
    if ( *(_DWORD *)(v4 + 32) )
    {
      v33 = *(_QWORD *)(v4 + 8);
      v34 = 49;
      LODWORD(v46) = (unsigned __int16)v26 >> 10;
LABEL_60:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v33 + 72),
        3u,
        9u,
        v34,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
        v46);
      goto LABEL_78;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        5u,
        9u,
        0x32u,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
      v26 = v49.m128i_u32[3];
      v23 = v49.m128i_u32[2];
    }
    switch ( (unsigned __int16)v26 >> 10 )
    {
      case '!':
        goto LABEL_77;
      case '"':
        RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 152LL), &v49);
        goto LABEL_78;
      case '%':
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v50 + 8) + 72LL),
          3u,
          9u,
          0x33u,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
        goto LABEL_78;
      case '&':
        if ( *(_BYTE *)(v6 + 80) )
          v35 = *(_QWORD *)(v6 + 24);
        else
          v35 = *(_QWORD *)(v6 + 72);
        v36 = *(_QWORD *)(v35 + 8 * ((unsigned __int64)v26 >> 24));
        if ( v36 )
          UsbDevice_DeviceNotificationEventHandler(v36, &v49);
        goto LABEL_78;
    }
    if ( (unsigned __int16)v26 >> 10 != 39 )
    {
      if ( (unsigned __int16)v26 >> 10 != 48 )
      {
        v34 = 52;
        LODWORD(v46) = (unsigned __int16)v26 >> 10;
        v33 = *(_QWORD *)(v50 + 8);
        goto LABEL_60;
      }
LABEL_77:
      Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 144LL), (__int64)&v49);
    }
LABEL_78:
    if ( a3 )
      KfRaiseIrql(2u);
LABEL_80:
    v14 = (__m128i *)(*(_QWORD *)(v4 + 136) + 16LL * *(unsigned int *)(v4 + 124));
    if ( v12 && (v12 & 0x7F) == 0 && (v14->m128i_i32[3] & 1) == *(_DWORD *)(v4 + 120) )
      Interrupter_UpdateERDP(v4, 0LL, v23);
    ++v12;
  }
  if ( !v13 )
  {
    v16 = 95 * WatchdogInformation.DpcTimeLimit;
    v13 = (unsigned int)v16 / 0x64;
  }
  if ( !v7 )
  {
    v16 = 25 * WatchdogInformation.DpcWatchdogLimit;
    v7 = (unsigned int)v16 / 0x64;
  }
  if ( WatchdogInformation.DpcTimeCount >= v13 )
  {
    if ( WatchdogInformation.DpcWatchdogCount < v7 )
    {
      ++*(_DWORD *)(v4 + 80);
      goto LABEL_92;
    }
    goto LABEL_22;
  }
  ++*(_DWORD *)(v4 + 76);
LABEL_92:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v46) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      5u,
      9u,
      0x29u,
      (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
      v46);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
    McTemplateK0q(v16, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v17, *(unsigned int *)(v4 + 32));
  Interrupter_UpdateERDP(v4, 0LL, v17);
  ++*(_DWORD *)(v4 + 56);
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
  if ( (*(_DWORD *)(v4 + 96) & 2) != 0 )
  {
LABEL_89:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v41);
    return;
  }
  KeClearEvent((PRKEVENT)(v4 + 176));
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v41);
  v42 = *(struct _IO_WORKITEM **)(v4 + 200);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 320LL) )
  {
    if ( !v42
      || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
            v42,
            Interrupter_IoWorkItemRequeueDpc,
            0LL,
            v4) )
    {
      v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
      *(_DWORD *)(v4 + 96) &= ~8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v43);
      KeSetEvent((PRKEVENT)(v4 + 176), 0, 0);
      v44 = v51;
      ++*(_DWORD *)(v4 + 64);
      Interrupter_DeferToDpcOrWorkItem(v44);
      return;
    }
  }
  else
  {
    IoQueueWorkItemEx(v42, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v4);
  }
  ++*(_DWORD *)(v4 + 60);
}
