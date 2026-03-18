/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00FC2A0
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00FB730 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00FBAC0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00FBD40 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00FBFC0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C01FD000 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     _WindowFromDC @ 0x1C00F8870 (_WindowFromDC.c)
 */

__int64 __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  __int64 DCEx; // rbp
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  struct tagWND *v12; // rbx
  __int64 *DPIMETRICS; // rax
  __int64 v14; // rbx
  int TextAlign; // edx
  __int64 v16; // r8
  _DWORD *v17; // rax

  v5 = a3;
  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    if ( a1 )
    {
      v11 = WindowFromDC(a1);
      v12 = v11;
      if ( v11 )
      {
        DCEx = _GetDCEx(v11, 0LL, 65539LL);
        GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4736LL));
        DPIMETRICS = (__int64 *)GetDPIMETRICS(v12);
        GreSelectFont(DCEx, *DPIMETRICS);
        v14 = ValidateHmenu(a2);
        if ( v14 )
        {
          TextAlign = GreGetTextAlign(a1);
          if ( a4 && (v16 = *(_QWORD *)(v14 + 96)) != 0 )
          {
            if ( (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v14 + 68) )
              v17 = 0LL;
            else
              v17 = (_DWORD *)(v16 + 152 * v5);
          }
          else
          {
            v17 = *(_DWORD **)(v14 + 96);
          }
          if ( v17 && (*v17 & 0x2000) != 0 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
  }
  return DCEx;
}
