/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D97B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800906CC (RtlDeCommitDebugInfo_0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F7520 @ 0x1800F7520 (sub_1800F7520.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(PRTL_DEBUG_INFORMATION Buffer)
{
  PRTL_DEBUG_INFORMATION v1; // rsi
  int v2; // ebx
  _RTL_PROCESS_LOCKS *v3; // rax
  _RTL_PROCESS_LOCKS *v4; // r14
  _QWORD *v6; // r12
  _UNKNOWN **v7; // r15
  _UNKNOWN **v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  bool v13; // cl
  _DWORD *v14; // [rsp+20h] [rbp-78h]
  _UNKNOWN **v15; // [rsp+28h] [rbp-70h]
  _QWORD *v16; // [rsp+30h] [rbp-68h]
  bool v18; // [rsp+A8h] [rbp+10h]
  bool v19; // [rsp+B0h] [rbp+18h]

  v1 = Buffer;
  v2 = 0;
  v3 = (_RTL_PROCESS_LOCKS *)RtlCommitDebugInfo_0(Buffer, 8uLL);
  v4 = v3;
  if ( !v3 )
    return 3221225495LL;
  v3->NumberOfLocks = 0;
  v19 = 0;
  v18 = 0;
  RtlAcquireSRWLockShared(&stru_18015C1F8);
  v6 = off_180155620;
  v16 = off_180155620;
  v7 = (_UNKNOWN **)off_180155620;
  v15 = (_UNKNOWN **)off_180155620;
  while ( v7 != &off_180155620 )
  {
    v8 = v7 - 2;
    v9 = RtlCommitDebugInfo_0(v1, 0x30uLL);
    v10 = v9;
    v14 = v9;
    if ( !v9 )
    {
      v2 = -1073741801;
LABEL_7:
      v1 = Buffer;
      break;
    }
    memset(v9, 0, 0x30uLL);
    *(_QWORD *)v10 = v8[1];
    *((_WORD *)v10 + 4) = *(_WORD *)v8;
    *((_WORD *)v10 + 5) = *((_WORD *)v8 + 1);
    if ( *((_WORD *)v10 + 4) )
    {
      if ( *((_WORD *)v10 + 4) == 1 )
      {
        v12 = v8[1];
        v10[7] = *(_DWORD *)(v12[11] + 36LL);
        *((_QWORD *)v10 + 2) = v12[9];
        v14[6] = *((_DWORD *)v12 + 17);
        v14[10] = *((_DWORD *)v12 + 12);
        v14[11] = *((_DWORD *)v12 + 16);
        v2 = 0;
        v13 = v18;
        v7 = v15;
        v6 = v16;
        goto LABEL_15;
      }
      if ( (unsigned __int8)sub_1800F7520() )
        __debugbreak();
    }
    else
    {
      v11 = v8[1];
      *((_QWORD *)v10 + 2) = v11[2];
      v10[6] = *((_DWORD *)v11 + 2);
      v10[9] = *((_DWORD *)v11 + 3);
      v10[7] = *((_DWORD *)v8 + 9);
      v10[8] = *((_DWORD *)v8 + 8);
    }
    v13 = v19;
LABEL_15:
    ++v4->NumberOfLocks;
    v7 = (_UNKNOWN **)*v7;
    v15 = v7;
    if ( v7 == v6 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    if ( v13 )
    {
      v6 = (_QWORD *)*v6;
      v16 = v6;
    }
    v19 = !v13;
    v18 = !v13;
    v1 = Buffer;
  }
  RtlReleaseSRWLockShared(&stru_18015C1F8);
  if ( v2 < 0 )
    RtlDeCommitDebugInfo_0(v1, v4, 8uLL);
  else
    v1->Locks = v4;
  return (unsigned int)v2;
}
