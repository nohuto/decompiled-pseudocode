/*
 * XREFs of ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020EC5C
 * Callers:
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C013B818 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011431C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall TooltipAnimate(struct tagTOOLTIPWND *a1)
{
  unsigned int v1; // ebx
  HDC TooltipDC; // rbp
  int v5; // r9d
  int v6; // esi
  int v7; // r11d
  int v8; // r10d
  int v9; // eax

  v1 = 0;
  if ( !*((_QWORD *)a1 + 6) )
    return 1LL;
  TooltipDC = GetTooltipDC(a1, 0LL);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 136LL) - *(_DWORD *)(*(_QWORD *)a1 + 128LL);
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 140LL) - *(_DWORD *)(*(_QWORD *)a1 + 132LL);
  v7 = (int)(v6
           * (((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 10))
           + 67)
     / 135;
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)a1 + 10) > 0x87
    || v7 == v6 )
  {
    NtGdiBitBltInternal(TooltipDC, 0, 0, v5, v6, *((HDC *)a1 + 2), 0, 0, -2134114272, 0, 0);
    v1 = 1;
  }
  else if ( *((_DWORD *)a1 + 11) != v7 )
  {
    v8 = *((_DWORD *)a1 + 8) & 1;
    *((_DWORD *)a1 + 11) = v7;
    v9 = 0;
    if ( !v8 )
      v9 = v6;
    NtGdiBitBltInternal(
      TooltipDC,
      0,
      v9 + v7 * (v8 - 1),
      v5,
      v7,
      *((HDC *)a1 + 2),
      0,
      v8 != 0 ? v6 - v7 : 0,
      -2134114272,
      0,
      0);
  }
  _ReleaseDC(TooltipDC);
  return v1;
}
