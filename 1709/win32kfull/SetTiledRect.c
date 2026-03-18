/*
 * XREFs of SetTiledRect @ 0x1C0076C18
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 DesktopWindow; // rax
  __int64 v6; // r8
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // esi
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // eax
  int v12; // ebp
  unsigned int v13; // eax
  int v14; // eax
  int v15; // r11d
  int v16; // ebp
  int v17; // r9d
  int v18; // r10d
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  int v22; // ecx
  __int64 result; // rax
  int v24; // [rsp+30h] [rbp-28h] BYREF
  int v25; // [rsp+34h] [rbp-24h]
  int v26; // [rsp+38h] [rbp-20h]
  int v27; // [rsp+3Ch] [rbp-1Ch]

  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (__int64)&v24, 2, v6, 0);
  ++*(_WORD *)(a3 + 226);
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(14LL, DpiForSystem);
  v9 = GetDpiForSystem();
  v10 = GetDpiDependentMetric(12LL, v9) + DpiDependentMetric;
  v11 = GetDpiForSystem();
  v12 = GetDpiDependentMetric(15LL, v11);
  v13 = GetDpiForSystem();
  v14 = GetDpiDependentMetric(13LL, v13);
  v15 = v26 - v24;
  v16 = v14 + v12;
  v17 = v27;
  v18 = v25;
  v19 = v10 * *(__int16 *)(a3 + 226);
  v20 = v16 * *(__int16 *)(a3 + 226);
  if ( v19 > (v26 - v24) / 4 || v20 > (v27 - v25) / 4 )
  {
    *(_WORD *)(a3 + 226) = 0;
    v19 = v10;
    v20 = v16;
  }
  v21 = v24 + v19;
  *a2 = v21;
  v22 = v18 + v20;
  a2[2] = v21 + (v15 + 2 * (v15 + 1)) / 4;
  a2[1] = v22;
  result = (unsigned int)(v22 + (v17 - v18 + 2 * (v17 - v18 + 1)) / 4);
  a2[3] = result;
  return result;
}
