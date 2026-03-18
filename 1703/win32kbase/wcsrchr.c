/*
 * XREFs of wcsrchr @ 0x1C009D390
 * Callers:
 *     ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0012170 (-GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0038B5C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ldevLoadImage @ 0x1C005FB00 (ldevLoadImage.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C0079EFC (GetWindowsDirectoryDevicePath.c)
 *     rimLoadImage @ 0x1C0106FB8 (rimLoadImage.c)
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
