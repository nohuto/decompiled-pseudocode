/*
 * XREFs of ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0
 * Callers:
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x18007DEB4 (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800090C8 (-Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180020430 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800204A0 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800208EC (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024274 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180024338 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800243B0 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180078960 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Initialize(
        CAnimatedGlassSheet *this,
        struct IDwmChannel *a2,
        unsigned __int8 a3)
{
  int v5; // eax
  int v6; // edi
  unsigned int v7; // r10d
  struct CTopLevelWindow::WindowFrame *v8; // rcx
  struct CBitmapSource *WindowFramePart; // rax
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // r11
  double v13; // xmm0_8
  int v14; // esi
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  __m128i v18; // xmm0
  __int64 v19; // r11
  LONG *v20; // rsi
  struct CAtlasedImage **v21; // rbx
  __int64 v22; // r14
  int v23; // eax
  struct CTopLevelWindow::WindowFrame *v24; // r12
  int v25; // eax
  struct CBitmapSource *v26; // rdx
  struct CAtlasedImage *v27; // rcx
  struct CAtlasedImage *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  struct CAtlasedImage *v35; // rcx
  struct tagSIZE v37; // [rsp+30h] [rbp-D0h] BYREF
  struct tagSIZE v38; // [rsp+38h] [rbp-C8h] BYREF
  struct IDwmChannel *v39; // [rsp+40h] [rbp-C0h]
  signed __int64 v40; // [rsp+48h] [rbp-B8h]
  signed __int64 v41; // [rsp+50h] [rbp-B0h]
  _DWORD v42[5]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v43[15]; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B4h] [rbp-4Ch]
  int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  int v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C4h] [rbp-3Ch]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  int v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D4h] [rbp-2Ch]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  int v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E4h] [rbp-1Ch]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  int v60; // [rsp+F0h] [rbp-10h]
  int v61; // [rsp+F4h] [rbp-Ch]
  int v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+FCh] [rbp-4h]
  int v64; // [rsp+100h] [rbp+0h]
  int v65; // [rsp+104h] [rbp+4h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  int v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+114h] [rbp+14h]
  int v70; // [rsp+118h] [rbp+18h]
  int v71; // [rsp+11Ch] [rbp+1Ch]
  int v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+124h] [rbp+24h]
  int v74; // [rsp+128h] [rbp+28h]
  int v75; // [rsp+12Ch] [rbp+2Ch]
  int v76; // [rsp+130h] [rbp+30h]
  int v77; // [rsp+134h] [rbp+34h]
  int v78; // [rsp+138h] [rbp+38h]
  int v79; // [rsp+13Ch] [rbp+3Ch]
  int v80; // [rsp+140h] [rbp+40h]
  int v81; // [rsp+144h] [rbp+44h]
  int v82; // [rsp+148h] [rbp+48h]
  int v83; // [rsp+14Ch] [rbp+4Ch]
  int v84; // [rsp+150h] [rbp+50h]
  int v85; // [rsp+154h] [rbp+54h]
  int v86; // [rsp+158h] [rbp+58h]
  int v87; // [rsp+15Ch] [rbp+5Ch]
  int v88; // [rsp+160h] [rbp+60h]
  int v89; // [rsp+164h] [rbp+64h]
  int v90; // [rsp+168h] [rbp+68h]
  int v91; // [rsp+16Ch] [rbp+6Ch]
  int v92; // [rsp+170h] [rbp+70h]
  int v93; // [rsp+174h] [rbp+74h]
  int v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ch] [rbp+7Ch]
  int v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+184h] [rbp+84h]
  int v98; // [rsp+188h] [rbp+88h]
  int v99; // [rsp+18Ch] [rbp+8Ch]
  int v100; // [rsp+190h] [rbp+90h]
  int v101; // [rsp+194h] [rbp+94h]
  int v102; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v103[17]; // [rsp+1A4h] [rbp+A4h] BYREF
  int v104; // [rsp+1E8h] [rbp+E8h]
  int v105; // [rsp+1F0h] [rbp+F0h]
  int v106; // [rsp+1FCh] [rbp+FCh]
  int v107; // [rsp+204h] [rbp+104h]

  v39 = a2;
  v5 = CAtlasedRectsVisual::Initialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0;
    v8 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * (a3 ^ 1LL));
    v37 = (struct tagSIZE)v8;
    do
    {
      WindowFramePart = CTopLevelWindow::GetWindowFramePart(v8, v7 + 9);
      if ( WindowFramePart )
      {
        *(_QWORD *)v10 = *((_QWORD *)WindowFramePart + 3);
        v13 = (double)*(int *)(v10 + 4);
        *(_DWORD *)v10 = (int)((double)*(int *)v10 * *(double *)(v12 + 440));
        *(_DWORD *)(v10 + 4) = (int)(v13 * *(double *)(v12 + 448));
      }
      else
      {
        *(_QWORD *)v10 = 0LL;
      }
      v7 = v11 + 1;
    }
    while ( v7 < 0xD );
    v14 = v102;
    v15 = v103[3];
    v16 = v103[2];
    v17 = v103[12];
    *((_DWORD *)this + 118) = v102;
    *((_DWORD *)this + 119) = v15;
    *((_DWORD *)this + 120) = v16;
    *((_DWORD *)this + 121) = v17;
    *((_DWORD *)this + 114) = v14;
    *((_DWORD *)this + 115) = v15;
    *((_DWORD *)this + 116) = v16;
    *((_DWORD *)this + 117) = v17;
    v43[1] = 0;
    v43[2] = 0;
    v60 = 0;
    v18 = _mm_cvtsi32_si128(*((_DWORD *)CTopLevelWindow::GetWindowFramePart(v8, 9u) + 6));
    v42[1] = 0x7FFFFFFF;
    v42[3] = 0x7FFFFFFF;
    v43[4] = 0x7FFFFFFF;
    v43[5] = 0x7FFFFFFF;
    v43[7] = 0x7FFFFFFF;
    v43[10] = 0x7FFFFFFF;
    v43[14] = 0x7FFFFFFF;
    v47 = 0x7FFFFFFF;
    v48 = 0x7FFFFFFF;
    v53 = 0x7FFFFFFF;
    v55 = 0x7FFFFFFF;
    v56 = 0x7FFFFFFF;
    v42[0] = -v14;
    v43[13] = -v14;
    v54 = -v14;
    v42[2] = -v16;
    v43[3] = -v16;
    v43[8] = -v15;
    v43[9] = -v16;
    *(double *)v18.m128i_i64 = _mm_cvtepi32_pd(v18).m128d_f64[0] * *(double *)(v19 + 440);
    v49 = -v15;
    v57 = -v17;
    v62 = 0x7FFFFFFF;
    v63 = -v17;
    v64 = 0x7FFFFFFF;
    v66 = 0x7FFFFFFF;
    v67 = -v15;
    v68 = 0x7FFFFFFF;
    v42[4] = (int)*(double *)v18.m128i_i64;
    v43[0] = (int)*(double *)v18.m128i_i64;
    v43[6] = (int)*(double *)v18.m128i_i64;
    v43[11] = (int)*(double *)v18.m128i_i64;
    v44 = (int)*(double *)v18.m128i_i64 - v16;
    v50 = v44;
    v45 = (int)*(double *)v18.m128i_i64 - v17;
    v51 = v45;
    v61 = 0;
    v43[12] = (int)*(double *)v18.m128i_i64;
    v46 = (int)*(double *)v18.m128i_i64;
    v52 = (int)*(double *)v18.m128i_i64;
    v58 = (int)*(double *)v18.m128i_i64;
    v59 = (int)*(double *)v18.m128i_i64;
    v65 = (int)*(double *)v18.m128i_i64;
    v76 = 0x7FFFFFFF;
    v80 = -v103[0];
    v77 = 0x7FFFFFFF;
    v81 = -v103[10];
    v74 = v44;
    v73 = (int)*(double *)v18.m128i_i64 - v15;
    v75 = v45;
    v72 = (int)*(double *)v18.m128i_i64 - v14;
    v69 = -v17;
    v78 = -(v104 + v14);
    v20 = v43;
    v90 = v78;
    v21 = (struct CAtlasedImage **)((char *)this + 280);
    v95 = v106;
    v85 = -(v105 + v15);
    v22 = 0LL;
    v91 = v85;
    v70 = (int)*(double *)v18.m128i_i64;
    v92 = -(v106 + v16);
    v71 = (int)*(double *)v18.m128i_i64;
    v96 = -(v104 + v103[9]);
    v79 = 0x7FFFFFFF;
    v82 = v104;
    v97 = -(v105 + v103[13]);
    v83 = 0x7FFFFFFF;
    v84 = 0x7FFFFFFF;
    v86 = -v16;
    v23 = v107 + v17;
    v87 = -v17;
    v24 = (struct CTopLevelWindow::WindowFrame *)v37;
    v99 = -v23;
    v88 = v105;
    v40 = (char *)&v102 - (char *)this;
    v89 = 0x7FFFFFFF;
    v41 = (char *)v103 - (char *)this;
    v93 = 0x7FFFFFFF;
    v94 = 0x7FFFFFFF;
    v98 = 0x7FFFFFFF;
    v100 = 0x7FFFFFFF;
    v101 = v107;
    while ( 1 )
    {
      v25 = CAtlasedImage::Create(v39, (struct CAtlasedImage **)this + v22 + 35);
      v6 = v25;
      if ( v25 < 0 )
        break;
      CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v21, *((unsigned int *)this + 66));
      if ( *(int *)((char *)v21 + v40 - 280) <= 0 || *(int *)((char *)v21 + v41 - 280) <= 0 )
        v26 = 0LL;
      else
        v26 = CTopLevelWindow::GetWindowFramePart(v24, (int)v22 + 9);
      CAtlasedImage::SetBitmapSource(*v21, v26);
      CAtlasedImage::SetInsetFromParent(*v21, (const struct _MARGINS *)&v42[6 * v22]);
      if ( *(v20 - 1) != 0x7FFFFFFF )
      {
        v27 = *v21;
        v38.cx = *(v20 - 1);
        v38.cy = *((_DWORD *)v27 + 7);
        CAtlasedImage::SetSize(v27, &v38);
      }
      if ( *v20 != 0x7FFFFFFF )
      {
        v28 = *v21;
        v37.cy = *v20;
        v37.cx = *((_DWORD *)v28 + 6);
        CAtlasedImage::SetSize(v28, &v37);
      }
      v29 = 8;
      if ( *(v20 - 2) != 0x7FFFFFFF )
        v29 = 0;
      v30 = (*(v20 - 5) == 0x7FFFFFFF) | v29;
      v31 = 4;
      if ( *(v20 - 3) != 0x7FFFFFFF )
        v31 = 0;
      v32 = v31 | v30;
      v33 = 2;
      if ( *(v20 - 4) != 0x7FFFFFFF )
        v33 = 0;
      v34 = v33 | v32;
      v35 = *v21;
      if ( *((_DWORD *)*v21 + 16) != v34 )
      {
        *((_DWORD *)v35 + 16) = v34;
        CAtlasedImage::SetDirtyFlags(v35, 1, 0x2000u);
      }
      v22 = (unsigned int)(v22 + 1);
      ++v21;
      v20 += 6;
      if ( (unsigned int)v22 >= 0xD )
        goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xB6u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4Bu);
  }
LABEL_29:
  if ( v6 < 0 )
    CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  return (unsigned int)v6;
}
