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
  char *v4; // r14
  _QWORD *v6; // r12
  _UNKNOWN **v7; // r15
  _UNKNOWN **v8; // r13
  char *v9; // rax
  char *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _UNKNOWN **v13; // [rsp+20h] [rbp-78h]
  _QWORD *v14; // [rsp+28h] [rbp-70h]
  bool v16; // [rsp+A8h] [rbp+10h]
  char *v17; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v4 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v16 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v6 = RtlCriticalSectionList;
  v14 = RtlCriticalSectionList;
  v7 = (_UNKNOWN **)RtlCriticalSectionList;
  v13 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v7 != &RtlCriticalSectionList )
  {
    v8 = v7 - 2;
    v9 = RtlpCommitQueryDebugInfo(v1, 0x30u);
    v10 = v9;
    v17 = v9;
    if ( !v9 )
    {
      v2 = -1073741801;
LABEL_7:
      v1 = a1;
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
        *((_DWORD *)v10 + 7) = *(_DWORD *)(v12[11] + 36LL);
        *((_QWORD *)v10 + 2) = v12[9];
        *((_DWORD *)v17 + 6) = *((_DWORD *)v12 + 17);
        *((_DWORD *)v17 + 10) = *((_DWORD *)v12 + 12);
        *((_DWORD *)v17 + 11) = *((_DWORD *)v12 + 16);
        v2 = 0;
        v7 = v13;
        v6 = v14;
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v11 = v8[1];
      *((_QWORD *)v10 + 2) = v11[2];
      *((_DWORD *)v10 + 6) = *((_DWORD *)v11 + 2);
      *((_DWORD *)v10 + 9) = *((_DWORD *)v11 + 3);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v8 + 9);
      *((_DWORD *)v10 + 8) = *((_DWORD *)v8 + 8);
    }
    ++*(_DWORD *)v4;
    v7 = (_UNKNOWN **)*v7;
    v13 = v7;
    if ( v7 == v6 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    if ( v16 )
    {
      v6 = (_QWORD *)*v6;
      v14 = v6;
    }
    v16 = !v16;
    v1 = a1;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
    RtlpDeCommitQueryDebugInfo((__int64)v1, (__int64)v4, 8u);
  else
    v1[15] = v4;
  return (unsigned int)v2;
}
