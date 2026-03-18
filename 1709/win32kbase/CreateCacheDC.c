/*
 * XREFs of CreateCacheDC @ 0x1C0057050
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     GreMarkUndeletableDC @ 0x1C0057230 (GreMarkUndeletableDC.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 */

__int64 __fastcall CreateCacheDC(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  HDC DisplayDC; // rbp
  __int64 StyleWindow; // rdx
  unsigned int v10; // eax
  __int64 v12; // rcx

  v6 = Win32AllocPool(96LL, 0x63647355u);
  if ( !v6 )
    return 0LL;
  if ( a3 )
    v7 = *(_QWORD *)(a3 + 232);
  else
    v7 = *(_QWORD *)(gpDispInfo + 32);
  DisplayDC = GreCreateDisplayDC(v7, 0, 0);
  if ( !DisplayDC )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() < 0 )
      StyleWindow = 0LL;
    else
      StyleWindow = GetStyleWindow(a1, 2848LL);
    v10 = a2 & 0xFFFFBFFF;
    if ( StyleWindow )
      v10 = a2;
    a2 = v10;
  }
  else
  {
    StyleWindow = 0LL;
  }
  *(_QWORD *)v6 = *(_QWORD *)(gpDispInfo + 16);
  *(_QWORD *)(gpDispInfo + 16) = v6;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 8) = DisplayDC;
  *(_DWORD *)(v6 + 64) = a2;
  *(_QWORD *)(v6 + 16) = a1;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = StyleWindow;
  *(_QWORD *)(v6 + 88) = a3;
  GreMarkUndeletableDC(DisplayDC);
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx((struct HOBJ__ *)DisplayDC, 2147483650LL, 0LL, 1LL);
    *(_QWORD *)(v6 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 312) = v6;
    if ( (a2 & 0x4000) != 0 && (int)IsUpdateRedirectedDCESupported() >= 0 )
      UpdateRedirectedDCE(v6, 0LL);
  }
  else
  {
    GreSetDCOwnerEx((struct HOBJ__ *)DisplayDC, 2147483666LL, 0LL, 1LL);
    *(_QWORD *)(v6 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 168);
    if ( (*(_BYTE *)(v12 + 100) & 0x40) != 0 )
      *(_QWORD *)(v12 + 24) = v6;
    *(_DWORD *)(v6 + 64) |= 0x1000u;
    if ( (int)IsRevalidateDCESupported() >= 0 )
      RevalidateDCE(v6);
  }
  if ( *(_QWORD *)(gpDispInfo + 24) )
    GreGetBounds(*(HDC *)(v6 + 8));
  return *(_QWORD *)(v6 + 8);
}
