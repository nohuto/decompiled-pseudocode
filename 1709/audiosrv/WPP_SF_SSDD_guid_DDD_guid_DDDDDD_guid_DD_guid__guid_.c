/*
 * XREFs of WPP_SF_SSDD_guid_DDD_guid_DDDDDD_guid_DD_guid__guid_ @ 0x1800CD9DC
 * Callers:
 *     LogCurrentSettings @ 0x1800C96BC (LogCurrentSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSDD_guid_DDD_guid_DDDDDD_guid_DD_guid__guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5)
{
  __int64 v5; // rdx
  __int64 v7; // rcx

  v5 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a5 + 2 * v7) );
  }
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids, 10LL, a4);
}
