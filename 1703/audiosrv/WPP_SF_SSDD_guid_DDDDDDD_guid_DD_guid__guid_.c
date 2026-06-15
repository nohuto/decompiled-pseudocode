/*
 * XREFs of WPP_SF_SSDD_guid_DDDDDDD_guid_DD_guid__guid_ @ 0x18004D07C
 * Callers:
 *     LogCurrentSettings @ 0x18003D104 (LogCurrentSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSDD_guid_DDDDDDD_guid_DD_guid__guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5)
{
  const wchar_t *v5; // r8
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v5 = a5;
  v6 = -1LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
  }
  if ( !a5 )
    v5 = L"NULL";
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v9 = v6 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  v10 = 2 * v9;
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids, 10LL, a4, v10, v5);
}
