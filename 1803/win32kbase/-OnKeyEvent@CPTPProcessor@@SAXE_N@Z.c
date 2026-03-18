/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C0125A18
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C0125688 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C0125AD0 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(unsigned __int8 a1, char a2)
{
  int v4; // ebx

  _InterlockedExchange64(&qword_1C01A29D0, KeQueryPerformanceCounter(0LL).QuadPart);
  v4 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C01A0A30) & 0x40) != 0
    || (BYTE7(xmmword_1C01A0A30) & 1) != 0 )
  {
    if ( !dword_1C01A29DC )
    {
      _InterlockedExchange64(&qword_1C01A29C0, 0LL);
      _InterlockedExchange64(&qword_1C01A29C8, 0LL);
      _InterlockedExchange64(&qword_1C01A2BF0, 0LL);
      _InterlockedExchange64(&qword_1C01A2BF8, 0LL);
    }
  }
  else
  {
    v4 = 0;
    if ( CPTPProcessor::IsOurKey(a1, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C01A29DC = v4;
}
