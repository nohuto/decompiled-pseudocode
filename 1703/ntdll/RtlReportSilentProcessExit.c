/*
 * XREFs of RtlReportSilentProcessExit @ 0x180070200
 * Callers:
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 * Callees:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlReportSilentProcessExit(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  int v5; // ebx
  unsigned int UniqueProcess; // edi
  unsigned int UniqueThread; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  ULONG NtGlobalFlag; // eax
  int v11; // eax
  HANDLE v12; // rdi
  NTSTATUS v13; // eax
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+50h] [rbp-B0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(SendMessageA, 0, sizeof(SendMessageA));
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  TargetHandle = 0LL;
  if ( !ProcessHandle )
    return -1073741811;
  if ( ProcessHandle == (HANDLE)-1LL && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0;
  v5 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x1000u,
         0,
         0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  v8 = sub_180070674(TargetHandle);
  v9 = v8;
  if ( !UniqueProcess || !UniqueThread || !v8 )
    return -1073741811;
  if ( UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = sub_1800704C0(TargetHandle);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    memset(SendMessageA, 0, sizeof(SendMessageA));
    SendMessageA[0].u1.Length = 91751760;
    SendMessageA[1].u1.Length = 805306368;
    SendMessageA[1].ClientId.UniqueProcess = (HANDLE)__PAIR64__(UniqueProcess, UniqueThread);
    SendMessageA[1].ClientId.UniqueThread = (HANDLE)__PAIR64__(ExitStatus, v9);
    memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
    ReceiveMessage[0].u1.Length = 91751760;
    v11 = sub_180003CFC(SendMessageA, ReceiveMessage);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v12 = ReceiveMessage[1].ClientId.UniqueProcess;
        while ( 1 )
        {
          v13 = ZwWaitForSingleObject(v12, 1u, 0LL);
          v5 = v13;
          if ( v13 == 258 || v13 < 0 )
            break;
          if ( v13 != 192 && v13 != 257 )
          {
            v5 = 0;
            break;
          }
        }
        if ( v12 )
          ZwClose(v12);
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_13:
  if ( TargetHandle )
    ZwClose(TargetHandle);
  return v5;
}
