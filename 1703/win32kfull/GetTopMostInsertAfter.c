/*
 * XREFs of GetTopMostInsertAfter @ 0x1C01A3DA4
 * Callers:
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C001F65C (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 */

__int64 __fastcall GetTopMostInsertAfter(__int64 a1)
{
  PVOID v1; // rax
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rcx

  if ( (((*(_WORD *)(a1 + 82) & 0x3FFF) - 668) & 0xFFFB) != 0
    && gptiCurrent != gHardErrorHandler
    && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x200000) == 0 )
  {
    v1 = *(PVOID *)(gptiCurrent + 408LL);
    if ( v1 != grpdeskLogon && v1 == *(PVOID *)(gHardErrorHandler + 408LL) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      if ( DesktopWindow == v3 )
      {
        for ( i = *(_QWORD *)(v3 + 112); i && (*(_BYTE *)(i + 64) & 8) != 0; i = *(_QWORD *)(i + 88) )
        {
          if ( v4 == *(_QWORD *)(i + 16) )
            return i;
        }
      }
    }
  }
  return 0LL;
}
