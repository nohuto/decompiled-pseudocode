/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0038F68
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00394DC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C003A5C4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C006A0D8 (ApiSetEditionCommitMousePosAndMove.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3)
{
  bool v3; // zf
  BOOL v6; // esi
  BOOL v7; // edi
  BOOL v8; // ebx
  char v9; // al
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  struct tagPOINT v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]

  v3 = *((_DWORD *)a2 + 18) == 0;
  v14 = a3;
  if ( v3 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    *(_DWORD *)((char *)&v15 + 2) = *(_DWORD *)((char *)a2 + 2);
    HIWORD(v15) = *((_WORD *)a2 + 3);
    HIDWORD(v16) = *((_DWORD *)a2 + 3);
    v17 = *((_QWORD *)a2 + 2);
    LODWORD(v16) = *((_DWORD *)a2 + 2);
    v6 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL) == 1;
    v7 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 2LL) == 0;
    v8 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x2000LL) == 0;
    v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x20000LL);
    v10 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v14,
            *((_DWORD *)a2 + 5),
            (unsigned int)&v15,
            (int)a2 + 24,
            *((_DWORD *)a2 + 10),
            *((_QWORD *)a2 + 6),
            v6,
            v7,
            v8,
            v9 == 1);
  }
  else
  {
    v10 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v14, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0);
  }
  v13 = v10;
  if ( v10 && (v10 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  *((_DWORD *)a2 + 15) = v13;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
    *(_OWORD *)((char *)this + 2520) = *(_OWORD *)((char *)a2 + 40);
}
