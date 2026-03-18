/*
 * XREFs of EditionNotifyShellLanguageHook @ 0x1C0118570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionNotifyShellLanguageHook(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( !a3 || gLCIDSentToShell != a2 && (result = gptiRit, a1 != gptiRit) )
  {
    result = *(unsigned int *)(a1 + 600);
    if ( (((unsigned int)result | *(_DWORD *)(**(_QWORD **)(a1 + 416) + 16LL)) & 0x800) != 0 )
    {
      gLCIDSentToShell = a2;
      return xxxCallHook(8, 0, a2, 0xAu);
    }
  }
  return result;
}
