/*
 * XREFs of vIFIMetricsToLogFontW @ 0x1C0285F84
 * Callers:
 *     GetFontResourceInfoInternalW @ 0x1C02B6748 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C002FAE8 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C002FB3C (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 */

errno_t __fastcall vIFIMetricsToLogFontW(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  errno_t result; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  if ( (*(_DWORD *)(a2 + 48) & 0x3000010) != 0 )
  {
    *(_DWORD *)a1 = -24;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else
  {
    *(_DWORD *)a1 = *(__int16 *)(a2 + 60) + *(__int16 *)(a2 + 62);
    *(_DWORD *)(a1 + 4) = *(__int16 *)(a2 + 76);
  }
  *(_DWORD *)(a1 + 16) = *(unsigned __int16 *)(a2 + 46);
  *(_BYTE *)(a1 + 20) = -((*(_BYTE *)(a2 + 52) & 1) != 0);
  *(_BYTE *)(a1 + 21) = *(_BYTE *)(a2 + 52) & 2;
  *(_BYTE *)(a1 + 22) = *(_BYTE *)(a2 + 52) & 0x10;
  *(_DWORD *)(a1 + 8) = IFIOBJ::lfOrientation((IFIOBJ *)v6);
  *(_DWORD *)(a1 + 12) = IFIOBJ::lfOrientation((IFIOBJ *)v6);
  v4 = *(int *)(a2 + 40);
  if ( (_DWORD)v4 )
    *(_BYTE *)(a1 + 23) = *(_BYTE *)(v4 + a2);
  else
    *(_BYTE *)(a1 + 23) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 24) = IFIOBJ::lfOutPrecision((IFIOBJ *)v6);
  *(_WORD *)(a1 + 25) = 512;
  *(_BYTE *)(a1 + 27) = *(_BYTE *)(a2 + 45);
  result = wcsncpy_s((wchar_t *)(a1 + 28), 0x20uLL, (const wchar_t *)(a2 + *(int *)(a2 + 8)), 0x1FuLL);
  *(_WORD *)(a1 + 90) = 0;
  return result;
}
