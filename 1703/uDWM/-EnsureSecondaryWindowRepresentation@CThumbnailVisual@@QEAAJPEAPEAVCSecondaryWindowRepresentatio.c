/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180038DC0
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000DEB0 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180038664 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x18008470C (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x18008483C (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180013C7C (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003B07C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  unsigned int v2; // edi
  struct CSecondaryWindowRepresentation **v3; // rsi
  __int64 v7; // rcx
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HMONITOR v15; // rax
  enum DEVICE_SCALE_FACTOR v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CSecondaryWindowRepresentation **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 46);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v16 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v15 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v15, &v16);
    v9 = v16;
  }
  v10 = *((_QWORD *)this + 46);
  v11 = 0LL;
  if ( v10 )
    v12 = *(_DWORD *)(v10 + 36);
  else
    LOBYTE(v12) = 0;
  if ( (v12 & 1) != 0 )
  {
    v13 = *(_DWORD *)(v10 + 48) - *(_DWORD *)(v10 + 40);
    if ( v13 >= 0 )
      v11 = (unsigned int)v13;
  }
  v14 = CSecondaryWindowRepresentation::Create(
          (*(_DWORD *)(v10 + 77) != 0 ? 6 : 2) | (*(_BYTE *)(v10 + 32) != 0 ? 0x120 : 0) | ((*(_DWORD *)(v10 + 36) & 0x100000 | (*(_DWORD *)(v10 + 36) >> 1) & 0x400000u) >> 11),
          (char *)this + 360,
          *(_QWORD *)(v10 + 24),
          v11,
          v9,
          v3);
  v2 = v14;
  if ( v14 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x20Au);
  }
  return v2;
}
