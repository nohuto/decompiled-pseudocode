/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801584FC
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180158420 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::LogSetOutputValue(CBaseExpression *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  CBaseExpression *v10; // r11
  __int64 v11; // r10
  CBaseExpression *v12; // r11
  const WCHAR *v13; // rax
  __int64 v14; // r11
  __int64 v15; // rdx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  CBaseExpression *v18; // r11
  __int64 v19; // r10
  __int64 cData; // rbx
  CBaseExpression *v21; // r11
  const WCHAR *v22; // rax
  __int64 v23; // r11
  __int64 v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  CBaseExpression *v27; // r11
  __int64 v28; // r10
  CBaseExpression *v29; // r11
  const WCHAR *v30; // rax
  __int64 v31; // r11
  __int64 v32; // rcx
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  CBaseExpression *v35; // r11
  __int64 v36; // r10
  __int64 v37; // rbx
  CBaseExpression *v38; // r11
  const WCHAR *v39; // rax
  __int64 v40; // r11
  __int64 v41; // rcx
  LPCGUID v42; // r8
  LPCGUID v43; // r9
  CBaseExpression *v44; // r11
  __int64 v45; // r10
  __int64 v46; // rbx
  CBaseExpression *v47; // r11
  const WCHAR *v48; // rax
  __int64 v49; // r11
  __int64 v50; // rcx
  LPCGUID v51; // r8
  LPCGUID v52; // r9
  CBaseExpression *v53; // r11
  __int64 v54; // r10
  CBaseExpression *v55; // r11
  const WCHAR *v56; // rax
  __int64 v57; // r11
  __int64 v58; // rcx
  LPCGUID v59; // r8
  LPCGUID v60; // r9
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  char *v64; // rdi
  CBaseExpression *v65; // r11
  __int64 v66; // r10
  CBaseExpression *v67; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v69; // r11
  __int64 v70; // rcx
  LPCGUID v71; // r8
  LPCGUID v72; // r9
  char *v73; // rdi
  CBaseExpression *v74; // r11
  __int64 v75; // r10
  CBaseExpression *v76; // r11
  const WCHAR *v77; // rax
  __int64 v78; // r11
  __int64 v79; // rcx
  LPCGUID v80; // r8
  LPCGUID v81; // r9
  CBaseExpression *v82; // r11
  __int64 v83; // r10
  CBaseExpression *v84; // r11
  const WCHAR *v85; // rax
  __int64 v86; // r11
  __int64 v87; // rcx
  LPCGUID v88; // r8
  LPCGUID v89; // r9
  CBaseExpression *v90; // r11
  __int64 v91; // r10
  CBaseExpression *v92; // r11
  const WCHAR *v93; // rax
  __int64 v94; // r11
  __int64 v95; // rcx
  LPCGUID v96; // r8
  LPCGUID v97; // r9
  int v98; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v99; // [rsp+38h] [rbp-C8h] BYREF
  char v100; // [rsp+40h] [rbp-C0h] BYREF
  int TracingCookie; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v102; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v103; // [rsp+50h] [rbp-B0h] BYREF
  int v104; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v105; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *p_TracingCookie; // [rsp+90h] [rbp-70h]
  __int64 v108; // [rsp+98h] [rbp-68h]
  int *v109; // [rsp+A0h] [rbp-60h]
  __int64 v110; // [rsp+A8h] [rbp-58h]
  __int64 *v111; // [rsp+B0h] [rbp-50h]
  __int64 v112; // [rsp+B8h] [rbp-48h]
  __int64 *v113; // [rsp+C0h] [rbp-40h]
  __int64 v114; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v119; // [rsp+110h] [rbp+10h]
  __int64 v120; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v122; // [rsp+130h] [rbp+30h]
  __int64 v123; // [rsp+138h] [rbp+38h]
  char *v124; // [rsp+140h] [rbp+40h]
  __int64 v125; // [rsp+148h] [rbp+48h]
  char *v126; // [rsp+150h] [rbp+50h]
  __int64 v127; // [rsp+158h] [rbp+58h]
  char *v128; // [rsp+160h] [rbp+60h]
  __int64 v129; // [rsp+168h] [rbp+68h]
  char *v130; // [rsp+170h] [rbp+70h]
  __int64 v131; // [rsp+178h] [rbp+78h]
  char *v132; // [rsp+180h] [rbp+80h]
  __int64 v133; // [rsp+188h] [rbp+88h]
  char *v134; // [rsp+190h] [rbp+90h]
  __int64 v135; // [rsp+198h] [rbp+98h]
  char *v136; // [rsp+1A0h] [rbp+A0h]
  __int64 v137; // [rsp+1A8h] [rbp+A8h]
  char *v138; // [rsp+1B0h] [rbp+B0h]
  __int64 v139; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 *v141; // [rsp+1D0h] [rbp+D0h]
  __int64 v142; // [rsp+1D8h] [rbp+D8h]

  v1 = *((_QWORD *)this + 23);
  v102 = 0LL;
  if ( !v1 )
  {
    v102 = 0LL;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v1 == 1 )
  {
    v3 = *(unsigned __int8 *)(v1 + 8);
  }
  else
  {
    if ( *(_DWORD *)v1 != 2 )
      goto LABEL_8;
    v3 = *(_QWORD *)(v1 + 8);
  }
  v102 = v3;
LABEL_8:
  v4 = *((_DWORD *)this + 32);
  if ( v4 > 69 )
  {
    v61 = v4 - 70;
    if ( v61 )
    {
      v62 = v61 - 1;
      if ( v62 )
      {
        v63 = v62 - 33;
        if ( v63 )
        {
          if ( v63 == 161 )
          {
            v64 = (char *)this + 64;
            if ( dword_18026D7B0 > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
              {
                LODWORD(v99) = CBaseExpression::GetTracingCookie(v65);
                v108 = v66;
                p_TracingCookie = (int *)&v99;
                v109 = &v98;
                v111 = &v102;
                v115.Ptr = (ULONGLONG)(v64 + 4);
                v116.Ptr = (ULONGLONG)(v64 + 8);
                pDesc.Ptr = (ULONGLONG)(v64 + 12);
                v118.Ptr = (ULONGLONG)(v64 + 16);
                v119 = (__int64 *)(v64 + 20);
                v121.Ptr = (ULONGLONG)(v64 + 24);
                v122 = (__int64 *)(v64 + 28);
                v124 = v64 + 32;
                v126 = v64 + 36;
                v128 = v64 + 40;
                v130 = v64 + 44;
                v132 = v64 + 48;
                v134 = v64 + 52;
                v136 = v64 + 56;
                v138 = v64 + 60;
                v98 = 265;
                v110 = v66;
                v112 = 8LL;
                v113 = (__int64 *)v64;
                v114 = v66;
                *(_QWORD *)&v115.Size = v66;
                *(_QWORD *)&v116.Size = v66;
                *(_QWORD *)&pDesc.Size = v66;
                *(_QWORD *)&v118.Size = v66;
                v120 = v66;
                *(_QWORD *)&v121.Size = v66;
                v123 = v66;
                v125 = v66;
                v127 = v66;
                v129 = v66;
                v131 = v66;
                v133 = v66;
                v135 = v66;
                v137 = v66;
                v139 = v66;
                DebugInfo = CBaseExpression::GetDebugInfo(v67);
                TlgCreateWsz(&v140, DebugInfo);
                v70 = *(_QWORD *)(v69 + 152);
                v141 = &v103;
                v103 = v70;
                v142 = 8LL;
                TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021306F, v71, v72, 0x17u, &pData);
              }
            }
          }
        }
        else
        {
          v73 = (char *)this + 64;
          if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
          {
            LODWORD(v99) = CBaseExpression::GetTracingCookie(v74);
            v108 = v75;
            p_TracingCookie = (int *)&v99;
            v109 = &v98;
            v111 = &v102;
            v115.Ptr = (ULONGLONG)(v73 + 4);
            v116.Ptr = (ULONGLONG)(v73 + 8);
            pDesc.Ptr = (ULONGLONG)(v73 + 12);
            v118.Ptr = (ULONGLONG)(v73 + 16);
            v119 = (__int64 *)(v73 + 20);
            v98 = 104;
            v110 = v75;
            v112 = 8LL;
            v113 = (__int64 *)v73;
            v114 = v75;
            *(_QWORD *)&v115.Size = v75;
            *(_QWORD *)&v116.Size = v75;
            *(_QWORD *)&pDesc.Size = v75;
            *(_QWORD *)&v118.Size = v75;
            v120 = v75;
            v77 = CBaseExpression::GetDebugInfo(v76);
            TlgCreateWsz(&v121, v77);
            v79 = *(_QWORD *)(v78 + 152);
            v122 = &v103;
            v103 = v79;
            v123 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213178, v80, v81, 0xDu, &pData);
          }
        }
      }
      else
      {
        v105 = *((_OWORD *)this + 4);
        if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
        {
          LODWORD(v99) = CBaseExpression::GetTracingCookie(v82);
          v108 = v83;
          p_TracingCookie = (int *)&v99;
          v109 = &v98;
          v111 = &v102;
          v113 = (__int64 *)&v105;
          v115.Ptr = (ULONGLONG)&v105 + 4;
          v116.Ptr = (ULONGLONG)&v105 + 8;
          pDesc.Ptr = (ULONGLONG)&v105 + 12;
          v98 = 71;
          v110 = v83;
          v112 = 8LL;
          v114 = v83;
          *(_QWORD *)&v115.Size = v83;
          *(_QWORD *)&v116.Size = v83;
          *(_QWORD *)&pDesc.Size = v83;
          v85 = CBaseExpression::GetDebugInfo(v84);
          TlgCreateWsz(&v118, v85);
          v87 = *(_QWORD *)(v86 + 152);
          v119 = &v103;
          v103 = v87;
          v120 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802131F3, v88, v89, 0xBu, &pData);
        }
      }
    }
    else
    {
      v105 = *((_OWORD *)this + 4);
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        LODWORD(v99) = CBaseExpression::GetTracingCookie(v90);
        v108 = v91;
        p_TracingCookie = (int *)&v99;
        v109 = &v98;
        v111 = &v102;
        v113 = (__int64 *)&v105;
        v115.Ptr = (ULONGLONG)&v105 + 4;
        v116.Ptr = (ULONGLONG)&v105 + 8;
        pDesc.Ptr = (ULONGLONG)&v105 + 12;
        v98 = 70;
        v110 = v91;
        v112 = 8LL;
        v114 = v91;
        *(_QWORD *)&v115.Size = v91;
        *(_QWORD *)&v116.Size = v91;
        *(_QWORD *)&pDesc.Size = v91;
        v93 = CBaseExpression::GetDebugInfo(v92);
        TlgCreateWsz(&v118, v93);
        v95 = *(_QWORD *)(v94 + 152);
        v119 = &v103;
        v103 = v95;
        v120 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021325C, v96, v97, 0xBu, &pData);
      }
    }
  }
  else if ( v4 == 69 )
  {
    v105 = *((_OWORD *)this + 4);
    if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
    {
      LODWORD(v99) = CBaseExpression::GetTracingCookie(v53);
      v108 = v54;
      p_TracingCookie = (int *)&v99;
      v109 = &v98;
      v111 = &v102;
      v113 = (__int64 *)&v105;
      v115.Ptr = (ULONGLONG)&v105 + 4;
      v116.Ptr = (ULONGLONG)&v105 + 8;
      pDesc.Ptr = (ULONGLONG)&v105 + 12;
      v98 = 69;
      v110 = v54;
      v112 = 8LL;
      v114 = v54;
      *(_QWORD *)&v115.Size = v54;
      *(_QWORD *)&v116.Size = v54;
      *(_QWORD *)&pDesc.Size = v54;
      v56 = CBaseExpression::GetDebugInfo(v55);
      TlgCreateWsz(&v118, v56);
      v58 = *(_QWORD *)(v57 + 152);
      v119 = &v103;
      v103 = v58;
      v120 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802131F3, v59, v60, 0xBu, &pData);
    }
  }
  else
  {
    v5 = v4 - 17;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 17;
        if ( v7 )
        {
          v8 = v7 - 7;
          if ( v8 )
          {
            if ( v8 == 10 )
            {
              v9 = *((_DWORD *)this + 18);
              v103 = *((_QWORD *)this + 8);
              v104 = v9;
              if ( dword_18026D7B0 > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
                {
                  TracingCookie = CBaseExpression::GetTracingCookie(v10);
                  v108 = v11;
                  p_TracingCookie = &TracingCookie;
                  v109 = &v98;
                  v111 = &v102;
                  v113 = &v103;
                  v115.Ptr = (ULONGLONG)&v103 + 4;
                  v116.Ptr = (ULONGLONG)&v104;
                  v98 = 52;
                  v110 = v11;
                  v112 = 8LL;
                  v114 = v11;
                  *(_QWORD *)&v115.Size = v11;
                  *(_QWORD *)&v116.Size = v11;
                  v13 = CBaseExpression::GetDebugInfo(v12);
                  TlgCreateWsz(&pDesc, v13);
                  v15 = *(_QWORD *)(v14 + 152);
                  v118.Ptr = (ULONGLONG)&v99;
                  v99 = v15;
                  *(_QWORD *)&v118.Size = 8LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802132C5, v16, v17, 0xAu, &pData);
                }
              }
            }
          }
          else if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
          {
            v98 = CBaseExpression::GetTracingCookie(v18);
            cData = (unsigned int)(v19 + 4);
            v108 = v19;
            p_TracingCookie = &v98;
            TracingCookie = 42;
            v109 = &TracingCookie;
            v111 = &v102;
            v113 = (__int64 *)((char *)v21 + 64);
            v110 = v19;
            v112 = cData;
            v114 = v19;
            v22 = CBaseExpression::GetDebugInfo(v21);
            TlgCreateWsz(&v115, v22);
            v24 = *(_QWORD *)(v23 + 152);
            v116.Ptr = (ULONGLONG)&v99;
            v99 = v24;
            *(_QWORD *)&v116.Size = cData;
            TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021311C, v25, v26, cData, &pData);
          }
        }
        else
        {
          v99 = *((_QWORD *)this + 8);
          if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
          {
            v98 = CBaseExpression::GetTracingCookie(v27);
            v108 = v28;
            p_TracingCookie = &v98;
            v109 = &TracingCookie;
            v111 = &v102;
            v113 = &v99;
            v115.Ptr = (ULONGLONG)&v99 + 4;
            TracingCookie = 35;
            v110 = v28;
            v112 = 8LL;
            v114 = v28;
            *(_QWORD *)&v115.Size = v28;
            v30 = CBaseExpression::GetDebugInfo(v29);
            TlgCreateWsz(&v116, v30);
            v32 = *(_QWORD *)(v31 + 152);
            pDesc.Ptr = (ULONGLONG)&v103;
            v103 = v32;
            *(_QWORD *)&pDesc.Size = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021332B, v33, v34, 9u, &pData);
          }
        }
      }
      else
      {
        LODWORD(v99) = *((_DWORD *)this + 16);
        if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
        {
          v98 = CBaseExpression::GetTracingCookie(v35);
          v37 = (unsigned int)(v36 + 4);
          v108 = v36;
          p_TracingCookie = &v98;
          TracingCookie = 18;
          v109 = &TracingCookie;
          v111 = &v102;
          v113 = &v99;
          v110 = v36;
          v112 = v37;
          v114 = v36;
          v39 = CBaseExpression::GetDebugInfo(v38);
          TlgCreateWsz(&v115, v39);
          v41 = *(_QWORD *)(v40 + 152);
          v116.Ptr = (ULONGLONG)&v103;
          v103 = v41;
          *(_QWORD *)&v116.Size = v37;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021311C, v42, v43, v37, &pData);
        }
      }
    }
    else
    {
      v100 = *((_BYTE *)this + 64);
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        LODWORD(v99) = CBaseExpression::GetTracingCookie(v44);
        v46 = (unsigned int)(v45 + 4);
        v108 = v45;
        p_TracingCookie = (int *)&v99;
        v98 = 17;
        v109 = &v98;
        v111 = &v102;
        v113 = (__int64 *)&v100;
        v110 = v45;
        v112 = v46;
        v114 = 1LL;
        v48 = CBaseExpression::GetDebugInfo(v47);
        TlgCreateWsz(&v115, v48);
        v50 = *(_QWORD *)(v49 + 152);
        v116.Ptr = (ULONGLONG)&v103;
        v103 = v50;
        *(_QWORD *)&v116.Size = v46;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021338E, v51, v52, v46, &pData);
      }
    }
  }
}
