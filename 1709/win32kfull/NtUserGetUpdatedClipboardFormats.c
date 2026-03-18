/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01E6F00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C00C67E0 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00C6858 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F4974 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edi
  unsigned int v17; // r15d
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // r10
  _DWORD *v21; // r8
  int v23; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v13 = CheckClipboardAccess(v8, v7, v9, v10);
  if ( v13 )
  {
    v14 = PsGetCurrentProcessWin32Process(v12);
    v15 = CountNumClipFormatForIL(*(_QWORD *)(v14 + 832), v13);
    v11 = (_DWORD *)MmUserProbeAddress;
    v12 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    *a3 = v15;
    if ( a2 >= v15 )
    {
      v16 = 0;
      v17 = 0;
      v23 = 0;
      while ( v16 < *(_DWORD *)(v13 + 104) && v17 < a2 )
      {
        v18 = 32LL * v16;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v18 + *(_QWORD *)(v13 + 96) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 832))
          || !(unsigned int)IsFmtBlocked(*(unsigned int *)(v18 + *(_QWORD *)(v13 + 96))) )
        {
          v21 = (_DWORD *)(a1 + 4LL * v17);
          v11 = v21;
          if ( (unsigned __int64)v21 >= MmUserProbeAddress )
            v11 = (_DWORD *)MmUserProbeAddress;
          *v11 = *v11;
          v12 = *(unsigned int *)(v18 + *(_QWORD *)(v13 + 96));
          *v21 = v12;
          v17 = ++v23;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v19, *(_QWORD *)(v18 + v20 + 20));
        }
        ++v16;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
