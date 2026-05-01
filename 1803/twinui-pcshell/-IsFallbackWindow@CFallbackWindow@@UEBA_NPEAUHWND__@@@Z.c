/*
 * XREFs of ?IsFallbackWindow@CFallbackWindow@@UEBA_NPEAUHWND__@@@Z @ 0x1800961D0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFallbackWindow::IsFallbackWindow(CFallbackWindow *this, HWND a2)
{
  return *((_QWORD *)this - 4) == (_QWORD)a2;
}
