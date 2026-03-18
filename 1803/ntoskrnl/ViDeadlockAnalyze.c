/*
 * XREFs of ViDeadlockAnalyze @ 0x1408292B4
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     ViDeadlockAnalyze @ 0x1408292B4 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401AB5B0 (KeGetCurrentStackPointer.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViDeadlockAddParticipant @ 0x140828F28 (ViDeadlockAddParticipant.c)
 *     ViDeadlockAnalyze @ 0x1408292B4 (ViDeadlockAnalyze.c)
 *     ViDeadlockCertify @ 0x1408295C0 (ViDeadlockCertify.c)
 *     ViDeadlockPreprocessOptions @ 0x140829F6C (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockAnalyze(ULONG_PTR a1, ULONG_PTR a2, int a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR v6; // rsi
  unsigned int v7; // ebx
  PVOID v8; // rcx
  bool v9; // zf
  _DWORD *v10; // rdx
  int v11; // ecx
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rbp
  __int64 v16; // rdx
  int v17; // r9d
  int v18; // ebp
  unsigned int v19; // ecx
  __int64 v21; // [rsp+68h] [rbp+10h]
  int v23; // [rsp+78h] [rbp+20h]

  v23 = a4;
  v6 = a1;
  v7 = 1;
  if ( a3 )
  {
    v8 = ViDeadlockGlobals;
    ++*((_DWORD *)ViDeadlockGlobals + 8201);
    v9 = *((_DWORD *)v8 + 8201) == 1073741822;
    *((_DWORD *)v8 + 8199) = 0;
    *((_DWORD *)v8 + 8216) = 0;
    *((_QWORD *)v8 + 4107) = 0LL;
    if ( v9 )
      ViDeadlockState |= 8u;
    KeQueryCurrentStackInformation((_DWORD *)v8 + 8283, (char **)v8 + 4142, (unsigned __int64 *)v8 + 4143);
    a4 = v23;
  }
  v10 = ViDeadlockGlobals;
  v11 = *((_DWORD *)ViDeadlockGlobals + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v11 )
    return 0LL;
  ++*((_DWORD *)ViDeadlockGlobals + 8199);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a2 + 72) & 7 | (8 * v11);
  if ( a4 > v10[8202] )
  {
    ++v10[8204];
    return 0LL;
  }
  if ( v10[8199] >= v10[8203] )
  {
    ++v10[8205];
    return 0LL;
  }
  if ( (unsigned __int64)&KeGetCurrentStackPointer()[-*((_QWORD *)ViDeadlockGlobals + 4142)] <= 0x1630 )
  {
    ++*((_DWORD *)ViDeadlockGlobals + 8206);
    return 0LL;
  }
  v13 = *(_QWORD *)(a2 + 56);
  v21 = v13;
  if ( v6 != *(_QWORD *)(v13 + 8) || (*(_DWORD *)(a2 + 72) & 4) != 0 )
  {
    v7 = 0;
    v14 = *(_QWORD **)(v13 + 24);
    if ( v14 == (_QWORD *)(v13 + 24) )
      goto LABEL_31;
    while ( 1 )
    {
      v15 = v14 - 5;
      v16 = *(v14 - 5);
      *((_DWORD *)v14 + 8) = v14[4] & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
      if ( v16 )
      {
        v17 = v23 + 1;
        if ( v15 == (_QWORD *)a2 )
          v17 = v23;
        v7 = ViDeadlockAnalyze(a1, v16, 0, v17, a5);
        if ( v7 )
          break;
      }
      v14 = (_QWORD *)*v14;
      if ( v14 == (_QWORD *)(v21 + 24) )
        goto LABEL_25;
    }
    ViDeadlockAddParticipant((__int64)(v14 - 5));
    if ( v15 != (_QWORD *)a2 )
      ViDeadlockAddParticipant(a2);
LABEL_25:
    if ( !v7 )
    {
LABEL_31:
      v18 = a3;
LABEL_32:
      if ( v18 )
      {
        v19 = *((_DWORD *)ViDeadlockGlobals + 8199);
        if ( v19 > *((_DWORD *)ViDeadlockGlobals + 8200) )
          *((_DWORD *)ViDeadlockGlobals + 8200) = v19;
      }
      return v7;
    }
    v6 = a1;
  }
  else
  {
    ViDeadlockAddParticipant(a2);
  }
  v18 = a3;
  if ( a3 )
  {
    if ( (unsigned int)ViDeadlockCertify(a5, a2) )
    {
      *((_QWORD *)ViDeadlockGlobals + 4107) = v6;
      ViDeadlockPreprocessOptions(
        byte_14039D14C,
        "Type !deadlock in the debugger for more information.",
        4097LL,
        v6,
        a2,
        0LL);
      VfReportIssueWithOptions(0xC4u, 0x1001uLL, v6, a2, 0LL, byte_14039D14C);
      return 0LL;
    }
    v7 = 0;
    goto LABEL_32;
  }
  return v7;
}
