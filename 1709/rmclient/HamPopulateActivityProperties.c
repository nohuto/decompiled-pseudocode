/*
 * XREFs of HamPopulateActivityProperties @ 0x180001820
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180001890 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HamPopulateActivityProperties(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  __int64 v3; // r9
  const unsigned __int16 *v4; // rax
  __int64 v5; // r10
  const unsigned __int16 *i; // rax

  if ( !a1 )
    return 3221225711LL;
  v3 = 64LL;
  v4 = a1;
  v5 = 64LL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
      return 3221225711LL;
  }
  if ( !a2 )
    return 3221225712LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v3 )
      return 3221225712LL;
  }
  HampActivityPropertiesInitialize(a1, a2, a3);
  return 0LL;
}
