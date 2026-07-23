/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x1800F1C8C
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     ChkSum @ 0x1800F1C60 (ChkSum.c)
 */

BOOLEAN __cdecl LdrVerifyMappedImageMatchesChecksum(PVOID BaseAddress, SIZE_T NumberOfBytes, ULONG FileLength)
{
  NTSTATUS v6; // eax
  unsigned __int16 v7; // r10
  char *v8; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  ULONG v13; // r11d
  char *v14; // [rsp+48h] [rbp+20h] BYREF

  v6 = RtlImageNtHeaderEx(0, BaseAddress, NumberOfBytes, (PIMAGE_NT_HEADERS *)&v14);
  v7 = 0;
  if ( v6 < 0 )
  {
    v13 = FileLength;
  }
  else
  {
    v8 = v14;
    if ( !*((_DWORD *)v14 + 22) )
      return 1;
    v10 = ChkSum(0, (unsigned __int16 *)BaseAddress, (unsigned __int64)(v14 - (_BYTE *)BaseAddress + 88) >> 1);
    v12 = ChkSum(v10, (unsigned __int16 *)v8 + 46, (NumberOfBytes - v11 - 4) >> 1);
    v7 = v12;
    if ( (NumberOfBytes & 1) != 0 )
      v7 = v12
         + (unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)
         + ((v12 + (unsigned int)(unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)) >> 16);
  }
  return FileLength + v7 == v13;
}
