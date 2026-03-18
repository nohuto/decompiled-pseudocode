/*
 * XREFs of cjCopyFontDataW @ 0x1C003AEDC
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C003AB94 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C003B360 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C003B870 (-IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C003B8A8 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     InitializeScripts @ 0x1C0382080 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, __int64 *a3, int a4, wchar_t *Src, int a6, int a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  __int64 v16; // rdx
  char CurrentThreadDpiAwarenessContext; // al
  __m128i v18; // xmm1
  __m128i v19; // xmm6
  __int64 v20; // r14
  unsigned int v21; // eax
  struct _IFIMETRICS *v22; // rcx
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // r15d
  _WORD *v28; // r14
  __int64 v29; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int16 v34; // ax
  _WORD *v35; // rax
  const wchar_t *v36; // r8
  int v37; // ecx
  int v38; // eax
  unsigned int cjIfiExtra; // edx
  unsigned int *v41; // rdx
  struct HLFONT__ *v42; // rdx
  signed int v43; // eax
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128 v46; // xmm1
  unsigned int v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h] BYREF
  struct LFONT *v49; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v54; // [rsp+E8h] [rbp+40h]

  v8 = 0LL;
  v9 = *a3;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v48 = v11;
  v12 = *(_QWORD *)(v9 + 32);
  v54 = *(_DWORD *)(v9 + 12) & 1;
  if ( v11 )
  {
    v13 = (unsigned int)-(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62));
    if ( *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62) != 0 && *(_WORD *)(v12 + 56) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 1) != 0 && (*(_DWORD *)(v12 + 48) & 0x3000010) == 0 )
      {
        PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v48);
        PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v48);
      }
      v14 = *(unsigned int *)(v12 + 48);
      if ( (v14 & 0x3000010) != 0 )
      {
        v15 = 96;
        if ( (v14 & 1) != 0 || (v14 & 2) == 0 && (v14 & 4) == 0 && (v14 & 8) != 0 )
        {
          W32GetCurrentThreadDpiAwarenessContext(v14, v13);
          W32GetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v11 + 32), v16);
          v14 = *(unsigned int *)(v11 + 32);
        }
        if ( v54 )
        {
          v42 = *(struct HLFONT__ **)(v11 + 1440);
          if ( !v42 )
            return v8;
          LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v49, v42, 0LL);
          if ( !v49 )
            return v8;
          v43 = *((_DWORD *)v49 + 69);
          if ( v43 >= 0 )
          {
            v44 = _mm_cvtsi32_si128(v43);
            v45 = _mm_cvtsi32_si128(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62));
          }
          else
          {
            v44 = _mm_cvtsi32_si128(-v43);
            v45 = _mm_cvtsi32_si128(*(__int16 *)(v12 + 56));
          }
          v46 = _mm_cvtepi32_ps(v44);
          v46.m128_f32[0] = v46.m128_f32[0] / _mm_cvtepi32_ps(v45).m128_f32[0];
          v19 = (__m128i)v46;
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v49);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14, v13);
          if ( (*(_DWORD *)(v11 + 32) & 1) == 0 || (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1 )
            v15 = *(_DWORD *)(v11 + 2196);
          v18 = (__m128i)COERCE_UNSIGNED_INT((float)v15);
          *(float *)v18.m128i_i32 = (float)(*(float *)v18.m128i_i32 * 0.33333334) / (float)*(__int16 *)(v12 + 56);
          v19 = v18;
        }
      }
      else
      {
        v19 = (__m128i)v54;
      }
      if ( (unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v12, (unsigned int)_mm_cvtsi128_si32(v19)) )
      {
        v20 = 368LL;
        v21 = *(_DWORD *)(*a3 + 72);
        *(_DWORD *)a2 = v21;
        v47 = v21;
        v22 = *(struct _IFIMETRICS **)(*a3 + 32);
        if ( (v22->flInfo & 0x4000) != 0 || IsTrueTypeVariation(v22) )
        {
          cjIfiExtra = v22->cjIfiExtra;
          if ( cjIfiExtra <= 0xC )
            DbgPrint("Test it %d %d \n", cjIfiExtra, 12);
          else
            v20 = 4 * *(ULONG *)((char *)&v22->cjIfiExtra + v22[1].dpwszStyleName) + 368;
        }
        if ( ((*(_DWORD *)(a2 + 4) = v20,
               LODWORD(v23) = 0,
               v24 = *(_DWORD *)(v12 + 48),
               v25 = a2 + v20,
               (v24 & 0x4000) != 0)
           || (v24 & 1) != 0
           && *(_DWORD *)(v12 + 4) > 0xCu
           && (v26 = *(unsigned int *)(v12 + 204), *(_DWORD *)(v26 + v12 + 4))
           && *(_DWORD *)(v26 + v12) == 134248052)
          && *(_DWORD *)(v12 + 4) > 0xCu )
        {
          v41 = (unsigned int *)(v12 + *(int *)(v12 + 204));
          v23 = v41[1];
          if ( (unsigned int)v23 > 0x10 )
            v23 = 16LL;
          memmove((void *)(a2 + 360), v41, 4 * v23 + 8);
          *(_DWORD *)(a2 + 364) = v23;
        }
        else
        {
          *(_QWORD *)(a2 + 360) = 134248036LL;
        }
        if ( (*(_DWORD *)(v12 + 48) & 0x4000) != 0 && *(_DWORD *)(v12 + 4) > 0x10u )
          memmove((void *)(v25 + 108), (const void *)(v12 + *(int *)(v12 + 208)), 40LL * (unsigned int)v23 + 8);
        else
          *(_QWORD *)(v25 + 108) = 134245473LL;
        v27 = v54;
        if ( (unsigned int)bIFIMetricsToTextMetricW2(a1, v25, a3, v54) )
        {
          if ( a7 )
          {
            *(_BYTE *)(a2 + 35) = a6;
            *(_BYTE *)(v25 + 64) = a6;
            v28 = (_WORD *)(a2 + 296);
            if ( (unsigned int)InitializeScripts() )
            {
              v29 = 0LL;
              v30 = &aScripts;
              do
              {
                if ( *v30 == a6 + 1000 )
                  break;
                v29 = (unsigned int)(v29 + 1);
                v30 += 4;
              }
              while ( (unsigned int)v29 < 0x13 );
              if ( (unsigned int)v29 >= 0x13 )
              {
                v31 = qword_1C0327558;
              }
              else
              {
                _mm_lfence();
                v11 = v48;
                v31 = *((_QWORD *)&aScripts + 2 * v29 + 1);
              }
              v32 = 32LL;
              v33 = v31 - (_QWORD)v28;
              do
              {
                if ( v32 == -2147483614 )
                  break;
                v34 = *(_WORD *)((char *)v28 + v33);
                if ( !v34 )
                  break;
                *v28++ = v34;
                --v32;
              }
              while ( v32 );
              v35 = v28 - 1;
              if ( v32 )
                v35 = v28;
              *v35 = 0;
            }
            v27 = v54;
          }
          else
          {
            *(_WORD *)(a2 + 296) = 0;
          }
          v36 = Src;
          if ( !Src )
          {
            if ( a4 != 5 )
              goto LABEL_39;
            v36 = (const wchar_t *)(a2 + 104);
          }
          wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v36, 0x1FuLL);
          *(_WORD *)(a2 + 102) = 0;
LABEL_39:
          *(_DWORD *)(a2 + 8) = 0;
          v37 = *(_DWORD *)(v12 + 48);
          if ( (v37 & 1) != 0 )
          {
            if ( (*(_DWORD *)(v11 + 32) & 1) != 0
              || (*(_DWORD *)(v11 + 2200) & 0x2000) != 0
              || (v38 = 6, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 68LL) != 1) )
            {
              v38 = 4;
            }
          }
          else
          {
            if ( (v37 & 2) != 0 )
            {
              *(_DWORD *)(a2 + 8) = 1;
              goto LABEL_44;
            }
            v38 = 0;
            if ( v37 < 0 )
              v38 = 2;
          }
          *(_DWORD *)(a2 + 8) = v38;
LABEL_44:
          if ( v27 )
          {
            if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
              *(_DWORD *)(a2 + 8) = 2;
            else
              *(_DWORD *)(a2 + 8) |= 2u;
            if ( *(_DWORD *)(v11 + 2156) == 2
              && (*(_DWORD *)(v12 + 48) & 0x3000010) != 0
              && (*(_DWORD *)(v11 + 2200) & 0x100) == 0 )
            {
              *(_DWORD *)(a2 + 8) |= 0x80000000;
            }
          }
          return v47;
        }
      }
    }
  }
  return v8;
}
