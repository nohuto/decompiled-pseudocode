/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0015DE0
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C0018CF4 (ApiSetEditionCommitMousePosAndMove.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3)
{
  unsigned int v5; // r10d
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  struct tagPOINT v10; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]

  v10 = a3;
  if ( *((_DWORD *)a2 + 18) )
  {
    v9 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v10, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0);
  }
  else
  {
    v5 = *((_DWORD *)a2 + 14);
    v6 = (_DWORD)a2 + 24;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    *(_DWORD *)((char *)&v11 + 2) = *(_DWORD *)((char *)a2 + 2);
    HIWORD(v11) = *((_WORD *)a2 + 3);
    HIDWORD(v12) = *((_DWORD *)a2 + 3);
    v7 = *((_DWORD *)a2 + 4);
    v8 = *((_DWORD *)a2 + 5);
    v13 = __PAIR64__(v8, v7);
    LODWORD(v12) = *((_DWORD *)a2 + 2);
    v9 = ApiSetEditionCommitMousePosAndMove(
           (unsigned int)&v10,
           v8,
           (unsigned int)&v11,
           v6,
           *((_DWORD *)a2 + 10),
           *((_QWORD *)a2 + 6),
           (v5 >> 4) & 1,
           (v5 & 2) == 0,
           (v5 & 0x2000) == 0,
           (v5 >> 17) & 1);
  }
  *((_DWORD *)a2 + 15) = v9;
  if ( (v9 & 1) != 0 )
    *(_OWORD *)((char *)this + 2664) = *(_OWORD *)((char *)a2 + 40);
}
