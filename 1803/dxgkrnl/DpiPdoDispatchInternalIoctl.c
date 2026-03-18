/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C0109360
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0108D84 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0109E60 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0109EBC (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoSetDevicePower @ 0x1C020DAF8 (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  struct DXGMONITOR *VideoOutputTechnology; // rdi
  _QWORD *UserBuffer; // r14
  __int64 v7; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 Length; // rcx
  unsigned int Options; // edx
  __int64 LowPart; // r12
  unsigned int *p_NamedPipeType; // r15
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _FAST_MUTEX *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  struct _ERESOURCE *v24; // rcx
  unsigned __int64 Information; // rbx
  int v26; // eax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  void *v42; // [rsp+28h] [rbp-70h]
  unsigned __int64 v43[11]; // [rsp+40h] [rbp-58h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v44; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v45; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+18h]
  struct DXGMONITOR *v47; // [rsp+B8h] [rbp+20h] BYREF

  v46 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  v43[0] = 0LL;
  UserBuffer = a2->UserBuffer;
  v13 = *(_DWORD *)(v4 + 496) == 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v44 = CurrentStackLocation->Parameters.Read.Length;
  v45 = Options;
  if ( !v13 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(Length);
    v28[3] = -1073741637LL;
    v28[4] = *(int *)(v4 + 496);
    v28[5] = LowPart;
LABEL_35:
    WdLogEvent5_WdError(v28);
    goto LABEL_36;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
LABEL_30:
        v26 = DpiPdoHandleOpmIoctls(a1, a2);
        Information = a2->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v26;
        goto LABEL_31;
      case 0x232407:
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_36;
            *UserBuffer = *(_QWORD *)(v7 + 3728);
            UserBuffer[1] = *(_QWORD *)(v7 + 2536);
            *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v4 + 504);
            *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v4 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v4 + 936) + 66LL);
            *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 28LL) >= 0x7006u);
            VideoOutputTechnology = (struct DXGMONITOR *)(int)DmmGetVideoOutputTechnology(
                                                                *(DXGADAPTER **)(v7 + 3728),
                                                                *(_DWORD *)(v4 + 504),
                                                                &v44,
                                                                0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              Information = 40LL;
              *((_DWORD *)UserBuffer + 5) = v44;
              LODWORD(VideoOutputTechnology) = 0;
              goto LABEL_31;
            }
            v29 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v29 + 24) = VideoOutputTechnology;
            goto LABEL_34;
          }
          goto LABEL_45;
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
            goto LABEL_36;
          }
          goto LABEL_45;
        }
        break;
      case 0x232437:
LABEL_36:
        Information = v46;
        goto LABEL_31;
      case 0x232443:
        if ( !*(_QWORD *)(v7 + 2864) )
          goto LABEL_36;
        if ( p_NamedPipeType )
        {
          if ( Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_36;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3728), 1);
              VideoOutputTechnology = (struct DXGMONITOR *)(*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 2864))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3728));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_36;
              goto LABEL_52;
            }
            break;
          }
          goto LABEL_45;
        }
        break;
      case 0x232447:
        if ( !*(_QWORD *)(v7 + 2872) )
          goto LABEL_36;
        if ( p_NamedPipeType )
        {
          if ( Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_36;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3728), 1);
              v42 = UserBuffer;
              v30 = v44;
              VideoOutputTechnology = (struct DXGMONITOR *)(*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))(v7 + 2872))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             v44,
                                                             v42);
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3728));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 3728));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = (unsigned int)v30;
                goto LABEL_31;
              }
LABEL_52:
              v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
              *(_QWORD *)(v34 + 24) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v34);
              goto LABEL_36;
            }
            break;
          }
LABEL_45:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v29 = WdLogNewEntry5_WdError(Length);
          *(_QWORD *)(v29 + 24) = -1073741789LL;
          goto LABEL_34;
        }
        break;
      default:
        v13 = (_DWORD)LowPart == 2303107;
        v14 = LowPart - 2303107;
        goto LABEL_10;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v29 = WdLogNewEntry5_WdError(Length);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
LABEL_34:
    v28 = (_QWORD *)v29;
    goto LABEL_35;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131 )
  {
    goto LABEL_30;
  }
  v14 = LowPart - 2303135;
  v13 = (_DWORD)LowPart == 2303135;
LABEL_10:
  if ( v13 || v14 == 4 )
    goto LABEL_30;
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_36;
  VideoOutputTechnology = *(struct DXGMONITOR **)(v7 + 3728);
  if ( !VideoOutputTechnology || (v18 = *(unsigned int *)(v4 + 504), (_DWORD)v18 == -1) )
  {
    LODWORD(VideoOutputTechnology) = -1073741811;
    goto LABEL_71;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(VideoOutputTechnology) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v36);
  }
  v20 = *((_QWORD *)VideoOutputTechnology + 307);
  if ( !v20 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v37);
    v20 = *((_QWORD *)VideoOutputTechnology + 307);
  }
  v21 = *(struct _FAST_MUTEX **)(v20 + 96);
  if ( !v21 )
  {
    v38 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v38 + 24) = VideoOutputTechnology;
    WdLogEvent5_WdError(v38);
    Information = v46;
    LODWORD(VideoOutputTechnology) = -1073741811;
LABEL_75:
    v41 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v41 + 24) = (int)VideoOutputTechnology;
    goto LABEL_76;
  }
  v47 = 0LL;
  LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v21, v18, 1, &v47);
  if ( (int)VideoOutputTechnology < 0 )
  {
    v39 = WdLogNewEntry5_WdDmmEvent(v22);
    *(_QWORD *)(v39 + 24) = v18;
    *(_QWORD *)(v39 + 32) = v21;
    WdLogEvent5_WdDmmEvent(v39);
LABEL_71:
    Information = v46;
    goto LABEL_24;
  }
  VideoOutputTechnology = v47;
  if ( !v47 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v40);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)VideoOutputTechnology + 296), 1u);
  v23 = DXGMONITOR::_DispatchInternalIOCtrl(
          VideoOutputTechnology,
          (unsigned int)LowPart,
          v45,
          p_NamedPipeType,
          v44,
          UserBuffer,
          v43);
  v24 = (struct _ERESOURCE *)((char *)VideoOutputTechnology + 296);
  LODWORD(VideoOutputTechnology) = v23;
  ExReleaseResourceLite(v24);
  KeLeaveCriticalRegion();
  Information = v43[0];
LABEL_24:
  if ( (_DWORD)VideoOutputTechnology != -1073741637 )
  {
    if ( (int)VideoOutputTechnology >= 0
      || (_DWORD)VideoOutputTechnology == -1073741789
      || (_DWORD)VideoOutputTechnology == -2147483643 )
    {
      goto LABEL_26;
    }
    goto LABEL_75;
  }
  v41 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v41 + 24) = -1073741637LL;
LABEL_76:
  WdLogEvent5_WdWarning(v41);
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_31:
  a2->IoStatus.Status = (int)VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
