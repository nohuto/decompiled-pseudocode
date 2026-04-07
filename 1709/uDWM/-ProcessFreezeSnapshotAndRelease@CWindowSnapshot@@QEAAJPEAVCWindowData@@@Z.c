/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010FBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x18000C150 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18000DBE8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18000DE38 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x18000E4AC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180017094 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180019468 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C3AC (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800348E4 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // rdi
  __int64 v6; // rax
  CSecondaryWindowRepresentation *v7; // r14
  int SyncedWindowData; // eax
  int Brush; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __m128i *v12; // rdx
  LONG v13; // r15d
  int v14; // ecx
  CWindowData *v15; // rbx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rdx
  __m128i v19; // xmm1
  int v20; // eax
  unsigned __int64 v21; // xmm0_8
  int v22; // r8d
  int v23; // r13d
  int v24; // r12d
  int v25; // r15d
  int v26; // r13d
  int v27; // eax
  __int64 i; // rax
  int v29; // edi
  __int64 v30; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v32; // zf
  struct CResource **v33; // r15
  __int64 v34; // rax
  int v35; // r9d
  int v36; // r8d
  char *v37; // r12
  CVisual **v38; // r15
  __int64 v39; // rcx
  int v40; // ecx
  CVisual *v41; // rdi
  CVisual *v42; // rdi
  CBaseObject *v43; // rcx
  CVisual *v44; // rdi
  int v46; // r9d
  struct IDwmWindow *v47; // rax
  float v48; // xmm1_4
  unsigned int v49; // [rsp+20h] [rbp-99h]
  CVisual *v50; // [rsp+40h] [rbp-79h] BYREF
  int v51[2]; // [rsp+48h] [rbp-71h] BYREF
  int v52; // [rsp+50h] [rbp-69h]
  int v53; // [rsp+54h] [rbp-65h]
  CSecondaryWindowRepresentation *v54; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v55; // [rsp+60h] [rbp-59h] BYREF
  int v56; // [rsp+70h] [rbp-49h]
  struct CRenderDataInstruction *v57; // [rsp+78h] [rbp-41h] BYREF
  struct CWindowData *v58; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v59; // [rsp+90h] [rbp-29h]
  int v60; // [rsp+A0h] [rbp-19h]
  struct CWindowData *v61; // [rsp+A8h] [rbp-11h]
  double v62[2]; // [rsp+B0h] [rbp-9h] BYREF
  _DWORD v63[4]; // [rsp+C0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 4);
  v61 = a2;
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
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
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
  v60 = 1543;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC3u);
LABEL_41:
    v7 = v54;
    goto LABEL_42;
  }
  v7 = v54;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v54);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 197;
    goto LABEL_54;
  }
  SyncedWindowData = CResource::Create(
                       27LL,
                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                       (char *)this + 56);
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
  v59.left = *((_DWORD *)v7 + 22);
  v59.right = *((_DWORD *)v7 + 20) - *((_DWORD *)v7 + 23);
  v59.bottom = *((_DWORD *)v7 + 21) - *((_DWORD *)v7 + 25);
  v59.top = v13;
  v55 = v59;
  v16 = v14 - 1;
  if ( !v16 )
    goto LABEL_49;
  v17 = v16 - 1;
  if ( v17 )
  {
    if ( v17 != 1 )
      goto LABEL_11;
    if ( !CWindowData::IsImmersiveWindow(v15) )
    {
      v12 = *(__m128i **)(*((_QWORD *)v15 + 54) + 80LL);
      goto LABEL_11;
    }
    goto LABEL_49;
  }
  v18 = *((_QWORD *)v15 + 53);
  if ( !v18 )
  {
LABEL_49:
    v12 = (__m128i *)v15;
    goto LABEL_11;
  }
  v12 = *(__m128i **)(v18 + 32);
LABEL_11:
  v19 = v12[5];
  v20 = _mm_cvtsi128_si32(v19);
  v21 = _mm_srli_si128(v19, 8).m128i_u64[0];
  v55.right -= v20;
  v55.left += v20;
  v22 = v13 + v21;
  v23 = v55.bottom - HIDWORD(v21);
  v55.top = v13 + v21;
  v55.bottom -= HIDWORD(v21);
  v24 = v55.right - v55.left;
  *(_QWORD *)v51 = 0LL;
  v25 = v55.right - v55.left;
  if ( v55.right - v55.left < 0 )
    v25 = 0;
  v26 = v23 - v22;
  v27 = v26;
  if ( v26 < 0 )
    v27 = 0;
  v56 = v27;
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
  v29 = v56;
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(0, 0, v25, v56, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 224;
    goto LABEL_54;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v55);
  v32 = *((_QWORD *)this + 6) == 0LL;
  v52 = (int)(float)((float)v25 * ScalingFactorForCVI);
  *((float *)this + 18) = ScalingFactorForCVI;
  v53 = (int)(float)((float)v29 * ScalingFactorForCVI);
  if ( v32 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v25 * ScalingFactorForCVI),
      (int)(float)((float)v29 * ScalingFactorForCVI),
      (struct CResource **)this + 6);
  v33 = (struct CResource **)((char *)this + 40);
  Brush = CSecondaryWindowRepresentation::GetBrush(v7, v30, (char *)this + 56, 0LL);
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
    if ( v24 < 0 )
      v24 = 0;
    if ( v26 < 0 )
      v26 = 0;
    v36 = (int)(float)((float)v24 * v48);
    v52 = v36;
    v35 = (int)(float)((float)v26 * v48);
    v53 = v35;
  }
  else
  {
    v34 = *((_QWORD *)this + 8);
    v62[0] = (double)v52;
    v62[1] = (double)v53;
    SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v34 + 16) + 312LL))(
                         *(_QWORD *)(v34 + 16),
                         *(unsigned int *)(v34 + 24),
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
      *v33,
      (const struct MilPointAndSizeL *)v51);
    v35 = v53;
    v36 = v52;
  }
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(v51[0], v51[1], v36, v35, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 267;
    goto LABEL_54;
  }
  v37 = (char *)this + 96;
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
  SyncedWindowData = CDrawGeometryInstruction::Create(*v33, *((struct CResource **)this + 11), &v57);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 274;
    goto LABEL_54;
  }
  v38 = (CVisual **)((char *)this + 80);
  SyncedWindowData = CRenderDataVisual::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       (struct CRenderDataVisual **)this + 10);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 276;
    goto LABEL_54;
  }
  CVisual::SetScale(*v38, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
  CVisual::SetInterpolationMode(*v38, 1LL);
  SyncedWindowData = CRenderDataVisual::AddInstruction(*v38, v57);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 280;
    goto LABEL_54;
  }
  SyncedWindowData = CVisual::RenderRecursive(*v38);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 281;
    goto LABEL_54;
  }
  v39 = *(_QWORD *)(*(_QWORD *)v37 + 16LL);
  if ( v39 )
    v40 = *(_DWORD *)(v39 + 24);
  else
    v40 = 0;
  v41 = v50;
  *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v40;
  *(_QWORD *)(*((_QWORD *)this + 4) + 400LL) = v41;
  if ( v41 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v41 + 2);
    v7 = v54;
  }
  *((_QWORD *)v50 + 90) = *((_QWORD *)this + 4);
  SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v37 + 32LL), *v38, 0LL, 0, 1);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 287;
    goto LABEL_54;
  }
  v42 = v50;
  CVisual::SetDirtyFlags(v50, 0x400000u);
  CVisual::SetDirtyFlags(v42, 0x2000u);
  SyncedWindowData = CTopLevelWindow::ShowWindow(v42, 1);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 292;
    goto LABEL_54;
  }
  SyncedWindowData = CVisual::RenderRecursive(v42);
  Brush = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v43 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v43 )
      CBaseObject::Release(v43);
    v44 = v50;
    *((_QWORD *)this + 3) = v50;
    _InterlockedIncrement((volatile signed __int32 *)v44 + 2);
    *((_QWORD *)v61 + 53) = this;
    *(_BYTE *)(*((_QWORD *)this + 4) + 596LL) &= ~8u;
    goto LABEL_41;
  }
  v49 = 293;
LABEL_54:
  v46 = SyncedWindowData;
LABEL_56:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v49);
LABEL_42:
  if ( v50 )
    CBaseObject::Release(v50);
  if ( v57 )
    CBaseObject::Release(v57);
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)Brush;
}
