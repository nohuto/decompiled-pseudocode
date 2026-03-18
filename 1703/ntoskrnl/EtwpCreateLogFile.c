/*
 * XREFs of EtwpCreateLogFile @ 0x14055808C
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1405585E8 (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x1405588EC (EtwpExpandFileName.c)
 *     SeImpersonateClientEx @ 0x140558C70 (SeImpersonateClientEx.c)
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
  __int128 v14; // xmm1
  UNICODE_STRING v15; // xmm1
  bool v16; // [rsp+30h] [rbp-39h]
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v19; // [rsp+50h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+70h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 820), 0xFFFFFFFC);
    if ( *(_QWORD *)(a1 + 160) || *(_QWORD *)(a1 + 192) )
    {
      if ( *(_QWORD *)(a1 + 192) )
      {
        v6 = *(_OWORD *)(a1 + 184);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
          EtwpExpandFileName(0LL, a1 + 152, *(unsigned int *)(a1 + 296), a1 + 136);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
          KeAbPostRelease(a1 + 688);
        }
        v6 = *(_OWORD *)(a1 + 152);
      }
      v7 = (*(_DWORD *)(a1 + 816) & 2) != 0;
      v16 = (*(_BYTE *)(a1 + 12) & 4) != 0;
      v19 = v6;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 720) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 704), 0LL);
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
        v11 = *(void **)(a1 + 800);
        if ( v11 )
          EtwpFinalizeHeader(a1, *(void **)(a1 + 800), 0);
        else
          v4 = 1;
        v12 = *(_QWORD *)(a1 + 192) == 0LL;
        *(_QWORD *)(a1 + 800) = v9;
        if ( !v12 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
          v14 = *(_OWORD *)(a1 + 184);
          DestinationString = *(UNICODE_STRING *)(a1 + 152);
          *(_OWORD *)(a1 + 152) = v14;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
          KeAbPostRelease(a1 + 688);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
          v9 = FileHandle;
        }
        LOBYTE(v10) = v16;
        updated = EtwpUpdateFileHeader(a1, v10);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 800) = v11;
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
        if ( *(_QWORD *)(a1 + 800) )
        {
          if ( DestinationString.Buffer )
          {
            ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
            v15 = DestinationString;
            *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
            *(UNICODE_STRING *)(a1 + 152) = v15;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
            KeAbPostRelease(a1 + 688);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
      }
LABEL_17:
      RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 184));
      RtlFreeUnicodeString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
