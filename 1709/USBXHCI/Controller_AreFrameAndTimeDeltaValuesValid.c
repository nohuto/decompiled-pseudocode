/*
 * XREFs of Controller_AreFrameAndTimeDeltaValuesValid @ 0x1C00100EC
 * Callers:
 *     Controller_CheckForFrameOverlowEventFromIsr @ 0x1C001013C (Controller_CheckForFrameOverlowEventFromIsr.c)
 * Callees:
 *     <none>
 */

bool __fastcall Controller_AreFrameAndTimeDeltaValuesValid(unsigned int a1, unsigned __int64 a2)
{
  char v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  v2 = 0;
  if ( a1 && a2 && a1 <= 0x1DCD6500 && a2 <= 0x1DCD6500 )
  {
    v3 = 10000 * a1;
    if ( v3 <= a2 )
      v4 = a2 - v3;
    else
      v4 = v3 - a2;
    return v4 <= 0x5F5E100;
  }
  return v2;
}
