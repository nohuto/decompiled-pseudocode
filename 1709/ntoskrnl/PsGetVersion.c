/*
 * XREFs of PsGetVersion @ 0x14012F6B0
 * Callers:
 *     Win7PsGetVersion @ 0x1406DBFF0 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x1406DC0E0 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x1406DC1D0 (Win8PsGetVersion.c)
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
    *BuildNumber = 16299;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
