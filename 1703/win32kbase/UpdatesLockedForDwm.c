/*
 * XREFs of UpdatesLockedForDwm @ 0x1C007E6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( g_bLockUpdatesForDwm )
    return PsGetCurrentProcess(a1, a2, a3, a4) != (_QWORD)g_pepDwm;
  return v4;
}
