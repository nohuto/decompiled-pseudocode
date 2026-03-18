/*
 * XREFs of GetDesktopView @ 0x1C008E7D0
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1C008DD20 (NtUserDwmValidateWindow.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C008E704 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _MapDesktopObject @ 0x1C009CD70 (_MapDesktopObject.c)
 *     NtUserPostThreadMessage @ 0x1C009E440 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C00FA3CC (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0111B20 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 672); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
