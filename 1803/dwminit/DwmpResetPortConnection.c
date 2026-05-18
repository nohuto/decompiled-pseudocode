/*
 * XREFs of DwmpResetPortConnection @ 0x1800040C4
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002330 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DwmpResetPortConnection(CApiPortClient *a1)
{
  CApiPortClient::ResetConnection(a1);
}
