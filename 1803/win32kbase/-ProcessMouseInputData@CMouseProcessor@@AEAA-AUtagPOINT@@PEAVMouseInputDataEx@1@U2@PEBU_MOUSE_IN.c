/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00394DC
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01351B4 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0038F68 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00393F8 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0055930 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0135A50 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        const struct _MOUSE_INPUT_DATA *a4,
        const struct tagUIPI_INFO_INT *a5,
        struct tagUIPI_INFO_INT *a6)
{
  char v9; // r11
  struct tagPOINT v10; // r8
  __int64 v11; // r10
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __m128i v13; // xmm0
  int y_low; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  char v18; // [rsp+30h] [rbp-10h]
  struct tagPOINT v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v20 = *((_QWORD *)this + 306);
  v19 = (struct tagPOINT)a4;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          8LL)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          0x10000LL) )
  {
    goto LABEL_14;
  }
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a3,
                           4LL) )
  {
    CMouseProcessor::GetMouseCoord(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      &v19,
      (struct _SUBPIXELS *)&v20);
    goto LABEL_7;
  }
  v20 = 0LL;
  v19 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v16);
  v9 = gptInd;
  v10 = v19;
  v11 = 3LL * (unsigned int)gptInd;
  Next = gpInputConfig[4].Next[3].Next;
  v13 = _mm_srli_si128(*(__m128i *)&gpInputConfig[4].Next[3].Next, 8);
  y_low = LOWORD(v19.y);
  *((_DWORD *)&gaptMouse + 2 * v11) = LOWORD(v19.x) | ((unsigned __int16)(v13.m128i_i16[0] - (_WORD)Next - 1) << 16);
  *((_DWORD *)&gaptMouse + 2 * v11 + 1) = y_low | ((unsigned __int16)(v13.m128i_i16[2] - WORD2(Next) - 1) << 16);
  *((_DWORD *)&gaptMouse + 2 * v11 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 40LL);
  *((_QWORD *)&gaptMouse + v11 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
  gptInd = (v9 + 1) & 0x3F;
  if ( !v18 )
  {
    GreLeaveCriticalRegionAndReleasePushLockShared(v17);
LABEL_7:
    v10 = v19;
  }
  if ( !a5
    || *(_WORD *)(*(_QWORD *)&a3 + 4LL)
    || *((_WORD *)a5 + 2)
    || ((*((_BYTE *)a5 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) != 0 )
  {
    CMouseProcessor::CommitMousePosAndMoveCursor(this, *(struct CMouseProcessor::MouseInputDataEx **)&a3, v10);
    v19 = gptCursorAsync;
LABEL_14:
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&v20,
      a6);
    *a2 = v19;
    return (struct tagPOINT)a2;
  }
  *a2 = v10;
  return (struct tagPOINT)a2;
}
