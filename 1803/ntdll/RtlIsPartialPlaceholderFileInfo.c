/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x1800F47B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileInfo(
        PVOID InfoBuffer,
        FILE_INFORMATION_CLASS InfoClass,
        PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax

  if ( InfoClass >= FileFullDirectoryInformation )
  {
    if ( InfoClass <= FileBothDirectoryInformation )
      goto LABEL_9;
    if ( InfoClass == FileAttributeTagInformation )
    {
LABEL_10:
      *IsPartialPlaceholder = (*(_DWORD *)InfoBuffer & 0x440000) != 0;
      return 0;
    }
    if ( InfoClass > FileTrackingInformation
      && (InfoClass <= FileIdFullDirectoryInformation
       || InfoClass == FileIdExtdDirectoryInformation
       || InfoClass == FileIdExtdBothDirectoryInformation
       || InfoClass == FileStatInformation) )
    {
LABEL_9:
      InfoBuffer = (char *)InfoBuffer + 56;
      goto LABEL_10;
    }
  }
  result = -1073741821;
  if ( InfoClass < FileLinkInformationEx )
    return -1073741637;
  return result;
}
