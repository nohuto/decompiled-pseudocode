/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C011BC30
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00FA5A0 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C002E310 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C010E47C (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiPnpNotifyGdi @ 0x1C011C004 (DpiPnpNotifyGdi.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011C364 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiPnpEnableVga @ 0x1C011CCDC (DpiPnpEnableVga.c)
 *     DxgkFinishPnPTransition @ 0x1C0123684 (DxgkFinishPnPTransition.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01E062C (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01E07E8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C01E8334 (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(WCHAR *StartContext)
{
  unsigned int v1; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  NTSTATUS v7; // esi
  char v8; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // r15
  bool v15; // r14
  _DWORD *v16; // r12
  __int64 v17; // rsi
  bool v18; // bl
  char *v19; // rcx
  unsigned int v20; // edx
  struct _DEVICE_OBJECT *v21; // rcx
  signed int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // r14d
  int v27; // eax
  bool v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  PVOID PoolWithTag; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  struct _DEVICE_OBJECT *v38; // rcx
  unsigned int Timeout; // [rsp+28h] [rbp-A9h]
  PVOID Data; // [rsp+30h] [rbp-A1h]
  bool v41; // [rsp+48h] [rbp-89h]
  bool v42; // [rsp+49h] [rbp-88h] BYREF
  char v43; // [rsp+4Ah] [rbp-87h]
  char v44; // [rsp+4Bh] [rbp-86h]
  ULONG Size; // [rsp+4Ch] [rbp-85h]
  unsigned int v46; // [rsp+50h] [rbp-81h]
  unsigned int v47; // [rsp+54h] [rbp-7Dh]
  void *v48; // [rsp+58h] [rbp-79h] BYREF
  ULONG RequiredSize; // [rsp+60h] [rbp-71h] BYREF
  unsigned int started; // [rsp+64h] [rbp-6Dh]
  PVOID P; // [rsp+68h] [rbp-69h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-61h] BYREF
  ULONG Type; // [rsp+80h] [rbp-51h] BYREF
  void *v54; // [rsp+88h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v56[10]; // [rsp+A8h] [rbp-29h] BYREF

  memset(v56, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v56[1]);
  v7 = 0;
  Size = 0;
  P = 0LL;
  v41 = 0;
  v56[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v56[3]) = 7;
  LOBYTE(v56[6]) = -1;
  v43 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( StartContext )
  {
    v25 = *(_DWORD *)StartContext;
    v26 = *(_DWORD *)StartContext;
    P = StartContext;
    v1 = v26 >> 1;
    v8 = v25 & 1;
    LOBYTE(v1) = v1 & 1;
    v27 = v25 & 4;
    v46 = v1;
    v28 = v27 != 0;
    v4 = 0LL;
    v41 = v27 != 0;
    if ( v27 )
    {
      StartContext[261] = 0;
      RtlInitUnicodeString(&DestinationString, StartContext + 2);
      v46 = v1;
      v41 = v28;
    }
  }
  else
  {
    LOBYTE(v1) = 1;
    v8 = 1;
    v46 = v1;
  }
  if ( byte_1C006085A )
  {
    v29 = WdLogNewEntry5_WdEvent(v4, v3, v5, v6);
    *(_QWORD *)(v29 + 24) = 0LL;
    WdLogEvent5_WdEvent(v29);
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 73));
    v11 = started;
    if ( (_BYTE)v1 )
    {
      _InterlockedCompareExchange(&dword_1C0060B30, 5, 4);
      LOBYTE(v10) = 1;
      DpiPnpEnableVga(0LL, v10, 0LL, v56);
    }
    AcquireMiniportListMutex();
    if ( !qword_1C0060A88 )
    {
      v30 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v30 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v30);
    }
    if ( v8 )
    {
      byte_1C00608B0 = 1;
      DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0060A90);
      dword_1C0060B7C = 1;
      if ( qword_1C0060A88 )
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(qword_1C0060A88 + 64) + 976LL))(
          *(_QWORD *)(*(_QWORD *)(qword_1C0060A88 + 64) + 48LL),
          &dword_1C0060A90);
      dword_1C0060B30 = 1;
    }
    else if ( (_BYTE)v1 && (unsigned int)(dword_1C0060B30 - 4) <= 1 )
    {
      DpiDisableMsBddFallbackDriver(v56);
    }
    v13 = (unsigned __int8)v1 ^ 1;
    v47 = v13;
    if ( v13 < 2 )
    {
      while ( 1 )
      {
        v14 = qword_1C0060878;
        v44 = v13 == 0;
        if ( *(_QWORD *)v14 == v14 )
          goto LABEL_42;
        v15 = v41;
        v16 = P;
        do
        {
          if ( v15 )
          {
            if ( !*(_BYTE *)(v14 + 134) )
              goto LABEL_40;
          }
          else if ( *(_BYTE *)(v14 + 134) )
          {
            goto LABEL_40;
          }
          KeWaitForSingleObject((PVOID)(v14 + 72), Executive, 0, 0, 0LL);
          v17 = *(_QWORD *)(v14 + 56);
          if ( *(_QWORD *)v17 != v17 )
          {
            while ( 1 )
            {
              if ( *(_DWORD *)(v17 + 16) == 1953656900 && *(_DWORD *)(v17 + 20) == 4 )
                goto LABEL_38;
              if ( !v15 )
                break;
              RequiredSize = 0;
              Size = DestinationString.Length + 2;
              v48 = 0LL;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v48);
              v54 = 0LL;
              v48 = PoolWithTag;
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v54);
              if ( !PoolWithTag )
              {
                Size = -1073741801;
                v33 = WdLogNewEntry5_WdError(v32);
                WdLogEvent5_WdError(v33);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v48);
                goto LABEL_38;
              }
              DevicePropertyData = IoGetDevicePropertyData(
                                     *(PDEVICE_OBJECT *)(v17 + 152),
                                     &DEVPKEY_Device_InstanceId,
                                     0,
                                     0,
                                     Size,
                                     PoolWithTag,
                                     &RequiredSize,
                                     &Type);
              v36 = DevicePropertyData;
              Size = DevicePropertyData;
              if ( DevicePropertyData >= 0 )
              {
                RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
                v18 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v48);
                v15 = v41;
                goto LABEL_22;
              }
              v37 = WdLogNewEntry5_WdError(v35);
              *(_QWORD *)(v37 + 24) = v36;
              WdLogEvent5_WdError(v37);
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v48);
LABEL_37:
              v15 = v41;
LABEL_38:
              v17 = *(_QWORD *)v17;
              if ( *(_QWORD *)v17 == *(_QWORD *)(v14 + 56) )
                goto LABEL_39;
            }
            v18 = 1;
LABEL_22:
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v17 + 483) )
              DpiCheckForOutstandingD3Requests(v17);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 168), 1u);
            if ( v44 == *(_BYTE *)(v17 + 1136) && *(_DWORD *)(v17 + 236) == 1 && !*(_BYTE *)(v17 + 232) && (!v15 || v18) )
            {
              v42 = 0;
              v19 = 0LL;
              v20 = 0;
              if ( v16 && v16[131] )
              {
                v19 = (char *)(v16 + 132);
                v20 = v16[131];
              }
              Data = v19;
              v21 = *(struct _DEVICE_OBJECT **)(v17 + 24);
              Timeout = v20;
              LOBYTE(v20) = v8;
              if ( *(_DWORD *)(v17 + 504) )
                v22 = DpiLdaStartAdapterInChain(
                        (_DWORD)v21,
                        v20,
                        (unsigned int)&v42,
                        (unsigned int)v56,
                        Timeout,
                        (__int64)Data);
              else
                v22 = DpiFdoStartAdapter(
                        v21,
                        v8,
                        &v42,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v56,
                        Timeout,
                        (__int64)Data);
              Size = v22;
              if ( v22 != 1075708986 )
              {
                if ( v22 < 0 )
                {
                  v38 = *(struct _DEVICE_OBJECT **)(v17 + 152);
                  *(_BYTE *)(v17 + 232) = 1;
                  IoInvalidateDeviceState(v38);
                }
                else
                {
                  v43 |= v42;
                }
              }
            }
            if ( *(_BYTE *)(v17 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v17 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v17 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_37;
          }
LABEL_39:
          KeReleaseMutex((PRKMUTEX)(v14 + 72), 0);
LABEL_40:
          v14 = *(_QWORD *)v14;
        }
        while ( *(_QWORD *)v14 != qword_1C0060878 );
        v13 = v47;
LABEL_42:
        v47 = ++v13;
        if ( v13 >= 2 )
        {
          LOBYTE(v1) = v46;
          v7 = Size;
          v11 = started;
          break;
        }
      }
    }
    if ( (_BYTE)v1 && (unsigned int)(dword_1C0060B30 - 1) <= 1 )
      DpiEnableMsBddFallbackDriver(v56);
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( v43 == 1 )
    {
      LOBYTE(v23) = 1;
      DpiPnpNotifyGdi(0LL, v23, v11, v56);
    }
    else if ( (_BYTE)v1 )
    {
      LOBYTE(v23) = 1;
      LOBYTE(v24) = 1;
      DpiPnpEnableVga(v24, v23, v11, v56);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFF);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x74727044u);
  if ( !v8 )
    PsTerminateSystemThread(v7);
}
