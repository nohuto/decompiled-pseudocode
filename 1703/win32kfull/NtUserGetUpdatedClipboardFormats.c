/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01DACB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C00AF9F8 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00AFA70 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01E8954 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r12d
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // r15d
  __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // r10
  int v19; // [rsp+20h] [rbp-58h]

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v11 = CheckClipboardAccess();
  if ( v11 )
  {
    v12 = PsGetCurrentProcessWin32Process(v8, v7);
    v9 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v12 + 824), v11);
    v7 = (_DWORD *)W32UserProbeAddress;
    v8 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v8 = (_DWORD *)W32UserProbeAddress;
    *v8 = *v8;
    *a3 = v9;
    if ( v4 >= (unsigned int)v9 )
    {
      v13 = 0;
      v14 = 0;
      v19 = 0;
      while ( v13 < *(_DWORD *)(v11 + 104) && v14 < v4 )
      {
        v15 = 32LL * v13;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(*(_QWORD *)(v11 + 96) + v15 + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 824))
          || !(unsigned int)IsFmtBlocked(*(unsigned int *)(*(_QWORD *)(v11 + 96) + 32LL * v13)) )
        {
          v9 = a1 + 4LL * v14;
          v7 = (_DWORD *)v9;
          if ( v9 >= W32UserProbeAddress )
            v7 = (_DWORD *)W32UserProbeAddress;
          *v7 = *v7;
          v8 = (_DWORD *)*(unsigned int *)(v15 + *(_QWORD *)(v11 + 96));
          *(_DWORD *)v9 = (_DWORD)v8;
          v14 = ++v19;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v16, *(_QWORD *)(v17 + v15 + 20));
        }
        ++v13;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
