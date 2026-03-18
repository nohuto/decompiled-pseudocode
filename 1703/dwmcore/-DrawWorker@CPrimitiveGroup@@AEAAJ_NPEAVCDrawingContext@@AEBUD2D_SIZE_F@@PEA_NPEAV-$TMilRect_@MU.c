/*
 * XREFs of ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420
 * Callers:
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C380 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C830 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18000B568 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F62C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800379F0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 *     Template_ppffff @ 0x180166400 (Template_ppffff.c)
 */

__int64 __fastcall CPrimitiveGroup::DrawWorker(
        CPrimitiveGroup *this,
        char a2,
        __int64 a3,
        struct D2D_SIZE_F *a4,
        bool *a5,
        float *a6,
        CDrawListCache *a7)
{
  char v7; // r13
  char v9; // r14
  bool v11; // al
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  int v30; // eax
  int v31; // eax
  __int64 v32; // r14
  struct IBitmapRealization *v33; // rbx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  struct IBitmapRealization *v38; // [rsp+48h] [rbp-D0h] BYREF
  CDrawListCache *v39; // [rsp+50h] [rbp-C8h]
  struct D2D_SIZE_F *v40; // [rsp+58h] [rbp-C0h]
  __int128 v41; // [rsp+60h] [rbp-B8h] BYREF
  _OWORD v42[4]; // [rsp+70h] [rbp-A8h] BYREF
  int v43; // [rsp+B0h] [rbp-68h]
  __int64 v44; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-50h]

  v7 = 0;
  v9 = a2;
  v40 = a4;
  v39 = a7;
  if ( a5 )
  {
    v11 = 0;
    if ( *((_QWORD *)this + 47) && a6 )
    {
      v12 = *((float *)this + 107);
      *a6 = v12;
      v13 = *((float *)this + 108);
      a6[1] = v13;
      v14 = *((float *)this + 109);
      a6[2] = v14;
      v15 = *((float *)this + 110);
      a6[3] = v15;
      v11 = v14 > v12 && v15 > v13;
    }
    *a5 = v11;
  }
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    v32 = 0LL;
    if ( *((_DWORD *)this + 48) )
    {
      do
      {
        if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                    (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * v32) + 64LL),
                    &v38) >= 0 )
        {
          v33 = v38;
          (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v38 + 136LL))(v38);
          (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v33 + 16LL))(v33);
        }
        v32 = (unsigned int)(v32 + 1);
      }
      while ( (unsigned int)v32 < *((_DWORD *)this + 48) );
      v9 = a2;
    }
    else
    {
      v9 = a2;
    }
  }
  if ( *((_QWORD *)this + 47) )
  {
    LODWORD(v16) = 0;
    if ( *(_BYTE *)(a3 + 6456) )
    {
      if ( *(_BYTE *)(a3 + 6457) )
        v16 = *(_QWORD *)(a3 + 3064);
      else
        v16 = *(_QWORD *)(*(_QWORD *)(a3 + 6464) + 24LL);
    }
    CDrawingContext::EtwLogCurrentState((CDrawingContext *)a3);
    v19 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      Template_ppffff(
        v18,
        v17,
        v16,
        (_DWORD)this,
        *((_DWORD *)this + 23),
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25),
        *((_DWORD *)this + 26));
      v19 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    LODWORD(v38) = -1;
    if ( *(_BYTE *)(a3 + 3040) || *(_QWORD *)(a3 + 6704) )
    {
      v44 = 0x3F8000003F800000LL;
      v45 = 0x3F8000003F800000LL;
      v31 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a3, (CPrimitiveGroup *)((char *)this + 92));
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x67u);
        return 0LL;
      }
    }
    else
    {
      if ( (v19 & 0x20) != 0 )
        Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *(unsigned int *)(a3 + 6696));
      v20 = *(_DWORD *)(a3 + 472);
      v7 = 1;
      v43 = 0;
      if ( v20 )
      {
        v21 = (unsigned int)(v20 - 1);
        v22 = *(_QWORD *)(a3 + 488);
        v23 = *(_OWORD *)(68 * v21 + v22 + 16);
        v42[0] = *(_OWORD *)(68 * v21 + v22);
        v24 = *(_OWORD *)(68 * v21 + v22 + 32);
        v42[1] = v23;
        v25 = *(_OWORD *)(68 * v21 + v22 + 48);
        LODWORD(v22) = *(_DWORD *)(68 * v21 + v22 + 64);
        v42[2] = v24;
        v42[3] = v25;
        v43 = v22;
      }
      else
      {
        CMILMatrix::operator=(v42);
      }
      if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
      {
        v41 = *(_OWORD *)((char *)this + 92);
        CMILMatrix::Transform2DBoundsHelper<0>(v42, &v41, &v44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_ffff(v34, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v35, v36, v45, SBYTE4(v45));
      }
      if ( v9 )
      {
        v30 = CContent::DrawAsDrawList(this, (struct CDrawingContext *)a3, v40, (int)a6, v39);
        if ( v30 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x82u);
      }
      else
      {
        CPrimitiveGroup::ProcessHeatMapChanges(this);
        v26 = CDrawingContext::DrawPrimitiveGroup(
                (CDrawingContext *)a3,
                this,
                *((_BYTE *)this + 449) == 0,
                (unsigned int *)&v38);
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x88u);
      }
    }
    v28 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_xd(v27, &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO, this, (unsigned int)v38);
      v28 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( v7 && (v28 & 0x20) != 0 )
      Template_qq(v27, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *(unsigned int *)(a3 + 6696));
  }
  return 0LL;
}
