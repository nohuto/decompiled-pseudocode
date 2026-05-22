/*
 * XREFs of ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x1800A0D70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800A1984 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall WGIController::OnIRInputReceived(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  _DWORD *v23; // rax
  DWORD TickCount; // eax
  _QWORD v26[356]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B60h] [rbp+A60h] BYREF

  if ( !*(_QWORD *)(a1 + 136) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 745, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( a4 == 1 )
  {
    if ( a3 > 70 )
    {
      v17 = a3 - 72;
      if ( !v17 )
      {
        v5 = 40;
        goto LABEL_53;
      }
      v18 = v17 - 5;
      if ( !v18 )
      {
        v5 = 29;
        goto LABEL_53;
      }
      v19 = v18 - 35;
      if ( !v19 )
      {
        v5 = 25;
        goto LABEL_53;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v5 = 41;
        goto LABEL_53;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v5 = 42;
        goto LABEL_53;
      }
      v22 = v21 - 2;
      if ( !v22 )
      {
        v5 = 43;
        goto LABEL_53;
      }
      if ( v22 == 1 )
      {
        v5 = 44;
        goto LABEL_53;
      }
    }
    else
    {
      if ( a3 == 70 )
      {
        v5 = 39;
        goto LABEL_53;
      }
      v5 = 23;
      if ( a3 > 23 )
      {
        v12 = a3 - 24;
        if ( !v12 )
        {
          v5 = 18;
          goto LABEL_53;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v5 = 24;
          goto LABEL_53;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v5 = 22;
          goto LABEL_53;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
LABEL_53:
          QueryPerformanceCounter(&PerformanceCount);
          memset(v26, 0, sizeof(v26));
          v23 = *(_DWORD **)(a1 + 136);
          LODWORD(v26[0]) = 128;
          HIDWORD(v26[0]) = *v23;
          TickCount = GetTickCount();
          LODWORD(v26[5]) = 2848;
          LODWORD(v26[1]) = TickCount;
          v26[2] = PerformanceCount.QuadPart;
          v26[83] = *(_QWORD *)(a1 + 112);
          BYTE1(v26[86]) = 1;
          LODWORD(v26[87]) = v5;
          BYTE4(v26[87]) = 1;
          WGIController::NotifyInputReport((WGIController *)(a1 - 24), (struct InputInfo *)v26);
          return 0LL;
        }
        v16 = v15 - 10;
        if ( !v16 )
        {
          v5 = 28;
          goto LABEL_53;
        }
        if ( v16 == 1 )
        {
          v5 = 14;
          goto LABEL_53;
        }
      }
      else
      {
        if ( a3 == 23 )
        {
          v5 = 19;
          goto LABEL_53;
        }
        v6 = a3 - 14;
        if ( !v6 )
        {
          v5 = 26;
          goto LABEL_53;
        }
        v7 = v6 - 1;
        if ( !v7 )
        {
          v5 = 27;
          goto LABEL_53;
        }
        v8 = v7 - 1;
        if ( !v8 )
        {
          v5 = 5;
          goto LABEL_53;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
          v5 = 6;
          goto LABEL_53;
        }
        v10 = v9 - 3;
        if ( !v10 )
        {
          v5 = 20;
          goto LABEL_53;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          v5 = 21;
          goto LABEL_53;
        }
        if ( v11 == 1 )
        {
          v5 = 17;
          goto LABEL_53;
        }
      }
    }
  }
  return 0LL;
}
