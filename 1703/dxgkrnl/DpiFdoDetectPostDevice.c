/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C011BD40
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0102954 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C011BF64 (DpiDecodeResourceDescriptorLength.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011BF88 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  char v5; // r13
  void *v6; // r15
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  PIRP v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int *Information; // rbx
  unsigned int v17; // esi
  __int64 v18; // r14
  unsigned int *v19; // r12
  unsigned int *v20; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  void *Source1; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  const wchar_t *v38; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+C0h] [rbp-40h]
  _BYTE v45[40]; // [rsp+C8h] [rbp-38h] BYREF
  char v46[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v47; // [rsp+F4h] [rbp-Ch]
  int v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 64);
  v32 = a1;
  v4 = a1;
  v5 = 0;
  v6 = (void *)(v2 + 544);
  Source1 = (void *)(v2 + 544);
  if ( RtlCompareMemory((const void *)(v2 + 544), &DeviceObject.Dpc.DeferredRoutine, 0x10uLL) == 16
    || *(_BYTE *)(v2 + 2559) )
  {
LABEL_21:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v7 = DpiAcquirePostDisplayInfoFromBgfx(v46);
  v10 = v7;
  if ( v7 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v22 + 24) = v10;
    WdLogEvent5_WdError(v22);
LABEL_19:
    if ( RtlCompareMemory(v6, &DeviceObject.Dpc.DpcListEntry, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v31) = 0;
    v38 = L"DisableAutoAcpiPostDeivce";
    v36 = 0LL;
    v37 = 288;
    v39 = &v31;
    v41 = &v31;
    v40 = 67108868;
    v42 = 4;
    v43 = 0LL;
    v44 = 0;
    memset(v45, 0, sizeof(v45));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v36, 0LL, 0LL);
    if ( (_DWORD)v31 )
      return 0LL;
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = v4;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_21;
  }
  v31 = v49 + (unsigned int)(v48 * v47);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v11 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v2 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v11 )
  {
    v11->IoStatus.Status = -1073741637;
    v11->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v15) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 152), v11);
    if ( (_DWORD)v15 == 259 )
    {
      v25 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v25;
      if ( v25 )
      {
        v24 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v24 + 24) = v15;
LABEL_25:
        WdLogEvent5_WdError(v24);
        return (unsigned int)v15;
      }
      LODWORD(v15) = IoStatusBlock.Status;
    }
    if ( (int)v15 >= 0 )
    {
      Information = (unsigned int *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v17 = 0;
      do
      {
        if ( v17 >= *Information )
          break;
        v18 = 0LL;
        v19 = &Information[8 * v17 + 3 + v17];
        if ( v19[1] )
        {
          while ( 1 )
          {
            v20 = &v19[5 * v18];
            if ( ((*((_BYTE *)v20 + 8) - 3) & 0xFB) == 0
              && *(_QWORD *)(v20 + 3) <= v49
              && *(_QWORD *)(v20 + 3) + DpiDecodeResourceDescriptorLength(v20 + 2) >= v31 )
            {
              break;
            }
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v19[1] )
              goto LABEL_17;
          }
          *a2 = 1;
          v5 = 1;
        }
LABEL_17:
        ++v17;
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      v4 = v32;
      v6 = Source1;
      goto LABEL_19;
    }
    if ( (_DWORD)v15 == -1073741637 )
      return 0LL;
    v24 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v24 + 24) = *(_QWORD *)(v2 + 152);
    *(_QWORD *)(v24 + 32) = (int)v15;
    goto LABEL_25;
  }
  v23 = WdLogNewEntry5_WdLowResource(v12);
  LODWORD(v15) = -1073741670;
  *(_QWORD *)(v23 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v23);
  return (unsigned int)v15;
}
