/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180161C34
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180162748 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180001F50 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180158420 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, __int64 a2, int a3, struct CExpressionValue *a4)
{
  __int64 v6; // r11
  __int64 v7; // r11
  const WCHAR *v8; // rax
  __int64 v9; // rdx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int64 v12; // r11
  __int64 v13; // r11
  const WCHAR *v14; // rax
  __int64 v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  __int64 v18; // r11
  __int64 v19; // r11
  const WCHAR *v20; // rax
  __int64 v21; // rcx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  __int64 v24; // r11
  __int64 v25; // r11
  const WCHAR *v26; // rax
  __int64 v27; // rcx
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  __int64 v30; // r11
  __int64 v31; // r11
  const WCHAR *v32; // rax
  __int64 v33; // rcx
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  int v36; // eax
  __int64 v37; // r11
  __int64 v38; // r11
  const WCHAR *v39; // rax
  __int64 v40; // rcx
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  __int64 v43; // r11
  __int64 v44; // r11
  const WCHAR *v45; // rax
  __int64 v46; // rcx
  LPCGUID v47; // r8
  LPCGUID v48; // r9
  __int64 v49; // r11
  __int64 v50; // r11
  const WCHAR *v51; // rax
  __int64 v52; // rcx
  LPCGUID v53; // r8
  LPCGUID v54; // r9
  __int64 v55; // r11
  __int64 v56; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v58; // rcx
  LPCGUID v59; // r8
  LPCGUID v60; // r9
  int v61; // [rsp+38h] [rbp-D0h] BYREF
  int TracingCookie; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v63; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *p_TracingCookie; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  int *v68; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v71; // [rsp+A8h] [rbp-60h]
  __int64 v72; // [rsp+B0h] [rbp-58h]
  int *v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+F8h] [rbp-10h] BYREF
  char *v79; // [rsp+108h] [rbp+0h]
  __int64 v80; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+118h] [rbp+10h] BYREF
  char *v82; // [rsp+128h] [rbp+20h]
  __int64 v83; // [rsp+130h] [rbp+28h]
  char *v84; // [rsp+138h] [rbp+30h]
  __int64 v85; // [rsp+140h] [rbp+38h]
  char *v86; // [rsp+148h] [rbp+40h]
  __int64 v87; // [rsp+150h] [rbp+48h]
  char *v88; // [rsp+158h] [rbp+50h]
  __int64 v89; // [rsp+160h] [rbp+58h]
  char *v90; // [rsp+168h] [rbp+60h]
  __int64 v91; // [rsp+170h] [rbp+68h]
  char *v92; // [rsp+178h] [rbp+70h]
  __int64 v93; // [rsp+180h] [rbp+78h]
  char *v94; // [rsp+188h] [rbp+80h]
  __int64 v95; // [rsp+190h] [rbp+88h]
  char *v96; // [rsp+198h] [rbp+90h]
  __int64 v97; // [rsp+1A0h] [rbp+98h]
  char *v98; // [rsp+1A8h] [rbp+A0h]
  __int64 v99; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  int v103; // [rsp+208h] [rbp+100h] BYREF

  v103 = a3;
  switch ( *((_DWORD *)a4 + 16) )
  {
    case 0x11:
      *(float *)&v61 = (float)*(unsigned __int8 *)a4;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        LODWORD(v63) = CBaseExpression::GetTracingCookie(this);
        v67 = v55;
        p_TracingCookie = (int *)&v63;
        v69 = v55;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        TracingCookie = 17;
        v71 = &TracingCookie;
        v72 = v56;
        v73 = &v61;
        v74 = v56;
        DebugInfo = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v75, DebugInfo);
        v58 = *((_QWORD *)this + 19);
        v76.Ptr = (ULONGLONG)&v64;
        *(_QWORD *)&v64 = v58;
        *(_QWORD *)&v76.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213769, v59, v60, 9u, &pData);
      }
      break;
    case 0x12:
      LODWORD(v63) = *(_DWORD *)a4;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v49;
        p_TracingCookie = &TracingCookie;
        v69 = v49;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 18;
        v71 = &v61;
        v72 = v50;
        v73 = (int *)&v63;
        v74 = v50;
        v51 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v75, v51);
        v52 = *((_QWORD *)this + 19);
        v76.Ptr = (ULONGLONG)&v64;
        *(_QWORD *)&v64 = v52;
        *(_QWORD *)&v76.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213769, v53, v54, 9u, &pData);
      }
      break;
    case 0x23:
      v63 = *(_QWORD *)a4;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v43;
        p_TracingCookie = &TracingCookie;
        v69 = v43;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 35;
        v71 = &v61;
        v72 = v44;
        v73 = (int *)&v63;
        v75.Ptr = (ULONGLONG)&v63 + 4;
        v74 = v44;
        *(_QWORD *)&v75.Size = v44;
        v45 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v76, v45);
        v46 = *((_QWORD *)this + 19);
        v77.Ptr = (ULONGLONG)&v64;
        *(_QWORD *)&v64 = v46;
        *(_QWORD *)&v77.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021369B, v47, v48, 0xAu, &pData);
      }
      break;
    case 0x34:
      v36 = *((_DWORD *)a4 + 2);
      *(_QWORD *)&v64 = *(_QWORD *)a4;
      DWORD2(v64) = v36;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v37;
        p_TracingCookie = &TracingCookie;
        v69 = v37;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 52;
        v71 = &v61;
        v72 = v38;
        v73 = (int *)&v64;
        v75.Ptr = (ULONGLONG)&v64 + 4;
        v76.Ptr = (ULONGLONG)&v64 + 8;
        v74 = v38;
        *(_QWORD *)&v75.Size = v38;
        *(_QWORD *)&v76.Size = v38;
        v39 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v77, v39);
        v40 = *((_QWORD *)this + 19);
        v78.Ptr = (ULONGLONG)&v63;
        v63 = v40;
        *(_QWORD *)&v78.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213625, v41, v42, 0xBu, &pData);
      }
      break;
    case 0x45:
      v64 = *(_OWORD *)a4;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v30;
        p_TracingCookie = &TracingCookie;
        v69 = v30;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 69;
        v71 = &v61;
        v72 = v31;
        v73 = (int *)&v64;
        v75.Ptr = (ULONGLONG)&v64 + 4;
        v76.Ptr = (ULONGLONG)&v64 + 8;
        v77.Ptr = (ULONGLONG)&v64 + 12;
        v74 = v31;
        *(_QWORD *)&v75.Size = v31;
        *(_QWORD *)&v76.Size = v31;
        *(_QWORD *)&v77.Size = v31;
        v32 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v78, v32);
        v33 = *((_QWORD *)this + 19);
        v79 = (char *)&v63;
        v63 = v33;
        v80 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802135AC, v34, v35, 0xCu, &pData);
      }
      break;
    case 0x46:
      v64 = *(_OWORD *)a4;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v24;
        p_TracingCookie = &TracingCookie;
        v69 = v24;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 70;
        v71 = &v61;
        v72 = v25;
        v73 = (int *)&v64;
        v75.Ptr = (ULONGLONG)&v64 + 4;
        v76.Ptr = (ULONGLONG)&v64 + 8;
        v77.Ptr = (ULONGLONG)&v64 + 12;
        v74 = v25;
        *(_QWORD *)&v75.Size = v25;
        *(_QWORD *)&v76.Size = v25;
        *(_QWORD *)&v77.Size = v25;
        v26 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v78, v26);
        v27 = *((_QWORD *)this + 19);
        v79 = (char *)&v63;
        v63 = v27;
        v80 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213533, v28, v29, 0xCu, &pData);
      }
      break;
    case 0x47:
      v64 = *(_OWORD *)a4;
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v18;
        p_TracingCookie = &TracingCookie;
        v69 = v18;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 71;
        v71 = &v61;
        v72 = v19;
        v73 = (int *)&v64;
        v75.Ptr = (ULONGLONG)&v64 + 4;
        v76.Ptr = (ULONGLONG)&v64 + 8;
        v77.Ptr = (ULONGLONG)&v64 + 12;
        v74 = v19;
        *(_QWORD *)&v75.Size = v19;
        *(_QWORD *)&v76.Size = v19;
        *(_QWORD *)&v77.Size = v19;
        v20 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v78, v20);
        v21 = *((_QWORD *)this + 19);
        v79 = (char *)&v63;
        v63 = v21;
        v80 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802135AC, v22, v23, 0xCu, &pData);
      }
      break;
    case 0x68:
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v67 = v12;
        p_TracingCookie = &TracingCookie;
        v69 = v12;
        v68 = &v103;
        TlgCreateSz(&pDesc, "Read");
        v61 = 104;
        v71 = &v61;
        v72 = v13;
        v75.Ptr = (ULONGLONG)a4 + 4;
        v76.Ptr = (ULONGLONG)a4 + 8;
        v77.Ptr = (ULONGLONG)a4 + 12;
        v78.Ptr = (ULONGLONG)a4 + 16;
        v79 = (char *)a4 + 20;
        v73 = (int *)a4;
        v74 = v13;
        *(_QWORD *)&v75.Size = v13;
        *(_QWORD *)&v76.Size = v13;
        *(_QWORD *)&v77.Size = v13;
        *(_QWORD *)&v78.Size = v13;
        v80 = v13;
        v14 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v81, v14);
        v15 = *((_QWORD *)this + 19);
        v82 = (char *)&v63;
        v63 = v15;
        v83 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802133EB, v16, v17, 0xEu, &pData);
      }
      break;
    default:
      if ( *((_DWORD *)a4 + 16) == 265 && dword_18026D7B0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
        {
          v61 = CBaseExpression::GetTracingCookie(this);
          v67 = v6;
          p_TracingCookie = &v61;
          v69 = v6;
          v68 = &v103;
          TlgCreateSz(&pDesc, "Read");
          TracingCookie = 265;
          v71 = &TracingCookie;
          v72 = v7;
          v75.Ptr = (ULONGLONG)a4 + 4;
          v76.Ptr = (ULONGLONG)a4 + 8;
          v77.Ptr = (ULONGLONG)a4 + 12;
          v78.Ptr = (ULONGLONG)a4 + 16;
          v79 = (char *)a4 + 20;
          v81.Ptr = (ULONGLONG)a4 + 24;
          v82 = (char *)a4 + 28;
          v84 = (char *)a4 + 32;
          v86 = (char *)a4 + 36;
          v88 = (char *)a4 + 40;
          v90 = (char *)a4 + 44;
          v92 = (char *)a4 + 48;
          v94 = (char *)a4 + 52;
          v96 = (char *)a4 + 56;
          v98 = (char *)a4 + 60;
          v73 = (int *)a4;
          v74 = v7;
          *(_QWORD *)&v75.Size = v7;
          *(_QWORD *)&v76.Size = v7;
          *(_QWORD *)&v77.Size = v7;
          *(_QWORD *)&v78.Size = v7;
          v80 = v7;
          *(_QWORD *)&v81.Size = v7;
          v83 = v7;
          v85 = v7;
          v87 = v7;
          v89 = v7;
          v91 = v7;
          v93 = v7;
          v95 = v7;
          v97 = v7;
          v99 = v7;
          v8 = CBaseExpression::GetDebugInfo(this);
          TlgCreateWsz(&v100, v8);
          v9 = *((_QWORD *)this + 19);
          v101 = &v63;
          v63 = v9;
          v102 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213476, v10, v11, 0x18u, &pData);
        }
      }
      break;
  }
}
