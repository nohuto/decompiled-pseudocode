/*
 * XREFs of PsGetVersion @ 0x14003A520
 * Callers:
 *     Win7PsGetVersion @ 0x1406B0850 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x1406B0940 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x1406B0A30 (Win8PsGetVersion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  if ( MajorVersion )
    *MajorVersion = 10;
  if ( MinorVersion )
    *MinorVersion = 0;
  if ( BuildNumber )
    *BuildNumber = 15063;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
