/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C020164C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C0630 (PhysicalToLogicalInPlacePointWithParent.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 36)
    && (*((_DWORD *)a1 + 92) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    && *(_DWORD *)(gptiCurrent + 676LL) == *(_DWORD *)(gptiCurrent + 684LL)
    && *(_DWORD *)(gptiCurrent + 680LL) == *(_DWORD *)(gptiCurrent + 688LL) )
  {
    v4 = *(__int16 *)a2;
    v5 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePointWithParent((__int64)a1, &v4, 0LL);
    *a2 = ((unsigned __int16)v5 << 16) | (unsigned __int16)v4;
  }
}
