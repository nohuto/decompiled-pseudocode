/*
 * XREFs of ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180087090
 * Callers:
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x180086F94 (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180020664 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800206D4 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180020BEC (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024620 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800246E4 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180024760 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18006F930 (-Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180081D70 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Initialize(CBaseObject **this, struct IDwmChannel *a2, unsigned __int8 a3)
{
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // r10d
  CDesktopManager *v9; // rbx
  struct CTopLevelWindow::WindowFrame *v10; // r11
  struct CBitmapSource *WindowFramePart; // rax
  int *v12; // r9
  int v13; // r10d
  __int64 v14; // rax
  double v15; // xmm2_8
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // r14d
  int v20; // r15d
  int v21; // r12d
  __m128i v22; // xmm0
  LONG *v23; // rsi
  struct CAtlasedImage **v24; // rbx
  __int64 v25; // r14
  int v26; // eax
  struct CTopLevelWindow::WindowFrame *v27; // r12
  int v28; // eax
  struct CBitmapSource *v29; // rdx
  struct CAtlasedImage *v30; // rcx
  struct CAtlasedImage *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  struct CAtlasedImage *v38; // rcx
  struct tagSIZE v40; // [rsp+30h] [rbp-D0h] BYREF
  struct tagSIZE v41; // [rsp+38h] [rbp-C8h] BYREF
  struct IDwmChannel *v42; // [rsp+40h] [rbp-C0h]
  signed __int64 v43; // [rsp+48h] [rbp-B8h]
  signed __int64 v44; // [rsp+50h] [rbp-B0h]
  _DWORD v45[5]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v46[15]; // [rsp+74h] [rbp-8Ch] BYREF
  int v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B4h] [rbp-4Ch]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  int v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C4h] [rbp-3Ch]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  int v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D4h] [rbp-2Ch]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  int v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E4h] [rbp-1Ch]
  int v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+ECh] [rbp-14h]
  int v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F4h] [rbp-Ch]
  int v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+FCh] [rbp-4h]
  int v67; // [rsp+100h] [rbp+0h]
  int v68; // [rsp+104h] [rbp+4h]
  int v69; // [rsp+108h] [rbp+8h]
  int v70; // [rsp+10Ch] [rbp+Ch]
  int v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+114h] [rbp+14h]
  int v73; // [rsp+118h] [rbp+18h]
  int v74; // [rsp+11Ch] [rbp+1Ch]
  int v75; // [rsp+120h] [rbp+20h]
  int v76; // [rsp+124h] [rbp+24h]
  int v77; // [rsp+128h] [rbp+28h]
  int v78; // [rsp+12Ch] [rbp+2Ch]
  int v79; // [rsp+130h] [rbp+30h]
  int v80; // [rsp+134h] [rbp+34h]
  int v81; // [rsp+138h] [rbp+38h]
  int v82; // [rsp+13Ch] [rbp+3Ch]
  int v83; // [rsp+140h] [rbp+40h]
  int v84; // [rsp+144h] [rbp+44h]
  int v85; // [rsp+148h] [rbp+48h]
  int v86; // [rsp+14Ch] [rbp+4Ch]
  int v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+154h] [rbp+54h]
  int v89; // [rsp+158h] [rbp+58h]
  int v90; // [rsp+15Ch] [rbp+5Ch]
  int v91; // [rsp+160h] [rbp+60h]
  int v92; // [rsp+164h] [rbp+64h]
  int v93; // [rsp+168h] [rbp+68h]
  int v94; // [rsp+16Ch] [rbp+6Ch]
  int v95; // [rsp+170h] [rbp+70h]
  int v96; // [rsp+174h] [rbp+74h]
  int v97; // [rsp+178h] [rbp+78h]
  int v98; // [rsp+17Ch] [rbp+7Ch]
  int v99; // [rsp+180h] [rbp+80h]
  int v100; // [rsp+184h] [rbp+84h]
  int v101; // [rsp+188h] [rbp+88h]
  int v102; // [rsp+18Ch] [rbp+8Ch]
  int v103; // [rsp+190h] [rbp+90h]
  int v104; // [rsp+194h] [rbp+94h]
  int v105; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v106[17]; // [rsp+1A4h] [rbp+A4h] BYREF
  int v107; // [rsp+1E8h] [rbp+E8h]
  int v108; // [rsp+1F0h] [rbp+F0h]
  int v109; // [rsp+1FCh] [rbp+FCh]
  int v110; // [rsp+204h] [rbp+104h]

  v42 = a2;
  v5 = CAtlasedRectsVisual::Initialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = a3;
    v8 = 0;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    v10 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * (v7 ^ 1));
    v40 = (struct tagSIZE)v10;
    do
    {
      WindowFramePart = CTopLevelWindow::GetWindowFramePart(v10, v8 + 9);
      if ( WindowFramePart )
      {
        v14 = *((_QWORD *)WindowFramePart + 3);
        v15 = *((double *)v9 + 55);
        *(_QWORD *)(v12 - 1) = v14;
        v16 = (int)((double)(int)v14 * v15);
        v17 = (int)((double)*v12 * v15);
      }
      else
      {
        v17 = 0;
        v16 = 0;
      }
      *(v12 - 1) = v16;
      v8 = v13 + 1;
      *v12 = v17;
    }
    while ( v8 < 0xD );
    v18 = v105;
    v19 = v106[3];
    v20 = v106[2];
    v21 = v106[12];
    *((_DWORD *)this + 118) = v105;
    *((_DWORD *)this + 119) = v19;
    *((_DWORD *)this + 120) = v20;
    *((_DWORD *)this + 121) = v21;
    *((_DWORD *)this + 114) = v18;
    *((_DWORD *)this + 115) = v19;
    *((_DWORD *)this + 116) = v20;
    *((_DWORD *)this + 117) = v21;
    v46[1] = 0;
    v46[2] = 0;
    v63 = 0;
    v22 = _mm_cvtsi32_si128(*((_DWORD *)CTopLevelWindow::GetWindowFramePart(v10, 9u) + 6));
    v45[1] = 0x7FFFFFFF;
    v45[3] = 0x7FFFFFFF;
    v46[4] = 0x7FFFFFFF;
    v46[5] = 0x7FFFFFFF;
    v46[7] = 0x7FFFFFFF;
    v46[10] = 0x7FFFFFFF;
    v46[14] = 0x7FFFFFFF;
    v50 = 0x7FFFFFFF;
    v51 = 0x7FFFFFFF;
    v56 = 0x7FFFFFFF;
    v58 = 0x7FFFFFFF;
    v59 = 0x7FFFFFFF;
    v45[0] = -v18;
    v46[13] = -v18;
    v57 = -v18;
    v45[2] = -v20;
    v46[3] = -v20;
    v46[8] = -v19;
    v46[9] = -v20;
    *(double *)v22.m128i_i64 = _mm_cvtepi32_pd(v22).m128d_f64[0] * *((double *)v9 + 55);
    v52 = -v19;
    v60 = -v21;
    v65 = 0x7FFFFFFF;
    v66 = -v21;
    v67 = 0x7FFFFFFF;
    v69 = 0x7FFFFFFF;
    v70 = -v19;
    v45[4] = (int)*(double *)v22.m128i_i64;
    v46[0] = (int)*(double *)v22.m128i_i64;
    v46[6] = (int)*(double *)v22.m128i_i64;
    v46[11] = (int)*(double *)v22.m128i_i64;
    v47 = (int)*(double *)v22.m128i_i64 - v20;
    v53 = v47;
    v48 = (int)*(double *)v22.m128i_i64 - v21;
    v54 = v48;
    v64 = 0;
    v46[12] = (int)*(double *)v22.m128i_i64;
    v49 = (int)*(double *)v22.m128i_i64;
    v55 = (int)*(double *)v22.m128i_i64;
    v61 = (int)*(double *)v22.m128i_i64;
    v62 = (int)*(double *)v22.m128i_i64;
    v68 = (int)*(double *)v22.m128i_i64;
    v71 = 0x7FFFFFFF;
    v83 = -v106[0];
    v79 = 0x7FFFFFFF;
    v80 = 0x7FFFFFFF;
    v84 = -v106[10];
    v77 = v47;
    v76 = (int)*(double *)v22.m128i_i64 - v19;
    v78 = v48;
    v75 = (int)*(double *)v22.m128i_i64 - v18;
    v72 = -v21;
    v81 = -(v107 + v18);
    v23 = v46;
    v93 = v81;
    v24 = this + 35;
    v98 = v109;
    v88 = -(v108 + v19);
    v25 = 0LL;
    v94 = v88;
    v73 = (int)*(double *)v22.m128i_i64;
    v95 = -(v109 + v20);
    v74 = (int)*(double *)v22.m128i_i64;
    v99 = -(v107 + v106[9]);
    v82 = 0x7FFFFFFF;
    v85 = v107;
    v100 = -(v108 + v106[13]);
    v86 = 0x7FFFFFFF;
    v87 = 0x7FFFFFFF;
    v89 = -v20;
    v26 = v110 + v21;
    v90 = -v21;
    v27 = (struct CTopLevelWindow::WindowFrame *)v40;
    v102 = -v26;
    v91 = v108;
    v43 = (char *)&v105 - (char *)this;
    v92 = 0x7FFFFFFF;
    v44 = (char *)v106 - (char *)this;
    v96 = 0x7FFFFFFF;
    v97 = 0x7FFFFFFF;
    v101 = 0x7FFFFFFF;
    v103 = 0x7FFFFFFF;
    v104 = v110;
    while ( 1 )
    {
      v28 = CAtlasedImage::Create(v42, &this[v25 + 35]);
      v6 = v28;
      if ( v28 < 0 )
        break;
      CAtlasedRectsVisual::InsertAtlasImageAtIndex((CAtlasedRectsVisual *)this, *v24, *((unsigned int *)this + 66));
      if ( *(int *)((char *)v24 + v43 - 280) <= 0 || *(int *)((char *)v24 + v44 - 280) <= 0 )
        v29 = 0LL;
      else
        v29 = CTopLevelWindow::GetWindowFramePart(v27, (int)v25 + 9);
      CAtlasedImage::SetBitmapSource(*v24, v29);
      CAtlasedImage::SetInsetFromParent(*v24, (const struct _MARGINS *)&v45[6 * v25]);
      if ( *(v23 - 1) != 0x7FFFFFFF )
      {
        v30 = *v24;
        v41.cx = *(v23 - 1);
        v41.cy = *((_DWORD *)v30 + 7);
        CAtlasedImage::SetSize(v30, &v41);
      }
      if ( *v23 != 0x7FFFFFFF )
      {
        v31 = *v24;
        v40.cy = *v23;
        v40.cx = *((_DWORD *)v31 + 6);
        CAtlasedImage::SetSize(v31, &v40);
      }
      v32 = 8;
      if ( *(v23 - 2) != 0x7FFFFFFF )
        v32 = 0;
      v33 = (*(v23 - 5) == 0x7FFFFFFF) | v32;
      v34 = 4;
      if ( *(v23 - 3) != 0x7FFFFFFF )
        v34 = 0;
      v35 = v34 | v33;
      v36 = 2;
      if ( *(v23 - 4) != 0x7FFFFFFF )
        v36 = 0;
      v37 = v36 | v35;
      v38 = *v24;
      if ( *((_DWORD *)*v24 + 16) != v37 )
      {
        *((_DWORD *)v38 + 16) = v37;
        CAtlasedImage::SetDirtyFlags(v38, 1, 0x2000u);
      }
      v25 = (unsigned int)(v25 + 1);
      ++v24;
      v23 += 6;
      if ( (unsigned int)v25 >= 0xD )
        goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xB6u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x4Bu);
  }
LABEL_29:
  if ( v6 < 0 )
    CAtlasedRectsVisual::RemoveAllAtlasImages((CAtlasedRectsVisual *)this);
  return (unsigned int)v6;
}
