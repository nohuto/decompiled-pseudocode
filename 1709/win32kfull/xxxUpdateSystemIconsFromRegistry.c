/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C0117350
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     zzzSetSystemImage @ 0x1C0051988 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     RtlInitUnicodeStringOrId @ 0x1C007C7DC (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

struct tagCURSOR *__fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rdx
  unsigned int v4; // esi
  struct tagCURSOR *result; // rax
  __int64 v6; // rbp
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *((unsigned __int16 *)&gasysico + 8 * i + 1),
      &word_1C02D9FB8,
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
    result = (struct tagCURSOR *)xxxClientLoadImage((void **)&DestinationString, v3, 1u, 0, 0, v4);
    if ( result )
      result = (struct tagCURSOR *)zzzSetSystemImage(result, *((_QWORD *)&gasysico + 2 * i + 1));
    if ( i == 5 )
    {
      result = (struct tagCURSOR *)gpKernelHandleTable;
      v6 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL));
      if ( v6 )
      {
        DpiForSystem = GetDpiForSystem(gpKernelHandleTable, 3LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL));
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
        v11 = GetDpiForSystem(v10, v9);
        v12 = GetDpiDependentMetric(20LL, v11);
        result = (struct tagCURSOR *)xxxClientLoadImage(
                                       (void **)&DestinationString,
                                       v13,
                                       1u,
                                       v12,
                                       DpiDependentMetric,
                                       v4);
        if ( result )
          result = (struct tagCURSOR *)zzzSetSystemImage(result, v6);
      }
    }
  }
  return result;
}
