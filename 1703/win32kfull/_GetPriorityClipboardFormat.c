/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1C01E89A0
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1C01DA3F0 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00AFA70 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01E8954 (IsFmtBlocked.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(unsigned int *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v11; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = CheckClipboardAccess();
  v7 = v4;
  if ( !v4 || !*(_DWORD *)(v4 + 104) || !*(_QWORD *)(v4 + 96) )
    return 0LL;
  while ( a2 > 0 )
  {
    v9 = *a1;
    --a2;
    if ( *a1 )
    {
      v10 = *(_QWORD *)(v7 + 96);
      v11 = *(_DWORD *)(v7 + 104);
      while ( v11 )
      {
        --v11;
        if ( *(_DWORD *)v10 == v9 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
          if ( !(unsigned int)CheckClipboardAccessForIntegrityLevel(
                                *(_QWORD *)(v10 + 20),
                                *(_QWORD *)(CurrentProcessWin32Process + 824))
            && (unsigned int)IsFmtBlocked(v9) )
          {
            v15 = PsGetCurrentProcessWin32Process(v14, v13);
            EtwTraceUIPIClipboardError(0LL, v15, v9, *(_QWORD *)(v10 + 20));
            break;
          }
          return v9;
        }
        v10 += 32LL;
      }
    }
    ++a1;
  }
  return 0xFFFFFFFFLL;
}
