/*
 * XREFs of ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C019C370
 * Callers:
 *     <none>
 * Callees:
 *     UserBeep @ 0x1C01963EC (UserBeep.c)
 */

void __fastcall DisplayDiagHotkeyCallback(__int64 a1)
{
  unsigned int v2; // ecx

  if ( !CInputGlobals::WasLastInputInjected(gpInputGlobals) )
  {
    if ( a1 == -16 )
    {
      v2 = 8;
    }
    else
    {
      if ( a1 != -15 )
        return;
      UserBeep(494, 200);
      v2 = 1;
    }
    xxxDisplayDiagBlackScreenDetected(v2);
  }
}
