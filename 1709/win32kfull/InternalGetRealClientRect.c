/*
 * XREFs of InternalGetRealClientRect @ 0x1C005D230
 * Callers:
 *     ParkIcon @ 0x1C004BCA4 (ParkIcon.c)
 *     SetTiledRect @ 0x1C0076C18 (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C013DA60 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C005F4DC (GetMonitorWorkRectForDpi.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  unsigned __int16 v9; // di
  __int128 *MonitorRectForDpi; // rax
  __int128 v11; // xmm0
  __int64 result; // rax
  unsigned int DpiForSystem; // eax
  unsigned int v14; // eax
  _BYTE v15[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
  {
    v9 = 0;
    if ( !a4 )
      v5 = *(_QWORD *)(GetDispInfo() + 88);
    if ( !a5 )
      v9 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(v15, v5, v9);
    else
      MonitorRectForDpi = (__int128 *)GetMonitorWorkRectForDpi(v16, v5, v9);
    v11 = *MonitorRectForDpi;
    result = (__int64)&v17;
    v17 = v11;
    *(_OWORD *)a2 = v11;
  }
  else
  {
    result = GetRect(a1, a2, 17LL);
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        result = GetDpiDependentMetric(1LL, DpiForSystem);
        *(_DWORD *)(a2 + 12) += result;
      }
      if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
      {
        v14 = GetDpiForSystem();
        result = GetDpiDependentMetric(0LL, v14);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2104LL) >= 0 )
    {
      if ( (int)result <= 1 )
      {
        result = *(unsigned int *)(gpsi + 2072LL);
        *(_DWORD *)(a2 + 12) -= result;
        return result;
      }
      if ( (int)result <= 3 )
      {
        result = *(unsigned int *)(gpsi + 2072LL);
        *(_DWORD *)(a2 + 4) += result;
        return result;
      }
      switch ( (_DWORD)result )
      {
        case 4:
          goto LABEL_26;
        case 5:
LABEL_25:
          result = *(unsigned int *)(gpsi + 2068LL);
          *(_DWORD *)(a2 + 8) -= result;
          return result;
        case 6:
LABEL_26:
          result = *(unsigned int *)(gpsi + 2068LL);
          *(_DWORD *)a2 += result;
          return result;
        case 7:
          goto LABEL_25;
      }
    }
  }
  return result;
}
