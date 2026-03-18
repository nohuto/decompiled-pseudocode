/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C00B9E40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00D7D88 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00FDC00 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00FDC5C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x1C0101AA0 (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  struct DXGMONITOR *VideoOutputTechnology; // rdi
  _DWORD *UserBuffer; // r15
  __int64 v7; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 Length; // rcx
  unsigned int Options; // edx
  __int64 LowPart; // rbp
  unsigned int *p_NamedPipeType; // r14
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // rcx
  struct _FAST_MUTEX *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  struct _ERESOURCE *v23; // rcx
  unsigned __int64 Information; // rbx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  void *v41; // [rsp+28h] [rbp-70h]
  unsigned __int64 v42[11]; // [rsp+40h] [rbp-58h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v43; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v45; // [rsp+B0h] [rbp+18h]
  struct DXGMONITOR *v46; // [rsp+B8h] [rbp+20h] BYREF

  v45 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  v42[0] = 0LL;
  UserBuffer = a2->UserBuffer;
  v13 = *(_DWORD *)(v4 + 496) == 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v43 = CurrentStackLocation->Parameters.Read.Length;
  v44 = Options;
  if ( !v13 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(Length);
    v29[3] = -1073741637LL;
    v29[4] = *(int *)(v4 + 496);
    v29[5] = LowPart;
LABEL_47:
    WdLogEvent5_WdError(v29);
    goto LABEL_43;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_37;
      case 0x232407:
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x18 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_43;
            *(_QWORD *)UserBuffer = *(_QWORD *)(v7 + 3728);
            UserBuffer[2] = *(_DWORD *)(v4 + 504);
            UserBuffer[4] = *(_DWORD *)(*(_QWORD *)(v4 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 20) = *(_BYTE *)(*(_QWORD *)(v4 + 936) + 66LL);
            VideoOutputTechnology = (struct DXGMONITOR *)(int)DmmGetVideoOutputTechnology(
                                                                *(DXGADAPTER **)(v7 + 3728),
                                                                *(_DWORD *)(v4 + 504),
                                                                &v43,
                                                                0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              Information = 24LL;
              UserBuffer[3] = v43;
              LODWORD(VideoOutputTechnology) = 0;
              goto LABEL_28;
            }
            v30 = WdLogNewEntry5_WdError(v26);
            *(_QWORD *)(v30 + 24) = VideoOutputTechnology;
            goto LABEL_46;
          }
          goto LABEL_57;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v4 + 483) )
              DpiCheckForOutstandingD3Requests(v4);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v4 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_43;
          }
          goto LABEL_57;
        }
        break;
      case 0x232437:
        goto LABEL_43;
      case 0x232443:
        if ( byte_1C0060852 == 1 || !*(_QWORD *)(v7 + 2864) )
          goto LABEL_43;
        if ( p_NamedPipeType )
        {
          if ( Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_43;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3728), 1LL);
              VideoOutputTechnology = (struct DXGMONITOR *)(*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 2864))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3728));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_43;
              goto LABEL_65;
            }
            break;
          }
          goto LABEL_57;
        }
        break;
      case 0x232447:
        if ( byte_1C0060852 == 1 || !*(_QWORD *)(v7 + 2872) )
          goto LABEL_43;
        if ( p_NamedPipeType )
        {
          if ( Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_43;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3728), 1LL);
              v41 = UserBuffer;
              v31 = v43;
              VideoOutputTechnology = (struct DXGMONITOR *)(*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))(v7 + 2872))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             v43,
                                                             v41);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3728));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = (unsigned int)v31;
                goto LABEL_28;
              }
LABEL_65:
              v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
              *(_QWORD *)(v35 + 24) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v35);
              goto LABEL_43;
            }
            break;
          }
LABEL_57:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v30 = WdLogNewEntry5_WdError(Length);
          *(_QWORD *)(v30 + 24) = -1073741789LL;
          goto LABEL_46;
        }
        break;
      default:
        v13 = (_DWORD)LowPart == 2303107;
        v14 = LowPart - 2303107;
        goto LABEL_10;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v30 = WdLogNewEntry5_WdError(Length);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
LABEL_46:
    v29 = (_QWORD *)v30;
    goto LABEL_47;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131 )
  {
LABEL_37:
    if ( byte_1C0060852 != 1 )
    {
      v27 = DpiPdoHandleOpmIoctls(a1, a2);
      Information = a2->IoStatus.Information;
      LODWORD(VideoOutputTechnology) = v27;
      goto LABEL_28;
    }
LABEL_43:
    Information = v45;
    goto LABEL_28;
  }
  v14 = LowPart - 2303135;
  v13 = (_DWORD)LowPart == 2303135;
LABEL_10:
  if ( v13 || v14 == 4 )
    goto LABEL_37;
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_43;
  VideoOutputTechnology = *(struct DXGMONITOR **)(v7 + 3728);
  if ( !VideoOutputTechnology || (v18 = *(unsigned int *)(v4 + 504), (_DWORD)v18 == -1) )
  {
    LODWORD(VideoOutputTechnology) = -1073741811;
    goto LABEL_79;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(VideoOutputTechnology) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !*((_QWORD *)VideoOutputTechnology + 288) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v37);
  }
  v20 = *(struct _FAST_MUTEX **)(*((_QWORD *)VideoOutputTechnology + 288) + 96LL);
  if ( !v20 )
  {
    v38 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v38 + 24) = VideoOutputTechnology;
    WdLogEvent5_WdError(v38);
    Information = v45;
    LODWORD(VideoOutputTechnology) = -1073741811;
LABEL_42:
    v28 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v28 + 24) = (int)VideoOutputTechnology;
    goto LABEL_40;
  }
  v46 = 0LL;
  LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v20, v18, 1, (ULONG **)&v46);
  if ( (int)VideoOutputTechnology < 0 )
  {
    v39 = WdLogNewEntry5_WdDmmEvent(v21);
    *(_QWORD *)(v39 + 24) = v18;
    *(_QWORD *)(v39 + 32) = v20;
    WdLogEvent5_WdDmmEvent(v39);
LABEL_79:
    Information = v45;
    goto LABEL_24;
  }
  VideoOutputTechnology = v46;
  if ( !v46 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v40);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)VideoOutputTechnology + 280), 1u);
  v22 = DXGMONITOR::_DispatchInternalIOCtrl(VideoOutputTechnology, LowPart, v44, p_NamedPipeType, v43, UserBuffer, v42);
  v23 = (struct _ERESOURCE *)((char *)VideoOutputTechnology + 280);
  LODWORD(VideoOutputTechnology) = v22;
  ExReleaseResourceLite(v23);
  KeLeaveCriticalRegion();
  Information = v42[0];
LABEL_24:
  if ( (_DWORD)VideoOutputTechnology != -1073741637 )
  {
    if ( (int)VideoOutputTechnology >= 0
      || (_DWORD)VideoOutputTechnology == -2147483643
      || (_DWORD)VideoOutputTechnology == -1073741789 )
    {
      goto LABEL_27;
    }
    goto LABEL_42;
  }
  v28 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v28 + 24) = -1073741637LL;
LABEL_40:
  WdLogEvent5_WdWarning(v28);
LABEL_27:
  DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_28:
  a2->IoStatus.Status = (int)VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
