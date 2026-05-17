/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D8A20
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180017914 (RtlpCommitQueryDebugInfo.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800908B8 (RtlpDeCommitQueryDebugInfo.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F834C (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  _QWORD *v1; // rsi
  int v2; // ebx
  char *DebugInfo; // rax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // r14
  _QWORD *v9; // r12
  _UNKNOWN **v10; // r15
  _UNKNOWN **v11; // r13
  char *v12; // rax
  char *v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _UNKNOWN **v16; // [rsp+20h] [rbp-78h]
  _QWORD *v17; // [rsp+28h] [rbp-70h]
  bool v19; // [rsp+A8h] [rbp+10h]
  char *v20; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v7 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v19 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v4, v5, v6);
  v9 = RtlCriticalSectionList;
  v17 = RtlCriticalSectionList;
  v10 = (_UNKNOWN **)RtlCriticalSectionList;
  v16 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v10 != &RtlCriticalSectionList )
  {
    v11 = v10 - 2;
    v12 = RtlpCommitQueryDebugInfo(v1, 0x30u);
    v13 = v12;
    v20 = v12;
    if ( !v12 )
    {
      v2 = -1073741801;
LABEL_7:
      v1 = a1;
      break;
    }
    memset(v12, 0, 0x30uLL);
    *(_QWORD *)v13 = v11[1];
    *((_WORD *)v13 + 4) = *(_WORD *)v11;
    *((_WORD *)v13 + 5) = *((_WORD *)v11 + 1);
    if ( *((_WORD *)v13 + 4) )
    {
      if ( *((_WORD *)v13 + 4) == 1 )
      {
        v15 = v11[1];
        *((_DWORD *)v13 + 7) = *(_DWORD *)(v15[11] + 36LL);
        *((_QWORD *)v13 + 2) = v15[9];
        *((_DWORD *)v20 + 6) = *((_DWORD *)v15 + 17);
        *((_DWORD *)v20 + 10) = *((_DWORD *)v15 + 12);
        *((_DWORD *)v20 + 11) = *((_DWORD *)v15 + 16);
        v2 = 0;
        v10 = v16;
        v9 = v17;
      }
      else if ( (unsigned __int8)RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v14 = v11[1];
      *((_QWORD *)v13 + 2) = v14[2];
      *((_DWORD *)v13 + 6) = *((_DWORD *)v14 + 2);
      *((_DWORD *)v13 + 9) = *((_DWORD *)v14 + 3);
      *((_DWORD *)v13 + 7) = *((_DWORD *)v11 + 9);
      *((_DWORD *)v13 + 8) = *((_DWORD *)v11 + 8);
    }
    ++*(_DWORD *)v7;
    v10 = (_UNKNOWN **)*v10;
    v16 = v10;
    if ( v10 == v9 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    if ( v19 )
    {
      v9 = (_QWORD *)*v9;
      v17 = v9;
    }
    v19 = !v19;
    v1 = a1;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
    RtlpDeCommitQueryDebugInfo((__int64)v1, (__int64)v7, 8u);
  else
    v1[15] = v7;
  return (unsigned int)v2;
}
