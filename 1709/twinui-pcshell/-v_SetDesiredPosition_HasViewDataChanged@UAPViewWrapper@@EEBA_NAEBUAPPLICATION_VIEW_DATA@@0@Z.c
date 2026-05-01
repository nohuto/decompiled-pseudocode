/*
 * XREFs of ?v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18013B4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged(
        UAPViewWrapper *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return *(_DWORD *)a2 != *(_DWORD *)a3
      || *((_DWORD *)a2 + 2) != *((_DWORD *)a3 + 2)
      || *((_DWORD *)a2 + 4) != *((_DWORD *)a3 + 4)
      || *((_DWORD *)a2 + 6) != *((_DWORD *)a3 + 6);
}
