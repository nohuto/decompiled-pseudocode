/*
 * XREFs of ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801A01C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180039EAC (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180039F00 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180077A48 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     Template_dddd @ 0x1801A0890 (Template_dddd.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyLeftToRightBuffer(struct tagPOINT a1, __int64 a2, float *a3)
{
  CHwDisplayRenderTarget *v3; // r13
  HRGN v4; // r12
  struct _RGNDATA *v5; // rdi
  int v6; // ebx
  HRGN v7; // rsi
  char *p_rect; // r14
  DWORD nCount; // r15d
  __int64 v10; // rcx
  signed int LastError; // eax
  DWORD v12; // edx
  unsigned int v13; // ecx
  DWORD v14; // r8d
  signed int v15; // eax
  DWORD v16; // edx
  unsigned int v17; // ecx
  DWORD v18; // r8d
  int v19; // eax
  unsigned int *v20; // r8
  signed int v21; // eax
  int v22; // eax
  int v23; // r13d
  struct tagPOINT v24; // rdi
  _DWORD *v25; // r14
  __int64 v26; // r12
  struct CD3DSurface *v27; // r9
  struct CD3DSurface *v28; // rdx
  CD3DDeviceLevel1 *v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  unsigned int v35; // [rsp+20h] [rbp-60h]
  struct tagPOINT v36; // [rsp+30h] [rbp-50h] BYREF
  struct _RGNDATA *v37; // [rsp+38h] [rbp-48h] BYREF
  HRGN v38; // [rsp+40h] [rbp-40h]
  float *v39; // [rsp+48h] [rbp-38h]
  RECT v40; // [rsp+50h] [rbp-30h] BYREF
  RECT rect; // [rsp+60h] [rbp-20h] BYREF

  v3 = (CHwDisplayRenderTarget *)(*(_QWORD *)&a1 - 368LL);
  v36 = a1;
  v4 = 0LL;
  v39 = a3;
  v5 = 0LL;
  *(_QWORD *)&v40.left = a2;
  v38 = 0LL;
  v6 = 0;
  v37 = 0LL;
  v7 = 0LL;
  p_rect = 0LL;
  nCount = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)(*(_QWORD *)&a1 - 368LL)) < 0
    || !CHwDisplayRenderTarget::RectToSurfaceRect(v3, *(float **)&v40.left, (__int64)&rect) )
  {
    return (unsigned int)v6;
  }
  if ( !CHwDisplayRenderTarget::RectToSurfaceRect(v3, v39, (__int64)&v40) )
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
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = CheckGUIHandleQuota(v13, v12, v14);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE1u);
    return (unsigned int)v6;
  }
  SetLastError(0);
  v38 = CreateRectRgnIndirect(&v40);
  v4 = v38;
  if ( v38 )
  {
    SetLastError(0);
    v19 = CombineRgn(v7, v7, v38, 4);
    if ( !v19 )
    {
      v21 = GetLastError();
      v6 = v21;
      if ( v21 > 0 )
        v6 = (unsigned __int16)v21 | 0x80070000;
      v35 = 231;
      if ( v6 >= 0 )
        v6 = -2003304445;
      goto LABEL_16;
    }
    if ( v19 != 1 )
    {
      v22 = HrgnToRgnData(v7, &v37, v20);
      v6 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xEBu);
        v5 = v37;
        goto LABEL_38;
      }
      v5 = v37;
      nCount = v37->rdh.nCount;
      p_rect = v37->Buffer;
    }
LABEL_28:
    v23 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v10, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Start, *(_QWORD *)(*(_QWORD *)&v36 + 40LL));
    if ( nCount )
    {
      v24 = v36;
      v25 = p_rect + 4;
      v26 = nCount;
      do
      {
        v27 = *(struct CD3DSurface **)(*(_QWORD *)&v24 + 24LL);
        v28 = *(struct CD3DSurface **)(*(_QWORD *)&v24 + 16LL);
        v29 = *(CD3DDeviceLevel1 **)(*(_QWORD *)&v24 - 184LL);
        v36 = *(struct tagPOINT *)(v25 - 1);
        CD3DDeviceLevel1::CopySurfaceRect(v29, v28, (const struct tagRECT *)(v25 - 1), v27, &v36);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_dddd(v31, v30, *(v25 - 1), *v25, v25[1], v25[2]);
        v32 = v25[2] - *v25;
        v33 = v25[1] - *(v25 - 1);
        v25 += 4;
        v10 = (unsigned int)(v33 * v32);
        v23 += v10;
        --v26;
      }
      while ( v26 );
      v5 = v37;
      v4 = v38;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v10, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Stop, nCount, v23);
    goto LABEL_38;
  }
  v15 = GetLastError();
  v6 = v15;
  if ( v15 > 0 )
    v6 = (unsigned __int16)v15 | 0x80070000;
  if ( v6 >= 0 )
    v6 = CheckGUIHandleQuota(v17, v16, v18);
  v35 = 226;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v35);
LABEL_38:
  if ( v7 )
    DeleteObject(v7);
  if ( v4 )
    DeleteObject(v4);
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
  return (unsigned int)v6;
}
