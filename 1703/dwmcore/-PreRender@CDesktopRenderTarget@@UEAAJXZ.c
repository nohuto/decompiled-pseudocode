/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180069240 (-NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006BDE0 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18006C970 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x18006E120 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180091210 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180091550 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180092D70 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180097AA8 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800C1B2C (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  unsigned int v1; // edi
  CDesktopRenderTarget *v2; // rsi
  int v3; // r15d
  __int64 v4; // r15
  __int128 *v5; // rbx
  char *v6; // rax
  char *v7; // r14
  __int64 **v8; // rsi
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  _QWORD *v11; // r13
  __int128 v12; // xmm6
  __int64 v13; // rbx
  __int64 ***v14; // rcx
  __int64 ***v15; // rax
  __int64 v16; // rcx
  char *v17; // rax
  int i; // ebx
  CHwndRenderTarget *v19; // rcx
  void (*v20)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *); // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ebx
  char v28; // bp
  char *v29; // rsi
  unsigned int v30; // eax
  int v31; // r8d
  char *v32; // rdx
  unsigned int v33; // r12d
  __int64 v34; // rcx
  int j; // ebx
  CDesktopRenderTarget *v36; // rcx
  void (__fastcall *v37)(CDesktopRenderTarget *, const struct CVisualTree *, const struct CDirtyRegion *); // rax
  unsigned int (__fastcall *v38)(CDirtyRegion *__hidden); // rax
  unsigned int v39; // ebx
  int v40; // eax
  int v41; // eax
  __int64 v43; // r13
  float *v44; // r12
  float *v45; // r8
  const struct MilRectF *v46; // rdx
  __int64 v47; // r9
  CVisual *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // ebx
  int v58; // eax
  __int64 *v59; // rcx
  __int64 v60; // rax
  int updated; // eax
  __int64 v62; // rsi
  unsigned int v63; // eax
  const struct MilRectF *v64; // rsi
  __int64 v65; // rbp
  int v66; // eax
  int v67; // [rsp+30h] [rbp-78h]
  int v68; // [rsp+30h] [rbp-78h]
  __int64 v69; // [rsp+38h] [rbp-70h]
  float *v71; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v1 = 0;
  *((_BYTE *)this + 254) = 0;
  v2 = this;
  v3 = 0;
  v67 = 0;
  if ( !*((_DWORD *)this + 8) )
    goto LABEL_62;
  if ( *(int *)(*((_QWORD *)this - 12) + 1224LL) < 2 || (v57 = 0, !*((_DWORD *)this + 44)) )
  {
LABEL_3:
    v4 = *((_QWORD *)v2 - 4);
    if ( !v4 )
    {
      v3 = v67;
      goto LABEL_62;
    }
    v5 = (__int128 *)((char *)v2 + 204);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      Template_xd(
        this,
        &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start,
        *((_QWORD *)v2 - 4),
        *(unsigned __int8 *)(v4 + 32));
    v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xAA8uLL);
    v7 = v6;
    if ( !v6 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    v6[824] = 0;
    v8 = (__int64 **)(v6 + 1128);
    *((_DWORD *)v6 + 239) = 0;
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    v9 = v6 + 280;
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CDirtyRegion::`vftable';
    v10 = v6 + 296;
    *((_QWORD *)v6 + 143) = v6 + 1128;
    *((_QWORD *)v6 + 144) = v6 + 1128;
    v11 = v6 + 312;
    *((_QWORD *)v6 + 142) = v6 + 1144;
    *((_QWORD *)v6 + 141) = v6 + 1144;
    *((_DWORD *)v6 + 674) = 0;
    *((_QWORD *)v6 + 35) = v6 + 280;
    *((_QWORD *)v6 + 36) = v6 + 280;
    *((_QWORD *)v6 + 38) = v6 + 296;
    *((_QWORD *)v6 + 37) = v6 + 296;
    *((_QWORD *)v6 + 40) = v6 + 312;
    *((_QWORD *)v6 + 39) = v6 + 312;
    *((_QWORD *)v6 + 42) = v6 + 328;
    *((_QWORD *)v6 + 41) = v6 + 328;
    *((_QWORD *)v6 + 44) = v6 + 344;
    *((_QWORD *)v6 + 43) = v6 + 344;
    *((_QWORD *)v6 + 46) = v6 + 360;
    *((_QWORD *)v6 + 45) = v6 + 360;
    *((_QWORD *)v6 + 48) = v6 + 376;
    *((_QWORD *)v6 + 47) = v6 + 376;
    *((_QWORD *)v6 + 50) = v6 + 392;
    *((_QWORD *)v6 + 49) = v6 + 392;
    (**(void (__fastcall ***)(LPVOID))v6)(v6);
    if ( v5 )
      v12 = *v5;
    else
      v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v13 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL);
    memset_0(v7 + 24, 0, 0x80uLL);
    memset_0(v7 + 536, 0, 0x120uLL);
    *((_QWORD *)v7 + 2) = v13;
    *((_DWORD *)v7 + 676) = 0;
    *((_DWORD *)v7 + 280) = 0;
    *(_WORD *)(v7 + 2725) = 0;
    v7[2724] = 0;
    *(_OWORD *)(v7 + 2708) = v12;
    *v9 = v9;
    *((_QWORD *)v7 + 36) = v7 + 280;
    *((_QWORD *)v7 + 38) = v7 + 296;
    *v10 = v10;
    *((_QWORD *)v7 + 40) = v7 + 312;
    *v11 = v11;
    *((_QWORD *)v7 + 42) = v7 + 328;
    *((_QWORD *)v7 + 41) = v7 + 328;
    *((_QWORD *)v7 + 44) = v7 + 344;
    *((_QWORD *)v7 + 43) = v7 + 344;
    *((_QWORD *)v7 + 46) = v7 + 360;
    *((_QWORD *)v7 + 45) = v7 + 360;
    *((_QWORD *)v7 + 48) = v7 + 376;
    *((_QWORD *)v7 + 47) = v7 + 376;
    *((_QWORD *)v7 + 50) = v7 + 392;
    *((_QWORD *)v7 + 49) = v7 + 392;
    v14 = (__int64 ***)*((_QWORD *)v7 + 142);
    v15 = (__int64 ***)v14[1];
    if ( *v14 != v8 || *v15 != (__int64 **)v14 )
      __fastfail(3u);
    *((_QWORD *)v7 + 142) = v15;
    *v15 = v8;
    while ( *v8 != (__int64 *)v8 )
    {
      v59 = *v8;
      v60 = **v8;
      if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v60 + 8) != v59 )
        __fastfail(3u);
      *v8 = (__int64 *)v60;
      *(_QWORD *)(v60 + 8) = v8;
      WPF::ProcessHeapImpl::Free(v59);
    }
    *((_QWORD *)v7 + 142) = v7 + 1128;
    *v8 = (__int64 *)v8;
    v16 = 8LL;
    *((_QWORD *)v7 + 143) = v7 + 1128;
    *((_QWORD *)v7 + 144) = v7 + 1128;
    *((_QWORD *)v7 + 142) = v7 + 1144;
    *((_QWORD *)v7 + 141) = v7 + 1144;
    v17 = v7 + 160;
    *((_DWORD *)v7 + 674) = 0;
    do
    {
      *(_QWORD *)v17 = 0LL;
      *((_QWORD *)v17 - 1) = 0LL;
      v17[260] = 1;
      *(_QWORD *)(v17 + 252) = 0LL;
      *((_DWORD *)v17 + 62) = 0;
      *((_QWORD *)v17 - 16) = 0LL;
      *((_QWORD *)v17 - 17) = 0LL;
      v17 += 16;
      --v16;
    }
    while ( v16 );
    for ( i = *(_DWORD *)(v4 + 856); i > 0; --i )
    {
      v19 = *(CHwndRenderTarget **)(*(_QWORD *)(v4 + 832) + 8LL * (unsigned int)(i - 1));
      v20 = *(void (**)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *))(*(_QWORD *)v19 + 32LL);
      if ( v20 == CHwndRenderTarget::AddInvalidRects )
        CHwndRenderTarget::AddInvalidRects(v19, (const struct CVisualTree *)v4, (struct CDirtyRegion *)v7);
      else
        ((void (__fastcall *)(CHwndRenderTarget *, __int64, char *))v20)(v19, v4, v7);
    }
    v68 = 0;
    if ( *(_BYTE *)(v4 + 33) )
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x131u);
      goto LABEL_123;
    }
    v21 = *(_QWORD *)(v4 + 24);
    *(_BYTE *)(v4 + 33) = 1;
    if ( (*(_BYTE *)(v21 + 88) & 0x1F) != 0 )
    {
      v22 = CPreComputeContext::PreCompute(
              (CPreComputeContext *)(v4 + 64),
              (const struct CVisualTree *)v4,
              (struct CDirtyRegion *)v7);
      v68 = v22;
      if ( v22 >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xE0u);
    }
    else
    {
      if ( *(_BYTE *)(v4 + 32)
        || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 560LL) + 120LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 560LL))
        || (updated = CPreComputeContext::UpdateTransformChildren(
                        (CPreComputeContext *)(v4 + 64),
                        (const struct CVisualTree *)v4,
                        1),
            v68 = updated,
            updated >= 0) )
      {
LABEL_24:
        if ( qword_18023E528 && (v23 = *((_DWORD *)qword_18023E528 + 18), v24 = 0, v23) )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8LL * v24);
            if ( *(_BYTE *)(v25 + 212) || *(_DWORD *)(v25 + 208) )
              break;
            if ( ++v24 >= v23 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL) + 100LL) )
          {
            v69 = 1LL;
LABEL_31:
            v26 = *(_QWORD *)(v4 + 16);
            if ( *(_DWORD *)(v26 + 1344) )
              v69 = 0LL;
            if ( *(_QWORD *)(v26 + 568) )
              v69 = 2LL;
            if ( v7[2724] )
            {
              *((_DWORD *)v7 + 280) = 1;
            }
            else
            {
              memset_0(v7 + 960, 0, 0x80uLL);
              v27 = 0;
              do
              {
                v28 = 0;
                v29 = &v7[16 * v27];
                if ( *((float *)v29 + 8) > *((float *)v29 + 6) && *((float *)v29 + 9) > *((float *)v29 + 7) )
                {
                  v43 = v27 + 1;
                  if ( (unsigned int)v43 < 8 )
                  {
                    v44 = (float *)&v7[16 * (unsigned int)v43 + 36];
                    v45 = (float *)&v7[32 * v43 + 536 + 4 * v27];
                    v71 = v45;
                    do
                    {
                      if ( *(v44 - 1) > *(v44 - 3) && *v44 > *(v44 - 2) )
                      {
                        if ( v69 == 2
                          || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                                v29 + 24,
                                                &v7[16 * (unsigned int)v43 + 24]) )
                        {
LABEL_82:
                          CDirtyRegion::Merge((CDirtyRegion *)v7, v27, v43);
                          v28 = 1;
                          break;
                        }
                        if ( v47 )
                        {
                          if ( *v45 >= 0.86000001 || CalcOvehead((const struct MilRectF *)(v29 + 24), v46) < 50000.0 )
                            goto LABEL_82;
                          v45 = v71;
                        }
                      }
                      v45 += 8;
                      LODWORD(v43) = v43 + 1;
                      v44 += 4;
                      v71 = v45;
                    }
                    while ( (unsigned int)v43 < 8 );
                  }
                }
                v30 = v27 + 1;
                v27 = 0;
                if ( !v28 )
                  v27 = v30;
              }
              while ( v27 < 8 );
              v31 = 2;
              v32 = v7 + 36;
              v33 = 0;
              do
              {
                if ( *((float *)v32 - 1) > *((float *)v32 - 3) && *(float *)v32 > *((float *)v32 - 2) )
                {
                  v49 = v33;
                  v50 = v33++ + 60LL;
                  *(_OWORD *)&v7[16 * v50] = *(_OWORD *)(v32 - 12);
                  *(_DWORD *)&v7[4 * v49 + 1088] = v31 - 2;
                }
                if ( *((float *)v32 + 3) > *((float *)v32 + 1) && *((float *)v32 + 4) > *((float *)v32 + 2) )
                {
                  v51 = v33;
                  v52 = v33++ + 60LL;
                  *(_OWORD *)&v7[16 * v52] = *(_OWORD *)(v32 + 4);
                  *(_DWORD *)&v7[4 * v51 + 1088] = v31 - 1;
                }
                if ( *((float *)v32 + 7) > *((float *)v32 + 5) && *((float *)v32 + 8) > *((float *)v32 + 6) )
                {
                  v53 = v33;
                  v54 = v33++ + 60LL;
                  *(_OWORD *)&v7[16 * v54] = *(_OWORD *)(v32 + 20);
                  *(_DWORD *)&v7[4 * v53 + 1088] = v31;
                }
                if ( *((float *)v32 + 11) > *((float *)v32 + 9) && *((float *)v32 + 12) > *((float *)v32 + 10) )
                {
                  v55 = v33;
                  v56 = v33++ + 60LL;
                  *(_OWORD *)&v7[16 * v56] = *(_OWORD *)(v32 + 36);
                  *(_DWORD *)&v7[4 * v55 + 1088] = v31 + 1;
                }
                v31 += 4;
                v32 += 64;
              }
              while ( (unsigned int)(v31 - 2) < 8 );
              *((_DWORD *)v7 + 280) = v33;
            }
            v7[2726] = 1;
            if ( !CDirtyRegion::IsEmpty((CDirtyRegion *)v7) )
            {
              v48 = *(CVisual **)(*(_QWORD *)(v4 + 24) + 80LL);
              if ( v48 )
              {
                v62 = 960LL;
                v63 = *((_DWORD *)v7 + 280);
                v34 = 2708LL;
                if ( v7[2724] )
                  v62 = 2708LL;
                v64 = (const struct MilRectF *)&v7[v62];
                if ( v63 )
                {
                  v65 = v63;
                  do
                  {
                    CVisual::AddAdditionalDirtyRects(v48, v64);
                    v64 = (const struct MilRectF *)((char *)v64 + 16);
                    --v65;
                  }
                  while ( v65 );
                }
              }
            }
            goto LABEL_49;
          }
        }
        v69 = 0LL;
        goto LABEL_31;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xEBu);
    }
LABEL_49:
    *(_BYTE *)(v4 + 33) = 0;
    if ( v68 >= 0 )
    {
      for ( j = *(_DWORD *)(v4 + 856); j > 0; --j )
      {
        v36 = *(CDesktopRenderTarget **)(*(_QWORD *)(v4 + 832) + 8LL * (unsigned int)(j - 1));
        v37 = *(void (__fastcall **)(CDesktopRenderTarget *, const struct CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v36 + 24LL);
        if ( v37 == CDesktopRenderTarget::NotifyTreeDirtyRegion )
        {
          CDesktopRenderTarget::NotifyTreeDirtyRegion(
            v36,
            (const struct CVisualTree *)v4,
            (const struct CDirtyRegion *)v7);
        }
        else if ( v37 == CHwndRenderTarget::NotifyTreeDirtyRegion )
        {
          CHwndRenderTarget::NotifyTreeDirtyRegion(v36, (const struct CVisualTree *)v4, (const struct CDirtyRegion *)v7);
        }
        else
        {
          v37(v36, (const struct CVisualTree *)v4, (const struct CDirtyRegion *)v7);
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v34, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, v4);
      v3 = v68;
      goto LABEL_57;
    }
    v3 = v68;
LABEL_123:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC0u);
LABEL_57:
    v38 = *(unsigned int (__fastcall **)(CDirtyRegion *__hidden))(*(_QWORD *)v7 + 8LL);
    if ( v38 == CDirtyRegion::Release )
      CDirtyRegion::Release((CDirtyRegion *)v7);
    else
      v38((CDirtyRegion *)v7);
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x7F7u);
    v2 = this;
    goto LABEL_62;
  }
  while ( 1 )
  {
    v58 = CVisualTree::PreCompute(*(CVisualTree **)(*((_QWORD *)v2 + 19) + 8LL * v57));
    v67 = v58;
    v3 = v58;
    if ( v58 < 0 )
      break;
    if ( ++v57 >= *((_DWORD *)v2 + 44) )
      goto LABEL_3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x7E8u);
LABEL_62:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v3, 0x66Au);
  }
  else
  {
    v39 = 0;
    if ( *((_DWORD *)v2 + 8) )
    {
      while ( 1 )
      {
        v40 = CHwndRenderTarget::PreRender(
                *(CHwndRenderTarget **)(*((_QWORD *)v2 + 1) + 8LL * v39),
                *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 - 12) + 32LL) + 150LL));
        v3 = v40;
        if ( v40 < 0 )
          break;
        if ( ++v39 >= *((_DWORD *)v2 + 8) )
          goto LABEL_66;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v40, 0x672u);
    }
    else
    {
LABEL_66:
      if ( *((_DWORD *)v2 + 20) )
      {
        while ( 1 )
        {
          v66 = CHwndRenderTarget::PreRender(
                  *(CHwndRenderTarget **)(*((_QWORD *)v2 + 7) + 8LL * v1),
                  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 - 12) + 32LL) + 150LL));
          v3 = v66;
          if ( v66 < 0 )
            break;
          if ( ++v1 >= *((_DWORD *)v2 + 20) )
            goto LABEL_67;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v66, 0x677u);
      }
      else
      {
LABEL_67:
        v41 = CDesktopRenderTarget::CalculateOcclusion(v2, 1);
        v3 = v41;
        if ( v41 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v41, 0x67Eu);
      }
    }
  }
  return (unsigned int)v3;
}
