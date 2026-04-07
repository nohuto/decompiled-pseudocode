/*
 * XREFs of ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x1800864A4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F620 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18008657C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmWinSqm::RecordMinimizedWndRatio(CDwmWinSqm *this)
{
  DWORD TickCount; // ebx
  int v2; // ecx
  float v3; // xmm1_4
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  TickCount = GetTickCount();
  v2 = TickCount - dword_1800C447C;
  if ( TickCount < dword_1800C447C )
    --v2;
  if ( v2 )
  {
    v4 = 1;
    v8 = 0;
    v6 = 1LL;
    v3 = *(double *)&xmmword_1800C4488 / (double)v2;
    v5 = (unsigned int)(int)(float)(v3 + 0.5);
    v7 = (int)(float)((float)(*((double *)&xmmword_1800C4488 + 1) / (double)v2) + 0.5);
    WinSqmAddToStream(0LL, 3332LL, 2LL, &v4);
  }
  dword_1800C447C = TickCount;
  xmmword_1800C4488 = 0LL;
}
