/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A3BC4 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3E24 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18016F5AC (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180092EB0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x1800A18B0 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A2314 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetMaxStackCount@CExpression@@UEBAIXZ @ 0x1800A7E50 (-GetMaxStackCount@CExpression@@UEBAIXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A96CC (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18011CCE8 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180155EF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015601C (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801584FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1801838A0 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18018766C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r10
  CBaseExpression *v8; // rsi
  bool v9; // zf
  void (__fastcall *v10)(CExpression *__hidden, bool *); // rax
  bool v11; // al
  __int64 v12; // rax
  unsigned int (__fastcall *v13)(CKeyframeAnimation *__hidden); // rax
  unsigned int v14; // ecx
  int v15; // r8d
  signed int v16; // ecx
  int v17; // r8d
  int v18; // eax
  __int64 (__fastcall *v19)(CKeyframeAnimation *__hidden, struct CExpressionValueStack *, unsigned __int64, bool *); // rax
  signed int v20; // eax
  int v21; // r9d
  CExpressionValueStack *v22; // rdx
  __int64 v23; // rax
  bool *v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  struct CResource *v29; // rdx
  unsigned int v30; // esi
  DWORD v31; // r9d
  unsigned int MaxStackCount; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  signed int v37; // eax
  __int64 v38; // rdx
  signed int v39; // eax
  signed int v40; // eax
  bool v41; // cl
  __int64 v42; // r8
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  signed int v45; // eax
  __int64 Elapsed; // rax
  _DWORD *v47; // rcx
  signed int v48; // eax
  char v49; // al
  unsigned int TracingCookie; // eax
  signed int v51; // eax
  HANDLE EventW; // rsi
  __int64 v53; // rax
  _DWORD *v54; // rcx
  unsigned int v55; // edx
  __int64 v56; // r8
  __int64 v57; // rax
  _DWORD *v58; // rcx
  unsigned int v59; // [rsp+30h] [rbp-D0h]
  DWORD v60; // [rsp+30h] [rbp-D0h]
  signed int v61; // [rsp+30h] [rbp-D0h]
  signed int v62; // [rsp+30h] [rbp-D0h]
  signed int v63; // [rsp+30h] [rbp-D0h]
  char v64[4]; // [rsp+34h] [rbp-CCh] BYREF
  CExpressionValueStack *v65; // [rsp+38h] [rbp-C8h]
  bool v66; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v67; // [rsp+48h] [rbp-B8h]
  int v68; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v71; // [rsp+68h] [rbp-98h]
  unsigned int v72; // [rsp+70h] [rbp-90h]
  bool *v73; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h] BYREF
  CBaseExpression *v75; // [rsp+88h] [rbp-78h]
  WCHAR Name[32]; // [rsp+90h] [rbp-70h] BYREF
  int v77; // [rsp+D0h] [rbp-30h]
  char v78; // [rsp+D4h] [rbp-2Ch]

  v4 = 0LL;
  v73 = a4;
  *a4 = 0;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 33);
  v7 = a3;
  v67 = a3;
  v8 = this;
  v65 = a2;
  v75 = this;
  v9 = (*(_DWORD *)(v6 + 4) & 0x40000000) == 0;
  v74 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( !v9 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v71 = (_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 96LL);
    QpcStopwatch::Start((QpcStopwatch *)&v74);
    a2 = v65;
    v7 = v67;
    v5 = v74;
  }
  v72 = *((_DWORD *)a2 + 4);
  if ( !*((_QWORD *)v8 + 32) )
    *((_QWORD *)v8 + 32) = v7;
  if ( *(int *)(*((_QWORD *)v8 + 33) + 4LL) < 0 && (*((_BYTE *)v8 + 192) & 8) == 0 )
  {
    (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v8 + 256LL))(v8);
    *((_BYTE *)v8 + 192) |= 8u;
    a2 = v65;
    v7 = v67;
  }
  v10 = *(void (__fastcall **)(CExpression *__hidden, bool *))(*(_QWORD *)v8 + 232LL);
  if ( v10 == CExpression::PrepareForCalculation )
  {
    if ( CCommonRegistryData::m_fOptimizeForDirtyExpressions )
    {
      v11 = *((_QWORD *)v8 + 32) > *((_QWORD *)v8 + 19);
      v64[0] = v11;
    }
    else
    {
      v11 = 1;
      v64[0] = 1;
    }
  }
  else
  {
    v10(v8, (bool *)v64);
    v11 = v64[0];
    a2 = v65;
    v7 = v67;
  }
  if ( *((_BYTE *)v8 + 132) && !v11 )
  {
    v30 = 0;
    goto LABEL_49;
  }
  v12 = *(_QWORD *)v8;
  *((_QWORD *)v8 + 19) = v7;
  v13 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(v12 + 168);
  if ( v13 == CKeyframeAnimation::GetMaxStackCount )
  {
    v14 = *((_DWORD *)v8 + 62);
    v59 = v14;
  }
  else
  {
    if ( v13 == CExpression::GetMaxStackCount )
      MaxStackCount = CExpression::GetMaxStackCount(v8);
    else
      MaxStackCount = ((__int64 (__fastcall *)(CBaseExpression *, struct CExpressionValueStack *))v13)(v8, a2);
    v7 = v67;
    v14 = MaxStackCount;
    a2 = v65;
    v59 = MaxStackCount;
  }
  v15 = *((_DWORD *)a2 + 4);
  v68 = v15;
  if ( v14 > ~v15 )
  {
    v30 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x40u);
    v16 = -2147418113;
LABEL_118:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v16, 0x3C1u);
    goto LABEL_119;
  }
  LODWORD(v69) = *((_DWORD *)a2 + 12);
  if ( (int)v69 - v15 >= v14 )
    goto LABEL_14;
  memset_0(Name, 0, sizeof(Name));
  v77 = 18;
  v78 = 0;
  v40 = DynArray<CExpressionValue,1>::AddAndSet((char *)v65 + 24, v59 + v68 - (_DWORD)v69, Name);
  v63 = v40;
  if ( v40 >= 0 )
  {
    a2 = v65;
    v7 = v67;
LABEL_14:
    v16 = 0;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0x48u);
  a2 = v65;
  v16 = v63;
  v7 = v67;
LABEL_15:
  if ( v16 < 0 )
  {
    v30 = v16;
    goto LABEL_118;
  }
  v17 = *(_DWORD *)(*((_QWORD *)v8 + 33) + 4LL) & 0x40000000;
  if ( (v17 || CCommonRegistryData::m_fLogExpressionPerfStats) && (*((_BYTE *)v8 + 192) & 2) != 0 )
  {
    v41 = v17 != 0;
    v42 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 216LL);
    ++*(_DWORD *)(v42 + 380);
    if ( v41 )
      ++*(_DWORD *)(v42 + 384);
  }
  if ( v71 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v70);
    a2 = v65;
    v7 = v67;
    v4 = v70;
  }
  if ( (*((_BYTE *)v8 + 192) & 0x20) != 0 )
    goto LABEL_21;
  v34 = 0LL;
  v68 = 0;
  if ( !*((_DWORD *)v8 + 56) )
  {
LABEL_65:
    *((_BYTE *)v8 + 192) |= 0x20u;
LABEL_21:
    v18 = 0;
    v60 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v43 = *((_QWORD *)v8 + 25);
    v44 = *((_QWORD *)v8 + 19);
    v66 = 0;
    v69 = v34;
    v45 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v43 + 8 * v34), a2, v44, &v66);
    v60 = v45;
    if ( v45 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)v8 + 25) + 8 * v69));
    a2 = v65;
    v34 = (unsigned int)(v68 + 1);
    v68 = v34;
    if ( (unsigned int)v34 >= *((_DWORD *)v8 + 56) )
    {
      v7 = v67;
      goto LABEL_65;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v45, 0x2BFu);
  v18 = v60;
  a2 = v65;
  v7 = v67;
LABEL_22:
  if ( v18 < 0 )
  {
    v30 = v60;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v60, 0x3DCu);
  }
  else
  {
    v19 = *(__int64 (__fastcall **)(CKeyframeAnimation *__hidden, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v8 + 208LL);
    if ( v19 == CKeyframeAnimation::CalculateValueWorker )
    {
      v20 = CKeyframeAnimation::CalculateValueWorker(v8, a2, v7, v73);
    }
    else if ( v19 == CExpression::CalculateValueWorker )
    {
      v20 = CExpression::CalculateValueWorker(v8, a2, v7, v73);
    }
    else
    {
      v20 = v19(v8, a2, v7, v73);
    }
    v61 = v20;
    LODWORD(v69) = v20;
    if ( v20 < 0 )
    {
      v30 = v20;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v20, 0x3DEu);
    }
    else
    {
      if ( v4 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v70);
        v47 = v71;
        ++v71[1];
        *((_QWORD *)v47 + 4) += Elapsed;
        v20 = v61;
        v4 = 0LL;
        v70 = 0LL;
      }
      if ( v20 != 1
        && CBaseExpression::IsExpressionValueValid(
             (CBaseExpression *)(9LL * (unsigned int)(*((_DWORD *)v65 + 4) - 1)),
             (struct CExpressionValue *)(*((_QWORD *)v65 + 3) + 72LL * (unsigned int)(*((_DWORD *)v65 + 4) - 1))) )
      {
        goto LABEL_30;
      }
      memset_0(Name, 0, sizeof(Name));
      v35 = *((_QWORD *)v8 + 21);
      v77 = 18;
      v78 = 0;
      if ( v35 && (v36 = *(_QWORD *)(v35 + 8)) != 0 )
      {
        v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, WCHAR *))(*(_QWORD *)v36 + 96LL))(
                v36,
                *((unsigned int *)v8 + 44),
                Name);
        if ( v37 >= 0 )
        {
          v38 = *((_QWORD *)v8 + 23);
          if ( v38 )
          {
            if ( *(_BYTE *)(v38 + 4) )
            {
              v48 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v38);
              if ( v48 < 0 )
              {
                v30 = v48;
                MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v48, 0x400u);
                goto LABEL_119;
              }
            }
          }
          if ( v77 != *((_DWORD *)v8 + 34) )
          {
            v30 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x80070057, 0x405u);
            goto LABEL_119;
          }
          if ( (_DWORD)v69 == 1 )
          {
            v39 = CExpressionValueStack::PushConstant(v65, (const struct CExpressionValue *)Name);
            if ( v39 < 0 )
            {
              v30 = v39;
              MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v39, 0x40Au);
              goto LABEL_119;
            }
          }
          else
          {
            CExpressionValue::CopyFrom(
              (CExpressionValue *)(*((_QWORD *)v65 + 3) + 72LL * (unsigned int)(*((_DWORD *)v65 + 4) - 1)),
              (const struct CExpressionValue *)Name);
          }
LABEL_30:
          v22 = v65;
          if ( *((_DWORD *)v65 + 4) != v72 + 1 )
          {
            v30 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x80004005, 0x41Eu);
            goto LABEL_119;
          }
          if ( v71 )
          {
            QpcStopwatch::Start((QpcStopwatch *)&v70);
            v22 = v65;
            v4 = v70;
          }
          LOBYTE(v21) = 0;
          v23 = (unsigned int)(*((_DWORD *)v22 + 4) - 1);
          LODWORD(v69) = v21;
          v24 = (bool *)(*((_QWORD *)v22 + 3) + 72 * v23);
          v25 = *((_QWORD *)v8 + 33);
          v73 = v24;
          v26 = *(_DWORD *)(v25 + 4);
          if ( (v26 & 0x40000000) != 0 || v26 < 0 )
          {
            v49 = CExpressionValue::operator==((char *)v8 + 64);
            v22 = v65;
            v24 = v73;
            LOBYTE(v21) = v69;
            if ( !v49 )
              LOBYTE(v21) = 1;
          }
          v27 = *((_DWORD *)v24 + 16);
          if ( v27 == 18 )
          {
            *((_DWORD *)v8 + 16) = *(_DWORD *)v24;
            *((_DWORD *)v8 + 32) = 18;
LABEL_37:
            *((_BYTE *)v8 + 132) = 1;
          }
          else
          {
            switch ( v27 )
            {
              case 17:
                *((_BYTE *)v8 + 64) = *v24;
                *((_DWORD *)v8 + 32) = 17;
                goto LABEL_37;
              case 35:
                *((_DWORD *)v8 + 32) = 35;
                *((_QWORD *)v8 + 8) = *(_QWORD *)v24;
                goto LABEL_37;
              case 42:
                *((_DWORD *)v8 + 32) = 42;
                *((_DWORD *)v8 + 16) = *(_DWORD *)v24;
                goto LABEL_37;
              case 52:
                *((_DWORD *)v8 + 32) = 52;
                *((_QWORD *)v8 + 8) = *(_QWORD *)v24;
                *((_DWORD *)v8 + 18) = *((_DWORD *)v24 + 2);
                goto LABEL_37;
              case 69:
                *((_DWORD *)v8 + 32) = 69;
                *((_OWORD *)v8 + 4) = *(_OWORD *)v24;
                goto LABEL_37;
              case 70:
                *((_DWORD *)v8 + 32) = 70;
                *((_OWORD *)v8 + 4) = *(_OWORD *)v24;
                goto LABEL_37;
              case 71:
                *((_DWORD *)v8 + 32) = 71;
                *((_OWORD *)v8 + 4) = *(_OWORD *)v24;
                goto LABEL_37;
              case 104:
                *((_DWORD *)v8 + 32) = 104;
                *((_OWORD *)v8 + 4) = *(_OWORD *)v24;
                *((_QWORD *)v8 + 10) = *((_QWORD *)v24 + 2);
                goto LABEL_37;
              case 265:
                *((_DWORD *)v8 + 32) = 265;
                *((_OWORD *)v8 + 4) = *(_OWORD *)v24;
                *((_OWORD *)v8 + 5) = *((_OWORD *)v24 + 1);
                *((_OWORD *)v8 + 6) = *((_OWORD *)v24 + 2);
                *((_OWORD *)v8 + 7) = *((_OWORD *)v24 + 3);
                goto LABEL_37;
              default:
                break;
            }
          }
          if ( (_BYTE)v21 )
          {
            CBaseExpression::LogSetOutputValue(v8);
            TracingCookie = CBaseExpression::GetTracingCookie(v8);
            v51 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
            v62 = v51;
            v30 = v51;
            if ( v51 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v51, 0x1F5u);
              goto LABEL_110;
            }
            EventW = CreateEventW(0LL, 1, 0, Name);
            SetEvent(EventW);
            CloseHandle(EventW);
            v22 = v65;
            v8 = v75;
          }
          if ( (*((_BYTE *)v8 + 192) & 3) != 3 )
          {
LABEL_44:
            v30 = 0;
            v62 = 0;
            goto LABEL_45;
          }
          v28 = *((_QWORD *)v8 + 21);
          if ( !v28 || (v29 = *(struct CResource **)(v28 + 8)) == 0LL )
          {
            v30 = -2147024890;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070006, 0x206u);
            v31 = -2147024890;
LABEL_112:
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v31, 0x42Bu);
            goto LABEL_119;
          }
          v62 = CBaseExpression::SetOutputValueOnTarget(v8, v29);
          v30 = v62;
          if ( v62 >= 0 )
          {
            v22 = v65;
            goto LABEL_44;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v62, 0x207u);
LABEL_110:
          v22 = v65;
LABEL_45:
          v31 = v62;
          if ( v62 >= 0 )
          {
            if ( v4 )
            {
              v53 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v70);
              v54 = v71;
              v22 = v65;
              ++v71[5];
              *((_QWORD *)v54 + 8) += v53;
            }
            --*((_DWORD *)v22 + 4);
            v30 = 0;
            goto LABEL_49;
          }
          goto LABEL_112;
        }
        v30 = v37;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v37, 0x3FAu);
      }
      else
      {
        v30 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x80070006, 0x3F8u);
      }
    }
  }
LABEL_119:
  v55 = *((_DWORD *)v65 + 4);
  if ( v55 > v72 )
  {
    v56 = v55 - v72;
    do
    {
      --v55;
      --v56;
    }
    while ( v56 );
    *((_DWORD *)v65 + 4) = v55;
  }
LABEL_49:
  if ( v5 )
  {
    v57 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v74);
    v58 = v71;
    ++*v71;
    *((_QWORD *)v58 + 3) += v57;
  }
  return v30;
}
