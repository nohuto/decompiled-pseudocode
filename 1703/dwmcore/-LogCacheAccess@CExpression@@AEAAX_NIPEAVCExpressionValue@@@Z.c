/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180169F04
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18016A9B4 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18002EC04 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180169490 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, __int64 a2, int a3, struct CExpressionValue *a4)
{
  __int64 v6; // r11
  const WCHAR *v7; // rax
  __int64 v8; // rdx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  __int64 v11; // r11
  const WCHAR *v12; // rax
  __int64 v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // r11
  const WCHAR *v17; // rax
  __int64 v18; // rcx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  __int64 v21; // r11
  const WCHAR *v22; // rax
  __int64 v23; // rcx
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  __int64 v26; // r11
  const WCHAR *v27; // rax
  __int64 v28; // rcx
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  int v31; // eax
  __int64 v32; // r11
  const WCHAR *v33; // rax
  __int64 v34; // rcx
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  __int64 v37; // r11
  const WCHAR *v38; // rax
  __int64 v39; // rcx
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  __int64 v42; // r11
  const WCHAR *v43; // rax
  __int64 v44; // rcx
  LPCGUID v45; // r8
  LPCGUID v46; // r9
  __int64 v47; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v49; // rcx
  LPCGUID v50; // r8
  LPCGUID v51; // r9
  int v52; // [rsp+38h] [rbp-D0h] BYREF
  int TracingCookie; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v55; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *p_TracingCookie; // [rsp+78h] [rbp-90h]
  __int64 v58; // [rsp+80h] [rbp-88h]
  int *v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-78h]
  const char *v61; // [rsp+98h] [rbp-70h]
  __int64 v62; // [rsp+A0h] [rbp-68h]
  int *v63; // [rsp+A8h] [rbp-60h]
  __int64 v64; // [rsp+B0h] [rbp-58h]
  int *v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+F8h] [rbp-10h] BYREF
  char *v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+118h] [rbp+10h] BYREF
  char *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  char *v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+38h]
  char *v78; // [rsp+148h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+48h]
  char *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  char *v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  char *v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+78h]
  char *v86; // [rsp+188h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+88h]
  char *v88; // [rsp+198h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+98h]
  char *v90; // [rsp+1A8h] [rbp+A0h]
  __int64 v91; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v93; // [rsp+1C8h] [rbp+C0h]
  __int64 v94; // [rsp+1D0h] [rbp+C8h]
  int v95; // [rsp+218h] [rbp+110h] BYREF

  v95 = a3;
  switch ( *((_DWORD *)a4 + 16) )
  {
    case 0x11:
      *(float *)&v52 = (float)*(unsigned __int8 *)a4;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        LODWORD(v54) = CBaseExpression::GetTracingCookie(this);
        v58 = v47;
        p_TracingCookie = (int *)&v54;
        v59 = &v95;
        v61 = "Read";
        v63 = &TracingCookie;
        v65 = &v52;
        v60 = v47;
        v62 = 5LL;
        TracingCookie = 17;
        v64 = v47;
        v66 = v47;
        DebugInfo = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v67, DebugInfo);
        v49 = *((_QWORD *)this + 19);
        v68.Ptr = (ULONGLONG)&v55;
        *(_QWORD *)&v55 = v49;
        *(_QWORD *)&v68.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F750F, v50, v51, 9u, &pData);
      }
      break;
    case 0x12:
      LODWORD(v54) = *(_DWORD *)a4;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v42;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v65 = (int *)&v54;
        v60 = v42;
        v62 = 5LL;
        v52 = 18;
        v64 = v42;
        v66 = v42;
        v43 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v67, v43);
        v44 = *((_QWORD *)this + 19);
        v68.Ptr = (ULONGLONG)&v55;
        *(_QWORD *)&v55 = v44;
        *(_QWORD *)&v68.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F750F, v45, v46, 9u, &pData);
      }
      break;
    case 0x23:
      v54 = *(_QWORD *)a4;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v37;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v65 = (int *)&v54;
        v67.Ptr = (ULONGLONG)&v54 + 4;
        v60 = v37;
        v62 = 5LL;
        v52 = 35;
        v64 = v37;
        v66 = v37;
        *(_QWORD *)&v67.Size = v37;
        v38 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v68, v38);
        v39 = *((_QWORD *)this + 19);
        v69.Ptr = (ULONGLONG)&v55;
        *(_QWORD *)&v55 = v39;
        *(_QWORD *)&v69.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F749C, v40, v41, 0xAu, &pData);
      }
      break;
    case 0x34:
      v31 = *((_DWORD *)a4 + 2);
      *(_QWORD *)&v55 = *(_QWORD *)a4;
      DWORD2(v55) = v31;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v32;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v65 = (int *)&v55;
        v67.Ptr = (ULONGLONG)&v55 + 4;
        v68.Ptr = (ULONGLONG)&v55 + 8;
        v60 = v32;
        v62 = 5LL;
        v52 = 52;
        v64 = v32;
        v66 = v32;
        *(_QWORD *)&v67.Size = v32;
        *(_QWORD *)&v68.Size = v32;
        v33 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v69, v33);
        v34 = *((_QWORD *)this + 19);
        v70.Ptr = (ULONGLONG)&v54;
        v54 = v34;
        *(_QWORD *)&v70.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7426, v35, v36, 0xBu, &pData);
      }
      break;
    case 0x45:
      v55 = *(_OWORD *)a4;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v26;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v65 = (int *)&v55;
        v67.Ptr = (ULONGLONG)&v55 + 4;
        v68.Ptr = (ULONGLONG)&v55 + 8;
        v69.Ptr = (ULONGLONG)&v55 + 12;
        v60 = v26;
        v62 = 5LL;
        v52 = 69;
        v64 = v26;
        v66 = v26;
        *(_QWORD *)&v67.Size = v26;
        *(_QWORD *)&v68.Size = v26;
        *(_QWORD *)&v69.Size = v26;
        v27 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v70, v27);
        v28 = *((_QWORD *)this + 19);
        v71 = (char *)&v54;
        v54 = v28;
        v72 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F73AD, v29, v30, 0xCu, &pData);
      }
      break;
    case 0x46:
      v55 = *(_OWORD *)a4;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v21;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v65 = (int *)&v55;
        v67.Ptr = (ULONGLONG)&v55 + 4;
        v68.Ptr = (ULONGLONG)&v55 + 8;
        v69.Ptr = (ULONGLONG)&v55 + 12;
        v60 = v21;
        v62 = 5LL;
        v52 = 70;
        v64 = v21;
        v66 = v21;
        *(_QWORD *)&v67.Size = v21;
        *(_QWORD *)&v68.Size = v21;
        *(_QWORD *)&v69.Size = v21;
        v22 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v70, v22);
        v23 = *((_QWORD *)this + 19);
        v71 = (char *)&v54;
        v54 = v23;
        v72 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7334, v24, v25, 0xCu, &pData);
      }
      break;
    case 0x47:
      v55 = *(_OWORD *)a4;
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v16;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v65 = (int *)&v55;
        v67.Ptr = (ULONGLONG)&v55 + 4;
        v68.Ptr = (ULONGLONG)&v55 + 8;
        v69.Ptr = (ULONGLONG)&v55 + 12;
        v60 = v16;
        v62 = 5LL;
        v52 = 71;
        v64 = v16;
        v66 = v16;
        *(_QWORD *)&v67.Size = v16;
        *(_QWORD *)&v68.Size = v16;
        *(_QWORD *)&v69.Size = v16;
        v17 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v70, v17);
        v18 = *((_QWORD *)this + 19);
        v71 = (char *)&v54;
        v54 = v18;
        v72 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F73AD, v19, v20, 0xCu, &pData);
      }
      break;
    case 0x68:
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v58 = v11;
        p_TracingCookie = &TracingCookie;
        v59 = &v95;
        v61 = "Read";
        v63 = &v52;
        v67.Ptr = (ULONGLONG)a4 + 4;
        v68.Ptr = (ULONGLONG)a4 + 8;
        v69.Ptr = (ULONGLONG)a4 + 12;
        v70.Ptr = (ULONGLONG)a4 + 16;
        v71 = (char *)a4 + 20;
        v60 = v11;
        v62 = 5LL;
        v52 = 104;
        v64 = v11;
        v65 = (int *)a4;
        v66 = v11;
        *(_QWORD *)&v67.Size = v11;
        *(_QWORD *)&v68.Size = v11;
        *(_QWORD *)&v69.Size = v11;
        *(_QWORD *)&v70.Size = v11;
        v72 = v11;
        v12 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v73, v12);
        v13 = *((_QWORD *)this + 19);
        v74 = (char *)&v54;
        v54 = v13;
        v75 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F71EC, v14, v15, 0xEu, &pData);
      }
      break;
    default:
      if ( *((_DWORD *)a4 + 16) == 265 && dword_18023D7F0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
        {
          v52 = CBaseExpression::GetTracingCookie(this);
          v58 = v6;
          p_TracingCookie = &v52;
          v59 = &v95;
          v61 = "Read";
          v63 = &TracingCookie;
          v67.Ptr = (ULONGLONG)a4 + 4;
          v68.Ptr = (ULONGLONG)a4 + 8;
          v69.Ptr = (ULONGLONG)a4 + 12;
          v70.Ptr = (ULONGLONG)a4 + 16;
          v71 = (char *)a4 + 20;
          v73.Ptr = (ULONGLONG)a4 + 24;
          v74 = (char *)a4 + 28;
          v76 = (char *)a4 + 32;
          v78 = (char *)a4 + 36;
          v80 = (char *)a4 + 40;
          v82 = (char *)a4 + 44;
          v84 = (char *)a4 + 48;
          v86 = (char *)a4 + 52;
          v88 = (char *)a4 + 56;
          v90 = (char *)a4 + 60;
          v60 = v6;
          v62 = 5LL;
          TracingCookie = 265;
          v64 = v6;
          v65 = (int *)a4;
          v66 = v6;
          *(_QWORD *)&v67.Size = v6;
          *(_QWORD *)&v68.Size = v6;
          *(_QWORD *)&v69.Size = v6;
          *(_QWORD *)&v70.Size = v6;
          v72 = v6;
          *(_QWORD *)&v73.Size = v6;
          v75 = v6;
          v77 = v6;
          v79 = v6;
          v81 = v6;
          v83 = v6;
          v85 = v6;
          v87 = v6;
          v89 = v6;
          v91 = v6;
          v7 = CBaseExpression::GetDebugInfo(this);
          TlgCreateWsz(&pDesc, v7);
          v8 = *((_QWORD *)this + 19);
          v93 = &v54;
          v54 = v8;
          v94 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7277, v9, v10, 0x18u, &pData);
        }
      }
      break;
  }
}
