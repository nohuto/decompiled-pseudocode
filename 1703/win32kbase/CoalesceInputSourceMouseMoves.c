/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C0045220
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDes.c)
 *     ?MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0045C28 (-MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     PostPendingMouseMove @ 0x1C007FE20 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1C0080A10 (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 85) & 0x20) == 0 )
    {
LABEL_3:
      *((_DWORD *)a1 + 93) = *a2;
      *((_DWORD *)a1 + 94) = a2[1];
      return;
    }
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 372) )
    {
      if ( (*((_DWORD *)a1 + 94) & 0xFFFFFFFB) != 0 )
      {
        if ( (a2[1] & 0xFFFFFFFB) != 0 )
        {
          if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 1) == 0 )
            PostPendingMouseMove(a1);
          goto LABEL_3;
        }
      }
      else if ( (a2[1] & 0xFFFFFFFB) != 0 )
      {
        goto LABEL_3;
      }
    }
  }
}
