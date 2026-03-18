/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006DD4
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18013C274 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800A90A0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800A9204 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(__int64 a1, __int64 a2, float *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  CInputSinkStruct::InputQueueInfo *v6; // rdi
  int DoesImageOcclude; // eax
  unsigned int v11; // ebp
  CInputSinkStruct::InputQueueInfo *v12; // rax
  unsigned int v13; // esi
  float *v14; // rdx
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF
  char v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v6 = 0LL;
  v23 = 0;
  if ( !*(_DWORD *)(a1 + 1036) )
  {
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(a1, a2, a5, &v23);
    v5 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      v21 = 1382;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DoesImageOcclude, v21);
      goto LABEL_23;
    }
    if ( v23
      && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a4 + 40LL))(a4, v22)
      && LODWORD(v22[0]) )
    {
      v11 = v22[0];
      v12 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(LODWORD(v22[0]), 0x10uLL));
      v6 = v12;
      if ( v12 )
        `vector constructor iterator'(
          v12,
          0x10uLL,
          v11,
          (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      else
        v6 = 0LL;
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, CInputSinkStruct::InputQueueInfo *, _QWORD))(*(_QWORD *)a4 + 48LL))(
               a4,
               v6,
               LODWORD(v22[0])) )
        {
          v13 = 0;
          if ( LODWORD(v22[0]) )
          {
            while ( 1 )
            {
              v14 = (float *)((char *)v6 + 16 * v13);
              if ( *a3 > *v14 )
                *v14 = *a3;
              v15 = a3[1];
              if ( v15 > v14[1] )
                v14[1] = v15;
              v16 = a3[2];
              v17 = v14[2];
              if ( v17 > v16 )
              {
                v14[2] = v16;
                v17 = v16;
              }
              v18 = a3[3];
              v19 = v14[3];
              if ( v19 > v18 )
              {
                v14[3] = v18;
                v19 = v18;
                v17 = v14[2];
              }
              if ( v17 <= *v14 || v19 <= v14[1] )
              {
                v14[3] = 0.0;
                v14[2] = 0.0;
                v14[1] = 0.0;
                *v14 = 0.0;
              }
              DoesImageOcclude = COcclusionContext::CollectRectangleForOcclusion(a1, v14, 0LL, 0LL);
              v5 = DoesImageOcclude;
              if ( DoesImageOcclude < 0 )
                break;
              if ( ++v13 >= LODWORD(v22[0]) )
                goto LABEL_23;
            }
            v21 = 1396;
            goto LABEL_29;
          }
        }
      }
      else
      {
        v5 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x56Cu);
      }
    }
  }
LABEL_23:
  operator delete(v6);
  return v5;
}
