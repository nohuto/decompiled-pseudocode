/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002E54
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000236C (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002E54 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180001FB4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002E54 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18001BAC0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18016F0A8 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct ID2D1Bitmap1 *a2,
        struct ID2DContext *a3,
        struct ID2DContextOwner *a4,
        struct ID2D1Effect **a5)
{
  int v5; // eax
  ID2D1Effect *v6; // rdi
  unsigned int v8; // eax
  int v10; // eax
  int v11; // ebx
  struct ID2DContext *v12; // rbx
  int v13; // eax
  int v14; // eax
  struct ID2D1Effect **v15; // rax
  __int64 i; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rbx
  CFilterEffect *v23; // rcx
  int D2DEffectNoRef; // eax
  int v25; // r9d
  int InputEffectForAtlasedSurface; // eax
  int v27; // r9d
  struct ID2D1Effect *v28; // [rsp+30h] [rbp-48h] BYREF
  struct ID2D1Effect *v29; // [rsp+38h] [rbp-40h] BYREF
  __int64 v30; // [rsp+40h] [rbp-38h]
  __int64 v31; // [rsp+48h] [rbp-30h]
  struct ID2DContext *v32; // [rsp+80h] [rbp+8h] BYREF
  struct ID2D1Bitmap1 *v33; // [rsp+88h] [rbp+10h]
  struct ID2DContext *v34; // [rsp+90h] [rbp+18h]
  struct ID2DContextOwner *v35; // [rsp+98h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v5 = *((_DWORD *)this + 8);
  v6 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v8 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((v5 & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v8;
  if ( (v8 & 6) != 2 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1Du);
LABEL_11:
    *a5 = 0LL;
    goto LABEL_8;
  }
  v10 = CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
          (struct _GUID *)((char *)this + 72),
          a3,
          &v32);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x20u);
  }
  else
  {
    v12 = v32;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v32 + 13) + 8LL))(*((_QWORD *)v32 + 13));
    v6 = (ID2D1Effect *)*((_QWORD *)v12 + 13);
    v13 = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 144LL))(this, v6);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v14 = *((_DWORD *)this + 42);
      if ( v14 )
      {
        if ( v14 > 0 )
        {
          v31 = *((int *)this + 42);
          for ( i = 0LL; i < v31; ++i )
          {
            v18 = *((_QWORD *)this + 19);
            v30 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i);
            v19 = *(_QWORD *)(v30 + 24);
            v20 = *(unsigned int *)(v18 + 4 * i);
            LODWORD(v32) = *(_DWORD *)(v18 + 4 * i);
            if ( v19 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 8LL);
              v22 = v30;
              v23 = *(CFilterEffect **)(v30 + 24);
              if ( v21 )
              {
                v29 = 0LL;
                D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v23, v33, v34, v35, &v29);
                v11 = D2DEffectNoRef;
                if ( D2DEffectNoRef < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DEffectNoRef, 0x3Bu);
                  goto LABEL_7;
                }
                ID2D1Effect::SetInputEffect(v6, (unsigned int)v32, v29, v25);
              }
              else
              {
                if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v23 + 48LL))(v23, 97LL) )
                {
                  v11 = -2147467263;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x52u);
                  goto LABEL_11;
                }
                InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                                 (CFilterEffect *)&v28,
                                                 v34,
                                                 v35,
                                                 (const struct tagRECT *)(v22 + 4),
                                                 *(struct CCompositionSurfaceBitmap **)(v22 + 24),
                                                 &v28);
                v11 = InputEffectForAtlasedSurface;
                if ( InputEffectForAtlasedSurface < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, InputEffectForAtlasedSurface, 0x49u);
                  goto LABEL_7;
                }
                ID2D1Effect::SetInputEffect(v6, (unsigned int)v32, v28, v27);
                ReleaseInterface<ID2D1Geometry>(&v28);
              }
            }
            else
            {
              (*(void (__fastcall **)(ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
                v6,
                v20,
                v33,
                1LL);
            }
          }
        }
        v15 = a5;
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
          v6,
          0LL,
          a2,
          1LL);
        v15 = a5;
        *a5 = v6;
      }
      *v15 = v6;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x22u);
  }
LABEL_7:
  if ( v11 < 0 )
    goto LABEL_11;
LABEL_8:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v6);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v28);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v11;
}
