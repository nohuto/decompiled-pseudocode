/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C0062970
 * Callers:
 *     <none>
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C011AEA8 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rax
  __int64 *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(a1 + 144, a2)) )
  {
    v9 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
    DwmAsyncTopLevelMouseLeave(v9);
  }
  if ( (unsigned int)PtInRect(a1 + 144, a2) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v10 = &gspwndCursorNC;
    v11 = a1;
    HMAssignmentLock(&v10);
  }
  v11 = a1;
  v10 = &gspwndCursor;
  return HMAssignmentLock(&v10);
}
