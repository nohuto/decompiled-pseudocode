/*
 * XREFs of ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180289338
 * Callers:
 *     ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1802887C0 (-GetThumbnailLocation@CSwitchItemElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180288860 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180289900 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x180099777 (GetThreadUILanguage_0.c)
 *     ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x180289180 (-_CalcThumbnailRect@CSwitchItemElement@@IEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

void __fastcall CSwitchItemElement::_GetLayoutRects(
        CSwitchItemElement *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3,
        struct Geometry::CRect *a4)
{
  int v5; // ebx
  int v9; // r13d
  __int32 v10; // eax
  __int32 v11; // r12d
  __int32 v12; // r12d
  __int128 v13; // xmm0
  __int32 v14; // edx
  __int32 v15; // ecx
  int v16; // edx
  unsigned int v17; // edi
  int v18; // ecx
  int v19; // edx
  bool v20; // zf
  LANGID ThreadUILanguage_0; // ax
  unsigned int v22; // ecx
  int v23; // edi
  __int32 v24; // ebx
  __int32 v25; // eax
  __m256i v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+40h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-28h] BYREF

  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = *((_DWORD *)this + 110);
  v26.m256i_i32[7] = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v10 = *((_DWORD *)this + 92);
  v26.m256i_i32[6] = v5;
  v26.m256i_i64[2] = 0LL;
  v11 = v5 - *((_DWORD *)this + 93);
  v26.m256i_i32[0] = v10;
  v26.m256i_i32[1] = *((_DWORD *)this + 94);
  *(__int64 *)((char *)&v26.m256i_i64[1] + 4) = (unsigned int)(v26.m256i_i32[7] - *((_DWORD *)this + 95));
  v26.m256i_i32[2] = v11;
  v12 = v11 - *((_DWORD *)this + 107);
  v13 = *(_OWORD *)v26.m256i_i8;
  v14 = *((_DWORD *)this + 108) + v26.m256i_i32[1];
  v15 = v14 + *((_DWORD *)this + 111);
  v26.m256i_i32[1] = v14;
  v16 = *((_DWORD *)this + 85);
  v26.m256i_i32[3] = v15;
  v27 = v13;
  v17 = DWORD2(v13);
  v18 = *((_DWORD *)this + 98) + DWORD1(v13);
  v19 = v18 + v16;
  v28 = v13;
  v20 = *((_QWORD *)this + 75) == 0LL;
  HIDWORD(v27) = v19;
  if ( !v20 )
    v17 = v12 - v9;
  v26.m256i_i32[0] = v12 - v9;
  DWORD1(v28) = *((_DWORD *)this + 99) + v19;
  *(_QWORD *)((char *)&v27 + 4) = __PAIR64__(v17, v18);
  v26.m256i_i32[2] = v12;
  CSwitchItemElement::_CalcThumbnailRect((__int64)this, &v26.m256i_i32[4], (int *)&v28);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v26.m256i_i32[0] = v5 - v12;
    v22 = v5 - v17;
    v26.m256i_i32[2] = v5 - v12 + v9;
    v23 = v5 - v27;
    LODWORD(v27) = v22;
    v24 = v5 - v26.m256i_i32[6];
    DWORD2(v27) = v23;
    v25 = v24 - v26.m256i_i32[4];
    v26.m256i_i32[4] = v24;
    v26.m256i_i32[6] += v25;
  }
  if ( a2 )
    *(_OWORD *)a2 = *(_OWORD *)v26.m256i_i8;
  if ( a3 )
    *(_OWORD *)a3 = v27;
  if ( a4 )
    *(_OWORD *)a4 = *(_OWORD *)&v26.m256i_u64[2];
}
