/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C009FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C009D498 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C009EAD0 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C009F5A0 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00A9BD4 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  unsigned int Length; // r9d
  __m128i *Parameters; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  char *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  char v16; // r13
  int v17; // edi
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v18; // edi
  char *PoolWithTag; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v22; // r13d
  __int64 *v23; // rdi
  char *v24; // r13
  char v25; // r12
  int v26; // esi
  void *v27; // rcx
  bool v28; // al
  unsigned int v29; // r8d
  int v30; // edx
  DXGADAPTER *v31; // rcx
  unsigned int v32; // edx
  DXGADAPTER *v33; // rcx
  PIRP v34; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int CurrentProcessSessionId; // r12d
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  unsigned __int8 v54; // [rsp+30h] [rbp-38h] BYREF
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v55; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v57; // [rsp+40h] [rbp-28h]
  __m128i v58; // [rsp+48h] [rbp-20h] BYREF
  __int64 v59; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v61; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v62; // [rsp+C8h] [rbp+60h]

  Irp = a2;
  v59 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v57 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v51 = *(_QWORD *)(v10 + 24);
    LOBYTE(Length) = 1;
    v58 = *Parameters;
    v52 = DxgkPowerOnOffMonitor(
            v51,
            -1,
            (unsigned int)&v58,
            Length,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v58, 8).m128i_i64[0]);
    v7 = v52;
    if ( v52 >= 0 )
      goto LABEL_25;
LABEL_71:
    v53 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v53 + 24) = v7;
    WdLogEvent5_WdError(v53);
    goto LABEL_25;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301971 )
    goto LABEL_45;
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
        v48 = 0;
        if ( *(_BYTE *)(v10 + 1136) == 1 )
          v48 = 0x20000000;
        Parameters[2].m128i_i32[0] = v48;
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
        goto LABEL_41;
      }
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302007 )
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_25;
        if ( Length >= 8 && UserBuffer )
        {
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, 1);
          if ( (int)v7 >= 0 )
          {
            LODWORD(v7) = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                            *(DXGADAPTER **)(v10 + 3728),
                            *(_DWORD *)(v4 + 156),
                            (unsigned int *)&v59,
                            &v61);
            DpiReleaseCoreSyncAccessSafe(a1, 1);
            if ( (int)v7 < 0 )
            {
              v41 = WdLogNewEntry5_WdWarning(v38, v37, v39);
              *(_QWORD *)(v41 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v41);
            }
            else
            {
              v40 = v61 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v59;
              *((_BYTE *)UserBuffer + 4) = v40;
            }
          }
          goto LABEL_25;
        }
LABEL_41:
        LODWORD(v7) = -1073741789;
        goto LABEL_25;
      }
LABEL_45:
      LODWORD(v7) = 0;
      goto LABEL_25;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_41;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v47 = *(_DWORD *)(v4 + 192);
      if ( v47 == -1 || v47 == CurrentProcessSessionId )
      {
        if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536)) >= 0 )
        {
          *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
LABEL_58:
          Parameters->m128i_i32[1] = 1;
          goto LABEL_45;
        }
LABEL_44:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_45;
      }
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536));
      if ( *(_DWORD *)(v4 + 192) == CurrentProcessSessionId )
      {
        *(_DWORD *)(v4 + 192) = -1;
        goto LABEL_58;
      }
    }
    v42 = WdLogNewEntry5_WdWarning(v44, v43, v45);
    *(_QWORD *)(v42 + 24) = v7;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_44;
  }
  v55 = D3DKMDT_VOT_HD15;
  v12 = 0LL;
  LOBYTE(v61) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_71;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2536),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v49 = WdLogNewEntry5_WdError(0x80000000LL);
    *(_QWORD *)(v49 + 24) = v7;
    WdLogEvent5_WdError(v49);
LABEL_66:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_25;
  }
  v16 = v61;
  v17 = *(_DWORD *)(v10 + 3496);
  LOBYTE(v62) = v61;
  v18 = ((_BYTE)v61 != D3DDDI_VSSLO_UNINITIALIZED ? v55 : 0) + v17;
  if ( v18 == D3DKMDT_VOT_HD15 )
    goto LABEL_24;
  Size = (unsigned int)(20 * (v18 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  v58.m128i_i64[0] = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v50 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v50 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v50);
    goto LABEL_66;
  }
  memset(PoolWithTag, 0, Size);
  if ( v16 )
  {
    v21 = *(_DWORD *)(v4 + 156);
    v55 = v18;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView((struct _LUID *)(v10 + 2536), v21, (__int64)v12);
    if ( (int)v7 < 0 )
    {
LABEL_65:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_66;
    }
    v22 = v55;
    LOBYTE(v62) = v61;
  }
  else
  {
    v22 = D3DKMDT_VOT_HD15;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3168;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3168), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v59, 0);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_65;
  }
  v23 = *(__int64 **)(v10 + 3480);
  v24 = &v12[20 * v22];
  if ( !*(_DWORD *)(v10 + 3496) )
    goto LABEL_23;
  v25 = v62;
  v26 = 0;
  while ( *v23 != *(_QWORD *)(v10 + 3480) )
  {
    if ( *((_DWORD *)v23 + 124) != 1 || *((_BYTE *)v23 + 510) != 1 )
      goto LABEL_21;
    v27 = *(void **)(v10 + 3728);
    v62 = *((_DWORD *)v23 + 126);
    DmmGetVideoOutputTechnology(v27, v62, &v55, 0LL);
    v28 = IsInternalVideoOutput(v55);
    v29 = v62;
    v24[16] = v28;
    v30 = *(_DWORD *)(v4 + 156);
    v31 = *(DXGADAPTER **)(v10 + 3728);
    v54 = 0;
    DmmIsPresentPathInClientVidPnTopology(v31, v30, v29, (bool *)&v54);
    if ( !v54 )
    {
      if ( !*((_BYTE *)v23 + 944) )
        goto LABEL_21;
      v32 = *(_DWORD *)(v4 + 156);
      v33 = *(DXGADAPTER **)(v10 + 3728);
      LOBYTE(v61) = 0;
      if ( (int)DmmCanAddPresentPathToClientVidPn(v33, v32, v62, (unsigned __int8 *)&v61) < 0 || !(_BYTE)v61 )
        goto LABEL_21;
      v36 = 0;
      goto LABEL_28;
    }
    if ( v25 )
    {
      v36 = 1;
LABEL_28:
      *(_DWORD *)v24 = v36 | 0x20000000;
      *((_DWORD *)v24 + 1) = v62;
      *((_QWORD *)v24 + 1) = *(_QWORD *)(v10 + 2536);
      v24 += 20;
    }
LABEL_21:
    v23 = (__int64 *)*v23;
    if ( (unsigned int)++v26 >= *(_DWORD *)(v10 + 3496) )
      break;
  }
  UserBuffer = v57;
  v12 = (char *)v58.m128i_i64[0];
LABEL_23:
  DpiReleaseCoreSyncAccessSafe(v59, 0);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_24:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_25:
  v34 = Irp;
  Irp->IoStatus.Status = v7;
  v34->IoStatus.Information = v5;
  IofCompleteRequest(v34, 1);
  return (unsigned int)v7;
}
