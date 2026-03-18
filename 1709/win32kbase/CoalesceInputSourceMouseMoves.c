/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C0017CC0
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0013B90 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C00149DC (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMo.c)
 * Callees:
 *     PostPendingMouseMove @ 0x1C0012B40 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1C00182F0 (IsEqualInputSource.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 95) & 0x20) == 0 )
    {
LABEL_3:
      *((_DWORD *)a1 + 103) = *a2;
      *((_DWORD *)a1 + 104) = a2[1];
      return;
    }
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 412, a2) )
    {
      if ( (*((_DWORD *)a1 + 104) & 0xFFFFFFFB) != 0 )
      {
        if ( (a2[1] & 0xFFFFFFFB) != 0 )
        {
          if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v4, v5, v6) + 464) & 1) == 0 )
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
