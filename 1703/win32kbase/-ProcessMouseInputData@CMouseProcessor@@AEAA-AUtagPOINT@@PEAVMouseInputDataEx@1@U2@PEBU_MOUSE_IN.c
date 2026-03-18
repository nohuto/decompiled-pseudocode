/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0047480
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z @ 0x1C00476F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C009A08C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0046C60 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0046F54 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00473CC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        const struct _MOUSE_INPUT_DATA *a4,
        const struct tagUIPI_INFO_INT *a5,
        struct tagUIPI_INFO_INT *a6)
{
  int v7; // eax
  char v11; // r9
  _WORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  struct tagPOINT v15; // [rsp+50h] [rbp+18h]

  *a2 = (struct tagPOINT)a4;
  v14 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)&a3 + 56LL);
  if ( (v7 & 8) != 0 || (v7 & 0x10000) != 0 )
    goto LABEL_7;
  if ( (v7 & 4) != 0 )
  {
    v14 = 0LL;
    v15 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
    *a2 = v15;
    v11 = gptInd;
    v12 = gpsi;
    v13 = 3LL * (unsigned int)gptInd;
    *((_DWORD *)&gaptMouse + 2 * v13) = LOWORD(a2->x) | ((unsigned __int16)(*((_WORD *)gpsi + 1096) - 1) << 16);
    *((_DWORD *)&gaptMouse + 2 * v13 + 1) = LOWORD(a2->y) | ((unsigned __int16)(v12[1098] - 1) << 16);
    *((_DWORD *)&gaptMouse + 2 * v13 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 40LL);
    *((_QWORD *)&gaptMouse + v13 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
    gptInd = (v11 + 1) & 0x3F;
  }
  else
  {
    CMouseProcessor::GetMouseCoord(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      a2,
      (struct _SUBPIXELS *)&v14);
  }
  if ( !a5
    || *(_WORD *)(*(_QWORD *)&a3 + 4LL)
    || *((_WORD *)a5 + 2)
    || (*(_BYTE *)(*(_QWORD *)&a3 + 2LL) & 1) != (*((_BYTE *)a5 + 2) & 1) )
  {
    CMouseProcessor::CommitMousePosAndMoveCursor(this, *(struct CMouseProcessor::MouseInputDataEx **)&a3, *a2);
    *a2 = gptCursorAsync;
LABEL_7:
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&v14,
      a6);
  }
  return (struct tagPOINT)a2;
}
