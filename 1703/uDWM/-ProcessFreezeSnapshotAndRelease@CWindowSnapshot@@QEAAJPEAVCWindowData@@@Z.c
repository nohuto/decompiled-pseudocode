/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000D00C
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180035EBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015A38 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019E84 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800223CC (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180023364 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x1800399AC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180039FF4 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A1EC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003B07C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B34C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x18003CE10 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // rdi
  __int64 v6; // rax
  CBaseObject *v7; // r14
  int SyncedWindowData; // eax
  int Brush; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __m128i *v12; // rdx
  LONG v13; // r15d
  int v14; // ecx
  CWindowData *v15; // rbx
  int v16; // ecx
  __m128i v17; // xmm1
  int v18; // eax
  unsigned __int64 v19; // xmm0_8
  int v20; // r8d
  int v21; // r13d
  int v22; // r12d
  int v23; // r15d
  int v24; // r13d
  int v25; // eax
  __int64 i; // rax
  int v27; // edi
  __int64 v28; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v30; // zf
  struct CResource **v31; // r15
  __int64 v32; // rax
  int v33; // r9d
  int v34; // r8d
  char *v35; // r12
  CVisual **v36; // r15
  __int64 v37; // rcx
  int v38; // ecx
  CVisual *v39; // rdi
  CVisual *v40; // rdi
  CBaseObject *v41; // rcx
  CVisual *v42; // rdi
  int v44; // ecx
  __int64 v45; // rdx
  int v46; // r9d
  struct IDwmWindow *v47; // rax
  float v48; // xmm1_4
  unsigned int v49; // [rsp+20h] [rbp-99h]
  CVisual *v50; // [rsp+40h] [rbp-79h] BYREF
  int v51[2]; // [rsp+48h] [rbp-71h] BYREF
  int v52; // [rsp+50h] [rbp-69h]
  int v53; // [rsp+54h] [rbp-65h]
  CBaseObject *v54; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v55; // [rsp+60h] [rbp-59h] BYREF
  int v56; // [rsp+70h] [rbp-49h]
  struct CRenderDataInstruction *v57; // [rsp+78h] [rbp-41h] BYREF
  struct CWindowData *v58; // [rsp+80h] [rbp-39h] BYREF
  int v59; // [rsp+88h] [rbp-31h]
  struct CWindowData *v60; // [rsp+90h] [rbp-29h]
  struct tagRECT v61; // [rsp+98h] [rbp-21h]
  double v62[2]; // [rsp+B0h] [rbp-9h] BYREF
  _DWORD v63[4]; // [rsp+C0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 4);
  v60 = a2;
  v50 = 0LL;
  v5 = a2;
  v57 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = *((_QWORD *)this + 4);
  v7 = 0LL;
  v54 = 0LL;
  *(_DWORD *)(v6 + 68) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       &v50);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 172;
    goto LABEL_54;
  }
  v10 = *((_QWORD *)v5 + 3);
  if ( v10 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10) )
    {
      v47 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 376LL))(*((_QWORD *)a2 + 3));
      if ( v47 )
      {
        v58 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                             v47,
                             0,
                             &v58);
        Brush = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v49 = 180;
          goto LABEL_54;
        }
        v5 = v58;
      }
    }
  }
  *((_QWORD *)a2 + 53) = 0LL;
  v59 = 1543;
  v11 = CSecondaryWindowRepresentation::Create(
          1543LL,
          ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
          v5,
          0LL,
          100,
          &v54);
  Brush = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC3u);
LABEL_39:
    v7 = v54;
    goto LABEL_40;
  }
  v7 = v54;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v54);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 197;
    goto LABEL_54;
  }
  SyncedWindowData = CResource::Create(26LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 200;
    goto LABEL_54;
  }
  v12 = 0LL;
  v13 = *((_DWORD *)v7 + 24);
  v14 = *((_DWORD *)v7 + 18);
  v15 = (CWindowData *)*((_QWORD *)v7 + 8);
  v61.left = *((_DWORD *)v7 + 22);
  v61.right = *((_DWORD *)v7 + 20) - *((_DWORD *)v7 + 23);
  v61.bottom = *((_DWORD *)v7 + 21) - *((_DWORD *)v7 + 25);
  v61.top = v13;
  v55 = v61;
  v16 = v14 - 1;
  if ( v16 )
  {
    v44 = v16 - 1;
    if ( v44 )
    {
      if ( v44 != 1 )
        goto LABEL_9;
      if ( !CWindowData::IsImmersiveWindow(v15) )
      {
        v12 = *(__m128i **)(*((_QWORD *)v15 + 54) + 80LL);
        goto LABEL_9;
      }
    }
    else
    {
      v45 = *((_QWORD *)v15 + 53);
      if ( v45 )
      {
        v12 = *(__m128i **)(v45 + 32);
        goto LABEL_9;
      }
    }
  }
  v12 = (__m128i *)v15;
LABEL_9:
  v17 = v12[5];
  v18 = _mm_cvtsi128_si32(v17);
  v19 = _mm_srli_si128(v17, 8).m128i_u64[0];
  v55.right -= v18;
  v55.left += v18;
  v20 = v13 + v19;
  v21 = v55.bottom - HIDWORD(v19);
  v55.top = v13 + v19;
  v55.bottom -= HIDWORD(v19);
  v22 = v55.right - v55.left;
  *(_QWORD *)v51 = 0LL;
  v23 = v55.right - v55.left;
  if ( v55.right - v55.left < 0 )
    v23 = 0;
  v24 = v21 - v20;
  v25 = v24;
  if ( v24 < 0 )
    v25 = 0;
  v56 = v25;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v63[i] = (float)*(int *)((char *)&v55.left + i * 4);
  SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL)
                                                                         + 304LL))(
                       *(_QWORD *)(*((_QWORD *)this + 7) + 16LL),
                       *(unsigned int *)(*((_QWORD *)this + 7) + 24LL),
                       v63);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 219;
    goto LABEL_54;
  }
  v27 = v56;
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(0, 0, v23, v56, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 224;
    goto LABEL_54;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v55);
  v30 = *((_QWORD *)this + 6) == 0LL;
  v52 = (int)(float)((float)v23 * ScalingFactorForCVI);
  *((float *)this + 18) = ScalingFactorForCVI;
  v53 = (int)(float)((float)v27 * ScalingFactorForCVI);
  if ( v30 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v23 * ScalingFactorForCVI),
      (int)(float)((float)v27 * ScalingFactorForCVI),
      (struct CResource **)this + 6);
  v31 = (struct CResource **)((char *)this + 40);
  Brush = CSecondaryWindowRepresentation::GetBrush(v7, v28, (char *)this + 56, 0LL);
  if ( Brush < 0 )
  {
    v49 = 244;
    v46 = Brush;
    goto LABEL_56;
  }
  if ( *((_BYTE *)v7 + 160) )
  {
    v48 = *((float *)v7 + 126);
    *((float *)this + 18) = v48;
    if ( v22 < 0 )
      v22 = 0;
    if ( v24 < 0 )
      v24 = 0;
    v34 = (int)(float)((float)v22 * v48);
    v52 = v34;
    v33 = (int)(float)((float)v24 * v48);
    v53 = v33;
  }
  else
  {
    v32 = *((_QWORD *)this + 8);
    v62[0] = (double)v52;
    v62[1] = (double)v53;
    SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v32 + 16) + 312LL))(
                         *(_QWORD *)(v32 + 16),
                         *(unsigned int *)(v32 + 24),
                         v62);
    Brush = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v49 = 253;
      goto LABEL_54;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v7,
      *((struct CResource **)this + 6),
      *v31,
      (const struct MilPointAndSizeL *)v51);
    v33 = v53;
    v34 = v52;
  }
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(v51[0], v51[1], v34, v33, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 267;
    goto LABEL_54;
  }
  v35 = (char *)this + 96;
  SyncedWindowData = CClientArea::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       0,
                       (struct CClientArea **)this + 12);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 269;
    goto LABEL_54;
  }
  SyncedWindowData = CDrawGeometryInstruction::Create(*v31, *((struct CResource **)this + 11), &v57);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 274;
    goto LABEL_54;
  }
  v36 = (CVisual **)((char *)this + 80);
  SyncedWindowData = CRenderDataVisual::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       (struct CRenderDataVisual **)this + 10);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 276;
    goto LABEL_54;
  }
  CVisual::SetScale(*v36, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
  CVisual::SetInterpolationMode(*v36, 1LL);
  SyncedWindowData = CRenderDataVisual::AddInstruction(*v36, v57);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 280;
    goto LABEL_54;
  }
  SyncedWindowData = CVisual::RenderRecursive(*v36);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 281;
    goto LABEL_54;
  }
  v37 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
  if ( v37 )
    v38 = *(_DWORD *)(v37 + 24);
  else
    v38 = 0;
  v39 = v50;
  *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v38;
  *(_QWORD *)(*((_QWORD *)this + 4) + 400LL) = v39;
  if ( v39 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    v7 = v54;
  }
  *((_QWORD *)v50 + 90) = *((_QWORD *)this + 4);
  SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v35 + 32LL), *v36, 0LL, 0, 1);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 287;
    goto LABEL_54;
  }
  v40 = v50;
  CVisual::SetDirtyFlags(v50, 0x400000u);
  CVisual::SetDirtyFlags(v40, 0x2000u);
  SyncedWindowData = CTopLevelWindow::ShowWindow(v40, 1);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 292;
    goto LABEL_54;
  }
  SyncedWindowData = CVisual::RenderRecursive(v40);
  Brush = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v41 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v41 )
      CBaseObject::Release(v41);
    v42 = v50;
    *((_QWORD *)this + 3) = v50;
    _InterlockedIncrement((volatile signed __int32 *)v42 + 2);
    *((_QWORD *)v60 + 53) = this;
    *(_BYTE *)(*((_QWORD *)this + 4) + 596LL) &= ~8u;
    goto LABEL_39;
  }
  v49 = 293;
LABEL_54:
  v46 = SyncedWindowData;
LABEL_56:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, v49);
LABEL_40:
  if ( v50 )
    CBaseObject::Release(v50);
  if ( v57 )
    CBaseObject::Release(v57);
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)Brush;
}
