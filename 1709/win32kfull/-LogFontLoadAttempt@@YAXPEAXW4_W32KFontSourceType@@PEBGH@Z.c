/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C024B1D8
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetProcessImageFileName @ 0x1C024BD84 (GetProcessImageFileName.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 ProcessImageFileName; // rax
  __int64 v7; // rbx
  const unsigned __int16 *v8; // rcx
  char result; // al
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  unsigned int *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]

  v12 = a4;
  ProcessImageFileName = GetProcessImageFileName(a1);
  v7 = ProcessImageFileName;
  if ( ProcessImageFileName )
    v8 = *(const unsigned __int16 **)(ProcessImageFileName + 8);
  else
    v8 = &word_1C02D9FB8;
  result = EtwFontLoadAttemptEvent(v8, a2, a3, v12);
  if ( hProvider > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
    if ( result )
    {
      v17 = 0;
      v20 = 0;
      v15 = (int *)&v13;
      v18 = &v12;
      v13 = a2;
      v16 = 4;
      v19 = 4;
      result = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9B43, v10, v11, 4u, &pData);
    }
  }
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
