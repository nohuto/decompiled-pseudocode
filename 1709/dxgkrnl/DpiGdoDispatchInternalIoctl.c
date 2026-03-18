/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00B80B0
 * Callers:
 *     <none>
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00AFCD0 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C00B8950 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00B9838 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C00BA16C (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BA360 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  unsigned int Length; // r9d
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  char *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  __int64 v16; // rcx
  char v17; // r13
  int v18; // edi
  char *PoolWithTag; // rax
  __int64 v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 *v23; // r13
  char *v24; // rdi
  char v25; // r12
  int v26; // esi
  unsigned int v27; // edx
  void *v28; // rcx
  PIRP v29; // rcx
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  unsigned int v37; // edx
  void *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int CurrentProcessSessionId; // r12d
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // [rsp+30h] [rbp-38h]
  unsigned int v54; // [rsp+30h] [rbp-38h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v55; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v57; // [rsp+40h] [rbp-28h]
  int v58[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v59; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v61; // [rsp+C0h] [rbp+58h] BYREF
  int v62; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v59 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v57 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v46 = *(_QWORD *)(v10 + 24);
    LOBYTE(Length) = 1;
    *(_OWORD *)v58 = *(_OWORD *)&Parameters->NamedPipeType;
    v47 = DxgkPowerOnOffMonitor(v46, -1, (int)v58, Length, _mm_srli_si128(*(__m128i *)v58, 8).m128i_u32[0]);
    v7 = v47;
    if ( v47 >= 0 )
      goto LABEL_25;
LABEL_72:
    v52 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v52 + 24) = v7;
    WdLogEvent5_WdError(v52);
    goto LABEL_25;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301971 )
    goto LABEL_49;
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301979;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = *(_QWORD *)&Parameters->NamedPipeType;
      Parameters->InboundQuota = *(unsigned __int8 *)(v10 + 1141);
      Parameters->DefaultTimeout.QuadPart = *(_QWORD *)(v10 + 152);
      *(_DWORD *)&Parameters->TimeoutSpecified = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v45 = 0;
        if ( *(_BYTE *)(v10 + 1136) == 1 )
          v45 = 0x20000000;
        *(_DWORD *)&Parameters->TimeoutSpecified = v45;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_25;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( Length >= 0x18 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 24LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3728);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3728) + 268LL);
          goto LABEL_25;
        }
        goto LABEL_63;
      }
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302007 )
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_25;
        if ( Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(void **)(v10 + 3728),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v59,
                                                         &v61);
            LOBYTE(v32) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v32);
            if ( (int)v7 < 0 )
            {
              v44 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v44 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v44);
            }
            else
            {
              v36 = v61 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v59;
              *((_BYTE *)UserBuffer + 4) = v36;
            }
          }
          goto LABEL_25;
        }
LABEL_63:
        LODWORD(v7) = -1073741789;
        goto LABEL_25;
      }
LABEL_49:
      LODWORD(v7) = 0;
      goto LABEL_25;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_63;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995);
    if ( Parameters->NamedPipeType == 1 )
    {
      v43 = *(_DWORD *)(v4 + 192);
      if ( v43 != -1 && v43 != CurrentProcessSessionId )
        goto LABEL_65;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536)) < 0 )
      {
LABEL_66:
        Parameters->ReadMode = 0;
        goto LABEL_49;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536));
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
LABEL_65:
        v48 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v48 + 24) = v7;
        WdLogEvent5_WdWarning(v48);
        goto LABEL_66;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->ReadMode = 1;
    goto LABEL_49;
  }
  v62 = 0;
  v12 = 0LL;
  LOBYTE(v61) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_72;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2536),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v16 = 0x80000000LL;
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v49 = WdLogNewEntry5_WdError(0x80000000LL);
    *(_QWORD *)(v49 + 24) = v7;
    WdLogEvent5_WdError(v49);
LABEL_69:
    DxgkReleaseSessionModeChangeLock(v50);
    goto LABEL_25;
  }
  v17 = v61;
  v18 = *(_DWORD *)(v10 + 3496) + ((_BYTE)v61 != D3DDDI_VSSLO_UNINITIALIZED ? v62 : 0);
  if ( !v18 )
    goto LABEL_24;
  Size = (unsigned int)(20 * (v18 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  *(_QWORD *)v58 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v51 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v51 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v51);
    goto LABEL_69;
  }
  memset(PoolWithTag, 0, Size);
  if ( v17 )
  {
    v53 = v18;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v10 + 2536),
                    *(_DWORD *)(v4 + 156),
                    (__int64)v12);
    if ( (int)v7 < 0 )
    {
LABEL_68:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_69;
    }
    v21 = v53;
  }
  else
  {
    v21 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3168;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3168), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v59, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_68;
  }
  v22 = v21;
  v23 = *(__int64 **)(v10 + 3480);
  v24 = &v12[20 * v22];
  if ( !*(_DWORD *)(v10 + 3496) )
    goto LABEL_23;
  v25 = v61;
  v26 = 0;
  while ( *v23 != *(_QWORD *)(v10 + 3480) )
  {
    if ( *((_DWORD *)v23 + 124) != 1 || *((_BYTE *)v23 + 510) != 1 )
      goto LABEL_21;
    v54 = *((_DWORD *)v23 + 126);
    DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v10 + 3728), v54, &v55, 0LL);
    v24[16] = IsInternalVideoOutput(v55);
    v27 = *(_DWORD *)(v4 + 156);
    v28 = *(void **)(v10 + 3728);
    LOBYTE(v62) = 0;
    DmmIsPresentPathInClientVidPnTopology(v28, v27, v54, (unsigned __int8 *)&v62);
    if ( !(_BYTE)v62 )
    {
      if ( !*((_BYTE *)v23 + 944) )
        goto LABEL_21;
      v37 = *(_DWORD *)(v4 + 156);
      v38 = *(void **)(v10 + 3728);
      LOBYTE(v61) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v38, v37, v54, (unsigned __int8 *)&v61) < 0 || !(_BYTE)v61 )
        goto LABEL_21;
      *(_DWORD *)v24 = 0;
      goto LABEL_20;
    }
    if ( v25 )
    {
      *(_DWORD *)v24 = 1;
LABEL_20:
      *(_DWORD *)v24 |= 0x20000000u;
      *((_DWORD *)v24 + 1) = v54;
      *((_QWORD *)v24 + 1) = *(_QWORD *)(v10 + 2536);
      v24 += 20;
    }
LABEL_21:
    v23 = (__int64 *)*v23;
    if ( (unsigned int)++v26 >= *(_DWORD *)(v10 + 3496) )
      break;
  }
  UserBuffer = v57;
  v12 = *(char **)v58;
LABEL_23:
  DpiReleaseCoreSyncAccessSafe(v59, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_24:
  DxgkReleaseSessionModeChangeLock(v16);
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_25:
  v29 = Irp;
  Irp->IoStatus.Status = v7;
  v29->IoStatus.Information = v5;
  IofCompleteRequest(v29, 1);
  return (unsigned int)v7;
}
