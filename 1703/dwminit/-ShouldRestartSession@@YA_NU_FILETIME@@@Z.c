/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180002670
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002734 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?SkipRestartHeuristic@@YA_NXZ @ 0x1800022DC (-SkipRestartHeuristic@@YA_NXZ.c)
 *     ?ForceBasicDisplayAdapter@@YA_NXZ @ 0x180002338 (-ForceBasicDisplayAdapter@@YA_NXZ.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002550 (-FallBackToBDD@@YA_NXZ.c)
 */

char __fastcall ShouldRestartSession(struct _FILETIME a1)
{
  char v2; // di
  char v3; // cl
  int v4; // eax
  bool v5; // zf

  v2 = 1;
  if ( SkipRestartHeuristic() )
    return 0;
  if ( !ForceBasicDisplayAdapter() )
  {
    v3 = byte_18000C6A4;
    if ( byte_18000C6A4
      && (byte_18000C6A4 &= -((unsigned __int64)(*(_QWORD *)&a1 - qword_18000C778) < 0x23C34600),
          ((unsigned __int8)v3 & (unsigned __int8)-((unsigned __int64)(*(_QWORD *)&a1 - qword_18000C778) < 0x23C34600)) != 0) )
    {
      v4 = gDwmNumRetriesSoFar;
      if ( gDwmNumRetriesSoFar >= 7 )
      {
        v5 = !FallBackToBDD();
        v4 = gDwmNumRetriesSoFar;
        v2 = v5;
LABEL_13:
        gDwmNumRetriesSoFar = v4 + 1;
        return v2;
      }
    }
    else
    {
      byte_18000C6A4 = 1;
      v4 = 0;
      qword_18000C778 = (__int64)a1;
    }
    v2 = 0;
    goto LABEL_13;
  }
  if ( FallBackToBDD() || byte_18000C6A5 )
  {
    v2 = 0;
    byte_18000C6A5 = 1;
  }
  return v2;
}
