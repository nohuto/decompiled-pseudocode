/*
 * XREFs of CleanupMediaChange @ 0x1C0126490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CleanupMediaChange(__int64 a1, __int64 a2, __int64 a3)
{
  LONG_PTR result; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    result = ObfDereferenceObject(WPP_MAIN_CB.Queue.ListEntry.Blink);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, a2, a3);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
  return result;
}
