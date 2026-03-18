/*
 * XREFs of ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x18018C790
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D1A30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 *     ?SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z @ 0x180182340 (-SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z.c)
 *     ?GetReferenceStrings@CExpression@@QEBAPEAGXZ @ 0x18018B9E0 (-GetReferenceStrings@CExpression@@QEBAPEAGXZ.c)
 *     ?GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ @ 0x18018BA30 (-GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18018CA48 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18018CB0C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

void __fastcall CExpression::SetupDebugInfoSource(CExpression *this)
{
  const unsigned __int16 *v2; // r8
  int v3; // eax
  int v4; // edi
  wchar_t *ReferenceStrings; // rax
  unsigned int v6; // esi
  unsigned int *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // esi
  wchar_t *v11; // r14
  unsigned int *SourceHandleList; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  const unsigned __int16 *DebugInfo; // rax
  unsigned __int16 *v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned __int16 *v19; // rsi
  int v20; // eax
  unsigned int v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  size_t cchDest; // [rsp+58h] [rbp-B0h] BYREF
  STRSAFE_LPWSTR v26; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *Context[2]; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t pszDest[400]; // [rsp+78h] [rbp-90h] BYREF
  const void *retaddr; // [rsp+3C0h] [rbp+2B8h]

  if ( !*((_DWORD *)this + 100) )
    return;
  memset_0(pszDest, 0, sizeof(pszDest));
  v26 = pszDest;
  cchDest = 400LL;
  v3 = StringCchCopyExW(pszDest, 0x190uLL, v2, &v26, &cchDest, v21);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT(v3, retaddr);
  v4 = 0;
  ReferenceStrings = CExpression::GetReferenceStrings(this);
  if ( ReferenceStrings )
  {
    Context[0] = 0LL;
    v10 = 0;
    v11 = wcstok_s(ReferenceStrings, L";", Context);
    if ( *((_DWORD *)this + 100) )
    {
      do
      {
        if ( v4 < 0 )
          break;
        if ( v11 && *v11 )
        {
          SourceHandleList = CBaseExpression::GetSourceHandleList(this);
          LODWORD(v24) = *(_DWORD *)(v13 + 8 * v14);
          LODWORD(v23) = SourceHandleList[*(unsigned int *)(v13 + 8 * v14 + 20)];
          v4 = StringCchPrintfExW(v26, cchDest, &v26, &cchDest, 0, L"{%ws, %u, %u},", v11, v23, v24);
        }
        ++v10;
        v11 = wcstok_s(0LL, L";", Context);
      }
      while ( v10 < *((_DWORD *)this + 100) );
      goto LABEL_15;
    }
  }
  else
  {
    v6 = 0;
    if ( *((_DWORD *)this + 100) )
    {
      do
      {
        if ( v4 < 0 )
          break;
        v7 = CBaseExpression::GetSourceHandleList(this);
        LODWORD(v23) = *(_DWORD *)(v8 + 8 * v9);
        LODWORD(v22) = v7[*(unsigned int *)(v8 + 8 * v9 + 20)];
        ++v6;
        v4 = StringCchPrintfExW(v26, cchDest, &v26, &cchDest, 0, L"{%u, %u},", v22, v23);
      }
      while ( v6 < *((_DWORD *)this + 100) );
LABEL_15:
      if ( v4 != -2147024774 && v4 < 0 )
        ModuleFailFastForHRESULT(v4, retaddr);
    }
  }
  DebugInfo = CBaseExpression::GetDebugInfo(this);
  v16 = (unsigned __int16 *)DebugInfo;
  v17 = -1LL;
  do
    ++v17;
  while ( DebugInfo[v17] );
  v18 = v17 + 403 - cchDest;
  v19 = (unsigned __int16 *)operator new(saturated_mul(v18, 2uLL));
  if ( v19 )
  {
    v20 = StringCchPrintfW(v19, v18, (size_t *)L"%ws, %ws", v16, pszDest);
    if ( v20 < 0 )
      ModuleFailFastForHRESULT(v20, retaddr);
    CBaseExpression::SetDebugInfo(this, v19);
    operator delete(v16);
  }
}
