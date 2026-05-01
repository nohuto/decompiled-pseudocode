/*
 * XREFs of ?HandleActivation@CRealmActivationHistory@@UEAAJW4ZBID@@W4WindowType@@_N@Z @ 0x180090370
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRealmActivationHistory::HandleActivation(__int64 a1, int a2, int a3, char a4)
{
  if ( *(_DWORD *)(a1 + 12LL * a2 + 80) )
  {
    if ( a4 )
    {
      a2 = 19;
    }
    else if ( a3 == 2 )
    {
      a2 = 8;
    }
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 12 * (a2 + 7LL)));
  }
  return 0LL;
}
