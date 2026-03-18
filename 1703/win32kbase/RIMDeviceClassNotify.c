/*
 * XREFs of RIMDeviceClassNotify @ 0x1C010F110
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     RIMFindInputDeviceForConfig @ 0x1C00077B0 (RIMFindInputDeviceForConfig.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ApiSetIsRemoteConnection @ 0x1C0051DB0 (ApiSetIsRemoteConnection.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0051E4C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     DeviceTypeToRimInputType @ 0x1C0093CB0 (DeviceTypeToRimInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     WPP_RECORDER_SF_S @ 0x1C0094FDC (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00E6EB8 (WPP_RECORDER_SF_qD.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00FF3CC (WPP_RECORDER_SF_qqqD.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010F970 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C0110520 (WPP_RECORDER_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, _DWORD *Context)
{
  __int64 v2; // rsi
  unsigned int v4; // r13d
  char v5; // r15
  int v6; // ebx
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rdi
  int v13; // eax
  bool v14; // zf
  bool v15; // cf
  LPCGUID v16; // r9
  const void *v17; // rbx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ebx
  NTSTATUS v23; // eax
  int cData; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  char v34[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  BOOL *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]

  v2 = *(_QWORD *)Context;
  v4 = Context[2];
  LOBYTE(Context) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)Context,
    19,
    41,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Au,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
    *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  if ( *(_OWORD *)(NotificationStructure + 4) != *(_OWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL )
    return 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(v2 + 73) || ((unsigned int)DeviceTypeToRimInputType(v4) & *(_DWORD *)(v2 + 76)) == 0 )
    return 0LL;
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v34, 1, 1u);
  if ( !(unsigned int)ApiSetIsRemoteConnection() )
  {
    RIMLockExclusive(v2 + 96);
    if ( !*(_BYTE *)(v2 + 72) && !*(_BYTE *)(v2 + 73) )
    {
      for ( i = *(_QWORD *)(v2 + 552); ; i = *(_QWORD *)(i + 40) )
      {
        v27 = i;
        if ( !i )
          goto LABEL_22;
        v13 = *(_DWORD *)(i + 184);
        if ( (v13 & 0x20) == 0
          && (v13 & 0x1000) == 0
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
          v10,
          v11,
          cData,
          *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
          *(_BYTE *)(i + 48),
          *(_QWORD *)(i + 248));
        if ( !*(_QWORD *)(i + 248)
          && dword_1C0186860 > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x400000000000uLL) )
        {
          TlgCreateWsz(&pDesc, *(LPCWSTR *)(i + 216));
          v29 = RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48));
          v38 = &v29;
          v39 = 4LL;
          v14 = *(_QWORD *)(i + 248) == 0LL;
          v41 = 4LL;
          v30 = v14;
          v40 = &v30;
          v15 = __CFSHR__(*(_DWORD *)(i + 184), 7);
          v43 = 4LL;
          v31 = -v15;
          v42 = &v31;
          TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A54D, 0LL, v16, 6u, &pData);
        }
        if ( *(_BYTE *)(i + 48) == 3 )
        {
          v28 = 0;
          v32 = 0;
          v33 = 0LL;
          WPP_RECORDER_SF_S(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x2Cu,
            (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
            *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
          if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(i + 456), v2, i, &v28, &v32, &v33) )
          {
            if ( v28 )
              WPP_RECORDER_SF_S(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                0x13u,
                0x2Du,
                (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
                *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
          }
        }
        goto LABEL_41;
      }
LABEL_22:
      v17 = *(const void **)(v2 + 32);
      if ( v17 != (const void *)PsGetCurrentProcess(v9, v8, v10, v11) )
      {
        if ( *(_BYTE *)(v2 + 9) )
        {
          DbgPrintRIMAlways(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n",
            *(const void **)(v2 + 64),
            v17,
            *(const void **)(v2 + 40),
            *(_DWORD *)(v2 + 76));
          WPP_RECORDER_SF_qqqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v19,
            v20,
            0x2Eu,
            (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
            *(_QWORD *)(v2 + 64),
            *(_QWORD *)(v2 + 32),
            *(_QWORD *)(v2 + 40),
            *(_DWORD *)(v2 + 76));
          v18 = -1073741823;
        }
        else
        {
          v18 = PsAcquireProcessExitSynchronization(v17);
          if ( v18 < 0 )
            goto LABEL_40;
          KeStackAttachProcess(*(PRKPROCESS *)(v2 + 32), &ApcState);
          v5 = 1;
        }
        if ( v18 < 0 )
          goto LABEL_40;
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
            (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
            i);
        }
        else if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        {
          v21 = v27;
          *(_BYTE *)(v2 + 74) = 1;
          RIMFreeDev(v2, v21);
          *(_BYTE *)(v2 + 74) = 0;
        }
        else
        {
          *(_DWORD *)(i + 200) |= 2u;
        }
        v27 = 0LL;
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v2 + 696));
      }
      v22 = RIMCreateDev(
              (PWSTR *)v2,
              v4,
              *((_QWORD *)NotificationStructure + 5),
              0LL,
              0,
              0LL,
              (struct _UNICODE_STRING **)&v27);
      if ( v5 )
      {
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(*(_QWORD *)(v2 + 32));
      }
      if ( v22 >= 0 )
      {
        *(_DWORD *)(v27 + 184) |= 1u;
        if ( *(struct _KTHREAD **)(v2 + 40) == KeGetCurrentThread() )
        {
          i = v27;
          RIMDoOnPnpNotification(v2, v27);
        }
        else
        {
          v23 = ObReferenceObjectByPointer((PVOID)v2, 3u, ExRawInputManagerObjectType, 1);
          if ( v23 >= 0 )
          {
            i = v27;
            v6 = 1;
            if ( ObReferenceObjectByPointer(*(PVOID *)(v27 + 32), 3u, ExRawInputManagerObjectType, 1) >= 0 )
              v7 = 1;
            goto LABEL_41;
          }
          LODWORD(v26) = v23;
          WPP_RECORDER_SF_qD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x30u,
            (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
            v2,
            v26);
          i = v27;
        }
LABEL_40:
        v6 = 0;
        goto LABEL_41;
      }
      v6 = 0;
    }
    i = v27;
LABEL_41:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v2 + 96));
    goto LABEL_49;
  }
  i = v27;
LABEL_49:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v34);
  if ( v6 )
  {
    RIMLockExclusive(v2 + 96);
    RIMSignalOnPnpNotificationAndWait(v2, i);
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v2 + 96));
    if ( v7 )
      ObfDereferenceObject(*(PVOID *)(i + 32));
    ObfDereferenceObject((PVOID)v2);
  }
  return 0LL;
}
