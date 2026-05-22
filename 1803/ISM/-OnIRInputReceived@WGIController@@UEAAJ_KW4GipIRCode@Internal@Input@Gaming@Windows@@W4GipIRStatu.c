/*
 * XREFs of ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x1800798F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z @ 0x18007A194 (-NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
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
  _DWORD v26[4]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+208h] [rbp+108h]
  char v30; // [rsp+220h] [rbp+120h]
  int v31; // [rsp+228h] [rbp+128h]
  char v32; // [rsp+22Ch] [rbp+12Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+700h] [rbp+600h] BYREF

  if ( *(_QWORD *)(a1 + 136) )
  {
    if ( a4 == 1 )
    {
      if ( a3 > 70 )
      {
        v17 = a3 - 72;
        if ( v17 )
        {
          v18 = v17 - 5;
          if ( v18 )
          {
            v19 = v18 - 35;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  v22 = v21 - 2;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      return 0LL;
                    v5 = 44;
                  }
                  else
                  {
                    v5 = 43;
                  }
                }
                else
                {
                  v5 = 42;
                }
              }
              else
              {
                v5 = 41;
              }
            }
            else
            {
              v5 = 25;
            }
          }
          else
          {
            v5 = 29;
          }
        }
        else
        {
          v5 = 40;
        }
      }
      else if ( a3 == 70 )
      {
        v5 = 39;
      }
      else
      {
        v5 = 23;
        if ( a3 > 23 )
        {
          v12 = a3 - 24;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 10;
                  if ( v16 )
                  {
                    if ( v16 != 1 )
                      return 0LL;
                    v5 = 14;
                  }
                  else
                  {
                    v5 = 28;
                  }
                }
              }
              else
              {
                v5 = 22;
              }
            }
            else
            {
              v5 = 24;
            }
          }
          else
          {
            v5 = 18;
          }
        }
        else if ( a3 == 23 )
        {
          v5 = 19;
        }
        else
        {
          v6 = a3 - 14;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  v10 = v9 - 3;
                  if ( v10 )
                  {
                    v11 = v10 - 1;
                    if ( v11 )
                    {
                      if ( v11 != 1 )
                        return 0LL;
                      v5 = 17;
                    }
                    else
                    {
                      v5 = 21;
                    }
                  }
                  else
                  {
                    v5 = 20;
                  }
                }
                else
                {
                  v5 = 6;
                }
              }
              else
              {
                v5 = 5;
              }
            }
            else
            {
              v5 = 27;
            }
          }
          else
          {
            v5 = 26;
          }
        }
      }
      QueryPerformanceCounter(&PerformanceCount);
      memset_0(v26, 0, 0x6C8uLL);
      v23 = *(_DWORD **)(a1 + 136);
      v28 = 1736;
      v26[0] = 128;
      v26[1] = *v23;
      TickCount = GetTickCount();
      v30 = 1;
      v26[2] = TickCount;
      v27 = PerformanceCount;
      v29 = *(_QWORD *)(a1 + 112);
      v31 = v5;
      v32 = 1;
      WGIController::NotifyInputReport((WGIController *)(a1 - 24), (struct LegacyInputInfo *)v26);
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
