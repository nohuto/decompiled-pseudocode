/*
 * XREFs of EtwTraceWakePump @ 0x1C0017BF0
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0013B90 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C00149DC (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqq @ 0x1C00E1F9C (McTemplateK0cppppqq.c)
 */

void __fastcall EtwTraceWakePump(char a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = a3;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    if ( a2 )
      v6 = *a2;
    else
      LOBYTE(v6) = 0;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4) )
      LOBYTE(v10) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v7, v9, v10) + 1196);
    else
      LOBYTE(v10) = -1;
    McTemplateK0cppppqq(v8, (unsigned int)&WakePump, v9, v10, a1, v6, 0, 0, v4, 0);
  }
}
