/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D2B90
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800D3188 (RtlDeCommitDebugInfo_0.c)
 *     sub_1800F4858 @ 0x1800F4858 (sub_1800F4858.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(PRTL_DEBUG_INFORMATION Buffer)
{
  _RTL_PROCESS_LOCKS *v2; // rax
  _RTL_PROCESS_LOCKS *v3; // r14
  _QWORD *v5; // rsi
  _UNKNOWN **v6; // r15
  _UNKNOWN **v7; // r12
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _UNKNOWN **v12; // [rsp+20h] [rbp-78h]
  _QWORD *v13; // [rsp+28h] [rbp-70h]
  bool v14; // [rsp+A8h] [rbp+10h]
  int v15; // [rsp+B0h] [rbp+18h]
  _DWORD *v16; // [rsp+B8h] [rbp+20h]

  v15 = 0;
  v2 = (_RTL_PROCESS_LOCKS *)RtlCommitDebugInfo_0(Buffer, 8uLL);
  v3 = v2;
  if ( !v2 )
    return 3221225495LL;
  v2->NumberOfLocks = 0;
  v14 = 0;
  RtlAcquireSRWLockShared(&stru_18015D258);
  v5 = off_180156628;
  v13 = off_180156628;
  v6 = (_UNKNOWN **)off_180156628;
  v12 = (_UNKNOWN **)off_180156628;
  while ( v6 != &off_180156628 )
  {
    v7 = v6 - 2;
    v8 = RtlCommitDebugInfo_0(Buffer, 0x30uLL);
    v9 = v8;
    v16 = v8;
    if ( !v8 )
    {
      v15 = -1073741801;
      break;
    }
    memset(v8, 0, 0x30uLL);
    *(_QWORD *)v9 = v7[1];
    *((_WORD *)v9 + 4) = *(_WORD *)v7;
    *((_WORD *)v9 + 5) = *((_WORD *)v7 + 1);
    if ( *((_WORD *)v9 + 4) )
    {
      if ( *((_WORD *)v9 + 4) == 1 )
      {
        v11 = v7[1];
        v9[7] = *(_DWORD *)(v11[11] + 36LL);
        *((_QWORD *)v9 + 2) = v11[9];
        v16[6] = *((_DWORD *)v11 + 17);
        v16[10] = *((_DWORD *)v11 + 12);
        v16[11] = *((_DWORD *)v11 + 16);
        v6 = v12;
        v5 = v13;
      }
      else if ( (unsigned __int8)sub_1800F4858() )
      {
        __debugbreak();
      }
    }
    else
    {
      v10 = v7[1];
      *((_QWORD *)v9 + 2) = v10[2];
      v9[6] = *((_DWORD *)v10 + 2);
      v9[9] = *((_DWORD *)v10 + 3);
      v9[7] = *((_DWORD *)v7 + 9);
      v9[8] = *((_DWORD *)v7 + 8);
    }
    ++v3->NumberOfLocks;
    v6 = (_UNKNOWN **)*v6;
    v12 = v6;
    if ( v6 == v5 )
    {
      v15 = -1073741595;
      break;
    }
    if ( v14 )
    {
      v5 = (_QWORD *)*v5;
      v13 = v5;
    }
    v14 = !v14;
  }
  RtlReleaseSRWLockShared(&stru_18015D258);
  if ( v15 < 0 )
    RtlDeCommitDebugInfo_0(Buffer, v3, 8uLL);
  else
    Buffer->Locks = v3;
  return (unsigned int)v15;
}
