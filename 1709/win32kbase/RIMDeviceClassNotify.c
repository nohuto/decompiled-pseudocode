/*
 * XREFs of RIMDeviceClassNotify @ 0x1C0018980
 * Callers:
 *     <none>
 * Callees:
 *     RIMFindInputDeviceForConfig @ 0x1C0008DD8 (RIMFindInputDeviceForConfig.c)
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B81C (WPP_RECORDER_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000D190 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     ApiSetIsRemoteConnection @ 0x1C0018FD4 (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0097198 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00FF6EC (WPP_RECORDER_SF_qqqD.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010E2E0 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C010EEDC (WPP_RECORDER_SF_Sdq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C010F060 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, _DWORD *Context)
{
  __int64 v2; // rsi
  int v4; // r12d
  __int64 v5; // rax
  int v6; // r15d
  int v7; // r13d
  int v8; // ebx
  __int64 i; // rdi
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbx
  int v14; // ebx
  NTSTATUS v16; // eax
  int v17; // edx
  int v18; // r8d
  NTSTATUS v19; // eax
  int v20; // edx
  int v21; // r8d
  bool v22; // zf
  bool v23; // cf
  LPCGUID v24; // r9
  int v25; // ebx
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  int cData; // [rsp+20h] [rbp-E0h]
  int cDataa; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch]
  int v37; // [rsp+68h] [rbp-98h] BYREF
  BOOL v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  _DWORD v41[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v43[16]; // [rsp+88h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  int *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  BOOL *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  int *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]

  v2 = *(_QWORD *)Context;
  v4 = Context[2];
  memset(v43, 0, 0x3CuLL);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x29u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Au,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
    *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  v6 = 0;
  if ( !v5 )
  {
    v7 = 0;
    v36 = 0;
    v8 = 0;
    if ( !*(_BYTE *)(v2 + 73) && ((unsigned int)DeviceTypeToRimInputType(v4) & *(_DWORD *)(v2 + 76)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v41, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
      {
        i = v34;
LABEL_23:
        if ( !v41[1] && v41[0] && (int)IsLeaveEditionCritSupported() >= 0 )
          LeaveEditionCrit();
        if ( v8 )
        {
          RIMLockExclusive(v2 + 96);
          if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          {
            if ( v43[7] || v43[8] )
              v6 = 1;
            RIMLockExclusive(v2 + 696);
            RIMSendLatencyMgtDeviceRequest(i, *(_QWORD *)(i + 456), v6);
            *(_QWORD *)(v2 + 704) = 0LL;
            ExReleasePushLockExclusiveEx(v2 + 696, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v7 )
            RIMSignalOnPnpNotificationAndWait(v2, i);
          *(_QWORD *)(v2 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v2 + 96, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(*(PVOID *)(i + 32));
          ObfDereferenceObject((PVOID)v2);
        }
        return 0LL;
      }
      RIMLockExclusive(v2 + 96);
      if ( *(_BYTE *)(v2 + 72) || *(_BYTE *)(v2 + 73) )
      {
LABEL_21:
        i = v34;
LABEL_22:
        *(_QWORD *)(v2 + 104) = 0LL;
        ExReleasePushLockExclusiveEx(v2 + 96, 0LL);
        KeLeaveCriticalRegion();
        v7 = v36;
        goto LABEL_23;
      }
      for ( i = *(_QWORD *)(v2 + 552); ; i = *(_QWORD *)(i + 40) )
      {
        v34 = i;
        if ( !i )
          goto LABEL_15;
        v10 = *(_DWORD *)(i + 184);
        if ( (v10 & 0x20) == 0
          && (v10 & 0x1000) == 0
          && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), (PCUNICODE_STRING)(i + 208), 0) )
        {
          break;
        }
      }
      if ( (*(_DWORD *)(i + 200) & 0x20) != 0 )
      {
        WPP_RECORDER_SF_Sdq(
          WPP_GLOBAL_Control->DeviceExtension,
          *((_QWORD *)NotificationStructure + 5),
          v11,
          v12,
          cData,
          *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
          *(_BYTE *)(i + 48),
          *(_QWORD *)(i + 248));
        if ( !*(_QWORD *)(i + 248)
          && hProvider > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          TlgCreateWsz(&pDesc, *(LPCWSTR *)(i + 216));
          v37 = RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48));
          v47 = &v37;
          v48 = 4LL;
          v22 = *(_QWORD *)(i + 248) == 0LL;
          v50 = 4LL;
          v38 = v22;
          v49 = &v38;
          v23 = __CFSHR__(*(_DWORD *)(i + 184), 7);
          v52 = 4LL;
          v39 = -v23;
          v51 = &v39;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016A6A4, 0LL, v24, 6u, &pData);
        }
        if ( *(_BYTE *)(i + 48) == 3 )
        {
          v35 = 0;
          v40 = 0;
          v42 = 0LL;
          WPP_RECORDER_SF_S(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x2Cu,
            (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
            *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
          if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(i + 456), v2, i, &v35, &v40, &v42) )
          {
            if ( v35 )
              WPP_RECORDER_SF_S(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                0x13u,
                0x2Du,
                (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
                *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
          }
        }
        goto LABEL_22;
      }
LABEL_15:
      v13 = *(_QWORD *)(v2 + 32);
      if ( v13 != PsGetCurrentProcess() )
      {
        if ( *(_BYTE *)(v2 + 9) )
        {
          DbgPrintRIMAlways(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n");
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v26,
            v27,
            46,
            (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
            *(_QWORD *)(v2 + 64),
            *(_QWORD *)(v2 + 32),
            *(_QWORD *)(v2 + 40),
            *(_DWORD *)(v2 + 76));
          v25 = -1073741823;
        }
        else
        {
          v25 = PsAcquireProcessExitSynchronization(v13);
          if ( v25 < 0 )
            goto LABEL_59;
          KeStackAttachProcess(*(PRKPROCESS *)(v2 + 32), &ApcState);
          LOBYTE(v6) = 1;
        }
        if ( v25 < 0 )
        {
          v6 = 0;
          goto LABEL_59;
        }
      }
      if ( i )
      {
        RIMLockExclusive(v2 + 696);
        if ( (*(_DWORD *)(i + 200) & 1) != 0 )
        {
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x2Fu,
            (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
        }
        else if ( W32GetThreadWin32Thread(KeGetCurrentThread(), v28, v29, v30) )
        {
          v31 = v34;
          *(_BYTE *)(v2 + 74) = 1;
          RIMFreeDev(v2, v31);
          *(_BYTE *)(v2 + 74) = 0;
        }
        else
        {
          *(_DWORD *)(i + 200) |= 2u;
        }
        v34 = 0LL;
        *(_QWORD *)(v2 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(v2 + 696, 0LL);
        KeLeaveCriticalRegion();
      }
      v14 = RIMCreateDev((PVOID)v2, v4, *((const UNICODE_STRING **)NotificationStructure + 5), 0, 0, 0LL, &v34);
      if ( (_BYTE)v6 )
      {
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(*(_QWORD *)(v2 + 32));
      }
      v6 = 0;
      if ( v14 < 0 )
      {
        v8 = 0;
        goto LABEL_21;
      }
      ApiSetGetPowerTransitionsState(v43);
      *(_DWORD *)(v34 + 184) |= 1u;
      i = v34;
      if ( *(struct _KTHREAD **)(v2 + 40) == KeGetCurrentThread() )
        v14 = RIMDoOnPnpNotification(v2, v34);
      else
        v36 = 1;
      if ( v14 >= 0 )
      {
        v8 = 1;
        v16 = ObReferenceObjectByPointer((PVOID)v2, 3u, ExRawInputManagerObjectType, 1);
        if ( v16 < 0 )
          WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v17, v18, 48, cDataa, v2, v16);
        v19 = ObReferenceObjectByPointer(*(PVOID *)(i + 32), 3u, ExRawInputManagerObjectType, 1);
        if ( v19 < 0 )
          WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v20, v21, 49, cDataa, v2, v19);
        goto LABEL_22;
      }
LABEL_59:
      v8 = 0;
      goto LABEL_22;
    }
  }
  return 0LL;
}
