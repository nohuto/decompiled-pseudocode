/*
 * XREFs of VrpBuildKeyPath @ 0x14067E57C
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14067D470 (VrpTranslatePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  unsigned int v3; // ebx
  PCUNICODE_STRING v4; // rsi
  SIZE_T v7; // rdx
  wchar_t *PoolWithTag; // rax
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = (PCUNICODE_STRING)&v10;
  v10 = 0;
  v11 = 0LL;
  if ( SourceString )
    v4 = SourceString;
  Destination->Length = 0;
  v7 = (unsigned __int16)(Source->Length + 2 + v4->MaximumLength);
  Destination->MaximumLength = v7;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x67655256u);
  Destination->Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCopyUnicodeString(Destination, v4);
    if ( Source->Length )
    {
      if ( *Source->Buffer != 92 && v4->Buffer[((unsigned __int64)v4->Length >> 1) - 1] != 92 )
        RtlAppendUnicodeToString(Destination, L"\\");
      RtlAppendUnicodeStringToString(Destination, Source);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
