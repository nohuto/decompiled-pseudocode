/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C012AFE0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C012AC48 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C012B098 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(unsigned __int8 a1, char a2)
{
  int v4; // ebx

  _InterlockedExchange64(&qword_1C0196050, KeQueryPerformanceCounter(0LL).QuadPart);
  v4 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C018F5B0) & 0x40) != 0
    || (BYTE7(xmmword_1C018F5B0) & 1) != 0 )
  {
    if ( !dword_1C019605C )
    {
      _InterlockedExchange64(&qword_1C0196040, 0LL);
      _InterlockedExchange64(&qword_1C0196048, 0LL);
      _InterlockedExchange64(&qword_1C01961F0, 0LL);
      _InterlockedExchange64(&qword_1C01961F8, 0LL);
    }
  }
  else
  {
    v4 = 0;
    if ( CPTPProcessor::IsOurKey(a1, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C019605C = v4;
}
