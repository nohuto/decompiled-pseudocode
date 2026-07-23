/*
 * XREFs of EtwpLogger @ 0x180062A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     EtwpStopLoggerInstance @ 0x180060DE0 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpFlushActiveBuffers @ 0x180062C30 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x18006384C (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 BaseAddress)
{
  void *UniqueThread; // rdx
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  signed int v11; // edi
  void *v12; // rcx
  void *v13; // rcx
  bool v14; // zf
  void *v15; // rsi
  int v16; // eax
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(BaseAddress + 40) = 0;
  *(_QWORD *)(BaseAddress + 24) = UniqueThread;
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  while ( *(_DWORD *)(BaseAddress + 328) )
  {
    v3 = NtWaitForSingleObject(
           *(HANDLE *)(BaseAddress + 128),
           0,
           (PLARGE_INTEGER)((BaseAddress + 344) & -(__int64)(*(_QWORD *)(BaseAddress + 344) != 0LL)));
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(BaseAddress + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v4);
    v7 = active;
    if ( (*(_BYTE *)(BaseAddress + 332) & 1) != 0 && active >= 0 && !v4 )
      v7 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
    v8 = *(_DWORD *)(BaseAddress + 332);
    if ( (v8 & 4) != 0 || (v8 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v15 = *(void **)(BaseAddress + 144);
      *(_QWORD *)(BaseAddress + 144) = 0LL;
      v16 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0LL, 0LL);
      *(_DWORD *)(BaseAddress + 40) = v16;
      v7 = v16;
      if ( v16 >= 0 )
      {
        NtClose(v15);
        if ( (*(_BYTE *)(BaseAddress + 332) & 1) != 0 )
          EtwpSendSessionNotification(BaseAddress, 1LL, 0LL);
      }
      else
      {
        v14 = (*(_BYTE *)(BaseAddress + 332) & 4) == 0;
        *(_QWORD *)(BaseAddress + 144) = v15;
        if ( !v14 )
          v7 = 0;
      }
      *(_DWORD *)(BaseAddress + 332) &= ~1u;
    }
    v9 = *(_DWORD *)(BaseAddress + 332);
    if ( (v9 & 0x10) != 0 )
    {
      v14 = *(_QWORD *)(BaseAddress + 144) == 0LL;
      *(_DWORD *)(BaseAddress + 332) = v9 & 0xFFFFFFEF;
      if ( !v14 )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v6);
      }
    }
    v10 = *(_DWORD *)(BaseAddress + 332);
    if ( (v10 & 6) != 0 )
    {
      v13 = *(void **)(BaseAddress + 136);
      *(_DWORD *)(BaseAddress + 332) = v10 & 0xFFFFFFF9;
      ZwSetEvent(v13, 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v11 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*(HANDLE *)(BaseAddress + 144));
  *(_QWORD *)(BaseAddress + 144) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = *(void **)(BaseAddress + 136);
  *(_DWORD *)(BaseAddress + 40) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext((unsigned int *)BaseAddress);
  RtlExitUserThread(0);
}
