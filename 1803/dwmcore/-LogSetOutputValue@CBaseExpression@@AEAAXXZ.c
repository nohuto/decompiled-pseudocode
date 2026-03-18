/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180181548
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::LogSetOutputValue(CBaseExpression *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  int v4; // ecx
  const char *v5; // rsi
  bool v6; // zf
  const char *v7; // rdi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CBaseExpression *v12; // r11
  __int64 v13; // r10
  __int64 cData; // rbx
  CBaseExpression *v15; // r11
  const WCHAR *v16; // rax
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r10
  CBaseExpression *v20; // r11
  __int64 v21; // r10
  CBaseExpression *v22; // r11
  const WCHAR *v23; // rax
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r10
  CBaseExpression *v27; // r11
  __int64 v28; // r10
  __int64 v29; // rbx
  CBaseExpression *v30; // r11
  const WCHAR *v31; // rax
  __int64 v32; // r11
  __int64 v33; // rcx
  __int64 v34; // r10
  CBaseExpression *v35; // r11
  __int64 v36; // r10
  __int64 v37; // rbx
  CBaseExpression *v38; // r11
  const WCHAR *v39; // rax
  __int64 v40; // r11
  __int64 v41; // rcx
  __int64 v42; // r10
  CBaseExpression *v43; // r11
  __int64 v44; // r10
  __int64 v45; // rbx
  CBaseExpression *v46; // r11
  const WCHAR *v47; // rax
  __int64 v48; // r11
  __int64 v49; // rcx
  CBaseExpression *v50; // r11
  __int64 v51; // r10
  CBaseExpression *v52; // r11
  const WCHAR *v53; // rax
  __int64 v54; // r11
  __int64 v55; // rcx
  __int64 v56; // r10
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  CBaseExpression *v61; // r11
  __int64 v62; // r10
  CBaseExpression *v63; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v65; // r11
  __int64 v66; // rcx
  __int64 v67; // r10
  CBaseExpression *v68; // r11
  __int64 v69; // r10
  CBaseExpression *v70; // r11
  const WCHAR *v71; // rax
  __int64 v72; // r11
  __int64 v73; // rcx
  __int64 v74; // r10
  CBaseExpression *v75; // r11
  __int64 v76; // r10
  CBaseExpression *v77; // r11
  const WCHAR *v78; // rax
  __int64 v79; // r11
  __int64 v80; // rcx
  __int64 v81; // r10
  CBaseExpression *v82; // r11
  __int64 v83; // r10
  CBaseExpression *v84; // r11
  const WCHAR *v85; // rax
  __int64 v86; // r11
  __int64 v87; // rcx
  __int64 v88; // r10
  CBaseExpression *v89; // r11
  __int64 v90; // r10
  CBaseExpression *v91; // r11
  const WCHAR *v92; // rax
  __int64 v93; // r11
  __int64 v94; // rcx
  __int64 v95; // r10
  int v96; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v97; // [rsp+38h] [rbp-C8h] BYREF
  int TracingCookie; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v100[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *p_TracingCookie; // [rsp+80h] [rbp-80h]
  __int64 v103; // [rsp+88h] [rbp-78h]
  int *v104; // [rsp+90h] [rbp-70h]
  __int64 v105; // [rsp+98h] [rbp-68h]
  _QWORD *v106; // [rsp+A0h] [rbp-60h]
  __int64 v107; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v109; // [rsp+C0h] [rbp-40h]
  __int64 v110; // [rsp+C8h] [rbp-38h]
  const char *v111; // [rsp+D0h] [rbp-30h]
  __int64 v112; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v113; // [rsp+E0h] [rbp-20h]
  __int64 v114; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v115; // [rsp+F0h] [rbp-10h]
  __int64 v116; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v117; // [rsp+100h] [rbp+0h]
  __int64 v118; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v119; // [rsp+110h] [rbp+10h]
  __int64 v120; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v121; // [rsp+120h] [rbp+20h]
  __int64 v122; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v123; // [rsp+130h] [rbp+30h]
  __int64 v124; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v125; // [rsp+140h] [rbp+40h]
  __int64 v126; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v127; // [rsp+150h] [rbp+50h]
  __int64 v128; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v129; // [rsp+160h] [rbp+60h]
  __int64 v130; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v131; // [rsp+170h] [rbp+70h]
  __int64 v132; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v133; // [rsp+180h] [rbp+80h]
  __int64 v134; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v135; // [rsp+190h] [rbp+90h]
  __int64 v136; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v137; // [rsp+1A0h] [rbp+A0h]
  __int64 v138; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *v139; // [rsp+1B0h] [rbp+B0h]
  __int64 v140; // [rsp+1B8h] [rbp+B8h]
  unsigned __int8 *v141; // [rsp+1C0h] [rbp+C0h]
  __int64 v142; // [rsp+1C8h] [rbp+C8h]
  const void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v1 = *((_QWORD *)this + 24);
  v100[0] = 0LL;
  if ( v1 )
  {
    if ( *(_DWORD *)v1 == 1 )
    {
      v3 = *(unsigned __int8 *)(v1 + 8);
    }
    else
    {
      if ( *(_DWORD *)v1 != 2 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v3 = *(_QWORD *)(v1 + 8);
    }
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *((_DWORD *)this + 34);
  v5 = (char *)this + 64;
  v6 = *((_DWORD *)this + 34) == 11;
  v100[0] = v3;
  if ( v6 )
    v7 = (const char *)*((_QWORD *)this + 16);
  else
    v7 = (char *)this + 64;
  if ( v4 > 52 )
  {
    v57 = v4 - 69;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( v59 )
        {
          v60 = v59 - 33;
          if ( v60 )
          {
            if ( v60 != 161 )
              goto LABEL_41;
            if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
            {
              LODWORD(v97) = CBaseExpression::GetTracingCookie(v61);
              v103 = v62;
              p_TracingCookie = (int *)&v97;
              v104 = &v96;
              v106 = v100;
              v96 = 265;
              v105 = v62;
              v107 = 8LL;
              DebugInfo = CBaseExpression::GetDebugInfo(v63);
              TlgCreateWsz(&pDesc, DebugInfo);
              v66 = *(_QWORD *)(v65 + 160);
              v109 = &v99;
              v113 = (unsigned __int8 *)(v7 + 4);
              v115 = (unsigned __int8 *)(v7 + 8);
              v117 = (unsigned __int8 *)(v7 + 12);
              v119 = (unsigned __int8 *)(v7 + 16);
              v121 = (unsigned __int8 *)(v7 + 20);
              v123 = (unsigned __int8 *)(v7 + 24);
              v125 = (unsigned __int8 *)(v7 + 28);
              v127 = (unsigned __int8 *)(v7 + 32);
              v129 = (unsigned __int8 *)(v7 + 36);
              v131 = (unsigned __int8 *)(v7 + 40);
              v133 = (unsigned __int8 *)(v7 + 44);
              v135 = (unsigned __int8 *)(v7 + 48);
              v137 = (unsigned __int8 *)(v7 + 52);
              v139 = (unsigned __int8 *)(v7 + 56);
              v141 = (unsigned __int8 *)(v7 + 60);
              v99 = v66;
              v110 = 8LL;
              v111 = v7;
              v112 = v67;
              v114 = v67;
              v116 = v67;
              v118 = v67;
              v120 = v67;
              v122 = v67;
              v124 = v67;
              v126 = v67;
              v128 = v67;
              v130 = v67;
              v132 = v67;
              v134 = v67;
              v136 = v67;
              v138 = v67;
              v140 = v67;
              v142 = v67;
              TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7BEC, 0LL, 0LL, 0x17u, &pData);
            }
          }
          else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
          {
            LODWORD(v97) = CBaseExpression::GetTracingCookie(v68);
            v103 = v69;
            p_TracingCookie = (int *)&v97;
            v104 = &v96;
            v106 = v100;
            v96 = 104;
            v105 = v69;
            v107 = 8LL;
            v71 = CBaseExpression::GetDebugInfo(v70);
            TlgCreateWsz(&pDesc, v71);
            v73 = *(_QWORD *)(v72 + 160);
            v109 = &v99;
            v113 = (unsigned __int8 *)(v7 + 4);
            v115 = (unsigned __int8 *)(v7 + 8);
            v117 = (unsigned __int8 *)(v7 + 12);
            v119 = (unsigned __int8 *)(v7 + 16);
            v121 = (unsigned __int8 *)(v7 + 20);
            v99 = v73;
            v110 = 8LL;
            v111 = v7;
            v112 = v74;
            v114 = v74;
            v116 = v74;
            v118 = v74;
            v120 = v74;
            v122 = v74;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7B71, 0LL, 0LL, 0xDu, &pData);
          }
        }
        else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
        {
          LODWORD(v97) = CBaseExpression::GetTracingCookie(v75);
          v103 = v76;
          p_TracingCookie = (int *)&v97;
          v104 = &v96;
          v106 = v100;
          v96 = 71;
          v105 = v76;
          v107 = 8LL;
          v78 = CBaseExpression::GetDebugInfo(v77);
          TlgCreateWsz(&pDesc, v78);
          v80 = *(_QWORD *)(v79 + 160);
          v109 = &v99;
          v113 = (unsigned __int8 *)(v7 + 4);
          v115 = (unsigned __int8 *)(v7 + 8);
          v117 = (unsigned __int8 *)(v7 + 12);
          v99 = v80;
          v110 = 8LL;
          v111 = v7;
          v112 = v81;
          v114 = v81;
          v116 = v81;
          v118 = v81;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7D02, 0LL, 0LL, 0xBu, &pData);
        }
      }
      else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        LODWORD(v97) = CBaseExpression::GetTracingCookie(v82);
        v103 = v83;
        p_TracingCookie = (int *)&v97;
        v104 = &v96;
        v106 = v100;
        v96 = 70;
        v105 = v83;
        v107 = 8LL;
        v85 = CBaseExpression::GetDebugInfo(v84);
        TlgCreateWsz(&pDesc, v85);
        v87 = *(_QWORD *)(v86 + 160);
        v109 = &v99;
        v113 = (unsigned __int8 *)(v7 + 4);
        v115 = (unsigned __int8 *)(v7 + 8);
        v117 = (unsigned __int8 *)(v7 + 12);
        v99 = v87;
        v110 = 8LL;
        v111 = v7;
        v112 = v88;
        v114 = v88;
        v116 = v88;
        v118 = v88;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7C99, 0LL, 0LL, 0xBu, &pData);
      }
    }
    else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      LODWORD(v97) = CBaseExpression::GetTracingCookie(v89);
      v103 = v90;
      p_TracingCookie = (int *)&v97;
      v104 = &v96;
      v106 = v100;
      v96 = 69;
      v105 = v90;
      v107 = 8LL;
      v92 = CBaseExpression::GetDebugInfo(v91);
      TlgCreateWsz(&pDesc, v92);
      v94 = *(_QWORD *)(v93 + 160);
      v109 = &v99;
      v113 = (unsigned __int8 *)(v7 + 4);
      v115 = (unsigned __int8 *)(v7 + 8);
      v117 = (unsigned __int8 *)(v7 + 12);
      v99 = v94;
      v110 = 8LL;
      v111 = v7;
      v112 = v95;
      v114 = v95;
      v116 = v95;
      v118 = v95;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7D02, 0LL, 0LL, 0xBu, &pData);
    }
  }
  else if ( v4 == 52 )
  {
    if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      LODWORD(v97) = CBaseExpression::GetTracingCookie(v50);
      v103 = v51;
      p_TracingCookie = (int *)&v97;
      v104 = &v96;
      v106 = v100;
      v96 = 52;
      v105 = v51;
      v107 = 8LL;
      v53 = CBaseExpression::GetDebugInfo(v52);
      TlgCreateWsz(&pDesc, v53);
      v55 = *(_QWORD *)(v54 + 160);
      v109 = &v99;
      v113 = (unsigned __int8 *)(v7 + 4);
      v115 = (unsigned __int8 *)(v7 + 8);
      v99 = v55;
      v110 = 8LL;
      v111 = v7;
      v112 = v56;
      v114 = v56;
      v116 = v56;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7D6B, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else
  {
    v8 = v4 - 11;
    if ( v8 )
    {
      v9 = v8 - 6;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 17;
          if ( v11 )
          {
            if ( v11 == 7 )
            {
              if ( dword_1802D3FE0 > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                {
                  TracingCookie = CBaseExpression::GetTracingCookie(v12);
                  cData = (unsigned int)(v13 + 4);
                  v103 = v13;
                  p_TracingCookie = &TracingCookie;
                  v96 = 42;
                  v104 = &v96;
                  v106 = v100;
                  v105 = v13;
                  v107 = cData;
                  v16 = CBaseExpression::GetDebugInfo(v15);
                  TlgCreateWsz(&pDesc, v16);
                  v18 = *(_QWORD *)(v17 + 160);
                  v109 = &v97;
                  v97 = v18;
                  v110 = cData;
                  v111 = v5;
                  v112 = v19;
                  TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7AB9, 0LL, 0LL, cData, &pData);
                }
              }
              return;
            }
LABEL_41:
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          }
          if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
          {
            v96 = CBaseExpression::GetTracingCookie(v20);
            v103 = v21;
            p_TracingCookie = &v96;
            v104 = &TracingCookie;
            v106 = v100;
            TracingCookie = 35;
            v105 = v21;
            v107 = 8LL;
            v23 = CBaseExpression::GetDebugInfo(v22);
            TlgCreateWsz(&pDesc, v23);
            v25 = *(_QWORD *)(v24 + 160);
            v109 = &v97;
            v113 = (unsigned __int8 *)(v7 + 4);
            v97 = v25;
            v110 = 8LL;
            v111 = v7;
            v112 = v26;
            v114 = v26;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7DD1, 0LL, 0LL, 9u, &pData);
          }
        }
        else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
        {
          v96 = CBaseExpression::GetTracingCookie(v27);
          v29 = (unsigned int)(v28 + 4);
          v103 = v28;
          p_TracingCookie = &v96;
          TracingCookie = 18;
          v104 = &TracingCookie;
          v106 = v100;
          v105 = v28;
          v107 = v29;
          v31 = CBaseExpression::GetDebugInfo(v30);
          TlgCreateWsz(&pDesc, v31);
          v33 = *(_QWORD *)(v32 + 160);
          v109 = &v97;
          v97 = v33;
          v110 = v29;
          v111 = v7;
          v112 = v34;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7AB9, 0LL, 0LL, v29, &pData);
        }
      }
      else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        v96 = CBaseExpression::GetTracingCookie(v35);
        v37 = (unsigned int)(v36 + 4);
        v103 = v36;
        p_TracingCookie = &v96;
        TracingCookie = 17;
        v104 = &TracingCookie;
        v106 = v100;
        v105 = v36;
        v107 = v37;
        v39 = CBaseExpression::GetDebugInfo(v38);
        TlgCreateWsz(&pDesc, v39);
        v41 = *(_QWORD *)(v40 + 160);
        v109 = &v99;
        LODWORD(v97) = *(unsigned __int8 *)v7;
        v111 = (const char *)&v97;
        v99 = v41;
        v110 = v37;
        v112 = v42;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7E34, 0LL, 0LL, v37, &pData);
      }
    }
    else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      LODWORD(v97) = CBaseExpression::GetTracingCookie(v43);
      v45 = (unsigned int)(v44 + 4);
      v103 = v44;
      p_TracingCookie = (int *)&v97;
      v96 = 11;
      v104 = &v96;
      v106 = v100;
      v105 = v44;
      v107 = v45;
      v47 = CBaseExpression::GetDebugInfo(v46);
      TlgCreateWsz(&pDesc, v47);
      v49 = *(_QWORD *)(v48 + 160);
      v109 = &v99;
      v111 = "PathValue";
      v99 = v49;
      v110 = v45;
      v112 = 10LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7B15, 0LL, 0LL, v45, &pData);
    }
  }
}
