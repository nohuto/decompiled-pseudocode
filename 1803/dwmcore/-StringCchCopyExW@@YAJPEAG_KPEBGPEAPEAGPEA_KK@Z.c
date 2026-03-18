/*
 * XREFs of ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18018CA48
 * Callers:
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x18018C790 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x18018CC98 (StringCopyWorkerW_0.c)
 *     StringExValidateDestW @ 0x18018CDE8 (StringExValidateDestW.c)
 */

__int64 __fastcall StringCchCopyExW(
        const wchar_t *pszDest,
        size_t cchDest,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  size_t v6; // rbx
  wchar_t *v7; // rdi
  HRESULT v8; // r8d
  size_t v10; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+50h] [rbp+18h] BYREF

  pcchNewDestLength = (size_t)a3;
  v6 = cchDest;
  v7 = (wchar_t *)pszDest;
  v8 = StringExValidateDestW(pszDest, cchDest, (const size_t)a3, 0);
  if ( v8 < 0 )
  {
    if ( v6 )
      *v7 = 0;
  }
  else
  {
    if ( v6 )
    {
      pcchNewDestLength = 0LL;
      v8 = StringCopyWorkerW_0(v7, v6, &pcchNewDestLength, L"References: ", v10);
      v6 -= pcchNewDestLength;
      v7 += pcchNewDestLength;
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147024774 )
        return (unsigned int)v8;
    }
    else
    {
      if ( !v7 )
        return (unsigned int)-2147024809;
      v8 = -2147024774;
    }
    if ( a4 )
      *a4 = v7;
    if ( a5 )
      *a5 = v6;
  }
  return (unsigned int)v8;
}
