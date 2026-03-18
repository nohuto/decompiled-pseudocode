/*
 * XREFs of PiHotSwapGetDefaultBusRemovalPolicy @ 0x140605B7C
 * Callers:
 *     PpHotSwapUpdateRemovalPolicy @ 0x1405E6214 (PpHotSwapUpdateRemovalPolicy.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 */

void __fastcall PiHotSwapGetDefaultBusRemovalPolicy(__int64 a1, int *a2)
{
  int v4; // ebx
  __int64 v5; // rcx

  if ( *(_WORD *)(a1 + 40) <= 8u || wcsnicmp(*(const wchar_t **)(a1 + 48), L"USB\\", 4uLL) )
  {
    v4 = 5;
    if ( (*(_WORD *)(a1 + 40) <= 0xAu
       || wcsnicmp(*(const wchar_t **)(a1 + 48), L"1394\\", 5uLL)
       && (*(_WORD *)(a1 + 40) <= 0xAu || wcsnicmp(*(const wchar_t **)(a1 + 48), L"SBP2\\", 5uLL)))
      && (*(_WORD *)(a1 + 40) <= 0xEu || wcsnicmp(*(const wchar_t **)(a1 + 48), L"PCMCIA\\", 7uLL)) )
    {
      if ( *(_WORD *)(a1 + 40) <= 8u
        || wcsnicmp(*(const wchar_t **)(a1 + 48), L"PCI\\", 4uLL)
        || (v5 = *(_QWORD *)(a1 + 16), *(_WORD *)(v5 + 56) != 12)
        || wcsicmp(*(const wchar_t **)(v5 + 64), L"PCMCIA") )
      {
        v4 = 4;
      }
    }
  }
  else
  {
    v4 = 5;
  }
  *a2 = v4;
}
