/*
 * XREFs of NtEnumerateDriverEntries @ 0x14071C988
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1406901D8 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x14071A230 (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14071B258 (ExpTranslateDriverEntryNameToId.c)
 */

NTSTATUS __stdcall NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r12
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // r13d
  _DWORD *v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v13; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  char *v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  BOOL v25; // ecx
  unsigned int v26; // r13d
  _DWORD *v27; // rcx
  size_t v28; // r8
  __int64 v29; // rax
  BOOL v30; // [rsp+34h] [rbp-A4h]
  int v31; // [rsp+38h] [rbp-A0h]
  unsigned int v32; // [rsp+40h] [rbp-98h]
  unsigned int v33; // [rsp+44h] [rbp-94h]
  int v34; // [rsp+48h] [rbp-90h] BYREF
  _DWORD v35[3]; // [rsp+4Ch] [rbp-8Ch] BYREF
  _DWORD *v36; // [rsp+58h] [rbp-80h]
  struct _MDL *v37; // [rsp+60h] [rbp-78h] BYREF
  size_t Size; // [rsp+68h] [rbp-70h]
  void *Src; // [rsp+70h] [rbp-68h]
  void *v40; // [rsp+78h] [rbp-60h]
  unsigned __int64 v41; // [rsp+80h] [rbp-58h]
  SIZE_T NumberOfBytes; // [rsp+F8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v4 = 0LL;
  if ( dword_140344B30 != 2 )
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
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v35[1], &v37);
    if ( result < 0 )
      return result;
  }
  else
  {
    *(_QWORD *)&v35[1] = 0LL;
    v37 = 0LL;
  }
  v9 = *(_DWORD **)&v35[1];
  v10 = 0;
  v31 = 0;
  v30 = v8 != 0;
  v11 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  LODWORD(NumberOfBytes) = 0;
  v13 = IoEnumerateEnvironmentVariablesEx(2u, 0LL, (int *)&NumberOfBytes);
  if ( v13 == -1073741789 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)PoolWithTag, (int *)&NumberOfBytes);
    else
      v13 = -1073741670;
  }
  else
  {
    LODWORD(NumberOfBytes) = 0;
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v13 || !(_DWORD)NumberOfBytes )
    goto LABEL_52;
  v15 = v4;
  v16 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
  v41 = v16;
  while ( 1 )
  {
    v17 = *((_QWORD *)v15 + 2) - EfiDriverVariablesGuid;
    if ( !v17 )
      v17 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
    if ( !v17 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v15 + 16, &v34) && v15[2] >= 8 )
    {
      v18 = (char *)v15 + v15[1];
      v35[0] = *((unsigned __int16 *)v18 + 2);
      Src = v18 + 6;
      v19 = ExpSafeWcslen((_WORD *)v18 + 3, v16);
      if ( v19 != -1 )
        v19 = 2 * v19 + 2;
      if ( v19 != -1 && v22 < v21 && v21 >= v19 + v22 + 6 )
      {
        Size = v19;
        v40 = (void *)(v20 + v19 + 6LL);
        v23 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD *)v23 != v9 )
        {
          v24 = v23 - (_DWORD)v9;
          v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v8 < v24 )
          {
            v25 = 0;
            v30 = 0;
            v8 = 0;
            v31 = -1073741789;
LABEL_40:
            v32 = (v19 + 23) & 0xFFFFFFFC;
            v33 = v32 + v22 + 12;
            v26 = v33 + 4;
            if ( v8 >= v33 + 4 )
            {
              v8 -= v26;
            }
            else
            {
              v8 = 0;
              v25 = 0;
              v30 = 0;
              v31 = -1073741789;
            }
            if ( v25 )
            {
              memset(v9, 0, v26);
              v9[1] = 1;
              v9[2] = v33;
              v9[3] = v34;
              v9[4] = 20;
              v9[5] = v32;
              memmove(v9 + 6, Src, Size);
              v27 = (_DWORD *)((char *)v9 + v32 + 4);
              *v27 = 1;
              v28 = v35[0];
              v27[1] = v35[0] + 12;
              v27[2] = 4;
              memmove(v27 + 3, v40, v28);
              if ( v36 )
                *v36 = (_DWORD)v9 - (_DWORD)v36;
              v11 = v9;
              v36 = v9;
            }
            v9 = (_DWORD *)((char *)v9 + v26);
            v16 = v41;
            goto LABEL_48;
          }
          v8 -= v24;
        }
        v25 = v30;
        goto LABEL_40;
      }
    }
LABEL_48:
    v29 = *v15;
    if ( !(_DWORD)v29 )
      break;
    v15 = (unsigned int *)((char *)v15 + v29);
  }
  v2 = BufferLength;
  v10 = v31;
  if ( v11 )
    *v11 = 0;
LABEL_52:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v37 )
    ExUnlockUserBuffer(v37);
  if ( v13 >= 0 )
    v13 = v10;
  *v2 = (_DWORD)v9 - v35[1];
  return v13;
}
