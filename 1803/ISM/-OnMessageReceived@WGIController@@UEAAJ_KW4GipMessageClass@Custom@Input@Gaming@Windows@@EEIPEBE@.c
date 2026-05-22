/*
 * XREFs of ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800797D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x180079B58 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z @ 0x18007A194 (-NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
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
  _DWORD v14[4]; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C8h]
  __int64 v17; // [rsp+210h] [rbp+108h]
  char v18; // [rsp+228h] [rbp+120h]
  int v19; // [rsp+230h] [rbp+128h]
  char v20; // [rsp+234h] [rbp+12Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+718h] [rbp+610h] BYREF

  WGIController::NotifyCurrentGamepadReading((WGIController *)(a1 - 16), 1);
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
        memset_0(v14, 0, 0x6C8uLL);
        v11 = *(_DWORD **)(a1 + 144);
        v16 = 1736;
        v14[0] = 128;
        v14[1] = *v11;
        TickCount = GetTickCount();
        v18 = 1;
        v14[2] = TickCount;
        v15 = PerformanceCount;
        v17 = *(_QWORD *)(a1 + 120);
        v20 = 1;
        v19 = v10 + 44;
        WGIController::NotifyInputReport((WGIController *)(a1 - 16), (struct LegacyInputInfo *)v14);
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 0x11 );
  }
  return 0LL;
}
