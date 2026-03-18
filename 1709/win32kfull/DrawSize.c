/*
 * XREFs of DrawSize @ 0x1C0210548
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C023A580 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  HDC v6; // rbp
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  bool v14; // zf
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD v20[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h]

  v6 = (HDC)a2;
  if ( (*(_BYTE *)(a1 + 65) & 0x40) == 0 )
  {
    DpiForSystem = GetDpiForSystem(a1, a2);
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
    a2 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - a3;
    a3 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - a3 - DpiDependentMetric;
  }
  v10 = GetDpiForSystem(a1, a2);
  v13 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132) - a4 - GetDpiDependentMetric(1LL, v10);
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29A )
    v14 = (*(_BYTE *)(a1 + 68) & 0x10) == 0;
  else
    v14 = SizeBoxHwnd(a1) == 0;
  if ( !v14 )
    return BitBltSysBmp(v6, a3, v13, (*(_BYTE *)(a1 + 65) & 0x40) != 0 ? 91 : 45);
  v20[0] = a3;
  v20[1] = v13;
  v15 = GetDpiForSystem(v12, v11);
  v20[2] = GetDpiDependentMetric(0LL, v15);
  v18 = GetDpiForSystem(v17, v16);
  v20[3] = GetDpiDependentMetric(1LL, v18);
  v21 = *(_QWORD *)(gpsi + 4800LL);
  return GrePolyPatBlt(v6, 15728673, (struct _POLYPATBLT *)v20, 1);
}
