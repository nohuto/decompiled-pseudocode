/*
 * XREFs of ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007D8A4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028460 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007D97C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
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
  v2 = TickCount - dword_1800C250C;
  if ( TickCount < dword_1800C250C )
    --v2;
  if ( v2 )
  {
    v4 = 1;
    v8 = 0;
    v6 = 1LL;
    v3 = *(double *)&xmmword_1800C2518 / (double)v2;
    v5 = (unsigned int)(int)(float)(v3 + 0.5);
    v7 = (int)(float)((float)(*((double *)&xmmword_1800C2518 + 1) / (double)v2) + 0.5);
    WinSqmAddToStream(0LL, 3332LL, 2LL, &v4);
  }
  dword_1800C250C = TickCount;
  xmmword_1800C2518 = 0LL;
}
