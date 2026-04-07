/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800304B8
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010A98 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180024C5C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180025A44 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180025A8C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18002E090 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x18002E6EC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002F854 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FC80 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FD20 (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x180031DA8 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // rsi
  CBaseObject *v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __m128i *v13; // rdx
  LONG v14; // r15d
  int v15; // ecx
  CWindowData *v16; // rbx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rdx
  __m128i v20; // xmm1
  int v21; // eax
  unsigned __int64 v22; // xmm0_8
  LONG v23; // edx
  int v24; // r9d
  int v25; // eax
  int v26; // r15d
  int v27; // eax
  __int64 i; // rax
  int v29; // eax
  int v30; // esi
  int RectangleGeometry; // eax
  __int64 v32; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v34; // zf
  struct CResource **v35; // r15
  int Brush; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r9
  __int64 v40; // r8
  int v41; // eax
  char *v42; // r12
  int v43; // eax
  int v44; // eax
  CVisual **v45; // r15
  int v46; // eax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  CVisual *v50; // rsi
  int inserted; // eax
  CVisual *v52; // rsi
  int v53; // eax
  int v54; // eax
  CBaseObject *v55; // rcx
  CVisual *v56; // rsi
  struct IDwmWindow *v58; // rax
  int SyncedWindowData; // eax
  float v60; // xmm1_4
  unsigned int v61; // eax
  int v62; // r9d
  int v63; // r9d
  __m128i v64; // xmm0
  int v65; // eax
  float v66; // xmm0_4
  float v67; // xmm0_4
  struct CResource **v68; // [rsp+20h] [rbp-99h]
  CVisual *v69; // [rsp+40h] [rbp-79h] BYREF
  int v70[2]; // [rsp+48h] [rbp-71h] BYREF
  int v71; // [rsp+50h] [rbp-69h]
  int v72; // [rsp+54h] [rbp-65h]
  CBaseObject *v73; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v74; // [rsp+60h] [rbp-59h] BYREF
  int v75; // [rsp+70h] [rbp-49h]
  LONG v76; // [rsp+78h] [rbp-41h]
  int v77; // [rsp+80h] [rbp-39h]
  struct CRenderDataInstruction *v78; // [rsp+88h] [rbp-31h] BYREF
  struct CWindowData *v79; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v80; // [rsp+A0h] [rbp-19h]
  int v81; // [rsp+B0h] [rbp-9h]
  double v82[2]; // [rsp+B8h] [rbp-1h] BYREF
  _DWORD v83[4]; // [rsp+C8h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 4);
  v69 = 0LL;
  v78 = 0LL;
  v5 = a2;
  v73 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  v7 = CTopLevelWindow::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
         (struct CCanvasVisual ***)&v69);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xABu);
    goto LABEL_42;
  }
  v9 = *((_QWORD *)v5 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
    {
      v58 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 376LL))(*((_QWORD *)a2 + 3));
      if ( v58 )
      {
        v79 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                             v58,
                             0,
                             &v79);
        v8 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xB3u);
          goto LABEL_42;
        }
        v5 = v79;
      }
    }
  }
  *((_QWORD *)a2 + 53) = 0LL;
  v81 = 1543;
  v10 = CSecondaryWindowRepresentation::Create(
          1543,
          ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
          (__int64)v5,
          0,
          100,
          &v73);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC2u);
    goto LABEL_41;
  }
  v6 = v73;
  v11 = CSecondaryWindowRepresentation::Validate(v73);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC4u);
    goto LABEL_42;
  }
  v12 = CResource::Create(0x1Bu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), (CBaseObject **)this + 7);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC7u);
    goto LABEL_42;
  }
  v13 = 0LL;
  v14 = *((_DWORD *)v6 + 24);
  v15 = *((_DWORD *)v6 + 18);
  v16 = (CWindowData *)*((_QWORD *)v6 + 8);
  v80.left = *((_DWORD *)v6 + 22);
  v80.right = *((_DWORD *)v6 + 20) - *((_DWORD *)v6 + 23);
  v80.bottom = *((_DWORD *)v6 + 21) - *((_DWORD *)v6 + 25);
  v80.top = v14;
  v74 = v80;
  v17 = v15 - 1;
  if ( !v17 )
    goto LABEL_49;
  v18 = v17 - 1;
  if ( !v18 )
  {
    v19 = *((_QWORD *)v16 + 53);
    if ( v19 )
    {
      v13 = *(__m128i **)(v19 + 32);
      goto LABEL_11;
    }
    goto LABEL_49;
  }
  if ( v18 == 1 )
  {
    if ( !CWindowData::IsImmersiveWindow(v16) )
    {
      v13 = *(__m128i **)(*((_QWORD *)v16 + 54) + 80LL);
      goto LABEL_11;
    }
LABEL_49:
    v13 = (__m128i *)v16;
  }
LABEL_11:
  v20 = v13[5];
  v21 = _mm_cvtsi128_si32(v20);
  v22 = _mm_srli_si128(v20, 8).m128i_u64[0];
  *(_QWORD *)v70 = 0LL;
  v23 = v74.right - v21;
  v74.left += v21;
  v24 = v14 + v22;
  v76 = v23;
  v25 = v74.bottom - HIDWORD(v22);
  v74.top = v14 + v22;
  v77 = v74.bottom - HIDWORD(v22);
  v26 = v23 - v74.left;
  v74.bottom -= HIDWORD(v22);
  if ( v23 - v74.left < 0 )
    v26 = 0;
  v74.right = v23;
  v27 = v25 - v24;
  if ( v27 < 0 )
    v27 = 0;
  v75 = v27;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v83[i] = (float)*(int *)((char *)&v74.left + i * 4);
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 312LL))(
          *(_QWORD *)(*((_QWORD *)this + 7) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 7) + 24LL),
          v83);
  v8 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xDAu);
    goto LABEL_42;
  }
  v30 = v75;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        0LL,
                        0LL,
                        (unsigned int)v26,
                        (unsigned int)v75,
                        (struct CResource **)this + 11);
  v8 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xDFu);
    goto LABEL_42;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v74);
  *((float *)this + 18) = ScalingFactorForCVI;
  v34 = *((_QWORD *)this + 6) == 0LL;
  v71 = (int)(float)((float)v26 * ScalingFactorForCVI);
  v72 = (int)(float)((float)v30 * ScalingFactorForCVI);
  if ( v34 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v26 * ScalingFactorForCVI),
      (int)(float)((float)v30 * ScalingFactorForCVI),
      (struct CResource **)this + 6);
  v35 = (struct CResource **)((char *)this + 40);
  Brush = CSecondaryWindowRepresentation::GetBrush(
            (__int64)v6,
            v32,
            (CBaseObject **)this + 7,
            0LL,
            (__int64)v68,
            (CBaseObject **)this + 8,
            (struct CResource **)this + 6,
            (CBaseObject **)this + 5);
  v8 = Brush;
  if ( Brush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0xF3u);
    goto LABEL_42;
  }
  if ( *((_BYTE *)v6 + 160) )
  {
    v60 = *((float *)v6 + 126);
    v61 = 0;
    v62 = v77;
    if ( v76 - v74.left >= 0 )
      v61 = v76 - v74.left;
    *((float *)this + 18) = v60;
    v63 = v62 - v74.top;
    v64 = _mm_cvtsi32_si128(v61);
    v65 = 0;
    LODWORD(v66) = _mm_cvtepi32_ps(v64).m128_u32[0];
    if ( v63 >= 0 )
      v65 = v63;
    v40 = (unsigned int)(int)(float)(v66 * v60);
    v71 = (int)(float)(v66 * v60);
    v67 = (float)v65 * v60;
    v39 = (unsigned int)(int)v67;
    v72 = (int)v67;
  }
  else
  {
    v37 = *((_QWORD *)this + 8);
    v82[0] = (double)v71;
    v82[1] = (double)v72;
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v37 + 16) + 320LL))(
            *(_QWORD *)(v37 + 16),
            *(unsigned int *)(v37 + 24),
            v82);
    v8 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xFCu);
      goto LABEL_42;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v6,
      *((struct CResource **)this + 6),
      *v35,
      (const struct MilPointAndSizeL *)v70);
    v39 = (unsigned int)v72;
    v40 = (unsigned int)v71;
  }
  v41 = ResourceHelper::CreateRectangleGeometry(
          (unsigned int)v70[0],
          (unsigned int)v70[1],
          v40,
          v39,
          (struct CResource **)this + 11);
  v8 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x10Au);
  }
  else
  {
    v42 = (char *)this + 96;
    v43 = CClientArea::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            0,
            (struct CClientArea **)this + 12);
    v8 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x10Cu);
    }
    else
    {
      v44 = CDrawGeometryInstruction::Create(*v35, *((struct CResource **)this + 11), &v78);
      v8 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x111u);
      }
      else
      {
        v45 = (CVisual **)((char *)this + 80);
        v46 = CRenderDataVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                (struct CRenderDataVisual **)this + 10);
        v8 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x113u);
        }
        else
        {
          CVisual::SetScale(*v45, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
          CVisual::SetInterpolationMode(*v45, 1);
          v47 = CRenderDataVisual::AddInstruction(*v45, v78);
          v8 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x117u);
          }
          else
          {
            v48 = CVisual::RenderRecursive(*v45);
            v8 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x118u);
            }
            else
            {
              v49 = *(_QWORD *)(*(_QWORD *)v42 + 16LL);
              if ( v49 )
                LODWORD(v49) = *(_DWORD *)(v49 + 24);
              v50 = v69;
              *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v49;
              *(_QWORD *)(*((_QWORD *)this + 4) + 392LL) = v50;
              if ( v50 )
              {
                _InterlockedIncrement((volatile signed __int32 *)v50 + 2);
                v6 = v73;
              }
              *((_QWORD *)v69 + 90) = *((_QWORD *)this + 4);
              inserted = VisualCollection::InsertRelative(
                           (VisualCollection *)(*(_QWORD *)v42 + 32LL),
                           (struct CVisual **)*v45,
                           0LL,
                           0,
                           1);
              v8 = inserted;
              if ( inserted < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x11Eu);
              }
              else
              {
                v52 = v69;
                CVisual::SetDirtyFlags(v69, 0x400000);
                CVisual::SetDirtyFlags(v52, 0x2000);
                v53 = CTopLevelWindow::ShowWindow(v52, 1);
                v8 = v53;
                if ( v53 >= 0 )
                {
                  v54 = CVisual::RenderRecursive(v52);
                  v8 = v54;
                  if ( v54 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x124u);
                    goto LABEL_42;
                  }
                  v55 = (CBaseObject *)*((_QWORD *)this + 3);
                  if ( v55 )
                    CBaseObject::Release(v55);
                  v56 = v69;
                  *((_QWORD *)this + 3) = v69;
                  _InterlockedIncrement((volatile signed __int32 *)v56 + 2);
                  *((_QWORD *)a2 + 53) = this;
                  *(_BYTE *)(*((_QWORD *)this + 4) + 596LL) &= ~4u;
LABEL_41:
                  v6 = v73;
                  goto LABEL_42;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x123u);
              }
            }
          }
        }
      }
    }
  }
LABEL_42:
  if ( v69 )
    CBaseObject::Release(v69);
  if ( v78 )
    CBaseObject::Release(v78);
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
