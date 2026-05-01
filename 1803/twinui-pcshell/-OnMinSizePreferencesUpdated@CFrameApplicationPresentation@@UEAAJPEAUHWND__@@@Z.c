/*
 * XREFs of ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x180013C60
 * Callers:
 *     ?OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18004C440 (-OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_01e80890f4c1ff00bc9de130578f9558___ @ 0x180011970 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_01e80890f4c1ff00bc9de130578f9558___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::OnMinSizePreferencesUpdated(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = this;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_01e80890f4c1ff00bc9de130578f9558___(this, &v3);
}
