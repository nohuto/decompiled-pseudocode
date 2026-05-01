/*
 * XREFs of ?GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA?AUAPP_SIZE_CONSTRAINTS@@I@Z @ 0x180073D00
 * Callers:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18002A770 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18002A910 (-GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ??0APP_SIZE_CONSTRAINTS@@QEAA@AEBUCSize@Geometry@@0I@Z @ 0x180092050 (--0APP_SIZE_CONSTRAINTS@@QEAA@AEBUCSize@Geometry@@0I@Z.c)
 */

APP_SIZE_CONSTRAINTS *__fastcall AppSizeConstraintsCache::GetSizeConstraintsForDpi(
        __int64 a1,
        APP_SIZE_CONSTRAINTS *a2,
        const struct Geometry::CSize *a3)
{
  int v4; // esi
  __int64 v6; // rax
  _DWORD *i; // r8

  v4 = (int)a3;
  APP_SIZE_CONSTRAINTS::APP_SIZE_CONSTRAINTS(a2, a2, a3, (unsigned int)a3);
  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = *(_DWORD **)(a1 + 16); v4 != *i; i += 5 )
    {
      if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 24) )
        return a2;
    }
    *(_OWORD *)a2 = *(_OWORD *)(*(_QWORD *)(a1 + 16) + 20 * v6 + 4);
  }
  return a2;
}
