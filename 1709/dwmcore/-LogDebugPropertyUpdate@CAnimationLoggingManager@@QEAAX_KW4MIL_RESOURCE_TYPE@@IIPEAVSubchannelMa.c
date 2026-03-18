/*
 * XREFs of ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180157BCC (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18015E950 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x180156C24 (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?GetResourceTypeString@CAnimationLoggingManager@@AEAAPEBGW4MIL_RESOURCE_TYPE@@@Z @ 0x180156C78 (-GetResourceTypeString@CAnimationLoggingManager@@AEAAPEBGW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEAG@Z @ 0x1801CAE5C (-WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEAG@Z.c)
 *     ?WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEAG@Z @ 0x1801CAF34 (-WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEAG@Z.c)
 */

BOOLEAN __fastcall CAnimationLoggingManager::LogDebugPropertyUpdate(
        CAnimationLoggingManager *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5,
        int *a6,
        unsigned int a7,
        LPCWSTR a8,
        unsigned __int8 *a9)
{
  int *v9; // rdi
  const WCHAR *v10; // rsi
  const WCHAR *CommentForObject; // r14
  __int64 v13; // rcx
  const wchar_t *ResourceTypeString; // r15
  BOOLEAN result; // al
  __int64 v16; // rdx
  unsigned int v17; // ebx
  int v18; // r8d
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  LPCGUID v38; // r8
  LPCGUID v39; // r9
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  LPCGUID v42; // r8
  LPCGUID v43; // r9
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  unsigned int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  char *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+D0h] [rbp-30h] BYREF
  int *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  unsigned __int8 *v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 *v90; // [rsp+1D0h] [rbp+D0h]
  __int64 v91; // [rsp+1D8h] [rbp+D8h]
  WCHAR pwsz[48]; // [rsp+1E0h] [rbp+E0h] BYREF
  const void *retaddr; // [rsp+288h] [rbp+188h]
  __int64 v94; // [rsp+298h] [rbp+198h] BYREF

  v94 = a2;
  v9 = a6;
  v10 = a8;
  v46 = a4;
  CommentForObject = CAnimationLoggingManager::GetCommentForObject(a1, a4);
  ResourceTypeString = CAnimationLoggingManager::GetResourceTypeString(v13, a3);
  result = (unsigned __int8)memset_0(pwsz, 0, sizeof(pwsz));
  v17 = a7;
  if ( v9 )
  {
    v18 = *v9;
    pwsz[0] = 0;
    v19 = (unsigned int)(v18 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
        result = MatrixSubchannelMaskInfo::WriteSubchannelString(v9, a7, v19, pwsz);
    }
    else
    {
      result = VectorSubchannelMaskInfo::WriteSubchannelString(v9, v16, v19, pwsz);
    }
  }
  v20 = v17 - 17;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 17;
      if ( v22 )
      {
        v23 = v22 - 17;
        if ( v23 )
        {
          v24 = v23 - 17;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 33;
                if ( v27 )
                {
                  if ( v27 != 161 )
                    ModuleFailFastForHRESULT(-2147024809, retaddr);
                  if ( dword_18026D7B0 > 5u )
                  {
                    result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
                    if ( result )
                    {
                      v50 = 8LL;
                      v49 = &v94;
                      TlgCreateWsz(&pDesc, ResourceTypeString);
                      v53 = 4LL;
                      v52 = &v46;
                      v54 = &a5;
                      v55 = 4LL;
                      TlgCreateWsz(&v56, pwsz);
                      TlgCreateWsz(&v57, L"Matrix4x4");
                      TlgCreateWsz(&v58, v10);
                      TlgCreateWsz(&v59, CommentForObject);
                      v60 = (int *)a9;
                      v61 = 4LL;
                      v63 = 4LL;
                      v65 = 4LL;
                      v62 = a9 + 4;
                      v64 = a9 + 8;
                      v66 = a9 + 12;
                      v68 = a9 + 16;
                      v70 = a9 + 20;
                      v72 = a9 + 24;
                      v74 = a9 + 28;
                      v76 = a9 + 32;
                      v78 = a9 + 36;
                      v80 = a9 + 40;
                      v82 = a9 + 44;
                      v84 = a9 + 48;
                      v86 = a9 + 52;
                      v88 = a9 + 56;
                      v90 = a9 + 60;
                      v67 = 4LL;
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
                      return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212A3A, v28, v29, 0x1Au, &pData);
                    }
                  }
                }
                else if ( dword_18026D7B0 > 5u )
                {
                  result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
                  if ( result )
                  {
                    v50 = 8LL;
                    v49 = &v94;
                    TlgCreateWsz(&pDesc, ResourceTypeString);
                    v53 = 4LL;
                    v52 = &v46;
                    v54 = &a5;
                    v55 = 4LL;
                    TlgCreateWsz(&v56, pwsz);
                    TlgCreateWsz(&v57, L"Matrix3x2");
                    TlgCreateWsz(&v58, v10);
                    TlgCreateWsz(&v59, CommentForObject);
                    v60 = (int *)a9;
                    v61 = 4LL;
                    v63 = 4LL;
                    v65 = 4LL;
                    v62 = a9 + 4;
                    v64 = a9 + 8;
                    v66 = a9 + 12;
                    v68 = a9 + 16;
                    v70 = a9 + 20;
                    v67 = 4LL;
                    v69 = 4LL;
                    v71 = 4LL;
                    return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212BA9, v30, v31, 0x10u, &pData);
                  }
                }
              }
              else if ( dword_18026D7B0 > 5u )
              {
                result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
                if ( result )
                {
                  v50 = 8LL;
                  v49 = &v94;
                  TlgCreateWsz(&pDesc, ResourceTypeString);
                  v53 = 4LL;
                  v52 = &v46;
                  v54 = &a5;
                  v55 = 4LL;
                  TlgCreateWsz(&v56, pwsz);
                  TlgCreateWsz(&v57, L"Quaternion");
                  TlgCreateWsz(&v58, v10);
                  TlgCreateWsz(&v59, CommentForObject);
                  v60 = (int *)a9;
                  v61 = 4LL;
                  v63 = 4LL;
                  v65 = 4LL;
                  v62 = a9 + 4;
                  v64 = a9 + 8;
                  v66 = a9 + 12;
                  v67 = 4LL;
                  return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212C6C, v32, v33, 0xEu, &pData);
                }
              }
            }
            else if ( dword_18026D7B0 > 5u )
            {
              result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
              if ( result )
              {
                v50 = 8LL;
                v49 = &v94;
                TlgCreateWsz(&pDesc, ResourceTypeString);
                v53 = 4LL;
                v52 = &v46;
                v54 = &a5;
                v55 = 4LL;
                TlgCreateWsz(&v56, pwsz);
                TlgCreateWsz(&v57, L"Color");
                TlgCreateWsz(&v58, v10);
                TlgCreateWsz(&v59, CommentForObject);
                v60 = (int *)a9;
                v61 = 4LL;
                v63 = 4LL;
                v65 = 4LL;
                v62 = a9 + 4;
                v64 = a9 + 8;
                v66 = a9 + 12;
                v67 = 4LL;
                return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212D1D, v34, v35, 0xEu, &pData);
              }
            }
          }
          else if ( dword_18026D7B0 > 5u )
          {
            result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
            if ( result )
            {
              v50 = 8LL;
              v49 = &v94;
              TlgCreateWsz(&pDesc, ResourceTypeString);
              v53 = 4LL;
              v52 = &v46;
              v54 = &a5;
              v55 = 4LL;
              TlgCreateWsz(&v56, pwsz);
              TlgCreateWsz(&v57, L"Vector4");
              TlgCreateWsz(&v58, v10);
              TlgCreateWsz(&v59, CommentForObject);
              v60 = (int *)a9;
              v61 = 4LL;
              v63 = 4LL;
              v65 = 4LL;
              v62 = a9 + 4;
              v64 = a9 + 8;
              v66 = a9 + 12;
              v67 = 4LL;
              return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212C6C, v36, v37, 0xEu, &pData);
            }
          }
        }
        else if ( dword_18026D7B0 > 5u )
        {
          result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
          if ( result )
          {
            v50 = 8LL;
            v49 = &v94;
            TlgCreateWsz(&pDesc, ResourceTypeString);
            v53 = 4LL;
            v52 = &v46;
            v54 = &a5;
            v55 = 4LL;
            TlgCreateWsz(&v56, pwsz);
            TlgCreateWsz(&v57, L"Vector3");
            TlgCreateWsz(&v58, v10);
            TlgCreateWsz(&v59, CommentForObject);
            v60 = (int *)a9;
            v61 = 4LL;
            v63 = 4LL;
            v65 = 4LL;
            v62 = a9 + 4;
            v64 = a9 + 8;
            return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212E79, v38, v39, 0xDu, &pData);
          }
        }
      }
      else if ( dword_18026D7B0 > 5u )
      {
        result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
        if ( result )
        {
          v50 = 8LL;
          v49 = &v94;
          TlgCreateWsz(&pDesc, ResourceTypeString);
          v53 = 4LL;
          v52 = &v46;
          v54 = &a5;
          v55 = 4LL;
          TlgCreateWsz(&v56, pwsz);
          TlgCreateWsz(&v57, L"Vector2");
          TlgCreateWsz(&v58, v10);
          TlgCreateWsz(&v59, CommentForObject);
          v60 = (int *)a9;
          v62 = a9 + 4;
          v61 = 4LL;
          v63 = 4LL;
          return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212DCE, v40, v41, 0xCu, &pData);
        }
      }
    }
    else if ( dword_18026D7B0 > 5u )
    {
      result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
      if ( result )
      {
        v50 = 8LL;
        v49 = &v94;
        TlgCreateWsz(&pDesc, ResourceTypeString);
        v53 = 4LL;
        v52 = &v46;
        v54 = &a5;
        v55 = 4LL;
        TlgCreateWsz(&v56, pwsz);
        TlgCreateWsz(&v57, L"Scalar");
        TlgCreateWsz(&v58, v10);
        TlgCreateWsz(&v59, CommentForObject);
        v60 = (int *)a9;
        v61 = 4LL;
        return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212FCB, v42, v43, 0xBu, &pData);
      }
    }
  }
  else if ( dword_18026D7B0 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
    if ( result )
    {
      v50 = 8LL;
      v49 = &v94;
      TlgCreateWsz(&pDesc, ResourceTypeString);
      v53 = 4LL;
      v52 = &v46;
      v54 = &a5;
      v55 = 4LL;
      TlgCreateWsz(&v56, pwsz);
      TlgCreateWsz(&v57, L"Bool");
      TlgCreateWsz(&v58, v10);
      TlgCreateWsz(&v59, CommentForObject);
      v61 = 4LL;
      v47 = *a9;
      v60 = &v47;
      return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212F27, v44, v45, 0xBu, &pData);
    }
  }
  return result;
}
