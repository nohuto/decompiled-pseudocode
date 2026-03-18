/*
 * XREFs of GetDesktopView @ 0x1C001B650
 * Callers:
 *     _MapDesktopObject @ 0x1C001AB90 (_MapDesktopObject.c)
 *     NtUserDwmValidateWindow @ 0x1C001AC00 (NtUserDwmValidateWindow.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C001B568 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00CBA30 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C00EFEC0 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0107E90 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 664); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
