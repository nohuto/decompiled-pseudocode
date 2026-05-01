/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180254280
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802561F4 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x1802564EC (-GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        int a5,
        char a6,
        __int64 a7,
        _BYTE *a8,
        _BYTE *a9)
{
  int v9; // eax
  float v13; // xmm0_4
  int v14; // eax
  char v15; // si
  int v16; // eax
  int v17; // eax
  float v18; // xmm0_4
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  int ViewRectOverlay; // ebx
  __int64 v23; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __m128 v28; // xmm0
  __int128 v29; // [rsp+48h] [rbp-51h] BYREF
  __int128 v30; // [rsp+58h] [rbp-41h] BYREF
  __int128 v31; // [rsp+68h] [rbp-31h] BYREF
  __int128 v32; // [rsp+78h] [rbp-21h] BYREF
  __int128 v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+98h] [rbp-1h]
  int v35; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+37h]

  v9 = *((_DWORD *)a4 + 2);
  *(_QWORD *)&v29 = 0LL;
  v13 = (float)v9;
  v14 = *((_DWORD *)a4 + 1);
  *((float *)&v29 + 2) = v13;
  *((float *)&v29 + 3) = (float)v14;
  *(_OWORD *)a7 = v29;
  *a8 = 0;
  *a9 = 0;
  if ( *((_BYTE *)a4 + 24) || (v15 = 0, *((_BYTE *)a4 + 25)) )
    v15 = 1;
  switch ( *(_DWORD *)a4 )
  {
    case 1:
      wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(
        a1,
        (__int64)a2,
        (__int64)a3);
      v16 = *((_DWORD *)a4 + 5);
      v29 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF90uLL) + a1 + 136);
      v17 = v16 & 0xC;
      if ( v17 )
      {
        if ( v17 == 12 )
        {
          v18 = *(float *)&v29;
        }
        else
        {
          if ( (*((_BYTE *)a4 + 20) & 4) == 0 )
          {
            if ( (*((_BYTE *)a4 + 20) & 8) != 0 )
              *(float *)a7 = (float)((float)(*((float *)&v29 + 2) + *(float *)&v29) - (float)*((int *)a4 + 2))
                           - (float)*((int *)a4 + 3);
            goto LABEL_14;
          }
          v18 = (float)*((int *)a4 + 3) + *(float *)&v29;
        }
        *(float *)a7 = v18;
      }
      else
      {
        *(float *)a7 = (float)((float)(*((float *)&v29 + 2) - (float)*((int *)a4 + 2)) * 0.5) + *(float *)&v29;
      }
LABEL_14:
      if ( (*((_DWORD *)a4 + 5) & 3) != 0 && (*((_DWORD *)a4 + 5) & 3) != 3 )
      {
        if ( (*((_BYTE *)a4 + 20) & 2) != 0 )
        {
          *(float *)(a7 + 4) = (float)((float)(*((float *)&v29 + 3) + *((float *)&v29 + 1)) - (float)*((int *)a4 + 1))
                             - (float)*((int *)a4 + 4);
        }
        else if ( (*((_BYTE *)a4 + 20) & 1) != 0 )
        {
          *(float *)(a7 + 4) = (float)*((int *)a4 + 4) + *((float *)&v29 + 1);
        }
      }
      else
      {
        *(float *)(a7 + 4) = (float)((float)(*((float *)&v29 + 3) - (float)*((int *)a4 + 1)) * 0.5)
                           + *((float *)&v29 + 1);
      }
      return 0LL;
    case 2:
      wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(
        a1,
        (__int64)a2,
        (__int64)a3);
      v29 = *a3;
      v30 = *a2;
      v19 = a4[1];
      v20 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF90uLL) + a1 + 136);
      v35 = *((_DWORD *)a4 + 10);
      v31 = v20;
      v21 = *a4;
      v33 = v19;
      v32 = v21;
      v34 = *((_QWORD *)a4 + 4);
      ViewRectOverlay = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int128 *, __int128 *, char, __int64, _BYTE *, _BYTE *))KeyboardHosting::ViewRectHelper::GetViewRectNearCaret)(
                          &v32,
                          &v31,
                          &v30,
                          &v29,
                          a6,
                          a7,
                          a8,
                          a9);
      if ( ViewRectOverlay < 0 )
      {
        v23 = 88LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)ViewRectOverlay);
        return (unsigned int)ViewRectOverlay;
      }
      break;
    case 3:
      wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(
        a1,
        (__int64)a2,
        (__int64)a3);
      v31 = *a3;
      v30 = *a2;
      v25 = a4[1];
      v26 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFC8uLL) + a1 + 136);
      v35 = *((_DWORD *)a4 + 10);
      v29 = v26;
      v27 = *a4;
      v33 = v25;
      v32 = v27;
      v34 = *((_QWORD *)a4 + 4);
      ViewRectOverlay = KeyboardHosting::ViewRectHelper::GetViewRectOverlay(&v32, &v29, &v30, &v31, a5, a7);
      if ( ViewRectOverlay < 0 )
      {
        v23 = 100LL;
        goto LABEL_24;
      }
      break;
    default:
      wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(
        a1,
        (__int64)a2,
        (__int64)a3);
      v28 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF90uLL) + a1 + 136));
      *(_DWORD *)a7 = v28.m128_i32[0];
      *(float *)(a7 + 4) = (float)((float)(_mm_shuffle_ps(v28, v28, 255).m128_f32[0]
                                         + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
                                 - (float)*((int *)a4 + 1))
                         - (float)*((int *)a4 + 4);
      break;
  }
  return 0LL;
}
