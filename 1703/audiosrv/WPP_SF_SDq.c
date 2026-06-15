/*
 * XREFs of WPP_SF_SDq @ 0x1800CDA54
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017938 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SDq(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids, 16LL, a4);
}
