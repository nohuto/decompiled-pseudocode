/*
 * XREFs of ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801B7C60
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18002B910 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18002BA64 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     McTemplateU0dddd @ 0x1801B8450 (McTemplateU0dddd.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyLeftToRightBuffer(struct tagPOINT a1, float *a2, float *a3)
{
  CHwDisplayRenderTarget *v3; // r14
  signed int v4; // ebx
  HRGN v5; // r12
  struct _RGNDATA *v6; // rdi
  HRGN v7; // rsi
  char *p_rect; // r13
  DWORD nCount; // r15d
  signed int LastError; // eax
  DWORD v11; // edx
  unsigned int v12; // ecx
  DWORD v13; // r8d
  signed int v14; // eax
  DWORD v15; // edx
  unsigned int v16; // ecx
  DWORD v17; // r8d
  int v18; // eax
  unsigned int *v19; // r8
  signed int v20; // eax
  signed int v21; // eax
  int v22; // r14d
  int v23; // edi
  _DWORD *v24; // r14
  struct tagPOINT v25; // r12
  __int64 v26; // rbx
  struct CD3DSurface *v27; // r9
  _DWORD *v28; // r13
  struct CD3DSurface *v29; // rdx
  CD3DDeviceLevel1 *v30; // rcx
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  unsigned int v36; // [rsp+28h] [rbp-39h]
  signed int v38; // [rsp+40h] [rbp-21h]
  struct tagPOINT v39; // [rsp+48h] [rbp-19h] BYREF
  struct _RGNDATA *v40; // [rsp+50h] [rbp-11h] BYREF
  HRGN v41; // [rsp+58h] [rbp-9h]
  float *v42; // [rsp+60h] [rbp-1h]
  RECT rect; // [rsp+68h] [rbp+7h] BYREF
  RECT v44; // [rsp+78h] [rbp+17h] BYREF

  v3 = (CHwDisplayRenderTarget *)(*(_QWORD *)&a1 - 560LL);
  v39 = a1;
  v4 = 0;
  v42 = a3;
  v5 = 0LL;
  v6 = 0LL;
  v38 = 0;
  v41 = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  p_rect = 0LL;
  nCount = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)(*(_QWORD *)&a1 - 560LL)) < 0
    || !CHwDisplayRenderTarget::RectToSurfaceRect(v3, a2, (__int64)&rect) )
  {
    return (unsigned int)v4;
  }
  if ( !CHwDisplayRenderTarget::RectToSurfaceRect(v3, v42, (__int64)&v44) )
  {
    p_rect = (char *)&rect;
    nCount = 1;
    goto LABEL_28;
  }
  SetLastError(0);
  v7 = CreateRectRgnIndirect(&rect);
  if ( !v7 )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v12, v11, v13);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xFEu);
    return (unsigned int)v4;
  }
  SetLastError(0);
  v41 = CreateRectRgnIndirect(&v44);
  v5 = v41;
  if ( v41 )
  {
    SetLastError(0);
    v18 = CombineRgn(v7, v7, v41, 4);
    if ( !v18 )
    {
      v20 = GetLastError();
      v4 = v20;
      if ( v20 > 0 )
        v4 = (unsigned __int16)v20 | 0x80070000;
      v36 = 260;
      if ( v4 >= 0 )
        v4 = -2003304445;
      goto LABEL_16;
    }
    if ( v18 != 1 )
    {
      v21 = HrgnToRgnData(v7, &v40, v19);
      v38 = v21;
      v4 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x108u);
        v6 = v40;
        goto LABEL_38;
      }
      v6 = v40;
      nCount = v40->rdh.nCount;
      p_rect = v40->Buffer;
    }
LABEL_28:
    v22 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Start,
        *(_QWORD *)(*(_QWORD *)&v39 + 40LL));
    if ( nCount )
    {
      v23 = 0;
      v24 = p_rect + 4;
      v25 = v39;
      v26 = nCount;
      do
      {
        v27 = *(struct CD3DSurface **)(*(_QWORD *)&v25 + 24LL);
        v28 = v24 - 1;
        v29 = *(struct CD3DSurface **)(*(_QWORD *)&v25 + 16LL);
        v30 = *(CD3DDeviceLevel1 **)(*(_QWORD *)&v25 - 360LL);
        v39 = *(struct tagPOINT *)(v24 - 1);
        CD3DDeviceLevel1::CopySurfaceRect(v30, v29, (const struct tagRECT *)(v24 - 1), v27, &v39);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0dddd(v32, v31, *v28, *v24, v24[1], v24[2]);
        v33 = v24[2] - *v24;
        v34 = v24[1];
        v24 += 4;
        v23 += (v34 - *v28) * v33;
        --v26;
      }
      while ( v26 );
      v4 = v38;
      v5 = v41;
      v22 = v23;
      v6 = v40;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Stop,
        nCount,
        v22);
    goto LABEL_38;
  }
  v14 = GetLastError();
  v4 = v14;
  if ( v14 > 0 )
    v4 = (unsigned __int16)v14 | 0x80070000;
  if ( v4 >= 0 )
    v4 = CheckGUIHandleQuota(v16, v15, v17);
  v36 = 255;
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v36);
LABEL_38:
  if ( v7 )
    DeleteObject(v7);
  if ( v5 )
    DeleteObject(v5);
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  return (unsigned int)v4;
}
