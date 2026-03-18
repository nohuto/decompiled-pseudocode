/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00C3BC0 (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

struct tagCURSOR *__fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // ebx
  __int64 v3; // rdx
  int v4; // esi
  struct tagCURSOR *result; // rax
  __int64 v6; // rbp
  int v7; // edi
  __int64 v8; // rdx
  int v9; // r9d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *((unsigned __int16 *)&gasysico + 8 * i + 1),
      &word_1C02E2588,
      SourceString,
      260,
      0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v4 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(i + 100));
      v4 = 576;
    }
    result = (struct tagCURSOR *)xxxClientLoadImage((char **)&DestinationString, v3, 1u, 0, 0, v4);
    if ( result )
      result = (struct tagCURSOR *)zzzSetSystemImage(result, *((_QWORD *)&gasysico + 2 * i + 1));
    if ( i == 5 )
    {
      result = (struct tagCURSOR *)gpKernelHandleTable;
      v6 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)(gpsi + 5672LL));
      if ( v6 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          v7 = *(_DWORD *)(gpsi + 2080LL);
        else
          v7 = *(_DWORD *)(gpsi + 2468LL);
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          v9 = *(_DWORD *)(gpsi + 2076LL);
        else
          v9 = *(_DWORD *)(gpsi + 2464LL);
        result = (struct tagCURSOR *)xxxClientLoadImage((char **)&DestinationString, v8, 1u, v9, v7, v4);
        if ( result )
          result = (struct tagCURSOR *)zzzSetSystemImage(result, v6);
      }
    }
  }
  return result;
}
