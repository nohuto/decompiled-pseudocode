/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C0114BE0
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00A6BA0 (DpiSessionCreateCallback.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0042224 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DxgkFinishPnPTransition @ 0x1C011B454 (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C011B794 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011BF88 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiPnpEnableVga @ 0x1C012220C (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C0122FF4 (DpiPnpNotifyGdi.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01C6500 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01C66BC (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C01CDF24 (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(WCHAR *StartContext)
{
  unsigned int v1; // r14d
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  bool v8; // si
  char v9; // r13
  PVOID v10; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // ecx
  _QWORD *v17; // r15
  __int64 v18; // rsi
  bool v19; // bl
  char *v20; // rcx
  unsigned int v21; // edx
  struct _DEVICE_OBJECT *v22; // rcx
  int v23; // eax
  char v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // r14d
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  ULONG v32; // r12d
  PVOID PoolWithTag; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _DEVICE_OBJECT *v40; // rcx
  unsigned int Timeout; // [rsp+28h] [rbp-99h]
  PVOID Data; // [rsp+30h] [rbp-91h]
  bool v43; // [rsp+48h] [rbp-79h]
  bool v44; // [rsp+49h] [rbp-78h] BYREF
  char v45; // [rsp+4Ah] [rbp-77h]
  char v46; // [rsp+4Bh] [rbp-76h]
  unsigned int v47; // [rsp+4Ch] [rbp-75h]
  PVOID P; // [rsp+50h] [rbp-71h]
  unsigned int v49; // [rsp+58h] [rbp-69h]
  unsigned int started; // [rsp+5Ch] [rbp-65h]
  void *v51; // [rsp+60h] [rbp-61h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-51h] BYREF
  ULONG Type; // [rsp+80h] [rbp-41h] BYREF
  void *v55; // [rsp+88h] [rbp-39h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v57[8]; // [rsp+A8h] [rbp-19h] BYREF

  memset(v57, 0, sizeof(v57));
  EtwActivityIdControl(3u, (LPGUID)&v57[1]);
  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v43 = 0;
  LODWORD(v7) = 0;
  v45 = 0;
  v8 = 0;
  v57[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v57[3]) = 7;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( StartContext )
  {
    v27 = *(_DWORD *)StartContext;
    v10 = StartContext;
    v28 = *(_DWORD *)StartContext;
    P = StartContext;
    v1 = v28 >> 1;
    LOBYTE(v1) = v1 & 1;
    v9 = v27 & 1;
    v29 = v27 & 4;
    v47 = v1;
    v8 = v29 != 0;
    v43 = v29 != 0;
    if ( !v29 )
      goto LABEL_4;
    StartContext[261] = 0;
    RtlInitUnicodeString(&DestinationString, StartContext + 2);
    v43 = v8;
  }
  else
  {
    v9 = 1;
    LOBYTE(v1) = 1;
    v10 = 0LL;
  }
  v47 = v1;
LABEL_4:
  if ( byte_1C006F9DA )
  {
    v30 = WdLogNewEntry5_WdEvent(v6);
    *(_QWORD *)(v30 + 24) = 0LL;
    WdLogEvent5_WdEvent(v30);
    goto LABEL_48;
  }
  Global = DXGGLOBAL::GetGlobal(v6, v5, v3, v4);
  started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 73));
  if ( (_BYTE)v1 )
  {
    _InterlockedCompareExchange(&dword_1C006FCB0, 5, 4);
    LOBYTE(v12) = 1;
    DpiPnpEnableVga(0LL, v12, 0LL, v57);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C006FC08 )
  {
    v31 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v31 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v31);
  }
  if ( v9 )
  {
    byte_1C006FA30 = 1;
    DpiAcquirePostDisplayInfoFromBgfx(&dword_1C006FC10);
    dword_1C006FCFC = 1;
    if ( qword_1C006FC08 )
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(qword_1C006FC08 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C006FC08 + 64) + 48LL),
        &dword_1C006FC10);
    dword_1C006FCB0 = 1;
  }
  else if ( (_BYTE)v1 && (unsigned int)(dword_1C006FCB0 - 4) <= 1 )
  {
    DpiDisableMsBddFallbackDriver(v57);
  }
  v15 = (_QWORD *)qword_1C006F9F8;
  v16 = (unsigned __int8)v1 ^ 1;
  v49 = v16;
  do
  {
    v17 = v15;
    v46 = v16 == 0;
    if ( (_QWORD *)*v15 == v15 )
      goto LABEL_41;
    do
    {
      if ( v8 )
      {
        if ( !*((_BYTE *)v17 + 134) )
          goto LABEL_39;
      }
      else if ( *((_BYTE *)v17 + 134) )
      {
        goto LABEL_39;
      }
      KeWaitForSingleObject(v17 + 9, Executive, 0, 0, 0LL);
      v18 = v17[7];
      if ( *(_QWORD *)v18 != v18 )
      {
        do
        {
          if ( *(_DWORD *)(v18 + 16) != 1953656900 || *(_DWORD *)(v18 + 20) != 4 )
          {
            if ( !v43 )
            {
              v19 = 1;
LABEL_22:
              KeEnterCriticalRegion();
              if ( *(_BYTE *)(v18 + 483) )
                DpiCheckForOutstandingD3Requests(v18);
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 168), 1u);
              if ( v46 == *(_BYTE *)(v18 + 1136)
                && *(_DWORD *)(v18 + 236) == 1
                && !*(_BYTE *)(v18 + 232)
                && (!v43 || v19) )
              {
                v44 = 0;
                v20 = 0LL;
                v21 = 0;
                if ( P && *((_DWORD *)P + 131) )
                {
                  v20 = (char *)P + 528;
                  v21 = *((_DWORD *)P + 131);
                }
                Data = v20;
                v22 = *(struct _DEVICE_OBJECT **)(v18 + 24);
                Timeout = v21;
                LOBYTE(v21) = v9;
                if ( *(_DWORD *)(v18 + 504) )
                  v23 = DpiLdaStartAdapterInChain(
                          (_DWORD)v22,
                          v21,
                          (unsigned int)&v44,
                          (unsigned int)v57,
                          Timeout,
                          (__int64)Data);
                else
                  v23 = DpiFdoStartAdapter(
                          v22,
                          v9,
                          &v44,
                          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v57,
                          Timeout,
                          (__int64)Data);
                LODWORD(v7) = v23;
                if ( v23 != 1075708986 )
                {
                  if ( v23 < 0 )
                  {
                    v40 = *(struct _DEVICE_OBJECT **)(v18 + 152);
                    *(_BYTE *)(v18 + 232) = 1;
                    IoInvalidateDeviceState(v40);
                  }
                  else
                  {
                    v45 |= v44;
                  }
                }
              }
              if ( *(_BYTE *)(v18 + 483) )
                DpiEnableD3Requests(*(_QWORD *)(v18 + 24));
              ExReleaseResourceLite(*(PERESOURCE *)(v18 + 168));
              KeLeaveCriticalRegion();
              goto LABEL_37;
            }
            v32 = DestinationString.Length + 2;
            RequiredSize = 0;
            v51 = 0LL;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x74727044u);
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v51);
            v55 = 0LL;
            v51 = PoolWithTag;
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v55);
            if ( PoolWithTag )
            {
              DevicePropertyData = IoGetDevicePropertyData(
                                     *(PDEVICE_OBJECT *)(v18 + 152),
                                     &DEVPKEY_Device_InstanceId,
                                     0,
                                     0,
                                     v32,
                                     PoolWithTag,
                                     &RequiredSize,
                                     &Type);
              v7 = DevicePropertyData;
              if ( DevicePropertyData >= 0 )
              {
                RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
                v19 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v51);
                goto LABEL_22;
              }
              v36 = WdLogNewEntry5_WdError(v39, v38);
              *(_QWORD *)(v36 + 24) = v7;
            }
            else
            {
              LODWORD(v7) = -1073741801;
              v36 = WdLogNewEntry5_WdError(v35, v34);
            }
            WdLogEvent5_WdError(v36);
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v51);
          }
LABEL_37:
          v18 = *(_QWORD *)v18;
        }
        while ( *(_QWORD *)v18 != v17[7] );
      }
      KeReleaseMutex((PRKMUTEX)(v17 + 9), 0);
      v15 = (_QWORD *)qword_1C006F9F8;
      v8 = v43;
LABEL_39:
      v17 = (_QWORD *)*v17;
    }
    while ( (_QWORD *)*v17 != v15 );
    v16 = v49;
LABEL_41:
    v49 = ++v16;
  }
  while ( v16 < 2 );
  v24 = v47;
  if ( (_BYTE)v47 && (unsigned int)(dword_1C006FCB0 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v57);
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v45 == 1 )
  {
    LOBYTE(v25) = 1;
    DpiPnpNotifyGdi(0LL, v25, started, v57);
  }
  else if ( v24 )
  {
    LOBYTE(v25) = 1;
    LOBYTE(v26) = 1;
    DpiPnpEnableVga(v26, v25, started, v57);
  }
  else
  {
    DxgkFinishPnPTransition(0xFFFFFFFF);
  }
  v10 = P;
LABEL_48:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x74727044u);
  if ( !v9 )
    PsTerminateSystemThread(v7);
}
