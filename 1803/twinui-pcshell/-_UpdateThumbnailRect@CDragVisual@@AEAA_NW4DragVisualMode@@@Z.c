/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1802F3EB8
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1802F1760 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1802F1F60 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1802F21D0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x1802F2D0C (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 * Callees:
 *     ?MulDiv@CSize@Geometry@@SA?AU12@AEBUtagSIZE@@HH@Z @ 0x1801431E0 (-MulDiv@CSize@Geometry@@SA-AU12@AEBUtagSIZE@@HH@Z.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18029366C (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x1802F2AB0 (-_GetScaledPoint@CDragVisual@@AEAA-AUtagPOINT@@W4ScaledPointType@1@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1802F3E7C (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x180315C24 (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

bool __fastcall CDragVisual::_UpdateThumbnailRect(unsigned __int64 a1, int a2)
{
  LONG y; // r14d
  __int64 v3; // rsi
  LONG v4; // ebx
  LONG v5; // r12d
  LONG v6; // r15d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  enum DEVICE_SCALE_FACTOR v11; // r8d
  const struct Geometry::CRect *v12; // rdx
  LONG *ScaledPoint; // rax
  HWND v14; // rdx
  LONG v15; // ecx
  struct tagPOINT *v16; // rax
  struct tagPOINT *v17; // rbx
  int v18; // eax
  LONG x; // r12d
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  LONG v23; // eax
  enum DEVICE_SCALE_FACTOR v24; // r8d
  const struct Geometry::CRect *v25; // rdx
  struct tagSIZE *v26; // rax
  BOOL v27; // r8d
  LONG *v28; // rax
  HWND v29; // rdx
  LONG v30; // ecx
  struct tagPOINT *v31; // rax
  HWND v32; // rdx
  struct tagPOINT *v33; // rax
  enum DEVICE_SCALE_FACTOR v34; // r8d
  const struct Geometry::CRect *v35; // rdx
  unsigned __int64 v36; // rdi
  LONG *v37; // rax
  HWND v38; // rdx
  LONG v39; // ecx
  struct tagPOINT *v40; // rbx
  HWND v41; // rdx
  int v42; // edi
  int v43; // ecx
  HWND v44; // rdx
  struct tagSIZE *v46; // [rsp+28h] [rbp-18h]
  _DWORD v47[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 nNumber; // [rsp+80h] [rbp+40h] BYREF
  struct tagPOINT v49; // [rsp+90h] [rbp+50h] BYREF
  struct tagPOINT v50; // [rsp+98h] [rbp+58h] BYREF

  y = 0;
  v3 = a1;
  *(_BYTE *)(a1 + 277) = 0;
  v4 = 0;
  LODWORD(nNumber) = 0;
  v5 = 0;
  HIDWORD(nNumber) = 0;
  v6 = 0;
  LODWORD(a1) = 0;
  if ( !a2 )
  {
LABEL_7:
    v11 = *(_DWORD *)(v3 + 344);
    v12 = (const struct Geometry::CRect *)*(unsigned int *)(v3 + 284);
    v49.x = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v49.y = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(v3 + 192),
      v12,
      v11,
      (enum DEVICE_SCALE_FACTOR)&v49,
      (const struct tagSIZE *)&nNumber,
      v46);
    ScaledPoint = CDragVisual::_GetScaledPoint(v3, &v50, 0);
    v14 = *(HWND *)(v3 + 152);
    v15 = *ScaledPoint;
    LODWORD(ScaledPoint) = ScaledPoint[1];
    v49.x = v15;
    v49.y = (int)ScaledPoint;
    v16 = Geometry::CPoint::ScreenToClient(&v50, v14, (LONG *)&v49);
    v6 = nNumber;
    v17 = v16;
    v18 = MulDiv(nNumber, *(_DWORD *)(v3 + 332), 100);
    x = v17->x;
    v4 = HIDWORD(nNumber);
    v5 = x - v18;
    v20 = *(_DWORD *)(v3 + 144);
    if ( v20 == 1 )
    {
      v21 = MulDiv(*(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196), 5, 100);
    }
    else if ( v20 == 5 )
    {
      v42 = (*(_DWORD *)(v3 + 268) - *(_DWORD *)(v3 + 260)) / 2
          - *(_DWORD *)(v3 + 196)
          - SHIDWORD(nNumber) / 2
          + *(_DWORD *)(v3 + 260);
      v21 = MulDiv(*(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196), 5, 100);
      if ( v42 >= v21 )
      {
        v43 = *(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196) - v21;
        if ( v42 + v4 > v43 )
          v42 = v43 - v4;
        goto LABEL_21;
      }
    }
    else
    {
      v21 = (*(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196) - HIDWORD(nNumber)) / 2;
    }
    v42 = v21;
LABEL_21:
    v44 = *(HWND *)(v3 + 152);
    HIDWORD(nNumber) = v42 + *(_DWORD *)(v3 + 196);
    LODWORD(nNumber) = 0;
    v33 = Geometry::CPoint::ScreenToClient(&v49, v44, (LONG *)&nNumber);
    goto LABEL_22;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v6 = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v4 = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    LODWORD(nNumber) = *(_DWORD *)(v3 + 224);
    v23 = *(_DWORD *)(v3 + 228);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v34 = *(_DWORD *)(v3 + 344);
    v35 = (const struct Geometry::CRect *)*(unsigned int *)(v3 + 284);
    v49.x = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v49.y = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(v3 + 192),
      v35,
      v34,
      (enum DEVICE_SCALE_FACTOR)&v49,
      (const struct tagSIZE *)&nNumber,
      v46);
    v36 = *(_QWORD *)Geometry::CSize::MulDiv((int *)&v49, (int *)&nNumber, 60, 100);
    nNumber = v36;
    v37 = CDragVisual::_GetScaledPoint(v3, &v50, 0);
    v38 = *(HWND *)(v3 + 152);
    v39 = *v37;
    LODWORD(v37) = v37[1];
    v49.x = v39;
    v49.y = (int)v37;
    v6 = v36;
    v40 = Geometry::CPoint::ScreenToClient(&v50, v38, (LONG *)&v49);
    v5 = v40->x - MulDiv(v36, *(_DWORD *)(v3 + 332), 100);
    v49.y = *(_DWORD *)(v3 + 204) - SHIDWORD(v36) / 2;
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v24 = *(_DWORD *)(v3 + 344);
    v25 = (const struct Geometry::CRect *)*(unsigned int *)(v3 + 284);
    v49.x = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v49.y = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(v3 + 192),
      v25,
      v24,
      (enum DEVICE_SCALE_FACTOR)&v49,
      (const struct tagSIZE *)&nNumber,
      v46);
    v26 = (struct tagSIZE *)Geometry::CSize::MulDiv((int *)&v49, (int *)&nNumber, 125, 100);
    v27 = *(_DWORD *)(v3 + 148) == 6;
    nNumber = (unsigned __int64)*v26;
    v28 = CDragVisual::_GetScaledPoint(v3, &v50, v27);
    v29 = *(HWND *)(v3 + 152);
    v30 = *v28;
    LODWORD(v28) = v28[1];
    v49.x = v30;
    v49.y = (int)v28;
    v31 = Geometry::CPoint::ScreenToClient(&v50, v29, (LONG *)&v49);
    v6 = nNumber;
    v5 = v31->x - MulDiv(nNumber, *(_DWORD *)(v3 + 332), 100);
    v49.y = *(_DWORD *)(v3 + 196);
LABEL_11:
    v32 = *(HWND *)(v3 + 152);
    v49.x = 0;
    v33 = Geometry::CPoint::ScreenToClient(&v50, v32, (LONG *)&v49);
    v4 = HIDWORD(nNumber);
LABEL_22:
    y = v33->y;
    LODWORD(a1) = y;
    goto LABEL_23;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v22 = *(_DWORD *)(v3 + 224);
    v6 = *(_DWORD *)(v3 + 232) - v22;
    v4 = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    LODWORD(nNumber) = v22 + *(_DWORD *)(v3 + 336) - *(_DWORD *)(v3 + 176);
    v23 = *(_DWORD *)(v3 + 228) + *(_DWORD *)(v3 + 340) - *(_DWORD *)(v3 + 180);
LABEL_14:
    v41 = *(HWND *)(v3 + 152);
    HIDWORD(nNumber) = v23;
    nNumber = (unsigned __int64)*Geometry::CPoint::ScreenToClient(&v49, v41, (LONG *)&nNumber);
    y = HIDWORD(nNumber);
    v5 = nNumber;
    a1 = HIDWORD(nNumber);
    goto LABEL_23;
  }
  if ( v10 == 2 )
    goto LABEL_7;
LABEL_23:
  v47[0] = v5;
  v47[2] = v5 + v6;
  v47[1] = y;
  v47[3] = a1 + v4;
  return CDragVisual::_UpdateThumbnailRect((const struct _GUID *)v3, (const struct Geometry::CRect *)v47);
}
