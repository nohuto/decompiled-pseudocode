/*
 * XREFs of cjCopyFontDataW @ 0x1C002EE8C
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C002EB48 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C002F2B4 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C002F7C4 (-IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C002F7F8 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     InitializeScripts @ 0x1C0388A1C (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, __int64 *a3, int a4, wchar_t *Src, int a6, int a7)
{
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // r15d
  char CurrentThreadDpiAwarenessContext; // al
  __m128i v17; // xmm1
  __m128i v18; // xmm6
  __int64 v19; // r15
  unsigned int v20; // eax
  struct _IFIMETRICS *v21; // rcx
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r13
  _WORD *v27; // r15
  __int64 v28; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int16 v33; // ax
  _WORD *v34; // rax
  const wchar_t *v35; // r8
  int v36; // ecx
  int v37; // eax
  struct HLFONT__ *v39; // rdx
  signed int v40; // eax
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __m128 v43; // xmm1
  unsigned int cjIfiExtra; // edx
  unsigned int *v45; // rdx
  unsigned int v46; // [rsp+40h] [rbp-68h]
  unsigned int v47; // [rsp+44h] [rbp-64h]
  __int64 v48; // [rsp+48h] [rbp-60h] BYREF
  struct LFONT *v49; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v54; // [rsp+E8h] [rbp+40h]

  v8 = 1;
  v9 = *a3;
  v10 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v48 = v12;
  v13 = *(_QWORD *)(v9 + 32);
  v46 = *(_DWORD *)(v9 + 12) & 1;
  v54 = *(_DWORD *)(v13 + 132);
  if ( v12 && *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62) != 0 && *(_WORD *)(v13 + 56) != 0 )
  {
    if ( (*(_DWORD *)(v9 + 12) & 1) != 0 && (*(_DWORD *)(v13 + 48) & 0x3000010) == 0 )
    {
      v54 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v48);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v48);
    }
    v14 = *(unsigned int *)(v13 + 48);
    if ( (v14 & 0x3000010) != 0 )
    {
      v15 = 96;
      if ( (v14 & 1) != 0 || (v14 & 2) == 0 && (v14 & 4) == 0 && (v14 & 8) != 0 )
      {
        W32GetCurrentThreadDpiAwarenessContext(v14);
        W32GetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v12 + 32));
        v14 = *(unsigned int *)(v12 + 32);
      }
      if ( v46 )
      {
        v39 = *(struct HLFONT__ **)(v12 + 1440);
        if ( !v39 )
          return v10;
        LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v49, v39, 0LL);
        if ( !v49 )
          return v10;
        v40 = *((_DWORD *)v49 + 69);
        if ( v40 >= 0 )
        {
          v41 = _mm_cvtsi32_si128(v40);
          v42 = _mm_cvtsi32_si128(*(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62));
        }
        else
        {
          v41 = _mm_cvtsi32_si128(-v40);
          v42 = _mm_cvtsi32_si128(*(__int16 *)(v13 + 56));
        }
        v43 = _mm_cvtepi32_ps(v41);
        v43.m128_f32[0] = v43.m128_f32[0] / _mm_cvtepi32_ps(v42).m128_f32[0];
        v18 = (__m128i)v43;
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v49);
      }
      else
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
        if ( (*(_DWORD *)(v12 + 32) & 1) == 0 || (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1 )
          v15 = *(_DWORD *)(v12 + 2196);
        v17 = (__m128i)COERCE_UNSIGNED_INT((float)v15);
        *(float *)v17.m128i_i32 = (float)(*(float *)v17.m128i_i32 * 0.33333334) / (float)*(__int16 *)(v13 + 56);
        v18 = v17;
      }
    }
    else
    {
      v18 = (__m128i)v54;
    }
    if ( (unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v13, (unsigned int)_mm_cvtsi128_si32(v18)) )
    {
      v19 = 368LL;
      v20 = *(_DWORD *)(*a3 + 72);
      *(_DWORD *)a2 = v20;
      v47 = v20;
      v21 = *(struct _IFIMETRICS **)(*a3 + 32);
      if ( (v21->flInfo & 0x4000) != 0 || IsTrueTypeVariation(v21) )
      {
        cjIfiExtra = v21->cjIfiExtra;
        if ( cjIfiExtra <= 0xC )
          DbgPrint("Test it %d %d \n", cjIfiExtra, 12);
        else
          v19 = 4 * *(ULONG *)((char *)&v21->cjIfiExtra + v21[1].dpwszStyleName) + 368;
      }
      if ( ((*(_DWORD *)(a2 + 4) = v19,
             LODWORD(v22) = 0,
             v23 = *(_DWORD *)(v13 + 48),
             v24 = a2 + v19,
             (v23 & 0x4000) != 0)
         || (v23 & 1) != 0
         && *(_DWORD *)(v13 + 4) > 0xCu
         && (v25 = *(unsigned int *)(v13 + 204), *(_DWORD *)(v25 + v13 + 4))
         && *(_DWORD *)(v25 + v13) == 134248052)
        && *(_DWORD *)(v13 + 4) > 0xCu )
      {
        v45 = (unsigned int *)(v13 + *(int *)(v13 + 204));
        v22 = v45[1];
        if ( (unsigned int)v22 > 0x10 )
          v22 = 16LL;
        memmove((void *)(a2 + 360), v45, 4 * v22 + 8);
        *(_DWORD *)(a2 + 364) = v22;
      }
      else
      {
        *(_QWORD *)(a2 + 360) = 134248036LL;
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x4000) != 0 && *(_DWORD *)(v13 + 4) > 0x10u )
        memmove((void *)(v24 + 108), (const void *)(v13 + *(int *)(v13 + 208)), 40LL * (unsigned int)v22 + 8);
      else
        *(_QWORD *)(v24 + 108) = 134245473LL;
      v26 = a1;
      if ( (unsigned int)bIFIMetricsToTextMetricW2(a1, v24, a3, v46) )
      {
        if ( a7 )
        {
          *(_BYTE *)(a2 + 35) = a6;
          *(_BYTE *)(v24 + 64) = a6;
          v27 = (_WORD *)(a2 + 296);
          if ( (unsigned int)InitializeScripts() )
          {
            v28 = 0LL;
            v29 = &aScripts;
            do
            {
              if ( *v29 == a6 + 1000 )
                break;
              v28 = (unsigned int)(v28 + 1);
              v29 += 4;
            }
            while ( (unsigned int)v28 < 0x13 );
            if ( (unsigned int)v28 >= 0x13 )
            {
              v30 = qword_1C032C2D8;
            }
            else
            {
              _mm_lfence();
              v12 = v48;
              v30 = *((_QWORD *)&aScripts + 2 * v28 + 1);
            }
            v31 = 32LL;
            v32 = v30 - (_QWORD)v27;
            do
            {
              if ( v31 == -2147483614 )
                break;
              v33 = *(_WORD *)((char *)v27 + v32);
              if ( !v33 )
                break;
              *v27++ = v33;
              --v31;
            }
            while ( v31 );
            v34 = v27 - 1;
            if ( v31 )
              v34 = v27;
            *v34 = 0;
          }
          v26 = a1;
        }
        else
        {
          *(_WORD *)(a2 + 296) = 0;
        }
        v35 = Src;
        if ( !Src )
        {
          if ( a4 != 5 )
            goto LABEL_39;
          v35 = (const wchar_t *)(a2 + 104);
        }
        wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v35, 0x1FuLL);
        *(_WORD *)(a2 + 102) = 0;
LABEL_39:
        *(_DWORD *)(a2 + 8) = 0;
        v36 = *(_DWORD *)(v13 + 48);
        if ( (v36 & 1) != 0 )
        {
          if ( (*(_DWORD *)(v12 + 32) & 1) != 0
            || (*(_DWORD *)(v12 + 2200) & 0x2000) != 0
            || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 80LL) + 68LL) != 1 )
          {
            v8 = 0;
          }
          v37 = (2 * v8) | 4;
        }
        else
        {
          if ( (v36 & 2) != 0 )
          {
            *(_DWORD *)(a2 + 8) = 1;
            goto LABEL_45;
          }
          v37 = 0;
          if ( v36 < 0 )
            v37 = 2;
        }
        *(_DWORD *)(a2 + 8) = v37;
LABEL_45:
        if ( v46 )
        {
          if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
            *(_DWORD *)(a2 + 8) = 2;
          else
            *(_DWORD *)(a2 + 8) |= 2u;
          if ( *(_DWORD *)(v12 + 2156) == 2
            && (*(_DWORD *)(v13 + 48) & 0x3000010) != 0
            && (*(_DWORD *)(v12 + 2200) & 0x100) == 0 )
          {
            *(_DWORD *)(a2 + 8) |= 0x80000000;
          }
        }
        return v47;
      }
    }
  }
  return v10;
}
