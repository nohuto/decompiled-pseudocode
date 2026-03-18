/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x1C001DE94
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001EC30 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C001ED00 (Interrupter_WdfEvtInterruptWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0006858 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0006A60 (WPP_RECORDER_SF_qLL.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0007AC0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0014E44 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015C5C (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C001DE24 (Interrupter_DeferToDpcOrWorkItem.c)
 *     WPP_RECORDER_SF_ddddxdLL @ 0x1C001EE18 (WPP_RECORDER_SF_ddddxdLL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001EFB4 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0020124 (RootHub_HandlePortStatusChangeEvent.c)
 *     TR_TransferEventHandler @ 0x1C0023928 (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C00337D0 (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_TransferEventHandler @ 0x1C0035B6C (UsbDevice_TransferEventHandler.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  KIRQL v9; // al
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG v13; // ebx
  __m128i *v14; // rsi
  int v15; // r15d
  ULONG v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r10
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r8d
  BOOL v26; // edx
  __int64 v27; // rcx
  unsigned __int32 v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int32 v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int32 v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // si
  __int64 v43; // rcx
  unsigned __int16 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // cl
  KIRQL v54; // al
  __int64 v55; // rcx
  __int64 v56; // r8
  KIRQL v57; // si
  __int64 v58; // rbx
  __int64 v59; // rax
  char v60; // cl
  __int64 v61; // rcx
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  char v64; // cl
  KIRQL v65; // al
  KIRQL v66; // bl
  struct _IO_WORKITEM *v67; // rcx
  KIRQL v68; // al
  __int64 v69; // rcx
  KIRQL v70; // dl
  signed __int32 v71[10]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v72; // [rsp+28h] [rbp-D8h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+38h] [rbp-C8h]
  char v75; // [rsp+70h] [rbp-90h]
  __m128i v76; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int128 v80; // [rsp+A0h] [rbp-60h]
  __int128 v81; // [rsp+B0h] [rbp-50h]
  __int128 v82; // [rsp+C0h] [rbp-40h]
  __int128 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  __int128 v86; // [rsp+100h] [rbp+0h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+110h] [rbp+10h] BYREF

  v75 = a3;
  v79 = a1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E340);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 136);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(_QWORD *)(v6 + 72);
    v73 = a2;
    v72 = a1;
    WPP_RECORDER_SF_qq(v8, 5u, 9u, 0x20u, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
  }
  ++*(_DWORD *)(v5 + 44);
  if ( *(_DWORD *)(v5 + 32) )
    v78 = 0LL;
  else
    v78 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C004E1B0);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
  v10 = *(_DWORD *)(v5 + 96);
  if ( (v10 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v9);
    ++*(_DWORD *)(v5 + 68);
    return;
  }
  *(_DWORD *)(v5 + 96) = v10 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v9);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
    McTemplateK0q(v11, &USBXHCI_ETW_EVENT_DEFERRED_WORK_START, v12, *(_DWORD *)(v5 + 32));
  v13 = 0;
  v14 = (__m128i *)(*(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124));
  v15 = 0;
  v77 = 0;
  v16 = 0;
  while ( 1 )
  {
    if ( (v14->m128i_i32[3] & 1) != *(_DWORD *)(v5 + 120) )
    {
      v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
      *(_DWORD *)(v5 + 96) &= ~8u;
      v57 = v54;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
        McTemplateK0q(v55, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP, v56, *(_DWORD *)(v5 + 32));
      v58 = (*(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL) + 16LL * *(unsigned int *)(v5 + 124)) ^ ((unsigned __int8)*(_DWORD *)(v5 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL)) & 7 | 8;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          5u,
          9u,
          0x17u,
          (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
          v58);
      v59 = *(_QWORD *)(v5 + 24);
      v60 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL) & 1;
      v86 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL);
      if ( v60 )
      {
        *(_DWORD *)(v59 + 24) = v58;
        _InterlockedOr(v71, 0);
        *(_DWORD *)(v59 + 28) = HIDWORD(v58);
      }
      else
      {
        *(_QWORD *)(v59 + 24) = v58;
      }
      _InterlockedOr(v71, 0);
      v70 = v57;
      goto LABEL_118;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = *(_QWORD *)(v5 + 8);
      LODWORD(v73) = *(_DWORD *)(v5 + 124);
      v72 = (unsigned __int64)v14;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v17 + 72),
        5u,
        9u,
        0x21u,
        (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
    }
    if ( (v15 & 0x3F) == 0 && KeGetCurrentIrql() >= 2u && KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0 )
      break;
LABEL_22:
    v76 = *v14;
    v20 = HIDWORD(_mm_srli_si128(v76, 8).m128i_u64[0]);
    v21 = _mm_cvtsi128_si32(_mm_srli_si128(v76, 8));
    WPP_RECORDER_SF_ddddxdLL(
      *(_QWORD *)(v5 + 16),
      ((unsigned int)v20 >> 2) & 1,
      v21 & 0xFFFFFF,
      (unsigned __int16)v20 >> 10,
      v71[8],
      *(_DWORD *)(v5 + 124),
      SBYTE3(v20),
      BYTE2(v20) & 0x1F,
      (v20 & 4) != 0,
      v76.m128i_i8[0],
      v21,
      SHIBYTE(v21),
      (unsigned __int16)v20 >> 10);
    ++*(_DWORD *)(v5 + 124);
    ++*(_DWORD *)(v5 + 48);
    v22 = *(_DWORD *)(v5 + 124);
    if ( v22 == *(_DWORD *)(v5 + 116) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v23 = *(_QWORD *)(v5 + 8);
        v74 = *(_DWORD *)(v5 + 120);
        LODWORD(v73) = *(_DWORD *)(v5 + 128);
        v24 = *(_QWORD *)(v23 + 72);
        LODWORD(v72) = v22;
        WPP_RECORDER_SF_ddd(v24, 5u, 9u, 0x24u, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
      }
      v25 = ++*(_DWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 124) = 0;
      if ( v25 == *(_DWORD *)(v5 + 108) )
      {
        v26 = *(_DWORD *)(v5 + 120) != 1;
        *(_DWORD *)(v5 + 120) = v26;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v27 = *(_QWORD *)(v5 + 8);
          LODWORD(v73) = v26;
          LODWORD(v72) = v25;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v27 + 72),
            5u,
            9u,
            0x25u,
            (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
        }
        *(_QWORD *)(v5 + 144) = *(_QWORD *)(v5 + 160);
        *(_DWORD *)(v5 + 128) = 0;
      }
      else
      {
        *(_QWORD *)(v5 + 144) = **(_QWORD **)(v5 + 144);
      }
      *(_QWORD *)(v5 + 136) = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 16LL);
    }
    v28 = v76.m128i_u32[2];
    if ( HIBYTE(v76.m128i_i32[2]) == 199 )
    {
      v29 = *(_QWORD *)(v5 + 8);
      v80 = *(_OWORD *)(v29 + 272);
      if ( (v80 & 0x2000) != 0 )
      {
        v30 = *(_QWORD *)(v29 + 72);
        v74 = (unsigned __int16)v76.m128i_i16[6] >> 10;
        LODWORD(v73) = 199;
        v72 = (unsigned __int64)v14;
        WPP_RECORDER_SF_qLL(v30, 3u, 9u, 0x26u, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
        goto LABEL_80;
      }
    }
    v31 = v76.m128i_u32[3];
    v32 = (unsigned __int16)v76.m128i_i16[6] >> 10;
    if ( v32 == 32 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v33 = *(_QWORD *)(v5 + 8);
        LODWORD(v73) = HIBYTE(v76.m128i_i32[2]);
        LODWORD(v72) = 32;
        WPP_RECORDER_SF_LL(
          *(_QWORD *)(v33 + 72),
          5u,
          9u,
          0x27u,
          (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
        v31 = v76.m128i_u32[3];
        v28 = v76.m128i_u32[2];
      }
      if ( (v31 & 4) != 0 )
      {
        v81 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL);
        if ( (v81 & 0x20000000000000LL) != 0 && HIBYTE(v28) - 14 <= 1u )
        {
          v31 &= ~4u;
          v76.m128i_i32[3] = v31;
        }
      }
      if ( (v31 & 4) == 0
        || (v76.m128i_i8[0] & 3) == 1
        || (v34 = 0x2000000000LL, v82 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL), (v82 & 0x2000000000LL) != 0) )
      {
        if ( *(_BYTE *)(v7 + 80) )
          v35 = *(_QWORD *)(v7 + 24);
        else
          v35 = *(_QWORD *)(v7 + 72);
        v36 = *(_QWORD *)(v35 + 8 * ((unsigned __int64)v31 >> 24));
        if ( v36 )
        {
          LOBYTE(v35) = v75;
          UsbDevice_TransferEventHandler(v36, &v76, v35);
        }
        else if ( (v76.m128i_i8[0] & 3) != 1 )
        {
          v37 = *(_QWORD *)(v5 + 8);
          v38 = HIWORD(v31) & 0x1F;
          v39 = HIBYTE(v31);
          v74 = v38;
          v40 = *(_QWORD *)(v37 + 72);
          LOBYTE(v73) = v39;
          LOBYTE(v39) = 3;
          WPP_RECORDER_SF_qdd(
            v40,
            v39,
            9,
            40,
            (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
            (char)v14,
            v73,
            v38);
        }
      }
      else
      {
        LOBYTE(v34) = v75;
        TR_TransferEventHandler(&v76, 0LL, v34);
      }
      goto LABEL_80;
    }
    if ( v32 == 37 && HIBYTE(v76.m128i_i32[2]) == 21 )
    {
      ++*(_DWORD *)(v5 + 72);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        3u,
        9u,
        0x29u,
        (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
      v41 = *(_QWORD *)(v5 + 8);
      v83 = *(_OWORD *)(v41 + 272);
      if ( (v83 & 0x10000000) != 0 )
        Controller_ReportFatalError(v41, 2, 4113, 0LL, 0LL, 0LL);
      goto LABEL_80;
    }
    v42 = v75;
    if ( v75 )
    {
      KeLowerIrql(0);
      v31 = v76.m128i_u32[3];
      v28 = v76.m128i_u32[2];
    }
    if ( *(_DWORD *)(v5 + 32) )
    {
      v43 = *(_QWORD *)(v5 + 8);
      v44 = 42;
      LODWORD(v72) = (unsigned __int16)v31 >> 10;
LABEL_60:
      WPP_RECORDER_SF_L(
        *(_QWORD *)(v43 + 72),
        3u,
        9u,
        v44,
        (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
        v72);
      goto LABEL_78;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v45 = *(_QWORD *)(v5 + 8);
      LODWORD(v73) = HIBYTE(v28);
      v46 = *(_QWORD *)(v45 + 72);
      LODWORD(v72) = (unsigned __int16)v31 >> 10;
      WPP_RECORDER_SF_LL(v46, 5u, 9u, 0x2Bu, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
      v31 = v76.m128i_u32[3];
      v28 = v76.m128i_u32[2];
    }
    switch ( (unsigned __int16)v31 >> 10 )
    {
      case '!':
        goto LABEL_77;
      case '"':
        RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL), &v76);
        goto LABEL_78;
      case '%':
        LODWORD(v73) = HIBYTE(v28);
        LODWORD(v72) = 37;
        WPP_RECORDER_SF_LL(
          *(_QWORD *)(*(_QWORD *)(v78 + 8) + 72LL),
          3u,
          9u,
          0x2Cu,
          (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
        goto LABEL_78;
      case '&':
        if ( *(_BYTE *)(v7 + 80) )
          v47 = *(_QWORD *)(v7 + 24);
        else
          v47 = *(_QWORD *)(v7 + 72);
        v48 = *(_QWORD *)(v47 + 8 * ((unsigned __int64)v31 >> 24));
        if ( v48 )
          UsbDevice_DeviceNotificationEventHandler(v48, &v76);
        goto LABEL_78;
    }
    if ( (unsigned __int16)v31 >> 10 != 39 )
    {
      if ( (unsigned __int16)v31 >> 10 != 48 )
      {
        v44 = 45;
        LODWORD(v72) = (unsigned __int16)v31 >> 10;
        v43 = *(_QWORD *)(v78 + 8);
        goto LABEL_60;
      }
LABEL_77:
      Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL), (__int64)&v76);
    }
LABEL_78:
    if ( v42 )
      KfRaiseIrql(2u);
LABEL_80:
    v49 = 16LL * *(unsigned int *)(v5 + 124);
    v14 = (__m128i *)(v49 + *(_QWORD *)(v5 + 136));
    if ( v15 && (v15 & 0x7F) == 0 && (v14->m128i_i32[3] & 1) == *(_DWORD *)(v5 + 120) )
    {
      v50 = ((v49 + *(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v5 + 128) ^ (unsigned __int8)(v49 + *(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v51 = *(_QWORD *)(v5 + 8);
        v72 = ((v49 + *(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v5 + 128) ^ (unsigned __int8)(v49 + *(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(v51 + 72),
          5u,
          9u,
          0x17u,
          (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
      }
      v52 = *(_QWORD *)(v5 + 24);
      v53 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL) & 1;
      v84 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL);
      if ( v53 )
      {
        *(_DWORD *)(v52 + 24) = v50;
        _InterlockedOr(v71, 0);
        *(_DWORD *)(v52 + 28) = HIDWORD(v50);
      }
      else
      {
        *(_QWORD *)(v52 + 24) = v50;
      }
      v13 = v77;
      _InterlockedOr(v71, 0);
    }
    ++v15;
  }
  if ( !v16 )
  {
    v18 = 95 * WatchdogInformation.DpcTimeLimit;
    v16 = (unsigned int)v18 / 0x64;
  }
  if ( !v13 )
  {
    v18 = 25 * WatchdogInformation.DpcWatchdogLimit;
    v13 = (unsigned int)v18 / 0x64;
    v77 = (unsigned int)v18 / 0x64;
  }
  if ( WatchdogInformation.DpcTimeCount >= v16 )
  {
    if ( WatchdogInformation.DpcWatchdogCount < v13 )
    {
      ++*(_DWORD *)(v5 + 80);
      goto LABEL_99;
    }
    goto LABEL_22;
  }
  ++*(_DWORD *)(v5 + 76);
LABEL_99:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v61 = *(_QWORD *)(v5 + 8);
    LODWORD(v72) = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v61 + 72),
      5u,
      9u,
      0x22u,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
      v72);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
    McTemplateK0q(v18, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP, v19, *(_DWORD *)(v5 + 32));
  v62 = ((*(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL) + 16LL * *(unsigned int *)(v5 + 124)) ^ ((unsigned __int8)*(_DWORD *)(v5 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL)) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
      5u,
      9u,
      0x17u,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
      v62);
  v63 = *(_QWORD *)(v5 + 24);
  v64 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL) & 1;
  v85 = *(_OWORD *)(*(_QWORD *)(v5 + 8) + 272LL);
  if ( v64 )
  {
    *(_DWORD *)(v63 + 24) = v62;
    _InterlockedOr(v71, 0);
    *(_DWORD *)(v63 + 28) = HIDWORD(v62);
  }
  else
  {
    *(_QWORD *)(v63 + 24) = v62;
  }
  _InterlockedOr(v71, 0);
  ++*(_DWORD *)(v5 + 56);
  v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
  v66 = v65;
  if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
  {
    v70 = v65;
LABEL_118:
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v70);
    return;
  }
  KeClearEvent((PRKEVENT)(v5 + 176));
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v66);
  v67 = *(struct _IO_WORKITEM **)(v5 + 200);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 320LL) )
  {
    if ( !v67
      || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
            v67,
            Interrupter_IoWorkItemRequeueDpc,
            0LL,
            v5) )
    {
      v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
      *(_DWORD *)(v5 + 96) &= ~8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v68);
      KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
      v69 = v79;
      ++*(_DWORD *)(v5 + 64);
      Interrupter_DeferToDpcOrWorkItem(v69);
      return;
    }
  }
  else
  {
    IoQueueWorkItemEx(v67, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v5);
  }
  ++*(_DWORD *)(v5 + 60);
}
