/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x18002FFB8 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ @ 0x1800301D4 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x18016AD50 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x18001C618 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18001F8D0 (-GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180020BB4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18002B0D0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18002B9F0 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18002EC04 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x18002EC20 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180031300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18003390C (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800865A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180087F00 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18008BC50 (-GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800BB63C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BBD88 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800C1020 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800D5390 (memcmp_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18015FDF0 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015FEC0 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801694E0 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        CComponentTransform3D *a3,
        bool *a4)
{
  __int64 v4; // rbx
  __int64 v6; // r9
  struct CExpressionValueStack *v7; // r13
  __int64 v8; // r14
  bool v10; // zf
  void (__fastcall *v11)(CExpression *__hidden, bool *); // rax
  bool v12; // cl
  __int64 v13; // rax
  unsigned int (__fastcall *v14)(CKeyframeAnimation *__hidden); // rax
  unsigned int v15; // edi
  int v16; // esi
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int (*v20)(CExpression *__hidden, struct CExpressionValueStack *, unsigned __int64, bool *); // rax
  int v21; // eax
  int v22; // esi
  __int64 v23; // r12
  bool v24; // si
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // ecx
  int v28; // eax
  float *v29; // r12
  __int16 *v30; // r9
  __int64 v31; // rcx
  CComponentTransform3D *v32; // rcx
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(CColorBrush *__hidden, unsigned int, struct CExpressionValue *); // rax
  int v35; // eax
  int v36; // esi
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned int v42; // ecx
  CComponentTransform3D *v43; // r15
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(CComponentTransform3D *, int, int, float *); // rax
  __int64 (__fastcall *v46)(CComponentTransform3D *, __int64, _QWORD, _QWORD, float *); // rax
  int updated; // eax
  __int128 v48; // xmm0
  int v49; // xmm2_4
  int v50; // xmm3_4
  int v51; // xmm4_4
  int v52; // eax
  int v53; // ecx
  unsigned int (__fastcall *v54)(CComponentTransform3D *, __int64); // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // rdi
  unsigned __int64 Count; // rax
  unsigned __int64 v60; // rcx
  void (__fastcall *v61)(CComponentTransform3D *, unsigned __int64, __int64); // rax
  unsigned int v62; // ecx
  int v63; // edx
  int v64; // edx
  unsigned int (__fastcall *v65)(CComponentTransform3D *, _QWORD, CComponentTransform3D *); // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r9
  int v74; // eax
  unsigned int v75; // esi
  size_t v76; // rdi
  __int64 v77; // rdx
  __int64 (__fastcall *v78)(CComponentTransform3D *, int, int, float *); // rax
  int v79; // eax
  __int64 v80; // rcx
  CColorBrush *v81; // rcx
  __int64 v82; // rdx
  __int64 (__fastcall *v83)(CColorBrush *__hidden, unsigned int, struct CExpressionValue *); // rax
  int Property; // eax
  unsigned int v85; // edx
  int v86; // eax
  __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  bool v89; // cl
  unsigned int v90; // eax
  unsigned int v91; // ecx
  __int64 v92; // rdx
  unsigned int v93; // esi
  int v94; // eax
  __int64 v95; // rsi
  __int128 v96; // xmm1
  unsigned __int64 v97; // rcx
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  bool v100; // cl
  __int64 v101; // rdx
  __int64 Elapsed; // rax
  char v103; // al
  unsigned int TracingCookie; // eax
  int v105; // eax
  HANDLE EventW; // rdi
  __int64 v107; // rcx
  __int64 Element; // rax
  _QWORD *v109; // rdx
  __int64 i; // r8
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned int v114; // [rsp+28h] [rbp-E0h]
  _BOOL8 v115; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v116; // [rsp+40h] [rbp-C8h]
  CComponentTransform3D *v117; // [rsp+48h] [rbp-C0h]
  __int64 v118; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v119; // [rsp+58h] [rbp-B0h]
  __int64 v120; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v121; // [rsp+68h] [rbp-A0h]
  int v122; // [rsp+6Ch] [rbp-9Ch]
  __int128 v123; // [rsp+70h] [rbp-98h] BYREF
  struct CExpressionValueStack *v124; // [rsp+80h] [rbp-88h]
  __int128 Buf1; // [rsp+88h] [rbp-80h] BYREF
  __int64 v126; // [rsp+98h] [rbp-70h]
  __int64 v127; // [rsp+A0h] [rbp-68h]
  __int64 v128; // [rsp+A8h] [rbp-60h]
  __int64 v129; // [rsp+B0h] [rbp-58h]
  __int64 v130; // [rsp+B8h] [rbp-50h]
  __int64 v131; // [rsp+C0h] [rbp-48h]
  int v132; // [rsp+C8h] [rbp-40h]
  char v133; // [rsp+CCh] [rbp-3Ch]
  _OWORD v134[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v135; // [rsp+118h] [rbp+10h]
  WCHAR Name[64]; // [rsp+128h] [rbp+20h] BYREF

  v4 = 0LL;
  *a4 = 0;
  v6 = 0LL;
  v7 = a2;
  v8 = 0LL;
  v10 = (*(_DWORD *)(*((_QWORD *)this + 25) + 4LL) & 0x40000000) == 0;
  v117 = a3;
  v124 = a2;
  v120 = 0LL;
  v118 = 0LL;
  v116 = 0LL;
  if ( !v10 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v116 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 96LL;
    QpcStopwatch::Start((QpcStopwatch *)&v120);
    a3 = v117;
    v6 = v116;
    v4 = v120;
  }
  LODWORD(v119) = *((_DWORD *)v7 + 4);
  if ( !*((_QWORD *)this + 27) )
    *((_QWORD *)this + 27) = a3;
  v11 = *(void (__fastcall **)(CExpression *__hidden, bool *))(*(_QWORD *)this + 192LL);
  if ( v11 == CExpression::PrepareForCalculation )
  {
    if ( CCommonRegistryData::m_fOptimizeForDirtyExpressions )
    {
      v12 = *((_QWORD *)this + 27) > *((_QWORD *)this + 19);
      LOBYTE(v115) = v12;
    }
    else
    {
      v12 = 1;
      LOBYTE(v115) = 1;
    }
  }
  else
  {
    v11(this, (bool *)&v115);
    v12 = v115;
    a3 = v117;
    v6 = v116;
  }
  if ( !*((_BYTE *)this + 132) || v12 )
  {
    v13 = *(_QWORD *)this;
    *((_QWORD *)this + 19) = a3;
    v14 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(v13 + 152);
    if ( v14 == CKeyframeAnimation::GetMaxStackCount )
    {
      v15 = *((_DWORD *)this + 94);
    }
    else if ( v14 == CExpression::GetMaxStackCount )
    {
      v15 = *((_DWORD *)this + 60);
    }
    else
    {
      v90 = v14(this);
      a3 = v117;
      v15 = v90;
      v6 = v116;
    }
    v16 = *((_DWORD *)v7 + 4);
    if ( v15 > ~v16 )
    {
      v17 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x40u);
      v18 = -2147418113;
      goto LABEL_177;
    }
    if ( *((_DWORD *)v7 + 12) - v16 < v15 )
    {
      memset_0(v134, 0, sizeof(v134));
      v93 = v15 + v16 - *((_DWORD *)v7 + 12);
      LODWORD(v135) = 18;
      BYTE4(v135) = 0;
      v121 = v93;
      v94 = DynArrayImpl<1>::AddMultiple((char *)v7 + 24, 72LL, v93, &v123);
      v122 = v94;
      v17 = v94;
      if ( v94 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, 0xE5u);
      }
      else if ( v121 )
      {
        v95 = v123;
        v96 = v134[1];
        v97 = (72 * (unsigned __int64)v121 - 72) >> 3;
        *(_OWORD *)v123 = v134[0];
        v98 = v134[2];
        *(_OWORD *)(v95 + 16) = v96;
        v99 = v134[3];
        *(_OWORD *)(v95 + 32) = v98;
        *(_QWORD *)&v98 = v135;
        *(_OWORD *)(v95 + 48) = v99;
        *(_QWORD *)(v95 + 64) = v98;
        qmemcpy((void *)(v95 + 72), (const void *)v95, 8 * v97);
        v17 = v122;
      }
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x48u);
        a3 = v117;
        v6 = v116;
LABEL_15:
        v18 = v17;
        if ( v17 >= 0 )
        {
          v19 = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL) & 0x40000000;
          if ( (v19 || CCommonRegistryData::m_fLogExpressionPerfStats) && (*((_BYTE *)this + 208) & 2) != 0 )
          {
            v100 = v19 != 0;
            v101 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
            ++*(_DWORD *)(v101 + 380);
            if ( v100 )
              ++*(_DWORD *)(v101 + 384);
          }
          if ( v6 )
          {
            QpcStopwatch::Start((QpcStopwatch *)&v118);
            a3 = v117;
            v8 = v118;
          }
          v20 = *(int (**)(CExpression *__hidden, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)this + 168LL);
          if ( (char *)v20 == (char *)CKeyframeAnimation::CalculateValueWorker )
          {
            v21 = CKeyframeAnimation::CalculateValueWorker(this, v7, (unsigned __int64)a3, a4);
          }
          else if ( v20 == CExpression::CalculateValueWorker )
          {
            v21 = CExpression::CalculateValueWorker(this, v7, (unsigned __int64)a3, a4);
          }
          else
          {
            v21 = ((__int64 (__fastcall *)(CBaseExpression *, struct CExpressionValueStack *, CComponentTransform3D *, bool *))v20)(
                    this,
                    v7,
                    a3,
                    a4);
          }
          v18 = v21;
          v22 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v21, 0x357u);
          }
          else
          {
            if ( v8 )
            {
              Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v118);
              v23 = v116;
              ++*(_DWORD *)(v116 + 4);
              *(_QWORD *)(v23 + 32) += Elapsed;
              v8 = 0LL;
              v118 = 0LL;
            }
            else
            {
              v23 = v116;
            }
            if ( v18 != 1
              && CBaseExpression::IsExpressionValueValid(
                   (CBaseExpression *)(9LL * (unsigned int)(*((_DWORD *)v7 + 4) - 1)),
                   (struct CExpressionValue *)(*((_QWORD *)v7 + 3) + 72LL * (unsigned int)(*((_DWORD *)v7 + 4) - 1))) )
            {
              goto LABEL_27;
            }
            memset_0(v134, 0, sizeof(v134));
            v80 = *((_QWORD *)this + 21);
            LODWORD(v135) = 18;
            BYTE4(v135) = 0;
            if ( v80 && (v81 = *(CColorBrush **)(v80 + 8)) != 0LL )
            {
              v82 = *((unsigned int *)this + 44);
              v83 = *(__int64 (__fastcall **)(CColorBrush *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)v81 + 88LL);
              if ( v83 == CColorBrush::GetProperty )
              {
                Property = CColorBrush::GetProperty(v81, v82, (struct CExpressionValue *)v134);
              }
              else if ( v83 == CPropertyBagBase::GetProperty )
              {
                Property = CPropertyBagBase::GetProperty(v81, v82, (struct CExpressionValue *)v134);
              }
              else
              {
                Property = v83(v81, v82, (struct CExpressionValue *)v134);
              }
              v18 = Property;
              if ( Property >= 0 )
              {
                if ( (_DWORD)v135 != *((_DWORD *)this + 34) )
                {
                  v18 = -2147024809;
                  MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147024809, 0x376u);
                  goto LABEL_178;
                }
                if ( v22 == 1 )
                {
                  v86 = CExpressionValueStack::CheckAvailableStackSpace(v7, v85);
                  v18 = v86;
                  if ( v86 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, 0x2A3u);
                  }
                  else
                  {
                    v87 = *((unsigned int *)v7 + 4);
                    *((_DWORD *)v7 + 4) = v87 + 1;
                    CExpressionValue::CopyFrom(
                      (CExpressionValue *)(*((_QWORD *)v7 + 3) + 72 * v87),
                      (const struct CExpressionValue *)v134);
                  }
                  if ( v18 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v18, 0x37Bu);
                    goto LABEL_178;
                  }
                }
                else
                {
                  CExpressionValue::CopyFrom(
                    (CExpressionValue *)(*((_QWORD *)v7 + 3) + 72LL * (unsigned int)(*((_DWORD *)v7 + 4) - 1)),
                    (const struct CExpressionValue *)v134);
                }
LABEL_27:
                if ( *((_DWORD *)v7 + 4) != (_DWORD)v119 + 1 )
                {
                  v18 = -2147467259;
                  MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x38Fu);
                  goto LABEL_178;
                }
                if ( v23 )
                {
                  QpcStopwatch::Start((QpcStopwatch *)&v118);
                  v8 = v118;
                }
                v24 = 0;
                v25 = 1LL;
                v26 = *((_QWORD *)v7 + 3) + 72LL * (unsigned int)(*((_DWORD *)v7 + 4) - 1);
                v27 = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL);
                if ( (v27 & 0x40000000) != 0 || v27 < 0 )
                {
                  v103 = CExpressionValue::operator==(
                           (_QWORD *)this + 8,
                           (_BYTE *)(*((_QWORD *)v7 + 3) + 72LL * (unsigned int)(*((_DWORD *)v7 + 4) - 1)));
                  v25 = 1LL;
                  v24 = v103 == 0;
                }
                v28 = *(_DWORD *)(v26 + 64);
                v29 = (float *)((char *)this + 64);
                v30 = &_ImageBase;
                if ( v28 == 18 )
                {
                  *v29 = *(float *)v26;
                  *((_DWORD *)this + 32) = 18;
LABEL_34:
                  *((_BYTE *)this + 132) = 1;
                }
                else
                {
                  switch ( v28 )
                  {
                    case 17:
                      *(_BYTE *)v29 = *(_BYTE *)v26;
                      *((_DWORD *)this + 32) = 17;
                      goto LABEL_34;
                    case 35:
                      *((_DWORD *)this + 32) = 35;
                      *(_QWORD *)v29 = *(_QWORD *)v26;
                      goto LABEL_34;
                    case 52:
                      *((_DWORD *)this + 32) = 52;
                      *(_QWORD *)v29 = *(_QWORD *)v26;
                      *((_DWORD *)this + 18) = *(_DWORD *)(v26 + 8);
                      goto LABEL_34;
                    case 69:
                      *((_DWORD *)this + 32) = 69;
                      *(_OWORD *)v29 = *(_OWORD *)v26;
                      goto LABEL_34;
                    case 70:
                      *((_DWORD *)this + 32) = 70;
                      *(_OWORD *)v29 = *(_OWORD *)v26;
                      goto LABEL_34;
                    case 71:
                      *((_DWORD *)this + 32) = 71;
                      *(_OWORD *)v29 = *(_OWORD *)v26;
                      goto LABEL_34;
                    case 104:
                      *((_DWORD *)this + 32) = 104;
                      *(_OWORD *)v29 = *(_OWORD *)v26;
                      *((_QWORD *)this + 10) = *(_QWORD *)(v26 + 16);
                      goto LABEL_34;
                    case 265:
                      *((_DWORD *)this + 32) = 265;
                      *(_OWORD *)v29 = *(_OWORD *)v26;
                      *((_OWORD *)this + 5) = *(_OWORD *)(v26 + 16);
                      *((_OWORD *)this + 6) = *(_OWORD *)(v26 + 32);
                      *((_OWORD *)this + 7) = *(_OWORD *)(v26 + 48);
                      goto LABEL_34;
                    default:
                      break;
                  }
                }
                if ( v24 )
                {
                  CBaseExpression::LogSetOutputValue(this);
                  TracingCookie = CBaseExpression::GetTracingCookie(this);
                  v105 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
                  v36 = v105;
                  if ( v105 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x1CEu);
                    goto LABEL_207;
                  }
                  EventW = CreateEventW(0LL, 1, 0, Name);
                  SetEvent(EventW);
                  CloseHandle(EventW);
                  v25 = 1LL;
                  v30 = &_ImageBase;
                }
                if ( (*((_BYTE *)this + 208) & 3) != 3 )
                {
LABEL_54:
                  v36 = 0;
                  goto LABEL_55;
                }
                v31 = *((_QWORD *)this + 21);
                if ( !v31 || (v32 = *(CComponentTransform3D **)(v31 + 8), (v117 = v32) == 0LL) )
                {
                  v18 = -2147024890;
                  v36 = -2147024890;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x1DFu);
                  LODWORD(v25) = 1;
LABEL_246:
                  MilInstrumentationCheckHR(0x14u, &dword_1801F366C, v25, v36, 0x39Cu);
                  goto LABEL_178;
                }
                v33 = *((unsigned int *)this + 44);
                v132 = 18;
                Buf1 = 0uLL;
                v126 = 0LL;
                v127 = 0LL;
                v128 = 0LL;
                v129 = 0LL;
                v130 = 0LL;
                v131 = 0LL;
                v133 = 0;
                v34 = *(__int64 (__fastcall **)(CColorBrush *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)v32 + 88LL);
                if ( v34 == CPropertyBagBase::GetProperty )
                {
                  v35 = CPropertyBagBase::GetProperty(v32, v33, (struct CExpressionValue *)&Buf1);
                }
                else
                {
                  if ( v34 == CColorBrush::GetProperty )
                  {
                    v36 = 0;
                    if ( !(_DWORD)v33 )
                    {
                      v48 = *((_OWORD *)v32 + 5);
                      v132 = 70;
                      v133 = 1;
                      Buf1 = v48;
LABEL_43:
                      if ( v36 < 0 )
                      {
                        v114 = 507;
                        goto LABEL_244;
                      }
                      v37 = *((_QWORD *)this + 23);
                      if ( v37 && *(_BYTE *)(v37 + 4) )
                      {
                        LODWORD(v134[0]) = 0;
                        memset_0((char *)v134 + 4, 0, 0x3CuLL);
                        v74 = CBaseExpression::MergeValueWithMask(
                                (const struct CExpressionValue *)&Buf1,
                                (CBaseExpression *)((char *)this + 64),
                                (const struct SubchannelMaskInfo *)v37,
                                v73,
                                (float *)v134);
                        v36 = v74;
                        if ( v74 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x20Du);
                          goto LABEL_52;
                        }
                        v75 = v132;
                        v76 = 0LL;
                        if ( v133 )
                        {
                          if ( v132 == 52 )
                          {
                            v76 = 12LL;
                          }
                          else
                          {
                            switch ( v132 )
                            {
                              case 17:
                                v76 = 1LL;
                                break;
                              case 18:
                                v76 = 4LL;
                                break;
                              case 35:
                                v76 = 8LL;
                                break;
                              case 69:
                              case 70:
                              case 71:
                                v76 = 16LL;
                                break;
                              case 104:
                                v76 = 24LL;
                                break;
                              case 265:
                                v76 = 64LL;
                                break;
                              default:
                                break;
                            }
                          }
                        }
                        if ( memcmp_0(v134, &Buf1, v76) )
                        {
                          v77 = *((unsigned int *)this + 44);
                          v78 = *(__int64 (__fastcall **)(CComponentTransform3D *, int, int, float *))(*(_QWORD *)v117 + 80LL);
                          v79 = v78 == CComponentTransform3D::SetProperty
                              ? CComponentTransform3D::SetProperty(v117, v77, v75, (float *)v134)
                              : v78(v117, v77, v75, (float *)v134);
                          v36 = v79;
                          if ( v79 < 0 )
                          {
                            v114 = 529;
                            goto LABEL_244;
                          }
                        }
LABEL_51:
                        v36 = 0;
LABEL_52:
                        if ( v36 >= 0 )
                        {
                          LODWORD(v25) = 1;
                          goto LABEL_54;
                        }
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x1E0u);
LABEL_207:
                        LODWORD(v25) = 1;
LABEL_55:
                        v18 = v36;
                        if ( v36 >= 0 )
                        {
                          if ( v8 )
                          {
                            v112 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v118);
                            v38 = v116;
                            ++*(_DWORD *)(v116 + 20);
                            *(_QWORD *)(v38 + 64) += v112;
                          }
                          else
                          {
                            v38 = v116;
                          }
                          --*((_DWORD *)v7 + 4);
                          v18 = 0;
                          goto LABEL_59;
                        }
                        goto LABEL_246;
                      }
                      if ( v132 == *((_DWORD *)this + 32) && v133 == *((_BYTE *)this + 132) )
                      {
                        if ( v133 )
                        {
                          if ( v132 == 18 )
                          {
                            if ( *(float *)&Buf1 != *v29 )
                              goto LABEL_69;
                          }
                          else
                          {
                            switch ( v132 )
                            {
                              case 17:
                                if ( (_BYTE)Buf1 != *(_BYTE *)v29 )
                                  goto LABEL_69;
                                goto LABEL_50;
                              case 35:
                                v89 = (_QWORD)Buf1 == *(_QWORD *)v29;
                                break;
                              case 52:
                                v88 = Buf1 - *(_QWORD *)v29;
                                if ( (_QWORD)Buf1 == *(_QWORD *)v29 )
                                  v88 = DWORD2(Buf1) - (unsigned __int64)*((unsigned int *)this + 18);
                                v89 = v88 == 0;
                                break;
                              case 69:
                                v107 = Buf1 - *(_QWORD *)v29;
                                if ( (_QWORD)Buf1 == *(_QWORD *)v29 )
                                  v107 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
                                v89 = v107 == 0;
                                break;
                              case 70:
                                v40 = Buf1 - *(_QWORD *)v29;
                                if ( (_QWORD)Buf1 == *(_QWORD *)v29 )
                                  v40 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
                                if ( v40 )
                                  goto LABEL_69;
                                goto LABEL_50;
                              case 71:
                                v89 = *(float *)&Buf1 == *v29
                                   && *((float *)&Buf1 + 1) == *((float *)this + 17)
                                   && *((float *)&Buf1 + 2) == *((float *)this + 18)
                                   && *((float *)&Buf1 + 3) == *((float *)this + 19);
                                break;
                              case 104:
                                v72 = Buf1 - *(_QWORD *)v29;
                                if ( (_QWORD)Buf1 == *(_QWORD *)v29 )
                                {
                                  v72 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
                                  if ( *((_QWORD *)&Buf1 + 1) == *((_QWORD *)this + 9) )
                                    v72 = v126 - *((_QWORD *)this + 10);
                                }
                                if ( !v72 )
                                  goto LABEL_50;
                                goto LABEL_69;
                              case 265:
                                if ( !memcmp_0(&Buf1, (char *)this + 64, 0x40uLL) )
                                  goto LABEL_50;
                                goto LABEL_69;
                              default:
                                goto LABEL_69;
                            }
                            if ( !v89 )
                              goto LABEL_69;
                          }
                        }
LABEL_50:
                        if ( !(*(unsigned __int8 (__fastcall **)(CBaseExpression *, __int64, __int64, __int16 *))(*(_QWORD *)this + 184LL))(
                                this,
                                v33,
                                v25,
                                v30) )
                          goto LABEL_51;
                      }
LABEL_69:
                      v41 = *((unsigned int *)this + 34);
                      v42 = *((_DWORD *)this + 44);
                      v43 = v117;
                      v44 = *(_QWORD *)v117;
                      v45 = *(__int64 (__fastcall **)(CComponentTransform3D *, int, int, float *))(*(_QWORD *)v117 + 80LL);
                      if ( (char *)v45 == (char *)&CPropertyBagBase::SetProperty )
                      {
                        v46 = *(__int64 (__fastcall **)(CComponentTransform3D *, __int64, _QWORD, _QWORD, float *))(v44 + 144);
                        if ( (char *)v46 == (char *)CPropertyBag::UpdatePropertyValue )
                          updated = CPropertyBag::UpdatePropertyValue(v117, 1LL, v42, (unsigned int)v41, v29);
                        else
                          updated = v46(v117, 1LL, v42, (unsigned int)v41, v29);
LABEL_72:
                        v36 = updated;
                        goto LABEL_73;
                      }
                      if ( (char *)v45 != (char *)&CColorBrush::SetProperty )
                      {
                        if ( v45 == CComponentTransform3D::SetProperty )
                        {
                          updated = CComponentTransform3D::SetProperty(v117, v42, v41, v29);
                        }
                        else if ( (char *)v45 == (char *)CVisual::SetProperty )
                        {
                          updated = CVisual::SetProperty(v117, v42, v41, v29);
                        }
                        else
                        {
                          updated = v45(v117, v42, v41, v29);
                        }
                        goto LABEL_72;
                      }
                      v36 = 0;
                      if ( (_DWORD)v41 != 70 || (v123 = *(_OWORD *)v29, v42) )
                      {
                        v36 = -2147024809;
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x42u);
                        goto LABEL_73;
                      }
                      v49 = HIDWORD(v123);
                      v50 = DWORD2(v123);
                      v51 = DWORD1(v123);
                      if ( *((float *)v117 + 20) == *(float *)&v123
                        && *((float *)v117 + 21) == *((float *)&v123 + 1)
                        && *((float *)v117 + 22) == *((float *)&v123 + 2)
                        && *((float *)v117 + 23) == *((float *)&v123 + 3) )
                      {
LABEL_73:
                        if ( v36 < 0 )
                        {
                          v114 = 514;
LABEL_244:
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, v114);
                          goto LABEL_52;
                        }
                        goto LABEL_51;
                      }
                      v52 = *((_DWORD *)v117 + 8);
                      *((_DWORD *)v117 + 20) = v123;
                      *((_DWORD *)v43 + 21) = v51;
                      *((_DWORD *)v43 + 22) = v50;
                      *((_DWORD *)v43 + 23) = v49;
                      *((_QWORD *)v43 + 9) = 0LL;
                      v53 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)((v52 & 0xFE) + 2)) & 6;
                      *((_DWORD *)v43 + 8) = v53;
                      if ( (v53 & 6) == 2 )
                      {
                        v54 = *(unsigned int (__fastcall **)(CComponentTransform3D *, __int64))(v44 + 128);
                        if ( (char *)v54 == (char *)&CSpriteVisualContent::OnChanged )
                        {
                          *((_QWORD *)v43 + 9) = 0LL;
                          goto LABEL_87;
                        }
                        if ( v54(v43, 5LL) )
                        {
LABEL_87:
                          v55 = *((_QWORD *)v43 + 3);
                          if ( (v55 & 2) != 0 )
                            v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCuLL);
                          else
                            LODWORD(v55) = v55 & 1;
                          if ( (_DWORD)v55 )
                          {
                            v56 = 0LL;
                            v57 = (unsigned int)v55;
                            v58 = 16LL;
                            do
                            {
                              Count = CPtrArrayBase::GetCount((CComponentTransform3D *)((char *)v43 + 24));
                              if ( v56 >= Count )
                              {
                                v60 = 0LL;
                              }
                              else if ( Count == 1 )
                              {
                                v60 = *((_QWORD *)v43 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                              }
                              else
                              {
                                v60 = *(_QWORD *)((*((_QWORD *)v43 + 3) & 0xFFFFFFFFFFFFFFFCuLL) + v58);
                              }
                              v61 = *(void (__fastcall **)(CComponentTransform3D *, unsigned __int64, __int64))(*(_QWORD *)v43 + 64LL);
                              if ( (char *)v61 == (char *)CResource::NotifyListenerOfChange )
                                CResource::NotifyOnChanged(v60, 5LL, 0LL);
                              else
                                v61(v43, v60, 5LL);
                              ++v56;
                              v58 += 8LL;
                              --v57;
                            }
                            while ( v57 );
                            v4 = v120;
                            v8 = v118;
                            v7 = v124;
                          }
                        }
                      }
                      (*(void (__fastcall **)(CComponentTransform3D *, __int64, __int64, __int16 *))(*(_QWORD *)v43 + 72LL))(
                        v43,
                        v44,
                        v41,
                        v30);
                      v62 = *((_DWORD *)v43 + 8);
                      v63 = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)(2 * (v62 >> 1) - 2)) & 6;
                      v64 = ((unsigned __int8)v63 ^ (unsigned __int8)(((v62 ^ (v62 ^ (2 * (v62 >> 1) - 2)) & 6) & 0xFE)
                                                                    + 2)) & 6 ^ v63;
                      *((_DWORD *)v43 + 8) = v64;
                      if ( (v64 & 6) == 2 )
                      {
                        v65 = *(unsigned int (__fastcall **)(CComponentTransform3D *, _QWORD, CComponentTransform3D *))(*(_QWORD *)v43 + 128LL);
                        if ( (char *)v65 == (char *)&CSpriteVisualContent::OnChanged || v65(v43, 0LL, v43) )
                        {
                          v66 = *((_QWORD *)v43 + 3);
                          if ( (v66 & 2) != 0 )
                            v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCuLL);
                          else
                            LODWORD(v66) = v66 & 1;
                          if ( (_DWORD)v66 )
                          {
                            v67 = 0LL;
                            v68 = (unsigned int)v66;
                            do
                            {
                              v69 = CPtrArrayBase::operator[]((char *)v43 + 24, v67);
                              if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v43 + 64LL) == CResource::NotifyListenerOfChange )
                                CResource::NotifyOnChanged(v69, 0LL, v43);
                              else
                                (*(void (__fastcall **)(CComponentTransform3D *, __int64, _QWORD, CComponentTransform3D *))(*(_QWORD *)v43 + 64LL))(
                                  v43,
                                  v69,
                                  0LL,
                                  v43);
                              ++v67;
                              --v68;
                            }
                            while ( v68 );
                            v4 = v120;
                            v7 = v124;
                          }
                        }
                      }
                      (*(void (__fastcall **)(CComponentTransform3D *))(*(_QWORD *)v43 + 72LL))(v43);
                      v70 = *((_QWORD *)v43 + 5);
                      *((_DWORD *)v43 + 8) ^= ((unsigned __int8)*((_DWORD *)v43 + 8) ^ (unsigned __int8)(2 * (*((_DWORD *)v43 + 8) >> 1) - 2)) & 6;
                      v71 = *(_QWORD *)(*((_QWORD *)v43 + 2) + 400LL);
                      if ( v70 )
                      {
                        Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v70, 0LL);
                        if ( Element )
                        {
                          v109 = (_QWORD *)(Element + 8);
                          if ( Element != -8 )
                          {
                            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(Element + 32); *(_QWORD *)(v111 + 216) = v71 )
                            {
                              v111 = *(_QWORD *)(*v109 + 8 * i);
                              i = (unsigned int)(i + 1);
                            }
                            *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 240LL) + 376LL) |= 2u;
                            (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(*((_QWORD *)v43 + 2)
                                                                                            + 560LL)
                                                                              + 104LL))(
                              *(_QWORD *)(*((_QWORD *)v43 + 2) + 560LL),
                              v109,
                              i);
                          }
                        }
                      }
                      goto LABEL_73;
                    }
                    v36 = -2147024809;
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1Du);
LABEL_42:
                    v30 = &_ImageBase;
                    v25 = 1LL;
                    goto LABEL_43;
                  }
                  if ( (char *)v34 == (char *)CComponentTransform3D::GetProperty )
                  {
                    v35 = CComponentTransform3D::GetProperty(v32, v33, (struct CExpressionValue *)&Buf1);
                  }
                  else if ( v34 == CVisual::GetProperty )
                  {
                    v35 = CVisual::GetProperty(v32, v33, (struct CExpressionValue *)&Buf1);
                  }
                  else if ( v34 == CRectangleGeometry::GetProperty )
                  {
                    v35 = CRectangleGeometry::GetProperty(v32, v33, (struct CExpressionValue *)&Buf1);
                  }
                  else
                  {
                    v35 = ((__int64 (__fastcall *)(CComponentTransform3D *, __int64, __int128 *, __int16 *))v34)(
                            v32,
                            v33,
                            &Buf1,
                            &_ImageBase);
                  }
                }
                v36 = v35;
                goto LABEL_42;
              }
              MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, Property, 0x373u);
            }
            else
            {
              v18 = -2147024890;
              MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147024890, 0x371u);
            }
          }
LABEL_178:
          v91 = *((_DWORD *)v7 + 4);
          if ( v91 > (unsigned int)v119 )
          {
            v92 = v91 - (unsigned int)v119;
            do
            {
              --v91;
              --v92;
            }
            while ( v92 );
            *((_DWORD *)v7 + 4) = v91;
          }
          goto LABEL_63;
        }
LABEL_177:
        MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v17, 0x340u);
        goto LABEL_178;
      }
      a3 = v117;
      v6 = v116;
    }
    v17 = 0;
    goto LABEL_15;
  }
  v18 = 0;
LABEL_63:
  v38 = v116;
LABEL_59:
  if ( v4 )
  {
    v113 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v120);
    ++*(_DWORD *)v38;
    *(_QWORD *)(v38 + 24) += v113;
  }
  return (unsigned int)v18;
}
