/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01D5B50
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 * Callees:
 *     xxxDCEWindowHitTest @ 0x1C0061F80 (xxxDCEWindowHitTest.c)
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     xxxWindowHitTest @ 0x1C01092D8 (xxxWindowHitTest.c)
 */

__int64 __fastcall xxxWindowHitTestWithoutTargeting(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  struct tagWND *v2; // r10

  if ( (unsigned int)IsThreadDesktopComposed((__int64)a1) )
    return xxxDCEWindowHitTest(v2);
  else
    return xxxWindowHitTest((ULONG_PTR)v2);
}
