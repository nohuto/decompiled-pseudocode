/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00A538C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0015ADC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0015DE0 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00162E8 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
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
  struct tagPOINT v11; // r8
  char v12; // r11
  __int64 v13; // r10
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __m128i v15; // xmm0
  int y_low; // eax
  _BYTE v17[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+30h] [rbp-10h]
  struct tagPOINT v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v20 = (struct tagPOINT)a4;
  v21 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)&a3 + 56LL);
  if ( (v7 & 8) != 0 || (v7 & 0x10000) != 0 )
    goto LABEL_2;
  if ( (v7 & 4) == 0 )
  {
    CMouseProcessor::GetMouseCoord(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      &v20,
      (struct _SUBPIXELS *)&v21);
LABEL_7:
    v11 = v20;
    goto LABEL_8;
  }
  v21 = 0LL;
  v20 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v17);
  v12 = gptInd;
  v11 = v20;
  v13 = 3LL * (unsigned int)gptInd;
  Next = gpInputConfig[4].Next[3].Next;
  v15 = _mm_srli_si128(*(__m128i *)&gpInputConfig[4].Next[3].Next, 8);
  y_low = LOWORD(v20.y);
  *((_DWORD *)&gaptMouse + 2 * v13) = LOWORD(v20.x) | ((unsigned __int16)(v15.m128i_i16[0] - (_WORD)Next - 1) << 16);
  *((_DWORD *)&gaptMouse + 2 * v13 + 1) = y_low | ((unsigned __int16)(v15.m128i_i16[2] - WORD2(Next) - 1) << 16);
  *((_DWORD *)&gaptMouse + 2 * v13 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 40LL);
  *((_QWORD *)&gaptMouse + v13 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
  gptInd = (v12 + 1) & 0x3F;
  if ( !v19 )
  {
    ExReleasePushLockSharedEx(v18, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_7;
  }
LABEL_8:
  if ( a5
    && !*(_WORD *)(*(_QWORD *)&a3 + 4LL)
    && !*((_WORD *)a5 + 2)
    && ((*((_BYTE *)a5 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) == 0 )
  {
    *a2 = v11;
    return (struct tagPOINT)a2;
  }
  CMouseProcessor::CommitMousePosAndMoveCursor(this, *(struct CMouseProcessor::MouseInputDataEx **)&a3, v11);
  v20 = gptCursorAsync;
LABEL_2:
  CMouseProcessor::QueueMouseEvent(
    this,
    *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
    (const struct _SUBPIXELS *)&v21,
    a6);
  *a2 = v20;
  return (struct tagPOINT)a2;
}
