/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C00A86E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     MonitorHandleInternalIOCtrl @ 0x1C00A85BC (MonitorHandleInternalIOCtrl.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     DpiPdoSetDevicePower @ 0x1C0102D24 (DpiPdoSetDevicePower.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01748A4 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0174EA4 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01CFA78 (DpiPdoHandleOpmIoctls.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  unsigned __int64 Information; // r12
  __int64 VideoOutputTechnology; // rbx
  _DWORD *UserBuffer; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 Length; // rcx
  __int64 Options; // rdx
  __int64 LowPart; // rbp
  unsigned int *p_NamedPipeType; // r14
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbp
  __int64 v34; // rax
  int v35; // eax
  _DWORD *v36; // [rsp+28h] [rbp-60h]
  ULONG v37; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+98h] [rbp+10h]
  __int64 v39; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v40; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  Information = 0LL;
  v40 = 0LL;
  LODWORD(VideoOutputTechnology) = -1073741637;
  v13 = *(_DWORD *)(v2 + 496) == 1;
  UserBuffer = a2->UserBuffer;
  v39 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v37 = CurrentStackLocation->Parameters.Read.Length;
  v38 = Options;
  if ( !v13 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(Length, Options);
    v25[3] = -1073741637LL;
    v25[4] = *(int *)(v2 + 496);
    v25[5] = LowPart;
LABEL_30:
    WdLogEvent5_WdError(v25);
    goto LABEL_17;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_62;
      case 0x232407:
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x18 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_17;
            v21 = v39;
            *(_QWORD *)UserBuffer = *(_QWORD *)(v39 + 3704);
            UserBuffer[2] = *(_DWORD *)(v2 + 504);
            UserBuffer[4] = *(_DWORD *)(*(_QWORD *)(v2 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 20) = *(_BYTE *)(*(_QWORD *)(v2 + 936) + 66LL);
            VideoOutputTechnology = (int)DmmGetVideoOutputTechnology(
                                           *(_QWORD *)(v21 + 3704),
                                           *(unsigned int *)(v2 + 504),
                                           &v37,
                                           0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0LL);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              LODWORD(VideoOutputTechnology) = 0;
              UserBuffer[3] = v37;
              Information = 24LL;
              goto LABEL_17;
            }
            v26 = WdLogNewEntry5_WdError(v23, v22);
            *(_QWORD *)(v26 + 24) = VideoOutputTechnology;
            goto LABEL_29;
          }
          goto LABEL_55;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v2 + 483) )
              DpiCheckForOutstandingD3Requests(v2);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v2 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_17;
          }
          goto LABEL_55;
        }
        break;
      case 0x232437:
        goto LABEL_17;
      case 0x232443:
        if ( byte_1C006F9D2 == 1 )
          goto LABEL_17;
        v33 = v39;
        if ( !*(_QWORD *)(v39 + 2848) )
          goto LABEL_17;
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_17;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v33 + 3704));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v33 + 3704), 1LL);
              VideoOutputTechnology = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v33 + 2848))(
                                        *(_QWORD *)(v2 + 48),
                                        *(unsigned int *)(v2 + 504),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v33 + 3704));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v33 + 3704));
              DpiReleaseCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_17;
LABEL_47:
              v34 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
              *(_QWORD *)(v34 + 24) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v34);
              goto LABEL_17;
            }
            break;
          }
          goto LABEL_55;
        }
        break;
      case 0x232447:
        if ( byte_1C006F9D2 == 1 )
          goto LABEL_17;
        v27 = v39;
        if ( !*(_QWORD *)(v39 + 2856) )
          goto LABEL_17;
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_17;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v27 + 3704));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v27 + 3704), 1LL);
              v36 = UserBuffer;
              v28 = v37;
              VideoOutputTechnology = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, ULONG, _DWORD *))(v27 + 2856))(
                                        *(_QWORD *)(v2 + 48),
                                        *(unsigned int *)(v2 + 504),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        v37,
                                        v36);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v27 + 3704));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v27 + 3704));
              DpiReleaseCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = v28;
                goto LABEL_17;
              }
              goto LABEL_47;
            }
            break;
          }
LABEL_55:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v26 = WdLogNewEntry5_WdError(Length, Options);
          *(_QWORD *)(v26 + 24) = -1073741789LL;
          goto LABEL_29;
        }
        break;
      default:
        v13 = (_DWORD)LowPart == 2303107;
        v14 = LowPart - 2303107;
        goto LABEL_10;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v26 = WdLogNewEntry5_WdError(Length, Options);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
LABEL_29:
    v25 = (_QWORD *)v26;
    goto LABEL_30;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131 )
  {
LABEL_62:
    if ( byte_1C006F9D2 != 1 )
    {
      v35 = DpiPdoHandleOpmIoctls(a1, a2);
      Information = a2->IoStatus.Information;
      LODWORD(VideoOutputTechnology) = v35;
    }
    goto LABEL_17;
  }
  v14 = LowPart - 2303135;
  v13 = (_DWORD)LowPart == 2303135;
LABEL_10:
  if ( v13 || v14 == 4 )
    goto LABEL_62;
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
  if ( (int)VideoOutputTechnology >= 0 )
  {
    v15 = MonitorHandleInternalIOCtrl(
            *(DXGADAPTER **)(v39 + 3704),
            *(_DWORD *)(v2 + 504),
            LowPart,
            v38,
            p_NamedPipeType,
            v37,
            UserBuffer,
            &v40);
    VideoOutputTechnology = v15;
    if ( v15 == -1073741637 )
    {
      v24 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v24 + 24) = -1073741637LL;
    }
    else
    {
      if ( v15 >= 0 || v15 == -2147483643 || v15 == -1073741789 )
        goto LABEL_16;
      v24 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v24 + 24) = VideoOutputTechnology;
    }
    WdLogEvent5_WdWarning(v24);
LABEL_16:
    DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    Information = v40;
  }
LABEL_17:
  a2->IoStatus.Status = VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
