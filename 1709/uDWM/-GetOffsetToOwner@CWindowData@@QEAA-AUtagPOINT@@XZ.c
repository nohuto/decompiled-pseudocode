/*
 * XREFs of ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ @ 0x180011AF0
 * Callers:
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000E7A4 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall CWindowData::GetOffsetToOwner(CWindowData *this, _DWORD *a2)
{
  __int64 v2; // r8

  *a2 = 0;
  a2[1] = 0;
  v2 = *((_QWORD *)this + 68);
  if ( v2 )
  {
    *a2 = *((_DWORD *)this + 12) - *(_DWORD *)(v2 + 48);
    a2[1] = *((_DWORD *)this + 13) - *(_DWORD *)(*((_QWORD *)this + 68) + 52LL);
  }
  return (struct tagPOINT)a2;
}
