/*
 * XREFs of sub_1800F13DC @ 0x1800F13DC
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_1800F13B0 @ 0x1800F13B0 (sub_1800F13B0.c)
 */

bool __fastcall sub_1800F13DC(unsigned __int16 *BaseOfImage, ULONG64 Size, DWORD a3)
{
  DWORD CheckSum; // edi
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // r10
  int v10; // r11d
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r10
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+20h] BYREF

  if ( RtlImageNtHeaderEx(0, BaseOfImage, Size, &OutHeaders) < 0 )
  {
    v12 = 0;
    CheckSum = a3;
  }
  else
  {
    CheckSum = OutHeaders->OptionalHeader.CheckSum;
    if ( !CheckSum )
      return 1;
    v8 = sub_1800F13B0(0, BaseOfImage, (unsigned __int64)((char *)OutHeaders - (char *)BaseOfImage + 88) >> 1);
    v11 = sub_1800F13B0(v8, v9, v10);
    v12 = v11;
    if ( (Size & 1) != 0 )
      v12 = v11
          + *((unsigned __int8 *)BaseOfImage + Size - 1)
          + ((v11 + (unsigned int)*((unsigned __int8 *)BaseOfImage + Size - 1)) >> 16);
  }
  return a3 + v12 == CheckSum;
}
