/*
 * XREFs of WCSToMBEx @ 0x1C00DE10C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00DDA7C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnIMECONTROL @ 0x1C01FABA0 (SfnIMECONTROL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 */

__int64 __fastcall WCSToMBEx(unsigned __int16 a1, const WCHAR *a2, int a3, PCHAR *a4, ULONG BytesInMultiByteString)
{
  int v5; // r10d
  NTSTATUS v6; // eax
  __int64 result; // rax
  __int64 v8; // r10

  v5 = a3;
  if ( !BytesInMultiByteString || !a3 || !a2 )
    return 0LL;
  if ( a3 == -1 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v5 = v8 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0LL;
  }
  if ( (BytesInMultiByteString & 0x80000000) != 0 )
    return 0LL;
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v6 = RtlUnicodeToMultiByteN(*a4, BytesInMultiByteString, &BytesInMultiByteString, a2, 2 * v5);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
      return BytesInMultiByteString;
    return 0LL;
  }
  result = ConvertToAndFromWideChar(a1, a2, (unsigned int)(2 * v5), *a4, BytesInMultiByteString, 0);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
