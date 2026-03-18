/*
 * XREFs of HvlGetReferenceTimeUsingTscPage @ 0x14014B170
 * Callers:
 *     HvlGetReferenceTime @ 0x14014B144 (HvlGetReferenceTime.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1401F0A40 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTimeUsingTscPage()
{
  int v0; // r9d
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v0 = *(_DWORD *)HvlpReferenceTscPage;
    if ( !*(_DWORD *)HvlpReferenceTscPage )
      break;
    v2 = *(_QWORD *)(HvlpReferenceTscPage + 16)
       + ((__rdtsc() * (unsigned __int128)*(unsigned __int64 *)(HvlpReferenceTscPage + 8)) >> 64);
    if ( *(_DWORD *)HvlpReferenceTscPage == v0 )
      return v2;
  }
  HvlpGetRegister64(589828LL, &v2);
  return v2;
}
