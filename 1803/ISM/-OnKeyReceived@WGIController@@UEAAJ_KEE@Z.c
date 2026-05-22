/*
 * XREFs of ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800796C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x180079B58 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z @ 0x18007A194 (-NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall WGIController::OnKeyReceived(WGIController *this, __int64 a2, unsigned __int8 a3, char a4)
{
  _DWORD *v7; // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER v10; // [rsp+30h] [rbp-D0h]
  int v11; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+208h] [rbp+108h]
  __int16 v13; // [rsp+22Ah] [rbp+12Ah]
  __int16 v14; // [rsp+22Ch] [rbp+12Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+710h] [rbp+610h] BYREF

  if ( *((_QWORD *)this + 18) )
  {
    if ( a3 == 91 )
    {
      WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 16), 1);
    }
    else
    {
      QueryPerformanceCounter(&PerformanceCount);
      memset_0(v9, 0, 0x6C8uLL);
      v7 = (_DWORD *)*((_QWORD *)this + 18);
      v11 = 1736;
      v9[0] = 4;
      v9[1] = *v7;
      v9[2] = GetTickCount();
      v10 = PerformanceCount;
      v12 = *((_QWORD *)this + 15);
      v13 = a3;
      v14 = 65 - (a4 != 0);
      WGIController::NotifyInputReport((WGIController *)((char *)this - 16), (struct LegacyInputInfo *)v9);
    }
  }
  else
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return 0LL;
}
