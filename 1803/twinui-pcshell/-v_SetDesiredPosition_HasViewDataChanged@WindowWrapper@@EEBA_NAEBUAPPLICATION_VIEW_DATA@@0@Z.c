/*
 * XREFs of ?v_SetDesiredPosition_HasViewDataChanged@WindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801EE7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall WindowWrapper::v_SetDesiredPosition_HasViewDataChanged(
        WindowWrapper *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  char v3; // r10

  if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
    return 1;
  if ( *((_DWORD *)a2 + 1) != *((_DWORD *)a3 + 1) )
    return 1;
  if ( *((_DWORD *)a2 + 2) != *((_DWORD *)a3 + 2) )
    return 1;
  v3 = 0;
  if ( *((_DWORD *)a2 + 3) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)a2 + 4) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)a2 + 5) != *((_DWORD *)a3 + 5)
    || *((_DWORD *)a2 + 6) != *((_DWORD *)a3 + 6)
    || *((_DWORD *)a2 + 7) != *((_DWORD *)a3 + 7)
    || *((_DWORD *)a2 + 8) != *((_DWORD *)a3 + 8) )
  {
    return 1;
  }
  return v3;
}
