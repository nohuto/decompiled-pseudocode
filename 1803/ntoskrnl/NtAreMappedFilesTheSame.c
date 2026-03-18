/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1405F1D00
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiDereferenceVad @ 0x14026B5B8 (MiDereferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x1404C0424 (MiVadIsCfgBitmap.c)
 */

NTSTATUS __stdcall NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r15
  __int64 *v19; // r14
  __int64 v20; // r15
  __int64 v21; // r14
  NTSTATUS v22; // ebx
  ULONG_PTR v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  NTSTATUS v40; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx((unsigned __int64)File1MappedAsAnImage, 0, &v40);
  v8 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVad((__int64)CurrentThread, v5, v6, v7);
  v9 = MiObtainReferencedVadEx((unsigned __int64)File2MappedAsFile, 0, &v40);
  v10 = v9;
  if ( !v9 )
  {
    MiLockVad((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVad((PVOID)v8, v31, v32, v33);
    return -1073741503;
  }
  if ( v8 == v9 )
  {
    MiDereferenceVad(v8);
    MiUnlockAndDereferenceVad((PVOID)v10, v34, v35, v36);
    return 0;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v8) == 1 || (unsigned int)MiVadIsCfgBitmap(v10) == 1 )
  {
    MiUnlockAndDereferenceVad((PVOID)v10, v11, v12, v13);
    MiLockVad((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVad((PVOID)v8, v37, v38, v39);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVad((__int64)CurrentThread, v10, v12, v13);
      MiLockVad((__int64)CurrentThread, v8);
      v14 = v10;
    }
    else
    {
      v14 = v8;
    }
    ExAcquirePushLockExclusiveEx(v14 + 40, 0LL);
    if ( (unsigned int)MiVadDeleted(v8) || (unsigned int)MiVadDeleted(v10) )
    {
      v40 = -1073741503;
    }
    else if ( (*(_DWORD *)(v8 + 48) & 0x4000) == 0
           && (*(_DWORD *)(v10 + 48) & 0x4000) == 0
           && (v18 = *(__int64 **)(v8 + 72)) != 0LL
           && (v19 = *(__int64 **)(v10 + 72)) != 0LL
           && (v20 = *v18) != 0
           && (v21 = *v19) != 0
           && *(_QWORD *)(v20 + 64)
           && *(_QWORD *)(v21 + 64) )
    {
      v22 = -1073741612;
      v23 = MiReferenceControlAreaFile(v21);
      if ( v20 == *(_QWORD *)(*(_QWORD *)(v23 + 40) + 16LL) )
        v22 = 0;
      v40 = v22;
      MiDereferenceControlAreaFile(v21, v23);
    }
    else
    {
      v40 = -1073741800;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40), v15, v16, v17);
    KeAbPostRelease(v10 + 40);
    MiUnlockAndDereferenceVad((PVOID)v8, v24, v25, v26);
    MiLockVad((__int64)CurrentThread, v10);
    MiUnlockAndDereferenceVad((PVOID)v10, v27, v28, v29);
    return v40;
  }
}
