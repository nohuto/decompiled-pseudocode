/*
 * XREFs of TtmpPushTerminalState @ 0x140771654
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140770C10 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpCallSetBuiltinPanelState @ 0x140770E98 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x140770F20 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140770FC8 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x140771914 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmiGetTerminalById @ 0x140771C48 (TtmiGetTerminalById.c)
 */

char __fastcall TtmpPushTerminalState(int *a1, __int64 a2)
{
  char v2; // bl
  int TerminalById; // eax
  __int64 v6; // r15
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // r8d
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( (*(_QWORD *)(a2 + 56) || *(_QWORD *)(a2 + 64)) && *(_DWORD *)(a2 + 596) != -1 )
  {
    TerminalById = TtmiGetTerminalById(&v11, a1);
    if ( TerminalById >= 0 )
    {
      v6 = v11;
      v7 = *(_DWORD *)(v11 + 268);
      if ( (a1[1] & 8) != 0 || v7 - 2 > 1 )
      {
        if ( v7 <= 1 )
          TtmpCallSetBuiltinPanelState(a1, a2, 0);
        TtmpCallSetDisplayState((int)a1, a2, v7);
        v8 = 2;
        if ( v7 == 2 )
        {
          TtmpCallSetBuiltinPanelState(a1, a2, 2u);
        }
        else if ( v7 == 3 )
        {
          TtmpCallSetBuiltinPanelState(a1, a2, 1u);
          v8 = 1;
        }
        else
        {
          v8 = 0;
        }
        TtmpUpdatePrimaryDisplayWnf(a1, a2, v8);
        if ( (*(_DWORD *)(a2 + 600) & 0x80u) == 0 )
          v9 = 0;
        else
          v9 = *(_DWORD *)(v6 + 44);
        TtmpCallSetInputMode((int)a1, a2, v9);
      }
      else
      {
        return 1;
      }
    }
    else
    {
      TtmiLogError("TtmpPushTerminalState", 2559, TerminalById, -1);
    }
  }
  return v2;
}
