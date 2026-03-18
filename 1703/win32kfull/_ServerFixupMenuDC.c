/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00EF1B4
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00EE6B0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00EEA30 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00EEC90 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00EEEF0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C01FB4C0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     _WindowFromDC @ 0x1C0048E30 (_WindowFromDC.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

HDC __fastcall ServerFixupMenuDC(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  HDC DCEx; // rbp
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rbx
  int TextAlign; // edx
  __int64 v14; // r8
  _DWORD *v15; // rax

  v5 = a3;
  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    if ( a1 )
    {
      v10 = WindowFromDC(a1);
      v11 = v10;
      if ( v10 )
      {
        DCEx = (HDC)_GetDCEx(v10, 0LL, 65539LL);
        GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 5144LL));
        GetDPIMETRICS(v11);
        GreSelectFontInternal(DCEx);
        v12 = ValidateHmenu(a2);
        if ( v12 )
        {
          TextAlign = GreGetTextAlign((HDC)a1);
          if ( a4 && (v14 = *(_QWORD *)(v12 + 96)) != 0 )
          {
            if ( (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v12 + 68) )
              v15 = 0LL;
            else
              v15 = (_DWORD *)(v14 + 152 * v5);
          }
          else
          {
            v15 = *(_DWORD **)(v12 + 96);
          }
          if ( v15 && (*v15 & 0x2000) != 0 )
            GreSetTextAlign((HDC)a1, TextAlign | 0x100);
        }
      }
    }
  }
  return DCEx;
}
