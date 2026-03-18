/*
 * XREFs of ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070320
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180039F00 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::NotifyRenderedRect(__int64 a1, float *a2)
{
  signed int v3; // ebx
  HRGN v4; // rsi
  int v5; // eax
  HRGN RectRgn; // rax
  int v8; // eax
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  signed int LastError; // eax
  signed int v14; // eax
  signed int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // r8d
  signed int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  RECT rect; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( CHwDisplayRenderTarget::RectToSurfaceRect((CHwDisplayRenderTarget *)(a1 - 176), a2, (__int64)&rect) )
  {
    SetLastError(0);
    v4 = CreateRectRgnIndirect(&rect);
    if ( v4 )
    {
      if ( *(_QWORD *)(a1 + 152) )
      {
        SetLastError(0);
        v5 = CombineRgn(*(HRGN *)(a1 + 152), *(HRGN *)(a1 + 152), v4, 4);
        if ( !v5 )
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          v20 = 290;
          if ( v3 >= 0 )
            v3 = -2003304445;
          goto LABEL_44;
        }
        if ( v5 == 1 )
        {
          DeleteObject(*(HGDIOBJ *)(a1 + 152));
          *(_QWORD *)(a1 + 152) = 0LL;
        }
      }
      if ( *(_DWORD *)(a1 + 88) == 3 && *(_QWORD *)(a1 + 160) )
      {
        SetLastError(0);
        v8 = CombineRgn(*(HRGN *)(a1 + 160), *(HRGN *)(a1 + 160), v4, 4);
        if ( !v8 )
        {
          v14 = GetLastError();
          v3 = v14;
          if ( v14 > 0 )
            v3 = (unsigned __int16)v14 | 0x80070000;
          v20 = 318;
          if ( v3 >= 0 )
            v3 = -2003304445;
          goto LABEL_44;
        }
        if ( v8 == 1 )
        {
          DeleteObject(*(HGDIOBJ *)(a1 + 160));
          *(_QWORD *)(a1 + 160) = 0LL;
        }
      }
      v3 = 0;
      if ( *(_QWORD *)(a1 + 136)
        || (SetLastError(0), RectRgn = CreateRectRgn(0, 0, 0, 0), (*(_QWORD *)(a1 + 136) = RectRgn) != 0LL) )
      {
        SetLastError(0);
        if ( CombineRgn(*(HRGN *)(a1 + 136), *(HRGN *)(a1 + 136), v4, 2) )
        {
LABEL_12:
          DeleteObject(v4);
          return (unsigned int)v3;
        }
        v19 = GetLastError();
        v3 = v19;
        if ( v19 > 0 )
          v3 = (unsigned __int16)v19 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4C7u);
      }
      else
      {
        v15 = GetLastError();
        v3 = v15;
        if ( v15 > 0 )
          v3 = (unsigned __int16)v15 | 0x80070000;
        if ( v3 >= 0 )
          v3 = CheckGUIHandleQuota(v17, v16, v18);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4C1u);
      }
      if ( v3 >= 0 )
        goto LABEL_12;
      v20 = 337;
LABEL_44:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v20);
      goto LABEL_12;
    }
    v9 = GetLastError();
    v3 = v9;
    if ( v9 > 0 )
      v3 = (unsigned __int16)v9 | 0x80070000;
    if ( v3 >= 0 )
      v3 = CheckGUIHandleQuota(v11, v10, v12);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x114u);
  }
  return (unsigned int)v3;
}
