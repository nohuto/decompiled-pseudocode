/*
 * XREFs of LockMFMWFPWindow @ 0x1C02057B0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0205C3C (UnlockMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    if ( IsMFMWFPWindow(a2) )
    {
      v4[0] = a1;
      v4[1] = a2;
      HMAssignmentLock(v4);
    }
    else
    {
      *a1 = a2;
    }
  }
}
