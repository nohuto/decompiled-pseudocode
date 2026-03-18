/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1C01F49A8
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1C01E6840 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00C6858 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F4974 (IsFmtBlocked.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int v12; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = a2;
  v5 = (unsigned int *)a1;
  v6 = CheckClipboardAccess(a1, a2, a3, a4);
  v8 = v6;
  if ( !v6 || !*(_DWORD *)(v6 + 104) || !*(_QWORD *)(v6 + 96) )
    return 0LL;
  while ( v4 > 0 )
  {
    v10 = *v5;
    --v4;
    if ( *v5 )
    {
      v11 = *(_QWORD *)(v8 + 96);
      v12 = *(_DWORD *)(v8 + 104);
      while ( v12 )
      {
        --v12;
        if ( *(_DWORD *)v11 == v10 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
          if ( !(unsigned int)CheckClipboardAccessForIntegrityLevel(
                                *(_QWORD *)(v11 + 20),
                                *(_QWORD *)(CurrentProcessWin32Process + 832))
            && (unsigned int)IsFmtBlocked(v10) )
          {
            v15 = PsGetCurrentProcessWin32Process(v14);
            EtwTraceUIPIClipboardError(0LL, v15, v10, *(_QWORD *)(v11 + 20));
            break;
          }
          return v10;
        }
        v11 += 32LL;
      }
    }
    ++v5;
  }
  return 0xFFFFFFFFLL;
}
