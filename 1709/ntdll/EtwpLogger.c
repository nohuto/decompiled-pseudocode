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

void __fastcall __noreturn EtwpLogger(unsigned __int64 a1)
{
  void *UniqueThread; // rdx
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  signed int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  void *v19; // rsi
  int v20; // eax
  int v21; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = UniqueThread;
  v21 = 2;
  NtSetInformationThread(-2LL, 3LL, &v21);
  while ( *(_DWORD *)(a1 + 328) )
  {
    v3 = NtWaitForSingleObject(
           *(HANDLE *)(a1 + 128),
           0,
           (PLARGE_INTEGER)((a1 + 344) & -(__int64)(*(_QWORD *)(a1 + 344) != 0LL)));
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v4);
    v9 = active;
    if ( (*(_BYTE *)(a1 + 332) & 1) != 0 && active >= 0 && !v4 )
      v9 = EtwpFlushActiveBuffers(a1, 1LL);
    v10 = *(_DWORD *)(a1 + 332);
    if ( (v10 & 4) != 0 || (v10 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v19 = *(void **)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v20 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v20;
      v9 = v20;
      if ( v20 >= 0 )
      {
        NtClose(v19);
        if ( (*(_BYTE *)(a1 + 332) & 1) != 0 )
          EtwpSendSessionNotification(a1, 1LL, 0LL);
      }
      else
      {
        v18 = (*(_BYTE *)(a1 + 332) & 4) == 0;
        *(_QWORD *)(a1 + 144) = v19;
        if ( !v18 )
          v9 = 0;
      }
      *(_DWORD *)(a1 + 332) &= ~1u;
    }
    v11 = *(_DWORD *)(a1 + 332);
    if ( (v11 & 0x10) != 0 )
    {
      v18 = *(_QWORD *)(a1 + 144) == 0LL;
      *(_DWORD *)(a1 + 332) = v11 & 0xFFFFFFEF;
      if ( !v18 )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(a1, v6);
      }
    }
    v12 = *(_DWORD *)(a1 + 332);
    if ( (v12 & 6) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 332) = v12 & 0xFFFFFFF9;
      ZwSetEvent(v17, 0LL, v7, v8);
    }
    if ( v9 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v13 = EtwpFinalizeLogFileHeader(a1, 0LL);
  NtClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v13 > 0 )
    v13 = (unsigned __int16)v13 | 0xC0070000;
  v16 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 40) = v13;
  ZwSetEvent(v16, 0LL, v14, v15);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0);
}
