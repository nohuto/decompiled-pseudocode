/*
 * XREFs of wcsrchr @ 0x1C00A7470
 * Callers:
 *     ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0039CF0 (-GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C003D1EC (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ldevLoadImage @ 0x1C006E0A0 (ldevLoadImage.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C007233C (GetWindowsDirectoryDevicePath.c)
 *     rimLoadImage @ 0x1C008D19C (rimLoadImage.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
