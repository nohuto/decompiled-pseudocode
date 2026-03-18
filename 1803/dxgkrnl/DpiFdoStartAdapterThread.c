/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C01FA590
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C01F0304 (DpiSessionCreateCallback.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0041554 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01D0B5C (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DxgkFinishPnPTransition @ 0x1C01D1058 (DxgkFinishPnPTransition.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01FC9CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01FD140 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01FD2B4 (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x1C01FDF14 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C01FE050 (DpiPnpNotifyGdi.c)
 *     DpiLdaStartAdapterInChain @ 0x1C0209958 (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(WCHAR *StartContext)
{
  unsigned int v1; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r13
  char v6; // si
  unsigned int v7; // eax
  int v8; // eax
  bool v9; // r15
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // r15
  bool v18; // bl
  _DWORD *v19; // r12
  char v20; // al
  __int64 v21; // rsi
  ULONG v22; // r13d
  PVOID PoolWithTag; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v27; // rcx
  bool v28; // bl
  char *v29; // rcx
  unsigned int v30; // edx
  struct _DEVICE_OBJECT *v31; // rcx
  int v32; // eax
  struct _DEVICE_OBJECT *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int Timeout; // [rsp+20h] [rbp-108h]
  PVOID Data; // [rsp+28h] [rbp-100h]
  bool v38; // [rsp+40h] [rbp-E8h]
  char v39; // [rsp+41h] [rbp-E7h]
  bool v40; // [rsp+42h] [rbp-E6h] BYREF
  char v41; // [rsp+43h] [rbp-E5h]
  char v42; // [rsp+44h] [rbp-E4h]
  unsigned int v43; // [rsp+48h] [rbp-E0h]
  unsigned int v44; // [rsp+4Ch] [rbp-DCh]
  void *v45; // [rsp+50h] [rbp-D8h] BYREF
  ULONG RequiredSize; // [rsp+58h] [rbp-D0h] BYREF
  unsigned int started; // [rsp+5Ch] [rbp-CCh]
  PVOID P; // [rsp+60h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-C0h] BYREF
  ULONG Type; // [rsp+78h] [rbp-B0h] BYREF
  void *v51; // [rsp+80h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-A0h] BYREF
  _QWORD v53[10]; // [rsp+A0h] [rbp-88h] BYREF

  memset(v53, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v53[1]);
  LODWORD(v5) = 0;
  P = 0LL;
  v38 = 0;
  v41 = 0;
  v53[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v53[3]) = 7;
  LOBYTE(v53[6]) = -1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( StartContext )
  {
    v7 = *(_DWORD *)StartContext;
    v6 = *(_DWORD *)StartContext & 1;
    P = StartContext;
    v39 = v6;
    v1 = v7 >> 1;
    LOBYTE(v1) = (v7 & 2) != 0;
    v8 = v7 & 4;
    v43 = v1;
    v9 = v8 != 0;
    v4 = 0LL;
    v38 = v8 != 0;
    if ( v8 )
    {
      StartContext[261] = 0;
      RtlInitUnicodeString(&DestinationString, StartContext + 2);
      v39 = v6;
      v43 = v1;
      v38 = v9;
    }
  }
  else
  {
    LOBYTE(v1) = 1;
    v39 = 1;
    v43 = v1;
    v6 = 1;
  }
  if ( byte_1C007A75A )
  {
    v10 = WdLogNewEntry5_WdEvent(v4, v3);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdEvent(v10);
    goto LABEL_71;
  }
  Global = DXGGLOBAL::GetGlobal(v4);
  started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 74));
  v13 = started;
  if ( (_BYTE)v1 )
  {
    _InterlockedCompareExchange(&dword_1C007AA88, 5, 4);
    LOBYTE(v12) = 1;
    DpiPnpEnableVga(0LL, v12, 0LL, v53);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C007A9E0 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v15);
  }
  if ( v6 )
  {
    byte_1C007A7B0 = 1;
    DpiAcquirePostDisplayInfoFromBgfx(&dword_1C007A9E8);
    dword_1C007AAD4 = 1;
    if ( qword_1C007A9E0 )
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(qword_1C007A9E0 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C007A9E0 + 64) + 48LL),
        &dword_1C007A9E8);
    dword_1C007AA88 = 1;
  }
  else if ( (_BYTE)v1 && (unsigned int)(dword_1C007AA88 - 4) <= 1 )
  {
    DpiDisableMsBddFallbackDriver(v53);
  }
  v16 = (unsigned __int8)v1 ^ 1;
  v44 = v16;
  if ( v16 < 2 )
  {
    while ( 1 )
    {
      v17 = qword_1C007A778;
      v42 = v16 == 0;
      if ( *(_QWORD *)v17 == v17 )
        goto LABEL_61;
      v18 = v38;
      v19 = P;
      do
      {
        v20 = *(_BYTE *)(v17 + 134);
        if ( v18 )
        {
          if ( !v20 )
            goto LABEL_59;
        }
        else if ( v20 )
        {
          goto LABEL_59;
        }
        KeWaitForSingleObject((PVOID)(v17 + 72), Executive, 0, 0, 0LL);
        v21 = *(_QWORD *)(v17 + 56);
        if ( *(_QWORD *)v21 != v21 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v21 + 16) == 1953656900 && *(_DWORD *)(v21 + 20) == 4 )
              goto LABEL_57;
            if ( !v18 )
              break;
            v22 = DestinationString.Length + 2;
            RequiredSize = 0;
            v45 = 0LL;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x74727044u);
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
            v45 = PoolWithTag;
            v51 = 0LL;
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v51);
            if ( PoolWithTag )
            {
              DevicePropertyData = IoGetDevicePropertyData(
                                     *(PDEVICE_OBJECT *)(v21 + 152),
                                     &DEVPKEY_Device_InstanceId,
                                     0,
                                     0,
                                     v22,
                                     PoolWithTag,
                                     &RequiredSize,
                                     &Type);
              v5 = DevicePropertyData;
              if ( DevicePropertyData >= 0 )
              {
                RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
                v28 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
LABEL_36:
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v21 + 483) )
                  DpiCheckForOutstandingD3Requests(v21);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 168), 1u);
                if ( v42 == *(_BYTE *)(v21 + 1136)
                  && *(_DWORD *)(v21 + 236) == 1
                  && !*(_BYTE *)(v21 + 232)
                  && (!v38 || v28) )
                {
                  v40 = 0;
                  v29 = 0LL;
                  v30 = 0;
                  if ( v19 && v19[131] )
                  {
                    v29 = (char *)(v19 + 132);
                    v30 = v19[131];
                  }
                  Data = v29;
                  v31 = *(struct _DEVICE_OBJECT **)(v21 + 24);
                  Timeout = v30;
                  LOBYTE(v30) = v39;
                  if ( *(_DWORD *)(v21 + 504) )
                    v32 = DpiLdaStartAdapterInChain(
                            (_DWORD)v31,
                            v30,
                            (unsigned int)&v40,
                            (unsigned int)v53,
                            Timeout,
                            (__int64)Data);
                  else
                    v32 = DpiFdoStartAdapter(
                            v31,
                            v39,
                            &v40,
                            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v53,
                            Timeout,
                            (__int64)Data);
                  LODWORD(v5) = v32;
                  if ( v32 != 1075708986 )
                  {
                    if ( v32 < 0 )
                    {
                      v33 = *(struct _DEVICE_OBJECT **)(v21 + 152);
                      *(_BYTE *)(v21 + 232) = 1;
                      IoInvalidateDeviceState(v33);
                    }
                    else
                    {
                      v41 |= v40;
                    }
                  }
                }
                if ( *(_BYTE *)(v21 + 483) )
                  DpiEnableD3Requests(*(_QWORD *)(v21 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v21 + 168));
                KeLeaveCriticalRegion();
                goto LABEL_56;
              }
              v25 = WdLogNewEntry5_WdError(v27);
              *(_QWORD *)(v25 + 24) = v5;
            }
            else
            {
              LODWORD(v5) = -1073741801;
              v25 = WdLogNewEntry5_WdError(v24);
            }
            WdLogEvent5_WdError(v25);
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
LABEL_56:
            v18 = v38;
LABEL_57:
            v21 = *(_QWORD *)v21;
            if ( *(_QWORD *)v21 == *(_QWORD *)(v17 + 56) )
              goto LABEL_58;
          }
          v28 = 1;
          goto LABEL_36;
        }
LABEL_58:
        KeReleaseMutex((PRKMUTEX)(v17 + 72), 0);
LABEL_59:
        v17 = *(_QWORD *)v17;
      }
      while ( *(_QWORD *)v17 != qword_1C007A778 );
      v16 = v44;
LABEL_61:
      v44 = ++v16;
      if ( v16 >= 2 )
      {
        LOBYTE(v1) = v43;
        v6 = v39;
        v13 = started;
        break;
      }
    }
  }
  if ( (_BYTE)v1 && (unsigned int)(dword_1C007AA88 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v53);
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( v41 == 1 )
  {
    LOBYTE(v34) = 1;
    DpiPnpNotifyGdi(0LL, v34, v13, v53);
  }
  else if ( (_BYTE)v1 )
  {
    LOBYTE(v34) = 1;
    LOBYTE(v35) = 1;
    DpiPnpEnableVga(v35, v34, v13, v53);
  }
  else
  {
    DxgkFinishPnPTransition(0xFFFFFFFFLL);
  }
LABEL_71:
  if ( P )
    ExFreePoolWithTag(P, 0x74727044u);
  if ( !v6 )
    PsTerminateSystemThread(v5);
}
