/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801694E0
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180020AF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18002EC04 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180169490 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
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
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  char *v12; // rdi
  CBaseExpression *v13; // r11
  __int64 v14; // r10
  CBaseExpression *v15; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v17; // r11
  __int64 v18; // rdx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  char *v21; // rdi
  CBaseExpression *v22; // r11
  __int64 v23; // r10
  CBaseExpression *v24; // r11
  const WCHAR *v25; // rax
  __int64 v26; // r11
  __int64 v27; // rcx
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  CBaseExpression *v30; // r11
  __int64 v31; // r10
  CBaseExpression *v32; // r11
  const WCHAR *v33; // rax
  __int64 v34; // r11
  __int64 v35; // rcx
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  CBaseExpression *v38; // r11
  __int64 v39; // r10
  CBaseExpression *v40; // r11
  const WCHAR *v41; // rax
  __int64 v42; // r11
  __int64 v43; // rcx
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  CBaseExpression *v46; // r11
  __int64 v47; // r10
  CBaseExpression *v48; // r11
  const WCHAR *v49; // rax
  __int64 v50; // r11
  __int64 v51; // rcx
  LPCGUID v52; // r8
  LPCGUID v53; // r9
  int v54; // eax
  CBaseExpression *v55; // r11
  __int64 v56; // r10
  CBaseExpression *v57; // r11
  const WCHAR *v58; // rax
  __int64 v59; // r11
  __int64 v60; // rcx
  LPCGUID v61; // r8
  LPCGUID v62; // r9
  CBaseExpression *v63; // r11
  __int64 v64; // r10
  CBaseExpression *v65; // r11
  const WCHAR *v66; // rax
  __int64 v67; // r11
  __int64 v68; // rcx
  LPCGUID v69; // r8
  LPCGUID v70; // r9
  CBaseExpression *v71; // r11
  __int64 v72; // r10
  __int64 cData; // rbx
  CBaseExpression *v74; // r11
  const WCHAR *v75; // rax
  __int64 v76; // r11
  __int64 v77; // rcx
  LPCGUID v78; // r8
  LPCGUID v79; // r9
  CBaseExpression *v80; // r11
  __int64 v81; // r10
  __int64 v82; // rbx
  CBaseExpression *v83; // r11
  const WCHAR *v84; // rax
  __int64 v85; // r11
  __int64 v86; // rcx
  LPCGUID v87; // r8
  LPCGUID v88; // r9
  int v89; // [rsp+30h] [rbp-D0h] BYREF
  int TracingCookie; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v91; // [rsp+38h] [rbp-C8h] BYREF
  char v92; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v94; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *p_TracingCookie; // [rsp+80h] [rbp-80h]
  __int64 v97; // [rsp+88h] [rbp-78h]
  int *v98; // [rsp+90h] [rbp-70h]
  __int64 v99; // [rsp+98h] [rbp-68h]
  __int64 *v100; // [rsp+A0h] [rbp-60h]
  __int64 v101; // [rsp+A8h] [rbp-58h]
  __int64 *v102; // [rsp+B0h] [rbp-50h]
  __int64 v103; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v108; // [rsp+100h] [rbp+0h]
  __int64 v109; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  char *v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  char *v115; // [rsp+140h] [rbp+40h]
  __int64 v116; // [rsp+148h] [rbp+48h]
  char *v117; // [rsp+150h] [rbp+50h]
  __int64 v118; // [rsp+158h] [rbp+58h]
  char *v119; // [rsp+160h] [rbp+60h]
  __int64 v120; // [rsp+168h] [rbp+68h]
  char *v121; // [rsp+170h] [rbp+70h]
  __int64 v122; // [rsp+178h] [rbp+78h]
  char *v123; // [rsp+180h] [rbp+80h]
  __int64 v124; // [rsp+188h] [rbp+88h]
  char *v125; // [rsp+190h] [rbp+90h]
  __int64 v126; // [rsp+198h] [rbp+98h]
  char *v127; // [rsp+1A0h] [rbp+A0h]
  __int64 v128; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v130; // [rsp+1C0h] [rbp+C0h]
  __int64 v131; // [rsp+1C8h] [rbp+C8h]

  v1 = *((_QWORD *)this + 23);
  v93 = 0LL;
  if ( !v1 )
  {
    v93 = 0LL;
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
  v93 = v3;
LABEL_8:
  v4 = *((_DWORD *)this + 32) - 17;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 17;
      if ( v6 )
      {
        v7 = v6 - 17;
        if ( v7 )
        {
          v8 = v7 - 17;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 33;
                if ( v11 )
                {
                  if ( v11 == 161 )
                  {
                    v12 = (char *)this + 64;
                    if ( dword_18023D7F0 > 4u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
                      {
                        TracingCookie = CBaseExpression::GetTracingCookie(v13);
                        v97 = v14;
                        p_TracingCookie = &TracingCookie;
                        v98 = &v89;
                        v100 = &v93;
                        v104.Ptr = (ULONGLONG)(v12 + 4);
                        v105.Ptr = (ULONGLONG)(v12 + 8);
                        v106.Ptr = (ULONGLONG)(v12 + 12);
                        v107.Ptr = (ULONGLONG)(v12 + 16);
                        v108 = (__int64 *)(v12 + 20);
                        v110.Ptr = (ULONGLONG)(v12 + 24);
                        v111 = (__int64 *)(v12 + 28);
                        v113 = v12 + 32;
                        v115 = v12 + 36;
                        v117 = v12 + 40;
                        v119 = v12 + 44;
                        v121 = v12 + 48;
                        v123 = v12 + 52;
                        v125 = v12 + 56;
                        v127 = v12 + 60;
                        v89 = 265;
                        v99 = v14;
                        v101 = 8LL;
                        v102 = (__int64 *)v12;
                        v103 = v14;
                        *(_QWORD *)&v104.Size = v14;
                        *(_QWORD *)&v105.Size = v14;
                        *(_QWORD *)&v106.Size = v14;
                        *(_QWORD *)&v107.Size = v14;
                        v109 = v14;
                        *(_QWORD *)&v110.Size = v14;
                        v112 = v14;
                        v114 = v14;
                        v116 = v14;
                        v118 = v14;
                        v120 = v14;
                        v122 = v14;
                        v124 = v14;
                        v126 = v14;
                        v128 = v14;
                        DebugInfo = CBaseExpression::GetDebugInfo(v15);
                        TlgCreateWsz(&pDesc, DebugInfo);
                        v18 = *(_QWORD *)(v17 + 152);
                        v130 = &v91;
                        v91 = v18;
                        v131 = 8LL;
                        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6E70, v19, v20, 0x17u, &pData);
                      }
                    }
                  }
                }
                else
                {
                  v21 = (char *)this + 64;
                  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
                  {
                    v89 = CBaseExpression::GetTracingCookie(v22);
                    v97 = v23;
                    p_TracingCookie = &v89;
                    v98 = &TracingCookie;
                    v100 = &v93;
                    v104.Ptr = (ULONGLONG)(v21 + 4);
                    v105.Ptr = (ULONGLONG)(v21 + 8);
                    v106.Ptr = (ULONGLONG)(v21 + 12);
                    v107.Ptr = (ULONGLONG)(v21 + 16);
                    v108 = (__int64 *)(v21 + 20);
                    TracingCookie = 104;
                    v99 = v23;
                    v101 = 8LL;
                    v102 = (__int64 *)v21;
                    v103 = v23;
                    *(_QWORD *)&v104.Size = v23;
                    *(_QWORD *)&v105.Size = v23;
                    *(_QWORD *)&v106.Size = v23;
                    *(_QWORD *)&v107.Size = v23;
                    v109 = v23;
                    v25 = CBaseExpression::GetDebugInfo(v24);
                    TlgCreateWsz(&v110, v25);
                    v27 = *(_QWORD *)(v26 + 152);
                    v111 = &v91;
                    v91 = v27;
                    v112 = 8LL;
                    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6F86, v28, v29, 0xDu, &pData);
                  }
                }
              }
              else
              {
                v94 = *((_OWORD *)this + 4);
                if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
                {
                  v89 = CBaseExpression::GetTracingCookie(v30);
                  v97 = v31;
                  p_TracingCookie = &v89;
                  v98 = &TracingCookie;
                  v100 = &v93;
                  v102 = (__int64 *)&v94;
                  v104.Ptr = (ULONGLONG)&v94 + 4;
                  v105.Ptr = (ULONGLONG)&v94 + 8;
                  v106.Ptr = (ULONGLONG)&v94 + 12;
                  TracingCookie = 71;
                  v99 = v31;
                  v101 = 8LL;
                  v103 = v31;
                  *(_QWORD *)&v104.Size = v31;
                  *(_QWORD *)&v105.Size = v31;
                  *(_QWORD *)&v106.Size = v31;
                  v33 = CBaseExpression::GetDebugInfo(v32);
                  TlgCreateWsz(&v107, v33);
                  v35 = *(_QWORD *)(v34 + 152);
                  v108 = &v91;
                  v91 = v35;
                  v109 = 8LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6F1D, v36, v37, 0xBu, &pData);
                }
              }
            }
            else
            {
              v94 = *((_OWORD *)this + 4);
              if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
              {
                v89 = CBaseExpression::GetTracingCookie(v38);
                v97 = v39;
                p_TracingCookie = &v89;
                v98 = &TracingCookie;
                v100 = &v93;
                v102 = (__int64 *)&v94;
                v104.Ptr = (ULONGLONG)&v94 + 4;
                v105.Ptr = (ULONGLONG)&v94 + 8;
                v106.Ptr = (ULONGLONG)&v94 + 12;
                TracingCookie = 70;
                v99 = v39;
                v101 = 8LL;
                v103 = v39;
                *(_QWORD *)&v104.Size = v39;
                *(_QWORD *)&v105.Size = v39;
                *(_QWORD *)&v106.Size = v39;
                v41 = CBaseExpression::GetDebugInfo(v40);
                TlgCreateWsz(&v107, v41);
                v43 = *(_QWORD *)(v42 + 152);
                v108 = &v91;
                v91 = v43;
                v109 = 8LL;
                TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7001, v44, v45, 0xBu, &pData);
              }
            }
          }
          else
          {
            v94 = *((_OWORD *)this + 4);
            if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
            {
              v89 = CBaseExpression::GetTracingCookie(v46);
              v97 = v47;
              p_TracingCookie = &v89;
              v98 = &TracingCookie;
              v100 = &v93;
              v102 = (__int64 *)&v94;
              v104.Ptr = (ULONGLONG)&v94 + 4;
              v105.Ptr = (ULONGLONG)&v94 + 8;
              v106.Ptr = (ULONGLONG)&v94 + 12;
              TracingCookie = 69;
              v99 = v47;
              v101 = 8LL;
              v103 = v47;
              *(_QWORD *)&v104.Size = v47;
              *(_QWORD *)&v105.Size = v47;
              *(_QWORD *)&v106.Size = v47;
              v49 = CBaseExpression::GetDebugInfo(v48);
              TlgCreateWsz(&v107, v49);
              v51 = *(_QWORD *)(v50 + 152);
              v108 = &v91;
              v91 = v51;
              v109 = 8LL;
              TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6F1D, v52, v53, 0xBu, &pData);
            }
          }
        }
        else
        {
          v54 = *((_DWORD *)this + 18);
          *(_QWORD *)&v94 = *((_QWORD *)this + 8);
          DWORD2(v94) = v54;
          if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
          {
            v89 = CBaseExpression::GetTracingCookie(v55);
            v97 = v56;
            p_TracingCookie = &v89;
            v98 = &TracingCookie;
            v100 = &v93;
            v102 = (__int64 *)&v94;
            v104.Ptr = (ULONGLONG)&v94 + 4;
            v105.Ptr = (ULONGLONG)&v94 + 8;
            TracingCookie = 52;
            v99 = v56;
            v101 = 8LL;
            v103 = v56;
            *(_QWORD *)&v104.Size = v56;
            *(_QWORD *)&v105.Size = v56;
            v58 = CBaseExpression::GetDebugInfo(v57);
            TlgCreateWsz(&v106, v58);
            v60 = *(_QWORD *)(v59 + 152);
            v107.Ptr = (ULONGLONG)&v91;
            v91 = v60;
            *(_QWORD *)&v107.Size = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F70CD, v61, v62, 0xAu, &pData);
          }
        }
      }
      else
      {
        v91 = *((_QWORD *)this + 8);
        if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
        {
          v89 = CBaseExpression::GetTracingCookie(v63);
          v97 = v64;
          p_TracingCookie = &v89;
          v98 = &TracingCookie;
          v100 = &v93;
          v102 = &v91;
          v104.Ptr = (ULONGLONG)&v91 + 4;
          TracingCookie = 35;
          v99 = v64;
          v101 = 8LL;
          v103 = v64;
          *(_QWORD *)&v104.Size = v64;
          v66 = CBaseExpression::GetDebugInfo(v65);
          TlgCreateWsz(&v105, v66);
          v68 = *(_QWORD *)(v67 + 152);
          v106.Ptr = (ULONGLONG)&v94;
          *(_QWORD *)&v94 = v68;
          *(_QWORD *)&v106.Size = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F706A, v69, v70, 9u, &pData);
        }
      }
    }
    else
    {
      LODWORD(v91) = *((_DWORD *)this + 16);
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v89 = CBaseExpression::GetTracingCookie(v71);
        cData = (unsigned int)(v72 + 4);
        v97 = v72;
        p_TracingCookie = &v89;
        TracingCookie = 18;
        v98 = &TracingCookie;
        v100 = &v93;
        v102 = &v91;
        v99 = v72;
        v101 = cData;
        v103 = v72;
        v75 = CBaseExpression::GetDebugInfo(v74);
        TlgCreateWsz(&v104, v75);
        v77 = *(_QWORD *)(v76 + 152);
        v105.Ptr = (ULONGLONG)&v94;
        *(_QWORD *)&v94 = v77;
        *(_QWORD *)&v105.Size = cData;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7133, v78, v79, cData, &pData);
      }
    }
  }
  else
  {
    v92 = *((_BYTE *)this + 64);
    if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
    {
      LODWORD(v91) = CBaseExpression::GetTracingCookie(v80);
      v89 = 17;
      p_TracingCookie = (int *)&v91;
      v82 = (unsigned int)(v81 + 4);
      v97 = v81;
      v98 = &v89;
      v100 = &v93;
      v102 = (__int64 *)&v92;
      v99 = v81;
      v101 = v82;
      v103 = 1LL;
      v84 = CBaseExpression::GetDebugInfo(v83);
      TlgCreateWsz(&v104, v84);
      v86 = *(_QWORD *)(v85 + 152);
      v105.Ptr = (ULONGLONG)&v94;
      *(_QWORD *)&v94 = v86;
      *(_QWORD *)&v105.Size = v82;
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F718F, v87, v88, v82, &pData);
    }
  }
}
