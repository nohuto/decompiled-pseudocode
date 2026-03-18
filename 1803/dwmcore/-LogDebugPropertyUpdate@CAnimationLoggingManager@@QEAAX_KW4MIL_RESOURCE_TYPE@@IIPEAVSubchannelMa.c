/*
 * XREFs of ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180180D24 (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x18017FD5C (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     _anonymous_namespace_::GetExpressionTypeString @ 0x18017FE54 (_anonymous_namespace_--GetExpressionTypeString.c)
 *     ?WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z @ 0x180208480 (-WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z.c)
 *     ?WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z @ 0x18020858C (-WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z.c)
 */

void __fastcall CAnimationLoggingManager::LogDebugPropertyUpdate(
        LPCWSTR *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5,
        VectorSubchannelMaskInfo *a6,
        unsigned int a7,
        LPCWSTR a8,
        unsigned __int8 *a9)
{
  VectorSubchannelMaskInfo *v9; // rsi
  unsigned int v10; // ebx
  const WCHAR *v12; // r15
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  const WCHAR *ExpressionTypeString; // rax
  const WCHAR *CommentForObject; // rax
  const WCHAR *v28; // rax
  const WCHAR *v29; // rax
  const WCHAR *v30; // rax
  const WCHAR *v31; // rax
  const WCHAR *v32; // rax
  const WCHAR *v33; // rax
  const WCHAR *v34; // rax
  const WCHAR *v35; // rax
  const WCHAR *v36; // rax
  const WCHAR *v37; // rax
  const WCHAR *v38; // rax
  const WCHAR *v39; // rax
  const WCHAR *v40; // rax
  const WCHAR *v41; // rax
  const WCHAR *v42; // rax
  const WCHAR *v43; // rax
  unsigned int v44; // [rsp+30h] [rbp-D0h] BYREF
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+E0h] [rbp-20h] BYREF
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  unsigned __int8 *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  unsigned __int8 *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  WCHAR pwsz[56]; // [rsp+1F0h] [rbp+F0h] BYREF
  const void *retaddr; // [rsp+2A8h] [rbp+1A8h]
  __int64 v93; // [rsp+2B8h] [rbp+1B8h] BYREF

  v93 = a2;
  v9 = a6;
  v10 = a7;
  v12 = a8;
  v13 = a3;
  v44 = a4;
  memset_0(pwsz, 0, 0x62uLL);
  if ( v9 )
  {
    v16 = *(_DWORD *)v9;
    pwsz[0] = 0;
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
        MatrixSubchannelMaskInfo::WriteSubchannelString(v9, v10, v15, pwsz);
    }
    else
    {
      VectorSubchannelMaskInfo::WriteSubchannelString(v9, v14, pwsz);
    }
  }
  v18 = v10 - 17;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 17;
      if ( v20 )
      {
        v21 = v20 - 17;
        if ( v21 )
        {
          v22 = v21 - 17;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 33;
                if ( v25 )
                {
                  if ( v25 != 161 )
                    ModuleFailFastForHRESULT(-2147024809, retaddr);
                  if ( dword_1802D3FE0 > 5u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                    {
                      v48 = 8LL;
                      v47 = &v93;
                      TlgCreateWsz(&pDesc, off_18022EE70[v13]);
                      v51 = 4LL;
                      v50 = &v44;
                      v52 = &a5;
                      v53 = 4LL;
                      TlgCreateWsz(&v54, pwsz);
                      ExpressionTypeString = anonymous_namespace_::GetExpressionTypeString(265);
                      TlgCreateWsz(&v55, ExpressionTypeString);
                      TlgCreateWsz(&v56, v12);
                      TlgCreateWsz(&v57, a1[19]);
                      CommentForObject = CAnimationLoggingManager::GetCommentForObject(
                                           (CAnimationLoggingManager *)a1,
                                           v44);
                      TlgCreateWsz(&v58, CommentForObject);
                      v59 = (int *)a9;
                      v60 = 4LL;
                      v62 = 4LL;
                      v64 = 4LL;
                      v61 = a9 + 4;
                      v63 = a9 + 8;
                      v65 = a9 + 12;
                      v67 = a9 + 16;
                      v69 = a9 + 20;
                      v71 = a9 + 24;
                      v73 = a9 + 28;
                      v75 = a9 + 32;
                      v77 = a9 + 36;
                      v79 = a9 + 40;
                      v81 = a9 + 44;
                      v83 = a9 + 48;
                      v85 = a9 + 52;
                      v87 = a9 + 56;
                      v89 = a9 + 60;
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
                      v88 = 4LL;
                      v90 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A73D9, 0LL, 0LL, 0x1Bu, &pData);
                    }
                  }
                }
                else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
                {
                  v48 = 8LL;
                  v47 = &v93;
                  TlgCreateWsz(&pDesc, off_18022EE70[v13]);
                  v51 = 4LL;
                  v50 = &v44;
                  v52 = &a5;
                  v53 = 4LL;
                  TlgCreateWsz(&v54, pwsz);
                  v28 = anonymous_namespace_::GetExpressionTypeString(104);
                  TlgCreateWsz(&v55, v28);
                  TlgCreateWsz(&v56, v12);
                  TlgCreateWsz(&v57, a1[19]);
                  v29 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
                  TlgCreateWsz(&v58, v29);
                  v59 = (int *)a9;
                  v60 = 4LL;
                  v62 = 4LL;
                  v64 = 4LL;
                  v61 = a9 + 4;
                  v63 = a9 + 8;
                  v65 = a9 + 12;
                  v67 = a9 + 16;
                  v69 = a9 + 20;
                  v66 = 4LL;
                  v68 = 4LL;
                  v70 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7632, 0LL, 0LL, 0x11u, &pData);
                }
              }
              else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
              {
                v48 = 8LL;
                v47 = &v93;
                TlgCreateWsz(&pDesc, off_18022EE70[v13]);
                v51 = 4LL;
                v50 = &v44;
                v52 = &a5;
                v53 = 4LL;
                TlgCreateWsz(&v54, pwsz);
                v30 = anonymous_namespace_::GetExpressionTypeString(71);
                TlgCreateWsz(&v55, v30);
                TlgCreateWsz(&v56, v12);
                TlgCreateWsz(&v57, a1[19]);
                v31 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
                TlgCreateWsz(&v58, v31);
                v59 = (int *)a9;
                v60 = 4LL;
                v62 = 4LL;
                v64 = 4LL;
                v61 = a9 + 4;
                v63 = a9 + 8;
                v65 = a9 + 12;
                v66 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A756E, 0LL, 0LL, 0xFu, &pData);
              }
            }
            else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
            {
              v48 = 8LL;
              v47 = &v93;
              TlgCreateWsz(&pDesc, off_18022EE70[v13]);
              v51 = 4LL;
              v50 = &v44;
              v52 = &a5;
              v53 = 4LL;
              TlgCreateWsz(&v54, pwsz);
              v32 = anonymous_namespace_::GetExpressionTypeString(70);
              TlgCreateWsz(&v55, v32);
              TlgCreateWsz(&v56, v12);
              TlgCreateWsz(&v57, a1[19]);
              v33 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
              TlgCreateWsz(&v58, v33);
              v59 = (int *)a9;
              v60 = 4LL;
              v62 = 4LL;
              v64 = 4LL;
              v61 = a9 + 4;
              v63 = a9 + 8;
              v65 = a9 + 12;
              v66 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7708, 0LL, 0LL, 0xFu, &pData);
            }
          }
          else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
          {
            v48 = 8LL;
            v47 = &v93;
            TlgCreateWsz(&pDesc, off_18022EE70[v13]);
            v51 = 4LL;
            v50 = &v44;
            v52 = &a5;
            v53 = 4LL;
            TlgCreateWsz(&v54, pwsz);
            v34 = anonymous_namespace_::GetExpressionTypeString(69);
            TlgCreateWsz(&v55, v34);
            TlgCreateWsz(&v56, v12);
            TlgCreateWsz(&v57, a1[19]);
            v35 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
            TlgCreateWsz(&v58, v35);
            v59 = (int *)a9;
            v60 = 4LL;
            v62 = 4LL;
            v64 = 4LL;
            v61 = a9 + 4;
            v63 = a9 + 8;
            v65 = a9 + 12;
            v66 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A756E, 0LL, 0LL, 0xFu, &pData);
          }
        }
        else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
        {
          v48 = 8LL;
          v47 = &v93;
          TlgCreateWsz(&pDesc, off_18022EE70[v13]);
          v51 = 4LL;
          v50 = &v44;
          v52 = &a5;
          v53 = 4LL;
          TlgCreateWsz(&v54, pwsz);
          v36 = anonymous_namespace_::GetExpressionTypeString(52);
          TlgCreateWsz(&v55, v36);
          TlgCreateWsz(&v56, v12);
          TlgCreateWsz(&v57, a1[19]);
          v37 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
          TlgCreateWsz(&v58, v37);
          v59 = (int *)a9;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v61 = a9 + 4;
          v63 = a9 + 8;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A788A, 0LL, 0LL, 0xEu, &pData);
        }
      }
      else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        v48 = 8LL;
        v47 = &v93;
        TlgCreateWsz(&pDesc, off_18022EE70[v13]);
        v51 = 4LL;
        v50 = &v44;
        v52 = &a5;
        v53 = 4LL;
        TlgCreateWsz(&v54, pwsz);
        v38 = anonymous_namespace_::GetExpressionTypeString(35);
        TlgCreateWsz(&v55, v38);
        TlgCreateWsz(&v56, v12);
        TlgCreateWsz(&v57, a1[19]);
        v39 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
        TlgCreateWsz(&v58, v39);
        v59 = (int *)a9;
        v61 = a9 + 4;
        v60 = 4LL;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A77CC, 0LL, 0LL, 0xDu, &pData);
      }
    }
    else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      v48 = 8LL;
      v47 = &v93;
      TlgCreateWsz(&pDesc, off_18022EE70[v13]);
      v51 = 4LL;
      v50 = &v44;
      v52 = &a5;
      v53 = 4LL;
      TlgCreateWsz(&v54, pwsz);
      v40 = anonymous_namespace_::GetExpressionTypeString(18);
      TlgCreateWsz(&v55, v40);
      TlgCreateWsz(&v56, v12);
      TlgCreateWsz(&v57, a1[19]);
      v41 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
      TlgCreateWsz(&v58, v41);
      v59 = (int *)a9;
      v60 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7A02, 0LL, 0LL, 0xCu, &pData);
    }
  }
  else if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
  {
    v48 = 8LL;
    v47 = &v93;
    TlgCreateWsz(&pDesc, off_18022EE70[v13]);
    v51 = 4LL;
    v52 = &a5;
    v50 = &v44;
    v53 = 4LL;
    TlgCreateWsz(&v54, pwsz);
    v42 = anonymous_namespace_::GetExpressionTypeString(17);
    TlgCreateWsz(&v55, v42);
    TlgCreateWsz(&v56, v12);
    TlgCreateWsz(&v57, a1[19]);
    v43 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v44);
    TlgCreateWsz(&v58, v43);
    v60 = 4LL;
    v45 = *a9;
    v59 = &v45;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A794B, 0LL, 0LL, 0xCu, &pData);
  }
}
