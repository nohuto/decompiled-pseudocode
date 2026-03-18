/*
 * XREFs of NtEnumerateBootEntries @ 0x14075BC58
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     strcmp @ 0x14015FC60 (strcmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x1402870C0 (ExpIsDevicePathForRemovableMedia.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1406BBEA0 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x140759ACC (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x14075AA1C (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x14075B720 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x14075B87C (ExpVerifyWindowsOsOptions.c)
 */

NTSTATUS __stdcall NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r12
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _DWORD *v8; // r14
  _DWORD *v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // r15
  unsigned int v13; // esi
  unsigned int v14; // eax
  NTSTATUS v15; // edi
  unsigned int *v16; // r12
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r13d
  unsigned int v20; // eax
  size_t v21; // r8
  __int64 v22; // r9
  unsigned int v23; // esi
  unsigned int v24; // eax
  char *v25; // rdx
  unsigned int v26; // r13d
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  BOOL v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  _DWORD *v32; // rsi
  _DWORD *v33; // rcx
  int v34; // eax
  _DWORD *v35; // rax
  __int64 v36; // rax
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-C8h] BYREF
  KPROCESSOR_MODE NumberOfBytes_4; // [rsp+34h] [rbp-C4h]
  BOOL v39; // [rsp+38h] [rbp-C0h]
  int v40; // [rsp+3Ch] [rbp-BCh]
  unsigned int v41; // [rsp+40h] [rbp-B8h]
  int v42; // [rsp+44h] [rbp-B4h]
  _DWORD *v43; // [rsp+48h] [rbp-B0h]
  unsigned int v44; // [rsp+50h] [rbp-A8h]
  unsigned int v45; // [rsp+54h] [rbp-A4h]
  unsigned __int64 v46; // [rsp+58h] [rbp-A0h]
  unsigned int v47; // [rsp+60h] [rbp-98h]
  int v48; // [rsp+64h] [rbp-94h] BYREF
  unsigned int v49; // [rsp+68h] [rbp-90h]
  void *v50; // [rsp+70h] [rbp-88h] BYREF
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  _BYTE *v52; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  size_t Size; // [rsp+90h] [rbp-68h]
  void *v55; // [rsp+98h] [rbp-60h]
  size_t v56; // [rsp+A0h] [rbp-58h]
  void *v57; // [rsp+A8h] [rbp-50h]
  char v59; // [rsp+110h] [rbp+18h]

  v2 = BufferLength;
  if ( dword_14035E690 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  NumberOfBytes_4 = PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v6 = (__int64)BufferLength;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = Buffer != 0LL ? *BufferLength : 0;
    v41 = v7;
    if ( v7 )
      ProbeForWrite(Buffer, v7, 4u);
    PreviousMode = NumberOfBytes_4;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, NumberOfBytes_4) )
      return -1073741727;
  }
  else
  {
    v7 = Buffer != 0LL ? *BufferLength : 0;
    v41 = v7;
  }
  if ( v7 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v7, PreviousMode, IoWriteAccess, &v50, (struct _MDL **)&P);
    if ( result < 0 )
      return result;
  }
  else
  {
    v50 = 0LL;
    P = 0LL;
  }
  v8 = v50;
  v39 = v7 != 0;
  v40 = 0;
  v9 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x72766E45u);
  v12 = PoolWithTag;
  v13 = PoolWithTag != 0LL ? 0x2000 : 0;
  for ( NumberOfBytes = v13; ; v13 = NumberOfBytes )
  {
    v15 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsBootEntry, (__int64)PoolWithTag, &NumberOfBytes);
    if ( v15 != -1073741789 )
      break;
    v14 = NumberOfBytes;
    if ( v13 >= NumberOfBytes )
      break;
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v14 = NumberOfBytes;
    }
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x72766E45u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v15 && NumberOfBytes )
  {
    v16 = v12;
    v17 = (unsigned __int64)v12 + 2 * NumberOfBytes;
    v46 = v17;
    while ( 1 )
    {
      v18 = *((_QWORD *)v16 + 2) - EfiBootVariablesGuid;
      if ( !v18 )
        v18 = *((_QWORD *)v16 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v18 && (unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v16 + 16, &v48) )
      {
        v19 = v16[2];
        if ( v19 < 8 )
          goto LABEL_69;
        v52 = (char *)v16 + v16[1];
        v55 = v52 + 6;
        v20 = ExpSafeWcslen((_WORD *)v52 + 3, v17);
        v23 = v20;
        if ( v20 != -1 )
          v23 = 2 * v20 + 2;
        v24 = v23 + v21 + 6;
        if ( v23 == -1 || (unsigned int)v21 >= v19 || v19 < v24 )
        {
          v17 = v46;
LABEL_69:
          v9 = v43;
          goto LABEL_70;
        }
        v59 = 1;
        Size = v23;
        v25 = (char *)(v22 + v23 + 6LL);
        v57 = v25;
        v56 = v21;
        Src = &v25[v21];
        v26 = v19 - v24;
        v27 = ((unsigned __int64)v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD *)v27 != v8 )
        {
          v28 = v27 - (_DWORD)v8;
          v8 = (_DWORD *)(((unsigned __int64)v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v7 >= v28 )
          {
            v7 -= v28;
          }
          else
          {
            v39 = 0;
            v7 = 0;
            v40 = -1073741789;
          }
        }
        v42 = v21 + 12;
        if ( v7 >= (int)v21 + 12 )
        {
          *v8 = 1;
          v8[1] = v21 + 12;
          v8[2] = 4;
          memmove(v8 + 3, v25, v21);
          v30 = ExpVerifyFilePath((unsigned __int64)v8, (unsigned __int64)v8 + (unsigned int)v8[1]);
          v29 = v39;
          if ( v30 < 0 )
          {
            v59 = 0;
            v42 = 16;
          }
        }
        else
        {
          v7 = 0;
          v29 = 0;
          v39 = 0;
          v40 = -1073741789;
        }
        v44 = (v26 + 31) & 0xFFFFFFFC;
        v45 = (v23 + v44 + 3) & 0xFFFFFFFC;
        v47 = v42 + v45;
        v31 = v42 + v45 + 4;
        v49 = v31;
        if ( v7 >= (unsigned int)v31 )
        {
          v7 -= v31;
        }
        else
        {
          v7 = 0;
          v29 = 0;
          v39 = 0;
          v40 = -1073741789;
        }
        if ( v29 )
        {
          v32 = v8 + 1;
          memset(v8, 0, (unsigned int)v31);
          v8[1] = 1;
          v8[2] = v47;
          v8[3] = v48;
          v8[4] = 0;
          v33 = v52;
          v34 = v8[4];
          if ( (*v52 & 1) != 0 )
            v34 = 1;
          v8[4] = v34;
          if ( (*v33 & 8) != 0 )
            v8[4] |= 0x10u;
          v8[5] = v44;
          v8[6] = v45;
          v8[7] = v26;
          memmove(v8 + 8, Src, v26);
          if ( v26 > 0x14
            && !strcmp((const char *)v8 + 32, "WINDOWS")
            && (int)ExpVerifyWindowsOsOptions((__int64)(v8 + 8), v26) >= 0 )
          {
            v8[4] |= 4u;
          }
          memmove((char *)v32 + v44, v55, Size);
          v35 = (_DWORD *)((char *)v32 + v45);
          *v35 = 1;
          v35[1] = v42;
          v35[2] = 4;
          if ( v59 )
          {
            memmove(v35 + 3, v57, v56);
            if ( ExpIsDevicePathForRemovableMedia(v57) )
              v8[4] |= 8u;
          }
          else
          {
            v8[4] |= 0x20u;
            v35[3] = 327551;
          }
          if ( v43 )
            *v43 = (_DWORD)v8 - (_DWORD)v43;
          v9 = v8;
          v43 = v8;
          v31 = v49;
        }
        else
        {
          v9 = v43;
        }
        v8 = (_DWORD *)((char *)v8 + v31);
        v17 = v46;
      }
LABEL_70:
      v36 = *v16;
      if ( !(_DWORD)v36 )
      {
        v2 = BufferLength;
        if ( v9 )
          *v9 = 0;
        goto LABEL_76;
      }
      v16 = (unsigned int *)((char *)v16 + v36);
    }
  }
  if ( v15 == -1073741789 )
    v15 = -1073741306;
LABEL_76:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  if ( v15 >= 0 )
    v15 = v40;
  *v2 = (_DWORD)v8 - (_DWORD)v50;
  return v15;
}
