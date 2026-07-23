/*
 * XREFs of mbtowc @ 0x18009A9DC
 * Callers:
 *     _woutput_l @ 0x180097B00 (_woutput_l.c)
 *     ReadString @ 0x180099CD0 (ReadString.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18006C8D0 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      SourceCharacter = (PUCHAR)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (_DWORD)SourceCharacter - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
