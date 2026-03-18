/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z @ 0x180053130
 * Callers:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 * Callees:
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18004FCFC (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18004FD28 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FE50 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006FED4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007385C (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801591CC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     Template_xnn @ 0x180163080 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        bool a4)
{
  bool v4; // zf
  bool v5; // r14
  const struct tagRECT *v7; // rsi
  int v9; // eax
  _BYTE *v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  __int64 v13; // rdx
  float left; // xmm8_4
  float right; // xmm9_4
  float top; // xmm6_4
  float bottom; // xmm7_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm8_4
  unsigned int v24; // r8d
  __int64 v25; // rcx
  char *v26; // rbx
  unsigned int v27; // r12d
  float v28; // xmm6_4
  unsigned int v29; // r14d
  unsigned int v30; // r11d
  float *v31; // r10
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float *v35; // rdx
  __int64 v38; // rdx
  float *v39; // r10
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  unsigned int v48; // eax
  unsigned int v49; // r10d
  __int64 v50; // r11
  char v51; // si
  __int64 v52; // rcx
  float v53; // xmm0_4
  float v54; // xmm4_4
  unsigned int v55; // r8d
  unsigned int v56; // eax
  _BYTE *v57; // rax
  __int64 v58; // rdx
  int v59; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+44h] [rbp-BCh]
  __int128 v62; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v63; // [rsp+58h] [rbp-A8h] BYREF
  const struct tagRECT *v64; // [rsp+68h] [rbp-98h]
  __int128 v65; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF

  v4 = (*((_BYTE *)this + 90) & 1) == 0;
  v5 = a4;
  v7 = a2;
  v64 = a2;
  if ( !v4 )
  {
    *((_DWORD *)this + 140) = 0;
    *(_QWORD *)((char *)this + 564) = 1LL;
    *((_BYTE *)this + 90) &= ~1u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1008));
  }
  if ( *((_BYTE *)this + 986) )
    *((_BYTE *)this + 987) = 0;
  v9 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v61 = v9;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x280u);
    return v11;
  }
  v12 = 0;
  if ( !a3 )
    goto LABEL_55;
  do
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xnn(
        (_DWORD)v7 + 16 * v12,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
        *((_QWORD *)this + 72),
        (_DWORD)v10,
        (__int64)&v7[v12],
        v59,
        (__int64)this + 652);
    if ( !*((_BYTE *)this + 986) && !*((_BYTE *)this + 985) )
    {
      CopyRect(&rcDst, (const RECT *)((char *)this + 604));
      OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
      IntersectRect(&rcDst, &v7[v12], &rcDst);
      left = (float)rcDst.left;
      right = (float)rcDst.right;
      top = (float)rcDst.top;
      bottom = (float)rcDst.bottom;
      if ( (float)rcDst.right > (float)rcDst.left && bottom > top )
      {
        if ( (*((_BYTE *)this + 90) & 1) != 0 )
        {
          *((_DWORD *)this + 140) = 0;
          *(_QWORD *)((char *)this + 564) = 1LL;
          *((_BYTE *)this + 90) &= ~1u;
          CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1008));
        }
        v18 = (float)(*((_DWORD *)this + 152) - *((_DWORD *)this + 164));
        v19 = bottom + v18;
        v20 = (float)(*((_DWORD *)this + 151) - *((_DWORD *)this + 163));
        v21 = right + v20;
        v22 = v20 + left;
        v23 = v18 + top;
        *((_QWORD *)&v65 + 1) = __PAIR64__(LODWORD(v19), LODWORD(v21));
        *(float *)&v65 = v22;
        *((float *)&v65 + 1) = v18 + top;
        if ( qword_18023E528 )
        {
          v24 = *((_DWORD *)qword_18023E528 + 18);
          v13 = 0LL;
          if ( v24 )
          {
            v10 = (_BYTE *)*((_QWORD *)qword_18023E528 + 6);
            while ( 1 )
            {
              v25 = *(_QWORD *)&v10[8 * v13];
              if ( *(_BYTE *)(v25 + 299) || *(_BYTE *)(v25 + 298) || *(_BYTE *)(v25 + 212) || *(_DWORD *)(v25 + 208) )
                break;
              v13 = (unsigned int)(v13 + 1);
              if ( (unsigned int)v13 >= v24 )
                goto LABEL_23;
            }
            v63.left = (int)v22;
            v63.right = (int)v21;
            v63.top = (int)v23;
            v63.bottom = (int)v19;
            CDwmMetaRegion::AddDirtyRectangle((CWindowNode *)((char *)this + 1008), &v63);
          }
        }
LABEL_23:
        v26 = (char *)this + 496;
        if ( v21 > v22 && v19 > v23 )
        {
          v27 = -1;
          v28 = FLOAT_3_4028235e38;
          v29 = -1;
          if ( (*((_BYTE *)this + 564) & 0xF) != 0 )
            goto LABEL_26;
          v48 = *((_DWORD *)this + 142);
          v49 = 0;
          *((_DWORD *)this + 141) = 1;
          if ( v48 <= 1 )
          {
            if ( v48 != 1 )
              goto LABEL_26;
            v57 = (char *)this + 560;
            while ( !*v57 )
            {
              ++v49;
              ++v57;
              if ( v49 >= 4 )
                goto LABEL_26;
            }
          }
          else
          {
            v50 = 0LL;
            do
            {
              v51 = 0;
              if ( v26[v50 + 64] )
              {
                v53 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v26[16 * (unsigned int)v50], v13);
                if ( v53 > v54 )
                  v49 = v50;
                v55 = v50 + 1;
                if ( (unsigned int)(v50 + 1) < 4 )
                {
                  v10 = (char *)this + v55 + 560;
                  while ( !*v10
                       || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                              v52,
                                              &v26[16 * v55]) )
                  {
                    ++v55;
                    ++v10;
                    if ( v55 >= 4 )
                      goto LABEL_78;
                  }
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v52, v13);
                  v26[(_QWORD)v10 + 64] = 0;
                  v51 = 1;
                  --*((_DWORD *)this + 142);
                }
              }
LABEL_78:
              v56 = v50 + 1;
              v50 = 0LL;
              if ( !v51 )
                v50 = v56;
            }
            while ( (unsigned int)v50 < 4 );
            v7 = v64;
          }
          if ( v49 )
            CMergedRectBase<4>::SwapExisting((char *)this + 496, 0LL, v49, v10);
LABEL_26:
          v30 = 0;
          v10 = (char *)this + 560;
          v31 = (float *)((char *)this + 500);
          do
          {
            if ( *v10 )
            {
              v32 = v31[1];
              v33 = *(v31 - 1);
              if ( v32 > v33 )
              {
                v34 = v31[2];
                if ( v34 > *v31 && v21 > v22 && v19 > v23 && v32 > v22 && v21 > v33 && v34 > v23 && v19 > *v31 )
                {
                  v35 = (float *)&v26[16 * v30];
                  if ( v35[2] <= *v35 || v35[3] <= v35[1] )
                  {
                    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues(&v65) )
                    {
                      *(_OWORD *)v58 = v65;
                    }
                    else
                    {
                      *(_QWORD *)(v58 + 8) = 0LL;
                      *(_QWORD *)v58 = 0LL;
                    }
                  }
                  else
                  {
                    if ( *v35 > v22 )
                      *v35 = v22;
                    if ( v35[1] > v23 )
                      v35[1] = v23;
                    if ( v21 > v35[2] )
                      v35[2] = v21;
                    if ( v19 > v35[3] )
                      v35[3] = v19;
                  }
                  goto LABEL_52;
                }
              }
              if ( *((_DWORD *)this + 142) == 4 )
              {
                v62 = *(_OWORD *)(v31 - 1);
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v62, &v65);
                if ( *((float *)&v62 + 2) <= *(float *)&v62 || *((float *)&v62 + 3) <= *((float *)&v62 + 1) )
                  v40 = 0.0;
                else
                  v40 = (float)(*((float *)&v62 + 3) - *((float *)&v62 + 1))
                      * (float)(*((float *)&v62 + 2) - *(float *)&v62);
                v41 = v39[1];
                v42 = *(v39 - 1);
                if ( v41 <= v42 || (v43 = v39[2], v43 <= *v39) )
                  v44 = 0.0;
                else
                  v44 = (float)(v41 - v42) * (float)(v43 - *v39);
                v45 = v40 - v44;
                v46 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v65, v38);
                v19 = *((float *)&v65 + 3);
                v47 = v45 - v46;
                v21 = *((float *)&v65 + 2);
                v23 = *((float *)&v65 + 1);
                v22 = *(float *)&v65;
                if ( v28 > v47 )
                {
                  v28 = v47;
                  v27 = v30;
                }
              }
            }
            else
            {
              v29 = v30;
            }
            ++v30;
            ++v10;
            v31 += 4;
          }
          while ( v30 < 4 );
          if ( v29 != -1 )
          {
            *(_OWORD *)&v26[16 * v29] = v65;
            v26[v29 + 64] = 1;
            ++*((_DWORD *)this + 141);
            ++*((_DWORD *)this + 142);
            goto LABEL_53;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v26[16 * v27], &v65);
LABEL_52:
          ++*((_DWORD *)this + 141);
        }
      }
    }
LABEL_53:
    ++v12;
  }
  while ( v12 < a3 );
  v11 = v61;
  v5 = a4;
LABEL_55:
  if ( !*((_BYTE *)this + 985) || *((_BYTE *)this + 986) )
  {
    CVisual::PropagateFlags(this, v5, 0, 1, 0, 0, 0, 0);
  }
  else
  {
    *((_BYTE *)this + 984) = 0;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
  }
  return v11;
}
