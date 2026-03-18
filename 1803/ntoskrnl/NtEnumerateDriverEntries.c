/*
 * XREFs of NtEnumerateDriverEntries @ 0x1407C3288
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400B9118 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140720E54 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1407C09E8 (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1407C1A20 (ExpTranslateDriverEntryNameToId.c)
 */

NTSTATUS __stdcall NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r15
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // ebx
  _DWORD *v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r12d
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r14
  __int64 v16; // rax
  char *v17; // r10
  unsigned int v18; // eax
  __int64 v19; // r10
  unsigned int v20; // r11d
  unsigned __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // edx
  BOOL v24; // eax
  BOOL v25; // r8d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  _DWORD *v28; // rcx
  __int64 v29; // rax
  BOOL v30; // [rsp+38h] [rbp-A0h]
  unsigned int v31; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v32; // [rsp+40h] [rbp-98h]
  unsigned int v33; // [rsp+44h] [rbp-94h]
  int v34; // [rsp+48h] [rbp-90h] BYREF
  NTSTATUS v35; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v36; // [rsp+50h] [rbp-88h]
  void *v37; // [rsp+58h] [rbp-80h] BYREF
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-70h]
  size_t Size; // [rsp+70h] [rbp-68h]
  void *Src; // [rsp+78h] [rbp-60h]
  void *v42; // [rsp+80h] [rbp-58h]
  SIZE_T NumberOfBytes; // [rsp+F8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v4 = 0LL;
  if ( dword_1403A1C50 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v7 = (__int64)BufferLength;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v8 = Buffer != 0LL ? *BufferLength : 0;
    if ( v8 )
      ProbeForWrite(Buffer, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v8 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( v8 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v37, (struct _MDL **)&P);
    if ( result < 0 )
      return result;
  }
  else
  {
    v37 = 0LL;
    P = 0LL;
  }
  v9 = v37;
  v10 = 0;
  v30 = v8 != 0;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  LODWORD(NumberOfBytes) = 0;
  v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, 0LL, &NumberOfBytes);
  if ( v13 == -1073741789 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, (__int64)PoolWithTag, &NumberOfBytes);
    else
      v13 = -1073741670;
  }
  else
  {
    LODWORD(NumberOfBytes) = 0;
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v13 && (_DWORD)NumberOfBytes )
  {
    v15 = v4;
    v39 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
    while ( 1 )
    {
      v16 = *((_QWORD *)v15 + 2) - EfiDriverVariablesGuid;
      if ( !v16 )
        v16 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v16 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v15 + 16, &v34) && v15[2] >= 8 )
      {
        v17 = (char *)v15 + v15[1];
        v32 = *((unsigned __int16 *)v17 + 2);
        Src = v17 + 6;
        v18 = ExpSafeWcslen((_WORD *)v17 + 3, v39);
        if ( v18 != -1 )
          v18 = 2 * v18 + 2;
        if ( v18 != -1 && v32 < v20 && v20 >= v18 + v32 + 6 )
        {
          Size = v18;
          v42 = (void *)(v19 + v18 + 6LL);
          v21 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (_DWORD *)v21 != v9 )
          {
            v22 = v21 - (_DWORD)v9;
            v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v8 >= v22 )
            {
              v8 -= v22;
            }
            else
            {
              v30 = 0;
              v8 = 0;
              v10 = -1073741789;
            }
          }
          v31 = (v18 + 23) & 0xFFFFFFFC;
          v33 = v31 + v32 + 12;
          v23 = v33 + 4;
          v36 = v33 + 4;
          if ( v8 < v33 + 4 )
            v10 = -1073741789;
          v35 = v10;
          v24 = 0;
          if ( v8 >= v23 )
            v24 = v30;
          v25 = v24;
          v30 = v24;
          v26 = v8;
          v27 = v8 - v23;
          v8 = 0;
          if ( v26 >= v23 )
            v8 = v27;
          if ( v25 )
          {
            memset(v9, 0, v23);
            v9[1] = 1;
            v9[2] = v33;
            v9[3] = v34;
            v9[4] = 20;
            v9[5] = v31;
            memmove(v9 + 6, Src, Size);
            v28 = (_DWORD *)((char *)v9 + v31 + 4);
            *v28 = 1;
            v28[1] = v32 + 12;
            v28[2] = 4;
            memmove(v28 + 3, v42, v32);
            if ( v11 )
              *v11 = (_DWORD)v9 - (_DWORD)v11;
            v11 = v9;
            v10 = v35;
            v23 = v36;
          }
          v9 = (_DWORD *)((char *)v9 + v23);
        }
      }
      v29 = *v15;
      if ( !(_DWORD)v29 )
        break;
      v15 = (unsigned int *)((char *)v15 + v29);
    }
    v2 = BufferLength;
    if ( v11 )
      *v11 = 0;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  if ( v13 < 0 )
    v10 = v13;
  *v2 = (_DWORD)v9 - (_DWORD)v37;
  return v10;
}
