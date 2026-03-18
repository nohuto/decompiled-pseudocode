/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00A9E90
 * Callers:
 *     <none>
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00A8418 (DxgkUseAdapterViewInCurrentSession.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00A8F6C (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmIsPresentPathInClientVidPnTopology @ 0x1C00AA714 (DmmIsPresentPathInClientVidPnTopology.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C00AB3C8 (DmmCanAddPresentPathToClientVidPn.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00F7D14 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  __int64 Length; // r9
  __m128i *Parameters; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  char *v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  __int64 v17; // rdx
  char v18; // r13
  int v19; // edi
  char *PoolWithTag; // rax
  __int64 v21; // rcx
  unsigned int v22; // r13d
  __int64 v23; // rax
  __int64 *v24; // r13
  char *v25; // rdi
  char v26; // r12
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  PIRP v32; // rcx
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int CurrentProcessSessionId; // r12d
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // [rsp+30h] [rbp-38h]
  unsigned int v56; // [rsp+30h] [rbp-38h]
  int v57; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v59; // [rsp+40h] [rbp-28h]
  __m128i v60; // [rsp+48h] [rbp-20h] BYREF
  __int64 v61; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  int v63; // [rsp+C0h] [rbp+58h] BYREF
  int v64; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v61 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v59 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v49 = *(_QWORD *)(v10 + 24);
    LOBYTE(Length) = 1;
    v60 = *Parameters;
    v50 = DxgkPowerOnOffMonitor(
            v49,
            -1,
            (unsigned int)&v60,
            Length,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v60, 8).m128i_i64[0]);
    v7 = v50;
    if ( v50 >= 0 )
      goto LABEL_29;
LABEL_72:
    v54 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v54 + 24) = v7;
    WdLogEvent5_WdError(v54);
    goto LABEL_29;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301971 )
    goto LABEL_49;
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301979;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1141);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v47 = 0;
        if ( *(_BYTE *)(v10 + 1136) == 1 )
          v47 = 0x20000000;
        Parameters[2].m128i_i32[0] = v47;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_29;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( (unsigned int)Length >= 0x18 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 24LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3704);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3704) + 268LL);
          goto LABEL_29;
        }
        goto LABEL_63;
      }
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302007 )
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_29;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(DXGADAPTER **)(v10 + 3704),
                                                         *(unsigned int *)(v4 + 156),
                                                         (unsigned int *)&v61,
                                                         &v63);
            LOBYTE(v35) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v35);
            if ( (int)v7 < 0 )
            {
              v48 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
              *(_QWORD *)(v48 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v48);
            }
            else
            {
              v40 = v63 == 1;
              *UserBuffer = v61;
              *((_BYTE *)UserBuffer + 4) = v40;
            }
          }
          goto LABEL_29;
        }
LABEL_63:
        LODWORD(v7) = -1073741789;
        goto LABEL_29;
      }
LABEL_49:
      LODWORD(v7) = 0;
      goto LABEL_29;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_63;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2,
                                CurrentStackLocation,
                                Length);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v46 = *(_DWORD *)(v4 + 192);
      if ( v46 != -1 && v46 != CurrentProcessSessionId )
        goto LABEL_65;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536), *(_DWORD *)(v4 + 156), 1) < 0 )
      {
LABEL_66:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_49;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536), *(_DWORD *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
LABEL_65:
        v51 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
        *(_QWORD *)(v51 + 24) = v7;
        WdLogEvent5_WdWarning(v51);
        goto LABEL_66;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
    goto LABEL_49;
  }
  v64 = 0;
  v12 = 0LL;
  LOBYTE(v63) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_72;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2536),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v52 = WdLogNewEntry5_WdError(0x80000000LL, v17);
    *(_QWORD *)(v52 + 24) = v7;
    WdLogEvent5_WdError(v52);
LABEL_69:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_29;
  }
  v18 = v63;
  v19 = *(_DWORD *)(v10 + 3472) + ((_BYTE)v63 != 0 ? v64 : 0);
  if ( !v19 )
    goto LABEL_28;
  Size = (unsigned int)(20 * (v19 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  v60.m128i_i64[0] = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v53 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v53 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v53);
    goto LABEL_69;
  }
  memset(PoolWithTag, 0, Size);
  if ( v18 )
  {
    v55 = v19;
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
    v22 = v55;
  }
  else
  {
    v22 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3144;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3144), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v61, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_68;
  }
  v23 = v22;
  v24 = *(__int64 **)(v10 + 3456);
  v25 = &v12[20 * v23];
  if ( !*(_DWORD *)(v10 + 3472) )
    goto LABEL_27;
  v26 = v63;
  v27 = 0;
  while ( *v24 != *(_QWORD *)(v10 + 3456) )
  {
    if ( *((_DWORD *)v24 + 124) != 1 || *((_BYTE *)v24 + 510) != 1 )
      goto LABEL_25;
    v56 = *((_DWORD *)v24 + 126);
    DmmGetVideoOutputTechnology(*(_QWORD *)(v10 + 3704), v56, &v57, 0LL);
    v25[16] = IsInternalVideoOutput(v57);
    v28 = *(unsigned int *)(v4 + 156);
    v29 = *(_QWORD *)(v10 + 3704);
    LOBYTE(v64) = 0;
    DmmIsPresentPathInClientVidPnTopology(v29, v28, v56, &v64);
    if ( !(_BYTE)v64 )
    {
      if ( !*((_BYTE *)v24 + 944) )
        goto LABEL_25;
      v30 = *(unsigned int *)(v4 + 156);
      v31 = *(_QWORD *)(v10 + 3704);
      LOBYTE(v63) = 0;
      if ( (int)DmmCanAddPresentPathToClientVidPn(v31, v30, v56, &v63) < 0 || !(_BYTE)v63 )
        goto LABEL_25;
      *(_DWORD *)v25 = 0;
      goto LABEL_24;
    }
    if ( v26 )
    {
      *(_DWORD *)v25 = 1;
LABEL_24:
      *(_DWORD *)v25 |= 0x20000000u;
      *((_DWORD *)v25 + 1) = v56;
      *((_QWORD *)v25 + 1) = *(_QWORD *)(v10 + 2536);
      v25 += 20;
    }
LABEL_25:
    v24 = (__int64 *)*v24;
    if ( (unsigned int)++v27 >= *(_DWORD *)(v10 + 3472) )
      break;
  }
  UserBuffer = v59;
  v12 = (char *)v60.m128i_i64[0];
LABEL_27:
  DpiReleaseCoreSyncAccessSafe(v61, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_28:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_29:
  v32 = Irp;
  Irp->IoStatus.Status = v7;
  v32->IoStatus.Information = v5;
  IofCompleteRequest(v32, 1);
  return (unsigned int)v7;
}
