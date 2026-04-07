/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000DEB0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180023364 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180038570 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180038DC0 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A1EC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A9F8 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180042C40 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007FDC0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int inserted; // eax
  int v7; // eax
  CThumbnailVisual *v8; // rcx
  int v9; // ecx
  int v10; // eax
  double v11; // xmm3_8
  double v12; // xmm7_8
  double v13; // xmm9_8
  double v14; // xmm6_8
  __int64 v15; // rcx
  LONG v16; // esi
  LONG v17; // ebp
  CVisual *v18; // rcx
  int v20; // eax
  double v21; // xmm2_8
  float v22; // xmm0_4
  double v23; // xmm3_8
  float v24; // xmm2_4
  __int64 v25; // r8
  int RectangleGeometry; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  struct tagPOINT v30; // [rsp+80h] [rbp+8h] BYREF

  v2 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x30Fu);
  }
  else if ( *((_BYTE *)this + 472) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x313u);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 47));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x314u);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (CThumbnailVisual *)((char *)this + 32),
                     *(struct CVisual **)(*((_QWORD *)this + 47) + 48LL),
                     0LL,
                     0,
                     1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x315u);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 47));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x316u);
          }
          else if ( CThumbnailVisual::_HasBorder(this)
                 && (v20 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v20, v20 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x319u);
          }
          else
          {
            *((_DWORD *)this + 20) &= ~0x80u;
            v9 = *((_DWORD *)this + 131);
            if ( v9 )
            {
              v10 = *((_DWORD *)this + 132);
              if ( v10 )
              {
                v11 = (double)*((int *)this + 127);
                v12 = v11 / (double)v9;
                v13 = (double)*((int *)this + 128);
                v14 = v13 / (double)v10;
                if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x100000) != 0 && *((_BYTE *)this + 474) )
                {
                  v21 = *((double *)this + 60);
                  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)v21) & _xmm);
                  if ( v22 > 0.0000011920929 )
                    v12 = v11 / v21;
                  else
                    v12 = 0.0;
                  v23 = *((double *)this + 61);
                  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)v23) & _xmm);
                  if ( v24 > 0.0000011920929 )
                    v14 = v13 / v23;
                  else
                    v14 = 0.0;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 47) + 48LL), v12, v14);
                v15 = *((_QWORD *)this + 47);
                v16 = *((_DWORD *)this + 125);
                v17 = *((_DWORD *)this + 126);
                v30.x = v16;
                v18 = *(CVisual **)(v15 + 48);
                v30.y = v17;
                CVisual::SetOffset(v18, &v30);
                if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 34LL) )
                {
                  if ( v12 == 1.0 && v14 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 34LL) )
                {
                  v25 = 0LL;
                  if ( v14 != 0.0 && v12 != 0.0 )
                  {
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(*(__m128i *)((char *)this + 532)) - v16,
                                          HIDWORD(*(_QWORD *)((char *)this + 532)) - v17,
                                          (int)((double)(int)*(_QWORD *)((char *)this + 540) / v12 + 0.5),
                                          (int)((double)(int)HIDWORD(*(_OWORD *)((char *)this + 532)) / v14 + 0.5),
                                          (struct CResource **)this + 55);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0x345u);
                      return v3;
                    }
                    v25 = *(unsigned int *)(*((_QWORD *)this + 55) + 24LL);
                  }
                  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 47) + 48LL) + 16LL);
                  if ( v27 )
                    v28 = *(unsigned int *)(v27 + 24);
                  else
                    v28 = 0LL;
                  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 4)
                                                                            + 384LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v28,
                          v25);
                  v3 = v29;
                  if ( v29 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x34Au);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
