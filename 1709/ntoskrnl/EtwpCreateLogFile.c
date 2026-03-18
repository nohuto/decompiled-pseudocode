/*
 * XREFs of EtwpCreateLogFile @ 0x140577D70
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 *     EtwpSendSessionNotification @ 0x1404EDDD4 (EtwpSendSessionNotification.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14057836C (EtwpDelayCreate.c)
 *     SeImpersonateClientEx @ 0x140578EB0 (SeImpersonateClientEx.c)
 *     EtwpExpandFileName @ 0x1405DFEEC (EtwpExpandFileName.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r12
  char v5; // r15
  __int128 v6; // xmm0
  char v7; // si
  NTSTATUS updated; // r14d
  HANDLE v9; // rsi
  __int64 v10; // rdx
  void *v11; // r15
  bool v12; // zf
  char v14; // al
  __int128 v15; // xmm1
  char v16; // al
  UNICODE_STRING v17; // xmm1
  bool v18; // [rsp+30h] [rbp-39h]
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v21; // [rsp+50h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+70h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFFC);
    if ( *(_QWORD *)(a1 + 176) || *(_QWORD *)(a1 + 208) )
    {
      if ( *(_QWORD *)(a1 + 208) )
      {
        v6 = *(_OWORD *)(a1 + 200);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          EtwpExpandFileName(0LL, a1 + 168, *(unsigned int *)(a1 + 312), a1 + 152);
          v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
        }
        v6 = *(_OWORD *)(a1 + 168);
      }
      v7 = (*(_DWORD *)(a1 + 832) & 2) != 0;
      v18 = (*(_BYTE *)(a1 + 12) & 4) != 0;
      v21 = v6;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 736) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 720), 0LL);
          v5 = 1;
          if ( updated < 0 )
            goto LABEL_17;
        }
      }
      updated = EtwpDelayCreate((__int64)&FileHandle, 0, v7);
      if ( v5 == 1 )
        PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
      if ( updated < 0 )
      {
        v9 = FileHandle;
      }
      else
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v9 = FileHandle;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
        v11 = *(void **)(a1 + 816);
        if ( v11 )
          EtwpFinalizeHeader(a1, *(void **)(a1 + 816), 0);
        else
          v4 = 1;
        v12 = *(_QWORD *)(a1 + 208) == 0LL;
        *(_QWORD *)(a1 + 816) = v9;
        if ( !v12 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v15 = *(_OWORD *)(a1 + 200);
          DestinationString = *(UNICODE_STRING *)(a1 + 168);
          *(_OWORD *)(a1 + 168) = v15;
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 200), 0LL);
          v9 = FileHandle;
        }
        LOBYTE(v10) = v18;
        updated = EtwpUpdateFileHeader(a1, v10);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 816) = v11;
        }
        else
        {
          if ( !v4 )
            EtwpSendSessionNotification(a1, 1u, 0);
          v9 = 0LL;
          FileHandle = 0LL;
          if ( !v11 )
            goto LABEL_17;
          ZwClose(v11);
        }
      }
      if ( v9 )
      {
        ZwClose(v9);
        if ( *(_QWORD *)(a1 + 816) && DestinationString.Buffer )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v17 = DestinationString;
          *(_OWORD *)(a1 + 200) = *(_OWORD *)(a1 + 168);
          *(UNICODE_STRING *)(a1 + 168) = v17;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString(&DestinationString, 0LL);
        }
      }
LABEL_17:
      RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 200));
      RtlFreeUnicodeString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
