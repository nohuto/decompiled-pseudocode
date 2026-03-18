/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18018BA80
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800535D8 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800D4258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, __int64 a2, int a3, struct CExpressionValue *a4)
{
  int v4; // edx
  struct CExpressionValue *v5; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // r11
  __int64 v12; // r11
  const WCHAR *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // r11
  const WCHAR *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r11
  const WCHAR *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // r11
  __int64 v27; // r11
  const WCHAR *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 v31; // r11
  __int64 v32; // r11
  const WCHAR *v33; // rax
  __int64 v34; // r11
  __int64 v35; // r11
  const WCHAR *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r11
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  __int64 v43; // r11
  __int64 v44; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v46; // rcx
  __int64 v47; // r11
  __int64 v48; // r11
  __int64 v49; // r11
  const WCHAR *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r11
  __int64 v53; // r11
  __int64 v54; // r11
  const WCHAR *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r11
  __int64 v58; // r11
  __int64 v59; // r11
  const WCHAR *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r11
  __int64 v63; // r11
  __int64 v64; // r11
  const WCHAR *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r11
  __int64 v68; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v73; // [rsp+78h] [rbp-90h]
  __int64 v74; // [rsp+80h] [rbp-88h]
  int *v75; // [rsp+88h] [rbp-80h]
  __int64 v76; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v78; // [rsp+A8h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v81; // [rsp+C8h] [rbp-40h]
  __int64 v82; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+D8h] [rbp-30h] BYREF
  char *v84; // [rsp+E8h] [rbp-20h]
  __int64 v85; // [rsp+F0h] [rbp-18h]
  char *v86; // [rsp+F8h] [rbp-10h]
  __int64 v87; // [rsp+100h] [rbp-8h]
  char *v88; // [rsp+108h] [rbp+0h]
  __int64 v89; // [rsp+110h] [rbp+8h]
  char *v90; // [rsp+118h] [rbp+10h]
  __int64 v91; // [rsp+120h] [rbp+18h]
  char *v92; // [rsp+128h] [rbp+20h]
  __int64 v93; // [rsp+130h] [rbp+28h]
  char *v94; // [rsp+138h] [rbp+30h]
  __int64 v95; // [rsp+140h] [rbp+38h]
  char *v96; // [rsp+148h] [rbp+40h]
  __int64 v97; // [rsp+150h] [rbp+48h]
  char *v98; // [rsp+158h] [rbp+50h]
  __int64 v99; // [rsp+160h] [rbp+58h]
  char *v100; // [rsp+168h] [rbp+60h]
  __int64 v101; // [rsp+170h] [rbp+68h]
  char *v102; // [rsp+178h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+78h]
  char *v104; // [rsp+188h] [rbp+80h]
  __int64 v105; // [rsp+190h] [rbp+88h]
  char *v106; // [rsp+198h] [rbp+90h]
  __int64 v107; // [rsp+1A0h] [rbp+98h]
  char *v108; // [rsp+1A8h] [rbp+A0h]
  __int64 v109; // [rsp+1B0h] [rbp+A8h]
  char *v110; // [rsp+1B8h] [rbp+B0h]
  __int64 v111; // [rsp+1C0h] [rbp+B8h]
  char *v112; // [rsp+1C8h] [rbp+C0h]
  __int64 v113; // [rsp+1D0h] [rbp+C8h]
  const void *retaddr; // [rsp+1F0h] [rbp+E8h]
  int v115; // [rsp+208h] [rbp+100h] BYREF

  v115 = a3;
  v4 = *((_DWORD *)a4 + 18);
  v5 = a4;
  if ( v4 == 11 )
    v5 = (struct CExpressionValue *)*((_QWORD *)a4 + 8);
  if ( v4 > 52 )
  {
    v39 = v4 - 69;
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 33;
          if ( v42 )
          {
            if ( v42 != 161 )
              goto LABEL_33;
            if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
            {
              LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
              v74 = v43;
              v73 = &v69;
              v76 = v43;
              v75 = &v115;
              TlgCreateSz(&pDesc, "Read");
              LODWORD(v68) = 265;
              v78 = &v68;
              v79 = v44;
              DebugInfo = CBaseExpression::GetDebugInfo(this);
              TlgCreateWsz(&v80, DebugInfo);
              v46 = *((_QWORD *)this + 20);
              v81 = &v71;
              v84 = (char *)v5 + 4;
              v86 = (char *)v5 + 8;
              v88 = (char *)v5 + 12;
              v90 = (char *)v5 + 16;
              v92 = (char *)v5 + 20;
              v94 = (char *)v5 + 24;
              v96 = (char *)v5 + 28;
              v98 = (char *)v5 + 32;
              v100 = (char *)v5 + 36;
              v102 = (char *)v5 + 40;
              v104 = (char *)v5 + 44;
              v106 = (char *)v5 + 48;
              v108 = (char *)v5 + 52;
              v110 = (char *)v5 + 56;
              v112 = (char *)v5 + 60;
              v71 = v46;
              v82 = 8LL;
              v83.Ptr = (ULONGLONG)v5;
              *(_QWORD *)&v83.Size = v47;
              v85 = v47;
              v87 = v47;
              v89 = v47;
              v91 = v47;
              v93 = v47;
              v95 = v47;
              v97 = v47;
              v99 = v47;
              v101 = v47;
              v103 = v47;
              v105 = v47;
              v107 = v47;
              v109 = v47;
              v111 = v47;
              v113 = v47;
              TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7EFC, 0LL, 0LL, 0x18u, &pData);
            }
          }
          else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
          {
            LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
            v74 = v48;
            v73 = &v69;
            v76 = v48;
            v75 = &v115;
            TlgCreateSz(&pDesc, "Read");
            LODWORD(v68) = 104;
            v78 = &v68;
            v79 = v49;
            v50 = CBaseExpression::GetDebugInfo(this);
            TlgCreateWsz(&v80, v50);
            v51 = *((_QWORD *)this + 20);
            v81 = &v71;
            v84 = (char *)v5 + 4;
            v86 = (char *)v5 + 8;
            v88 = (char *)v5 + 12;
            v90 = (char *)v5 + 16;
            v92 = (char *)v5 + 20;
            v71 = v51;
            v82 = 8LL;
            v83.Ptr = (ULONGLONG)v5;
            *(_QWORD *)&v83.Size = v52;
            v85 = v52;
            v87 = v52;
            v89 = v52;
            v91 = v52;
            v93 = v52;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8025, 0LL, 0LL, 0xEu, &pData);
          }
        }
        else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
        {
          LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
          v74 = v53;
          v73 = &v69;
          v76 = v53;
          v75 = &v115;
          TlgCreateSz(&pDesc, "Read");
          LODWORD(v68) = 71;
          v78 = &v68;
          v79 = v54;
          v55 = CBaseExpression::GetDebugInfo(this);
          TlgCreateWsz(&v80, v55);
          v56 = *((_QWORD *)this + 20);
          v81 = &v71;
          v84 = (char *)v5 + 4;
          v86 = (char *)v5 + 8;
          v88 = (char *)v5 + 12;
          v71 = v56;
          v82 = 8LL;
          v83.Ptr = (ULONGLONG)v5;
          *(_QWORD *)&v83.Size = v57;
          v85 = v57;
          v87 = v57;
          v89 = v57;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A80B0, 0LL, 0LL, 0xCu, &pData);
        }
      }
      else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
        v74 = v58;
        v73 = &v69;
        v76 = v58;
        v75 = &v115;
        TlgCreateSz(&pDesc, "Read");
        LODWORD(v68) = 70;
        v78 = &v68;
        v79 = v59;
        v60 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v80, v60);
        v61 = *((_QWORD *)this + 20);
        v81 = &v71;
        v84 = (char *)v5 + 4;
        v86 = (char *)v5 + 8;
        v88 = (char *)v5 + 12;
        v71 = v61;
        v82 = 8LL;
        v83.Ptr = (ULONGLONG)v5;
        *(_QWORD *)&v83.Size = v62;
        v85 = v62;
        v87 = v62;
        v89 = v62;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8129, 0LL, 0LL, 0xCu, &pData);
      }
    }
    else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
      v74 = v63;
      v73 = &v69;
      v76 = v63;
      v75 = &v115;
      TlgCreateSz(&pDesc, "Read");
      LODWORD(v68) = 69;
      v78 = &v68;
      v79 = v64;
      v65 = CBaseExpression::GetDebugInfo(this);
      TlgCreateWsz(&v80, v65);
      v66 = *((_QWORD *)this + 20);
      v81 = &v71;
      v84 = (char *)v5 + 4;
      v86 = (char *)v5 + 8;
      v88 = (char *)v5 + 12;
      v71 = v66;
      v82 = 8LL;
      v83.Ptr = (ULONGLONG)v5;
      *(_QWORD *)&v83.Size = v67;
      v85 = v67;
      v87 = v67;
      v89 = v67;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A80B0, 0LL, 0LL, 0xCu, &pData);
    }
  }
  else if ( v4 == 52 )
  {
    if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
      v74 = v34;
      v73 = &v69;
      v76 = v34;
      v75 = &v115;
      TlgCreateSz(&pDesc, "Read");
      LODWORD(v68) = 52;
      v78 = &v68;
      v79 = v35;
      v36 = CBaseExpression::GetDebugInfo(this);
      TlgCreateWsz(&v80, v36);
      v37 = *((_QWORD *)this + 20);
      v81 = &v71;
      v84 = (char *)v5 + 4;
      v86 = (char *)v5 + 8;
      v71 = v37;
      v82 = 8LL;
      v83.Ptr = (ULONGLONG)v5;
      *(_QWORD *)&v83.Size = v38;
      v85 = v38;
      v87 = v38;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8215, 0LL, 0LL, 0xBu, &pData);
    }
  }
  else
  {
    v7 = v4 - 11;
    if ( v7 )
    {
      v8 = v7 - 6;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 17;
          if ( v10 )
          {
            if ( v10 == 7 )
            {
              if ( dword_1802D3FE0 > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                {
                  LODWORD(v70) = CBaseExpression::GetTracingCookie(this);
                  v74 = v11;
                  v73 = &v70;
                  v76 = v11;
                  v75 = &v115;
                  TlgCreateSz(&pDesc, "Read");
                  LODWORD(v68) = 42;
                  v78 = &v68;
                  v79 = v12;
                  v13 = CBaseExpression::GetDebugInfo(this);
                  TlgCreateWsz(&v80, v13);
                  v14 = *((_QWORD *)this + 20);
                  v81 = &v69;
                  v69 = v14;
                  v82 = 8LL;
                  v83.Ptr = (ULONGLONG)v5;
                  *(_QWORD *)&v83.Size = v15;
                  TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7FB9, 0LL, 0LL, 9u, &pData);
                }
              }
              return;
            }
LABEL_33:
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          }
          if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
          {
            LODWORD(v68) = CBaseExpression::GetTracingCookie(this);
            v74 = v16;
            v73 = &v68;
            v76 = v16;
            v75 = &v115;
            TlgCreateSz(&pDesc, "Read");
            LODWORD(v70) = 35;
            v78 = &v70;
            v79 = v17;
            v18 = CBaseExpression::GetDebugInfo(this);
            TlgCreateWsz(&v80, v18);
            v19 = *((_QWORD *)this + 20);
            v81 = &v69;
            v84 = (char *)v5 + 4;
            v69 = v19;
            v82 = 8LL;
            v83.Ptr = (ULONGLONG)v5;
            *(_QWORD *)&v83.Size = v20;
            v85 = v20;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A81A2, 0LL, 0LL, 0xAu, &pData);
          }
        }
        else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
        {
          LODWORD(v68) = CBaseExpression::GetTracingCookie(this);
          v74 = v21;
          v73 = &v68;
          v76 = v21;
          v75 = &v115;
          TlgCreateSz(&pDesc, "Read");
          LODWORD(v70) = 18;
          v78 = &v70;
          v79 = v22;
          v23 = CBaseExpression::GetDebugInfo(this);
          TlgCreateWsz(&v80, v23);
          v24 = *((_QWORD *)this + 20);
          v81 = &v69;
          v69 = v24;
          v82 = 8LL;
          v83.Ptr = (ULONGLONG)v5;
          *(_QWORD *)&v83.Size = v25;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7FB9, 0LL, 0LL, 9u, &pData);
        }
      }
      else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        LODWORD(v68) = CBaseExpression::GetTracingCookie(this);
        v74 = v26;
        v73 = &v68;
        v76 = v26;
        v75 = &v115;
        TlgCreateSz(&pDesc, "Read");
        LODWORD(v70) = 17;
        v78 = &v70;
        v79 = v27;
        v28 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v80, v28);
        v29 = *((_QWORD *)this + 20);
        v81 = &v71;
        LODWORD(v69) = *(unsigned __int8 *)v5;
        v83.Ptr = (ULONGLONG)&v69;
        v71 = v29;
        v82 = 8LL;
        *(_QWORD *)&v83.Size = v30;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A828B, 0LL, 0LL, 9u, &pData);
      }
    }
    else if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      LODWORD(v69) = CBaseExpression::GetTracingCookie(this);
      v74 = v31;
      v73 = &v69;
      v76 = v31;
      v75 = &v115;
      TlgCreateSz(&pDesc, "Read");
      LODWORD(v68) = 11;
      v78 = &v68;
      v79 = v32;
      v33 = CBaseExpression::GetDebugInfo(this);
      TlgCreateWsz(&v80, v33);
      v71 = *((_QWORD *)this + 20);
      v81 = &v71;
      v82 = 8LL;
      TlgCreateWsz(&v83, L"PathData isn't logged");
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7E90, 0LL, 0LL, 9u, &pData);
    }
  }
}
