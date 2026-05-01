/*
 * XREFs of McTemplateU0z @ 0x1801BF534
 * Callers:
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801BF7E0 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0z(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  int v4; // ecx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+20h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v9 = v4;
  v10 = 0;
  v5 = L"NULL";
  if ( a3 )
    v5 = a3;
  v8 = v5;
  return McGenEventWriteUM(Microsoft_Windows_StartLayoutPopulation_Provider_Context, &LayoutXMLParseFailure, 2u, &v7);
}
