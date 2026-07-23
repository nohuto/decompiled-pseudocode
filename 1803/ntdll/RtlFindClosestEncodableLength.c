/*
 * XREFs of RtlFindClosestEncodableLength @ 0x1800EABF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFindClosestEncodableLength(ULONGLONG SourceLength, PULONGLONG TargetLength)
{
  ULONGLONG v3; // rax
  ULONGLONG v4; // rax

  if ( SourceLength <= 0xFFFFFFFF )
    goto LABEL_2;
  if ( SourceLength <= 0xFFFFFFFF00LL )
  {
    v3 = SourceLength & 0xFFFFFFFF00LL;
    if ( SourceLength == (SourceLength & 0xFFFFFFFFFFFFFF00uLL) )
      goto LABEL_2;
    SourceLength = v3 + 256;
    *TargetLength = v3 + 256;
    if ( v3 + 256 <= 0xFFFFFFFF00LL )
      return 0;
  }
  if ( SourceLength > 0xFFFFFFFF0000LL )
    goto LABEL_10;
  v4 = SourceLength & 0xFFFFFFFF0000LL;
  if ( SourceLength == (SourceLength & 0xFFFFFFFFFFFF0000uLL) )
  {
LABEL_2:
    *TargetLength = SourceLength;
    return 0;
  }
  SourceLength = v4 + 0x10000;
  *TargetLength = v4 + 0x10000;
  if ( v4 + 0x10000 <= 0xFFFFFFFF0000LL )
    return 0;
LABEL_10:
  if ( SourceLength <= 0xFFFFFFFF00000000uLL )
  {
    if ( SourceLength != (SourceLength & 0xFFFFFFFF00000000uLL) )
    {
      *TargetLength = (SourceLength & 0xFFFFFFFF00000000uLL) + 0x100000000LL;
      return 0;
    }
    goto LABEL_2;
  }
  *TargetLength = 0LL;
  return -1073741823;
}
