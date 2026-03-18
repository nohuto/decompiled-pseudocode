/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C005E4B0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C01247F0 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  void *v5; // rax
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(a1 + 144, a2)) )
  {
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncTopLevelMouseLeave(v5);
  }
  if ( (unsigned int)PtInRect(a1 + 144, a2) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v6 = &gspwndCursorNC;
    v7 = a1;
    HMAssignmentLock(&v6);
  }
  v7 = a1;
  v6 = &gspwndCursor;
  return HMAssignmentLock(&v6);
}
