/*
 * XREFs of ?_DestroyMenuIfSupported@@YAHPEAUtagMENU@@@Z @ 0x1C009B590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _DestroyMenuIfSupported(struct tagMENU *a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = Is_DestroyMenuSupported();
  v3 = 0;
  if ( v2 >= 0 )
    return (unsigned int)_DestroyMenu(a1, 0LL);
  return v3;
}
