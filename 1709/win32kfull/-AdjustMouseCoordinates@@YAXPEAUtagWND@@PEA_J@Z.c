/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0202F64
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C3E10 (PhysicalToLogicalInPlacePointWithParent.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 36)
    && (*((_DWORD *)a1 + 92) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) == 2
    && *(_DWORD *)(gptiCurrent + 732LL) == *(_DWORD *)(gptiCurrent + 740LL)
    && *(_DWORD *)(gptiCurrent + 736LL) == *(_DWORD *)(gptiCurrent + 744LL) )
  {
    v6 = *(__int16 *)a2;
    v7 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePointWithParent((__int64)a1, &v6, 0LL);
    *a2 = ((unsigned __int16)v7 << 16) | (unsigned __int16)v6;
  }
}
