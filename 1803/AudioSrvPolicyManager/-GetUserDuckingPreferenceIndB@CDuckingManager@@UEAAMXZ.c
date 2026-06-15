/*
 * XREFs of ?GetUserDuckingPreferenceIndB@CDuckingManager@@UEAAMXZ @ 0x18000C150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CDuckingManager::GetUserDuckingPreferenceIndB(CDuckingManager *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 71);
  if ( !v1 )
    return FLOAT_N96_0;
  v2 = v1 - 1;
  if ( !v2 )
    return FLOAT_N18_0;
  if ( v2 == 1 )
    return FLOAT_N6_0;
  return 0.0;
}
