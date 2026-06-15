/*
 * XREFs of WPP_SF_SSddSS @ 0x1800DAF98
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800D9000 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSddSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r8
  const wchar_t *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx

  v9 = -1LL;
  v10 = a4;
  if ( a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(a9 + 2 * v12) );
  }
  if ( a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a8 + 2 * v13) );
  }
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(a5 + 2 * v14) );
  }
  if ( a4 )
  {
    do
      ++v9;
    while ( a4[v9] );
  }
  if ( !a4 )
    v10 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_917ef38764913c31df93337219a3aa90_Traceguids, 26LL, v10);
}
