/*
 * XREFs of ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031294
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CPropertyBagBase::LogValueUpdate(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *a5)
{
  unsigned int v5; // ebx
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v18; // r10d
  int v19; // r11d
  const GUID *v20; // r8
  const GUID *v21; // r9
  int v22; // r10d
  int v23; // r11d
  const GUID *v24; // r8
  const GUID *v25; // r9
  int v26; // r10d
  int v27; // r11d
  const GUID *v28; // r8
  const GUID *v29; // r9
  int v30; // r10d
  int v31; // r11d
  const GUID *v32; // r8
  const GUID *v33; // r9
  int v34; // r10d
  int v35; // r11d
  const GUID *v36; // r8
  const GUID *v37; // r9
  int v38; // r10d
  int v39; // r11d
  const GUID *v40; // r8
  const GUID *v41; // r9
  int v42; // r10d
  int v43; // r11d
  const GUID *v44; // r8
  const GUID *v45; // r9
  int v46; // r10d
  int v47; // r11d
  const GUID *v48; // r8
  const GUID *v49; // r9
  int v50; // r10d
  int v51; // r11d
  int v52; // ecx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h] BYREF
  int v57; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v58[4]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  int *v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  int *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  int *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  int *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v94; // [rsp+180h] [rbp+80h]
  __int64 v95; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v96; // [rsp+190h] [rbp+90h]
  __int64 v97; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v98; // [rsp+1A0h] [rbp+A0h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]

  v5 = 0;
  if ( !*(_DWORD *)(a1 + 56) )
    return 0LL;
  if ( a2 < 2 )
  {
    v8 = a4 - 17;
    if ( !v8 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v58[0] = v51;
        v60 = v58;
        v62 = &v57;
        v64 = &v56;
        v66 = &v55;
        v61 = 4LL;
        v57 = v50;
        v63 = 4LL;
        v52 = *a5;
        v68 = &v54;
        v56 = 17;
        v65 = 4LL;
        v55 = a3;
        v67 = 4LL;
        v54 = v52;
        v69 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7AB4, v48, v49, 7u, &pData);
      }
      return v5;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v58[0] = *(_DWORD *)a5;
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v57 = v47;
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v68 = v58;
        v61 = 4LL;
        v56 = v46;
        v63 = 4LL;
        v55 = 18;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v69 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7B1B, v44, v45, 7u, &pData);
      }
      return v5;
    }
    v10 = v9 - 17;
    if ( !v10 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v57 = v43;
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v68 = (int *)a5;
        v70 = a5 + 4;
        v61 = 4LL;
        v56 = v42;
        v63 = 4LL;
        v55 = 35;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v69 = 4LL;
        v71 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F79D5, v40, v41, 8u, &pData);
      }
      return v5;
    }
    v11 = v10 - 17;
    if ( !v11 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v70 = a5 + 4;
        v72 = a5 + 8;
        v57 = v39;
        v61 = 4LL;
        v56 = v38;
        v63 = 4LL;
        v55 = 52;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v68 = (int *)a5;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7A43, v36, v37, 9u, &pData);
      }
      return v5;
    }
    v12 = v11 - 17;
    if ( !v12 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v70 = a5 + 4;
        v72 = a5 + 8;
        v74 = a5 + 12;
        v57 = v35;
        v61 = 4LL;
        v56 = v34;
        v63 = 4LL;
        v55 = 69;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v68 = (int *)a5;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7867, v32, v33, 0xAu, &pData);
      }
      return v5;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v70 = a5 + 4;
        v72 = a5 + 8;
        v74 = a5 + 12;
        v57 = v31;
        v61 = 4LL;
        v56 = v30;
        v63 = 4LL;
        v55 = 70;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v68 = (int *)a5;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7961, v28, v29, 0xAu, &pData);
      }
      return v5;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v70 = a5 + 4;
        v72 = a5 + 8;
        v74 = a5 + 12;
        v57 = v27;
        v61 = 4LL;
        v56 = v26;
        v63 = 4LL;
        v55 = 71;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v68 = (int *)a5;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7867, v24, v25, 0xAu, &pData);
      }
      return v5;
    }
    v15 = v14 - 33;
    if ( !v15 )
    {
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v60 = &v57;
        v62 = &v56;
        v64 = &v55;
        v66 = &v54;
        v70 = a5 + 4;
        v72 = a5 + 8;
        v74 = a5 + 12;
        v76 = a5 + 16;
        v78 = a5 + 20;
        v57 = v23;
        v61 = 4LL;
        v56 = v22;
        v63 = 4LL;
        v55 = 104;
        v65 = 4LL;
        v54 = a3;
        v67 = 4LL;
        v68 = (int *)a5;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F78DB, v20, v21, 0xCu, &pData);
      }
      return v5;
    }
    if ( v15 == 161 )
    {
      if ( dword_18023D7F0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
        {
          v60 = &v54;
          v62 = &v55;
          v64 = &v56;
          v66 = &v57;
          v70 = a5 + 4;
          v72 = a5 + 8;
          v74 = a5 + 12;
          v76 = a5 + 16;
          v78 = a5 + 20;
          v80 = a5 + 24;
          v82 = a5 + 28;
          v84 = a5 + 32;
          v86 = a5 + 36;
          v88 = a5 + 40;
          v90 = a5 + 44;
          v92 = a5 + 48;
          v94 = a5 + 52;
          v96 = a5 + 56;
          v98 = a5 + 60;
          v54 = v19;
          v61 = 4LL;
          v55 = v18;
          v63 = 4LL;
          v56 = 265;
          v65 = 4LL;
          v57 = a3;
          v67 = 4LL;
          v68 = (int *)a5;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          v93 = 4LL;
          v95 = 4LL;
          v97 = 4LL;
          v99 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F77AF, v16, v17, 0x16u, &pData);
        }
      }
      return v5;
    }
    cData = 602;
  }
  else
  {
    cData = 434;
  }
  v5 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, cData);
  return v5;
}
