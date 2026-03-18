/*
 * XREFs of FixupCursorForMonitor @ 0x1C0049D7C
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00B22F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixupCursorForMonitor(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned __int16 v4; // dx
  __int64 result; // rax

  v2 = ValidateHmonitorNoRip(ghCursorMonitor);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_WORD *)(*(_QWORD *)(v2 + 40) + 128LL);
    if ( v4 >= 0x90u )
    {
      if ( v4 >= 0xC0u )
      {
        if ( v4 >= 0x120u )
          v3 = v4 < 0x180u ? 96 : 128;
        else
          v3 = 64;
      }
      else
      {
        v3 = 48;
      }
    }
    else
    {
      v3 = 32;
    }
  }
  if ( !a1 )
    return a1;
  if ( !v3 )
    return a1;
  result = *(_QWORD *)(a1 + 48);
  if ( !result )
    return a1;
  do
  {
    if ( *(_DWORD *)(result + 76) == v3 )
      break;
    result = *(_QWORD *)(result + 40);
  }
  while ( result );
  if ( !result )
    return a1;
  return result;
}
