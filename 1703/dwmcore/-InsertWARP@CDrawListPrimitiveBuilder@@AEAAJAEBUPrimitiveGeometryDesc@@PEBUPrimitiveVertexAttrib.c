/*
 * XREFs of ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50
 * Callers:
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800412E8 (-Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 * Callees:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001ED24 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C (-ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOL.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18015B940 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18015C2FC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsForWhitePixelOptimization@CDrawListPrimitiveBuilder@@CA_NAEBVMatrix3x3@@@Z @ 0x18015C33C (-IsForWhitePixelOptimization@CDrawListPrimitiveBuilder@@CA_NAEBVMatrix3x3@@@Z.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18015E75C (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x18015E778 (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x18015EACC (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::InsertWARP(
        CCpuClip **this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  int BuiltHWPrimitiveEntry; // eax
  int v9; // ebx
  __int128 v10; // xmm0
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // eax
  CCpuClip *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int128 v17; // xmm0
  __int64 v18; // rax
  CCpuClip *v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // r15
  _BYTE *v22; // rbx
  int v23; // eax
  float *v24; // r13
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm0_4
  __m128 v34; // xmm3
  __m128 v35; // xmm1
  _OWORD *v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // edx
  unsigned int v40; // eax
  int v41; // eax
  struct CWARPDrawListEntry *v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int128 *v48; // [rsp+58h] [rbp-A8h]
  __int128 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v52[88]; // [rsp+B8h] [rbp-48h] BYREF
  const struct D2D_MATRIX_3X2_F *v53; // [rsp+110h] [rbp+10h]
  struct CShape *v54[2]; // [rsp+120h] [rbp+20h] BYREF

  BuiltHWPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListPrimitiveBuilder *)this,
                            0,
                            0LL,
                            0LL);
  v9 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x253u);
    return (unsigned int)v9;
  }
  memset_0(&v45, 0, 0xD8uLL);
  v10 = *(_OWORD *)a2;
  v11 = (_DWORD)this[3] & 0xFFFFFFDF;
  v53 = a4;
  v12 = *((_DWORD *)this + 3) == 1;
  v45 = v11 | 0x40;
  LODWORD(v50) = *((_DWORD *)a2 + 4);
  v49 = v10;
  if ( v12 )
  {
    v50 = 0LL;
  }
  else if ( (*((_BYTE *)a2 + 20) & 3) == 3 )
  {
    HIDWORD(v50) = 1;
  }
  else if ( (*((_BYTE *)a2 + 20) & 1) != 0 )
  {
    HIDWORD(v50) = 2;
  }
  else
  {
    v13 = HIDWORD(v50);
    if ( (*((_BYTE *)a2 + 20) & 2) != 0 )
      v13 = 3;
    HIDWORD(v50) = v13;
  }
  v14 = this[2];
  v44 = 0LL;
  if ( !*((_BYTE *)v14 + 32) )
    goto LABEL_15;
  v15 = CCpuClip::ResolveClip(v14, v54);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x27Fu);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v54[0] + 24LL))(v54[0], 0LL, &v44);
    v9 = v16;
    if ( v16 >= 0 )
    {
      v46 = v44;
LABEL_15:
      if ( a3 )
      {
        v17 = *(_OWORD *)a3;
        v18 = *((_QWORD *)a3 + 3);
        v19 = this[4];
        v52[81] = 1;
        v51 = v17;
        if ( v18 )
        {
          v47 = v18;
          v48 = &v51;
        }
        v20 = 0;
        if ( *((int *)a3 + 10) > 0 )
        {
          v21 = 0LL;
          v22 = v52;
          do
          {
            v23 = *((_DWORD *)this + 613);
            if ( _bittest(&v23, v20) )
            {
              v24 = (float *)(v21 + *((_QWORD *)a3 + 4));
              if ( !CDrawListPrimitiveBuilder::IsForWhitePixelOptimization((const struct Matrix3x3 *)v24) )
              {
                v26 = (__int64)v19 + 2 * v20;
                LOBYTE(v25) = *(_BYTE *)(v20 + v26 + 34);
                LOWORD(v43) = *(_WORD *)(v20 + v26 + 32);
                LOBYTE(v26) = BYTE1(v43);
                *((_QWORD *)v22 - 6) = *((_QWORD *)v19 + v20 + 2);
                v27 = ExtendMode::ToD2D1ExtendMode(v26, v20, v25);
                LOBYTE(v29) = v28;
                *(_DWORD *)v22 = v27;
                v31 = ExtendMode::ToD2D1ExtendMode(v29, v30, v28);
                LOBYTE(v32) = (_BYTE)v43;
                *((_DWORD *)v22 + 1) = v31;
                *((_DWORD *)v22 + 2) = InterpolationMode::ToD2D1InterpolationMode(v32);
                v33 = *v24;
                v34 = (__m128)*((unsigned int *)v24 + 7);
                *((float *)v54 + 1) = v24[1];
                *((float *)&v54[1] + 1) = v24[4];
                v35 = (__m128)*((unsigned int *)v24 + 6);
                *(float *)v54 = v33;
                *(float *)&v54[1] = v24[3];
                *(_OWORD *)(v22 - 40) = *(_OWORD *)v54;
                *((_QWORD *)v22 - 3) = _mm_unpacklo_ps(v35, v34).m128_u64[0];
                *(_OWORD *)v54 = _xmm;
                if ( !D2DQuaternion::operator==(v24 + 9, (float *)v54) )
                {
                  v22[12] = 1;
                  *((_OWORD *)v22 - 1) = *v36;
                }
              }
            }
            ++v20;
            v21 += 52LL;
            v22 += 64;
          }
          while ( (signed int)v20 < *((_DWORD *)a3 + 10) );
        }
      }
      else
      {
        v51 = _xmm;
      }
      v43 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v43);
      v37 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v45, &v43);
      v9 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x2B8u);
      }
      else
      {
        v38 = *((unsigned int *)this + 16);
        v39 = (unsigned int)v43;
        v54[0] = v43;
        v40 = v38 + 1;
        if ( (int)v38 + 1 >= (unsigned int)v38 )
          v39 = v38 + 1;
        v9 = v40 < (unsigned int)v38 ? 0x80070216 : 0;
        if ( v40 < (unsigned int)v38 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
        }
        else if ( v39 > *((_DWORD *)this + 15) )
        {
          v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 5), 8u, 1, v54);
          v9 = v41;
          if ( v41 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xC0u);
        }
        else
        {
          *((struct CShape **)this[5] + v38) = v54[0];
          *((_DWORD *)this + 16) = v39;
        }
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2BAu);
        else
          v43 = 0LL;
      }
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v43);
      goto LABEL_19;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x281u);
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v44);
  return (unsigned int)v9;
}
