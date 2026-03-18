/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180163EC8
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014CA48 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180163EC8 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800BD3D0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801639E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180163EC8 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801641A0 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct ID2D1Bitmap1 *a2,
        struct ID2DContext *a3,
        struct ID2DContextOwner *a4,
        struct ID2D1Effect **a5)
{
  ID2D1Effect *v5; // rdi
  int v8; // eax
  int v9; // ebx
  signed int v10; // eax
  struct CD2DEffect *v11; // rbx
  signed int v12; // eax
  int v13; // eax
  struct ID2D1Effect **v14; // rax
  __int64 i; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rbx
  CFilterEffect *v21; // rcx
  signed int D2DEffectNoRef; // eax
  signed int InputEffectForAtlasedSurface; // eax
  struct ID2D1Effect *v25; // [rsp+30h] [rbp-48h] BYREF
  struct ID2D1Effect *v26; // [rsp+38h] [rbp-40h] BYREF
  __int64 v27; // [rsp+40h] [rbp-38h]
  __int64 v28; // [rsp+48h] [rbp-30h]
  struct CD2DEffect *v29; // [rsp+80h] [rbp+8h] BYREF
  struct ID2D1Bitmap1 *v30; // [rsp+88h] [rbp+10h]
  struct ID2DContext *v31; // [rsp+90h] [rbp+18h]
  struct ID2DContextOwner *v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v5 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v8 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 + 2)) & 6;
  if ( (((unsigned __int8)v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 + 2)) & 6) & 6) != 2 )
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x1Du);
LABEL_27:
    *a5 = 0LL;
    goto LABEL_28;
  }
  v10 = CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
          (CFilterEffect *)((char *)this + 72),
          a3,
          &v29);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x20u);
  }
  else
  {
    v11 = v29;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v29 + 13) + 8LL))(*((_QWORD *)v29 + 13));
    v5 = (ID2D1Effect *)*((_QWORD *)v11 + 13);
    v12 = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 176LL))(this, v5);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x22u);
    }
    else
    {
      v13 = *((_DWORD *)this + 38);
      if ( v13 )
      {
        if ( v13 > 0 )
        {
          v28 = *((int *)this + 38);
          for ( i = 0LL; i < v28; ++i )
          {
            v16 = *((_QWORD *)this + 17);
            v27 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * i);
            v17 = *(_QWORD *)(v27 + 24);
            v18 = *(unsigned int *)(v16 + 4 * i);
            LODWORD(v29) = *(_DWORD *)(v16 + 4 * i);
            if ( v17 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48LL))(v17, 49LL);
              v20 = v27;
              v21 = *(CFilterEffect **)(v27 + 24);
              if ( v19 )
              {
                v26 = 0LL;
                D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v21, v30, v31, v32, &v26);
                v9 = D2DEffectNoRef;
                if ( D2DEffectNoRef < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DEffectNoRef, 0x3Bu);
                  goto LABEL_26;
                }
                ID2D1Effect::SetInputEffect(v5, (unsigned int)v29, v26);
              }
              else
              {
                if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 35LL) )
                {
                  v9 = -2147467263;
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x52u);
                  goto LABEL_27;
                }
                InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                                 (CFilterEffect *)&v25,
                                                 v31,
                                                 v32,
                                                 (const struct tagRECT *)(v20 + 4),
                                                 *(struct CCompositionSurfaceBitmap **)(v20 + 24),
                                                 &v25);
                v9 = InputEffectForAtlasedSurface;
                if ( InputEffectForAtlasedSurface < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, InputEffectForAtlasedSurface, 0x49u);
                  goto LABEL_26;
                }
                ID2D1Effect::SetInputEffect(v5, (unsigned int)v29, v25);
                ReleaseInterface<ID2D1Geometry>((__int64 *)&v25);
              }
            }
            else
            {
              (*(void (__fastcall **)(ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
                v5,
                v18,
                v30,
                1LL);
            }
          }
        }
        v14 = a5;
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
          v5,
          0LL,
          a2,
          1LL);
        v14 = a5;
        *a5 = v5;
      }
      *v14 = v5;
    }
  }
LABEL_26:
  if ( v9 < 0 )
    goto LABEL_27;
LABEL_28:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v25);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v9;
}
