/*
 * XREFs of ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800A0C50
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x1800A0FF4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800A1984 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall WGIController::OnMessageReceived(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v8; // edi
  unsigned __int8 *v9; // rbx
  unsigned __int8 v10; // r14
  _DWORD *v11; // rax
  DWORD TickCount; // eax
  _QWORD v14[356]; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B68h] [rbp+A60h] BYREF

  WGIController::NotifyCurrentGamepadReading((WGIController *)(a1 - 16));
  if ( *(_BYTE *)(a1 + 216) && a6 >= 0x31 )
  {
    v8 = 0;
    v9 = (unsigned __int8 *)(a7 + 32);
    do
    {
      v10 = *v9;
      if ( *v9 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        memset(v14, 0, sizeof(v14));
        v11 = *(_DWORD **)(a1 + 144);
        LODWORD(v14[0]) = 128;
        HIDWORD(v14[0]) = *v11;
        TickCount = GetTickCount();
        LODWORD(v14[5]) = 2848;
        LODWORD(v14[1]) = TickCount;
        v14[2] = PerformanceCount.QuadPart;
        v14[83] = *(_QWORD *)(a1 + 120);
        BYTE1(v14[86]) = 1;
        LODWORD(v14[87]) = v10 + 44;
        BYTE4(v14[87]) = 1;
        WGIController::NotifyInputReport((WGIController *)(a1 - 16), (struct InputInfo *)v14);
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 0x11 );
  }
  return 0LL;
}
