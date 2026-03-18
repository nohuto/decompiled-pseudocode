/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1405DF264
 * Callers:
 *     <none>
 * Callees:
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiDereferenceVad @ 0x14023030C (MiDereferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x140540A1C (MiVadIsCfgBitmap.c)
 */

NTSTATUS __stdcall NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  ULONG_PTR v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  int v14; // ebx
  ULONG_PTR v15; // rax
  NTSTATUS v17; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVad((unsigned __int64)File1MappedAsAnImage, &v17);
  v6 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVad((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVad((unsigned __int64)File2MappedAsFile, &v17);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVad((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVad((char *)v6);
    return -1073741503;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVad((char *)v8);
    return 0;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v6) == 1 || (unsigned int)MiVadIsCfgBitmap(v8) == 1 )
  {
    MiUnlockAndDereferenceVad((char *)v8);
    MiLockVad((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVad((char *)v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVad((__int64)CurrentThread, v8);
      MiLockVad((__int64)CurrentThread, v6);
      v9 = v8 + 40;
    }
    else
    {
      v9 = v6 + 40;
    }
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
    {
      v17 = -1073741503;
    }
    else if ( (*(_DWORD *)(v6 + 48) & 0x8000) == 0
           && (*(_DWORD *)(v8 + 48) & 0x8000) == 0
           && (v10 = *(__int64 **)(v6 + 72)) != 0LL
           && (v11 = *(__int64 **)(v8 + 72)) != 0LL
           && (v12 = *v10, v13 = *v11, *v10)
           && v13
           && *(_QWORD *)(v12 + 64)
           && *(_QWORD *)(v13 + 64) )
    {
      v14 = -1073741612;
      v15 = MiReferenceControlAreaFile(v13);
      if ( v12 == *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL) )
        v14 = 0;
      v17 = v14;
      MiDereferenceControlAreaFile(v13, v15);
    }
    else
    {
      v17 = -1073741800;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    MiUnlockAndDereferenceVad((char *)v6);
    MiLockVad((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVad((char *)v8);
    return v17;
  }
}
