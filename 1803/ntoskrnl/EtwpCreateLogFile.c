/*
 * XREFs of EtwpCreateLogFile @ 0x1405884D0
 * Callers:
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     SeImpersonateClientEx @ 0x140587890 (SeImpersonateClientEx.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpDelayCreate @ 0x1405881C8 (EtwpDelayCreate.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     EtwpSendSessionNotification @ 0x14058A040 (EtwpSendSessionNotification.c)
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 *     EtwpExpandFileName @ 0x1405E82A4 (EtwpExpandFileName.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r12
  char v5; // r15
  __int128 v6; // xmm0
  char v7; // al
  char v8; // si
  int updated; // r14d
  HANDLE v10; // rsi
  __int64 v11; // rdx
  void *v12; // r15
  bool v13; // zf
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v22; // xmm1
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  UNICODE_STRING v27; // xmm1
  char v28[8]; // [rsp+30h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v31; // [rsp+50h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+70h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v28[0] = 0;
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
          v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704), v15, v16, v17);
          KeAbPostRelease(a1 + 704);
        }
        v6 = *(_OWORD *)(a1 + 168);
      }
      v7 = v28[0];
      if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
        v7 = 1;
      v8 = (*(_DWORD *)(a1 + 832) & 2) != 0;
      v28[0] = v7;
      v31 = v6;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 736) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 720), 0LL);
          v5 = 1;
          if ( updated < 0 )
            goto LABEL_19;
        }
      }
      updated = EtwpDelayCreate((__int64)&FileHandle, (__int64)&v31, v28, ~(*(_DWORD *)(a1 + 12) >> 26) & 1, 0, v8);
      if ( v5 == 1 )
        PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
      if ( updated < 0 )
      {
        v10 = FileHandle;
      }
      else
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v10 = FileHandle;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
        v12 = *(void **)(a1 + 816);
        if ( v12 )
          EtwpFinalizeHeader(a1, *(void **)(a1 + 816), 0);
        else
          v4 = 1;
        v13 = *(_QWORD *)(a1 + 208) == 0LL;
        *(_QWORD *)(a1 + 816) = v10;
        if ( !v13 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v22 = *(_OWORD *)(a1 + 200);
          DestinationString = *(UNICODE_STRING *)(a1 + 168);
          *(_OWORD *)(a1 + 168) = v22;
          v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v23 & 2) != 0 && (v23 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704), v19, v20, v21);
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 200), 0LL);
          v10 = FileHandle;
        }
        LOBYTE(v11) = v28[0];
        updated = EtwpUpdateFileHeader(a1, v11);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 816) = v12;
        }
        else
        {
          if ( !v4 )
            EtwpSendSessionNotification(a1, 1LL);
          v10 = 0LL;
          FileHandle = 0LL;
          if ( !v12 )
            goto LABEL_19;
          ZwClose(v12);
        }
      }
      if ( v10 )
      {
        ZwClose(v10);
        if ( *(_QWORD *)(a1 + 816) && DestinationString.Buffer )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v27 = DestinationString;
          *(_OWORD *)(a1 + 200) = *(_OWORD *)(a1 + 168);
          *(UNICODE_STRING *)(a1 + 168) = v27;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704), v24, v25, v26);
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString(&DestinationString, 0LL);
        }
      }
LABEL_19:
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 200));
      RtlFreeAnsiString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
