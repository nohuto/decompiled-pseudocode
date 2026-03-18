/*
 * XREFs of zzzWakeInputIdle @ 0x1C005B6D8
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z @ 0x1C00C85A8 (-xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0049970 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall zzzWakeInputIdle(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  struct _KEVENT *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  struct _KEVENT *v9; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  *(_DWORD *)(a1 + 440) &= ~0x2000u;
  v4 = CurrentProcessWin32Process;
  if ( (*(_DWORD *)(a1 + 440) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 536) + 24LL) )
    {
      EtwTraceWakeInputIdle(0LL, a1);
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 24LL);
      v9 = *(struct _KEVENT **)(v8 + 32);
      if ( v9 )
      {
        if ( v9 != (struct _KEVENT *)-1LL )
        {
          KeSetEvent(v9, 1, 0);
          ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 24LL) + 32LL));
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 24LL) + 32LL) = -1LL;
        }
      }
      else
      {
        *(_QWORD *)(v8 + 32) = -1LL;
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 376);
    if ( !*(_QWORD *)(v5 + 296) )
      *(_QWORD *)(v5 + 296) = a1;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 376) + 296LL) == a1 )
    {
      EtwTraceWakeInputIdle(0LL, a1);
      v6 = *(struct _KEVENT **)(v4 + 16);
      if ( !v6 )
      {
LABEL_6:
        *(_QWORD *)(v4 + 16) = -1LL;
        goto LABEL_7;
      }
      if ( v6 != (struct _KEVENT *)-1LL )
      {
        KeSetEvent(v6, 1, 0);
        ObfDereferenceObject(*(PVOID *)(v4 + 16));
        goto LABEL_6;
      }
    }
  }
LABEL_7:
  result = *(unsigned int *)(v4 + 12);
  if ( (result & 4) != 0 )
  {
    *(_DWORD *)(v4 + 12) = result & 0xFFFFFFFB;
    return zzzCalcStartCursorHide(0LL, 0);
  }
  return result;
}
