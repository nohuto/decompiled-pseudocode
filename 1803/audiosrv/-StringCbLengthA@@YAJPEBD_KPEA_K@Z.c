/*
 * XREFs of ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x1800BF208
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180041F60 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800BB838 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbLengthA(const char *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int64 result; // rax

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v5 = 0x7FFFFFFFLL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v5;
    }
    while ( v5 );
    result = v5 == 0 ? 0x80070057 : 0;
    if ( v5 )
      v4 = 0x7FFFFFFF - v5;
    else
      v4 = 0LL;
  }
  else
  {
    result = 2147942487LL;
  }
  if ( a3 )
  {
    if ( (int)result >= 0 )
      v3 = v4;
    *a3 = v3;
  }
  return result;
}
