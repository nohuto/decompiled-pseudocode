/*
 * XREFs of ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180038770
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x1800387CC (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180038858 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int v17; // r10d
  int v18; // r11d
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  int v22; // r9d
  int v23; // r10d
  int v24; // r11d
  int v25; // r9d
  int v26; // r10d
  int v27; // r11d
  int v28; // r9d
  int v29; // r10d
  int v30; // r11d
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  int v34; // r9d
  int v35; // r10d
  int v36; // r11d
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  int v40; // ecx
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  int *v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  int *v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  if ( *(_DWORD *)(a1 + 144) )
  {
    if ( a4 >= 2 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v5 = a3 - 17;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 17;
        if ( v7 )
        {
          v8 = v7 - 17;
          if ( v8 )
          {
            v9 = v8 - 17;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  v12 = v11 - 33;
                  if ( v12 )
                  {
                    if ( v12 != 161 )
                      ModuleFailFastForHRESULT(2147942487LL, retaddr);
                    if ( dword_1802D3FE0 > 5u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                      {
                        v47 = &v41;
                        v49 = &v42;
                        v51 = &v43;
                        v53 = &v44;
                        v57 = a5 + 4;
                        v59 = a5 + 8;
                        v61 = a5 + 12;
                        v63 = a5 + 16;
                        v65 = a5 + 20;
                        v67 = a5 + 24;
                        v69 = a5 + 28;
                        v71 = a5 + 32;
                        v73 = a5 + 36;
                        v75 = a5 + 40;
                        v77 = a5 + 44;
                        v79 = a5 + 48;
                        v81 = a5 + 52;
                        v83 = a5 + 56;
                        v85 = a5 + 60;
                        v41 = v14;
                        v48 = 4LL;
                        v42 = v13;
                        v50 = 4LL;
                        v43 = 265;
                        v52 = 4LL;
                        v44 = v15;
                        v54 = 4LL;
                        v55 = (int *)a5;
                        v56 = 4LL;
                        v58 = 4LL;
                        v60 = 4LL;
                        v62 = 4LL;
                        v64 = 4LL;
                        v66 = 4LL;
                        v68 = 4LL;
                        v70 = 4LL;
                        v72 = 4LL;
                        v74 = 4LL;
                        v76 = 4LL;
                        v78 = 4LL;
                        v80 = 4LL;
                        v82 = 4LL;
                        v84 = 4LL;
                        v86 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8F5D, 0LL, 0LL, 0x16u, &pData);
                      }
                    }
                  }
                  else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                  {
                    v47 = &v44;
                    v49 = &v43;
                    v51 = &v42;
                    v53 = &v41;
                    v57 = a5 + 4;
                    v59 = a5 + 8;
                    v61 = a5 + 12;
                    v63 = a5 + 16;
                    v65 = a5 + 20;
                    v44 = v17;
                    v48 = 4LL;
                    v43 = v16;
                    v50 = 4LL;
                    v42 = 104;
                    v52 = 4LL;
                    v41 = v18;
                    v54 = 4LL;
                    v55 = (int *)a5;
                    v56 = 4LL;
                    v58 = 4LL;
                    v60 = 4LL;
                    v62 = 4LL;
                    v64 = 4LL;
                    v66 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8ED7, 0LL, 0LL, 0xCu, &pData);
                  }
                }
                else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                {
                  v47 = &v44;
                  v49 = &v43;
                  v51 = &v42;
                  v53 = &v41;
                  v57 = a5 + 4;
                  v59 = a5 + 8;
                  v61 = a5 + 12;
                  v44 = v20;
                  v48 = 4LL;
                  v43 = v19;
                  v50 = 4LL;
                  v42 = 71;
                  v52 = 4LL;
                  v41 = v21;
                  v54 = 4LL;
                  v55 = (int *)a5;
                  v56 = 4LL;
                  v58 = 4LL;
                  v60 = 4LL;
                  v62 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8DFC, 0LL, 0LL, 0xAu, &pData);
                }
              }
              else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
              {
                v47 = &v44;
                v49 = &v43;
                v51 = &v42;
                v53 = &v41;
                v57 = a5 + 4;
                v59 = a5 + 8;
                v61 = a5 + 12;
                v44 = v23;
                v48 = 4LL;
                v43 = v22;
                v50 = 4LL;
                v42 = 70;
                v52 = 4LL;
                v41 = v24;
                v54 = 4LL;
                v55 = (int *)a5;
                v56 = 4LL;
                v58 = 4LL;
                v60 = 4LL;
                v62 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8D17, 0LL, 0LL, 0xAu, &pData);
              }
            }
            else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
            {
              v47 = &v44;
              v49 = &v43;
              v51 = &v42;
              v53 = &v41;
              v57 = a5 + 4;
              v59 = a5 + 8;
              v61 = a5 + 12;
              v44 = v26;
              v48 = 4LL;
              v43 = v25;
              v50 = 4LL;
              v42 = 69;
              v52 = 4LL;
              v41 = v27;
              v54 = 4LL;
              v55 = (int *)a5;
              v56 = 4LL;
              v58 = 4LL;
              v60 = 4LL;
              v62 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8DFC, 0LL, 0LL, 0xAu, &pData);
            }
          }
          else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
          {
            v47 = &v44;
            v49 = &v43;
            v51 = &v42;
            v53 = &v41;
            v57 = a5 + 4;
            v59 = a5 + 8;
            v44 = v29;
            v48 = 4LL;
            v43 = v28;
            v50 = 4LL;
            v42 = 52;
            v52 = 4LL;
            v41 = v30;
            v54 = 4LL;
            v55 = (int *)a5;
            v56 = 4LL;
            v58 = 4LL;
            v60 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8D8B, 0LL, 0LL, 9u, &pData);
          }
        }
        else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
        {
          v44 = v32;
          v47 = &v44;
          v49 = &v43;
          v51 = &v42;
          v53 = &v41;
          v55 = (int *)a5;
          v57 = a5 + 4;
          v48 = 4LL;
          v43 = v31;
          v50 = 4LL;
          v42 = 35;
          v52 = 4LL;
          v41 = v33;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A907C, 0LL, 0LL, 8u, &pData);
        }
      }
      else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        v44 = v35;
        v47 = &v44;
        v49 = &v43;
        v51 = &v42;
        v53 = &v41;
        v55 = (int *)a5;
        v48 = 4LL;
        v43 = v34;
        v50 = 4LL;
        v42 = 18;
        v52 = 4LL;
        v41 = v36;
        v54 = 4LL;
        v56 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A9015, 0LL, 0LL, 7u, &pData);
      }
    }
    else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      v44 = v38;
      v47 = &v44;
      v49 = &v43;
      v51 = &v42;
      v53 = &v41;
      v48 = 4LL;
      v43 = v37;
      v50 = 4LL;
      v40 = *a5;
      v55 = &v45;
      v42 = 17;
      v52 = 4LL;
      v41 = v39;
      v54 = 4LL;
      v45 = v40;
      v56 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8E70, 0LL, 0LL, 7u, &pData);
    }
  }
}
