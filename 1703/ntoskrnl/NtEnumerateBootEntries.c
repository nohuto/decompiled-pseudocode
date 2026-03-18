/*
 * XREFs of NtEnumerateBootEntries @ 0x14071C3B8
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     strcmp @ 0x14016B2C0 (strcmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x14025D540 (ExpIsDevicePathForRemovableMedia.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1406901D8 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x14071A230 (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x14071B180 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x14071BE8C (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x14071BFE8 (ExpVerifyWindowsOsOptions.c)
 */

NTSTATUS __stdcall NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r12
  unsigned int *PoolWithTag; // r14
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  NTSTATUS v10; // r13d
  _DWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  NTSTATUS v14; // r15d
  unsigned int *v15; // r12
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // eax
  size_t v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edi
  unsigned int v22; // eax
  char *v23; // rdx
  unsigned int v24; // r13d
  unsigned __int64 v25; // rax
  unsigned int v26; // ecx
  BOOL v27; // ecx
  int v28; // eax
  __int64 v29; // rax
  _DWORD *v30; // rdi
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rax
  __int64 v34; // rax
  BOOL v35; // [rsp+34h] [rbp-C4h]
  int v36; // [rsp+38h] [rbp-C0h]
  unsigned int i; // [rsp+3Ch] [rbp-BCh] BYREF
  unsigned int v38; // [rsp+40h] [rbp-B8h]
  int v39; // [rsp+44h] [rbp-B4h]
  _DWORD *v40; // [rsp+48h] [rbp-B0h]
  unsigned int v41; // [rsp+50h] [rbp-A8h]
  unsigned int v42; // [rsp+54h] [rbp-A4h]
  unsigned int v43; // [rsp+58h] [rbp-A0h]
  int v44; // [rsp+5Ch] [rbp-9Ch] BYREF
  unsigned int v45; // [rsp+60h] [rbp-98h]
  void *v46; // [rsp+68h] [rbp-90h] BYREF
  struct _MDL *v47; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-80h]
  _BYTE *v49; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  size_t Size; // [rsp+90h] [rbp-68h]
  void *v52; // [rsp+98h] [rbp-60h]
  size_t v53; // [rsp+A0h] [rbp-58h]
  void *v54; // [rsp+A8h] [rbp-50h]
  char v56; // [rsp+110h] [rbp+18h]

  v2 = BufferLength;
  PoolWithTag = 0LL;
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
    v38 = v8;
    if ( v8 )
      ProbeForWrite(Buffer, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v8 = Buffer != 0LL ? *BufferLength : 0;
    v38 = v8;
  }
  if ( v8 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v46, &v47);
    if ( result < 0 )
      return result;
  }
  else
  {
    v46 = 0LL;
    v47 = 0LL;
  }
  v9 = v46;
  v35 = v8 != 0;
  v10 = 0;
  v36 = 0;
  v11 = 0LL;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v13 = 0;
  for ( i = 0; ; v13 = i )
  {
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v13 = i;
    }
    if ( v13 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
      if ( !PoolWithTag )
        break;
    }
    v14 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)PoolWithTag, (int *)&i);
    if ( v14 != -1073741789 )
      goto LABEL_25;
  }
  v14 = -1073741670;
LABEL_25:
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v14 && i )
  {
    v15 = PoolWithTag;
    v48 = (unsigned __int64)PoolWithTag + 2 * i;
    while ( 1 )
    {
      v16 = *((_QWORD *)v15 + 2) - EfiBootVariablesGuid;
      if ( !v16 )
        v16 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v16 )
      {
        if ( (unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v15 + 16, &v44) )
        {
          v17 = v15[2];
          if ( v17 >= 8 )
          {
            v49 = (char *)v15 + v15[1];
            v52 = v49 + 6;
            v18 = ExpSafeWcslen((_WORD *)v49 + 3, v48);
            v21 = v18;
            if ( v18 != -1 )
              v21 = 2 * v18 + 2;
            v22 = v21 + v19 + 6;
            if ( v21 == -1 || (unsigned int)v19 >= v17 || v17 < v22 )
            {
              v11 = v40;
            }
            else
            {
              v56 = 1;
              Size = v21;
              v23 = (char *)(v20 + v21 + 6LL);
              v54 = v23;
              v53 = v19;
              Src = &v23[v19];
              v24 = v17 - v22;
              v25 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( (_DWORD *)v25 != v9 )
              {
                v26 = v25 - (_DWORD)v9;
                v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
                if ( v8 >= v26 )
                {
                  v8 -= v26;
                }
                else
                {
                  v35 = 0;
                  v8 = 0;
                  v36 = -1073741789;
                }
              }
              v39 = v19 + 12;
              if ( v8 >= (int)v19 + 12 )
              {
                *v9 = 1;
                v9[1] = v19 + 12;
                v9[2] = 4;
                memmove(v9 + 3, v23, v19);
                v28 = ExpVerifyFilePath((unsigned __int64)v9, (unsigned __int64)v9 + (unsigned int)v9[1]);
                v27 = v35;
                if ( v28 < 0 )
                {
                  v56 = 0;
                  v39 = 16;
                }
              }
              else
              {
                v8 = 0;
                v27 = 0;
                v35 = 0;
                v36 = -1073741789;
              }
              v41 = (v24 + 31) & 0xFFFFFFFC;
              v42 = (v21 + v41 + 3) & 0xFFFFFFFC;
              v43 = v39 + v42;
              v29 = v39 + v42 + 4;
              v45 = v29;
              if ( v8 >= (unsigned int)v29 )
              {
                v8 -= v29;
              }
              else
              {
                v8 = 0;
                v27 = 0;
                v35 = 0;
                v36 = -1073741789;
              }
              if ( v27 )
              {
                v30 = v9 + 1;
                memset(v9, 0, (unsigned int)v29);
                v9[1] = 1;
                v9[2] = v43;
                v9[3] = v44;
                v9[4] = 0;
                v31 = v49;
                v32 = v9[4];
                if ( (*v49 & 1) != 0 )
                  v32 = 1;
                v9[4] = v32;
                if ( (*v31 & 8) != 0 )
                  v9[4] |= 0x10u;
                v9[5] = v41;
                v9[6] = v42;
                v9[7] = v24;
                memmove(v9 + 8, Src, v24);
                if ( v24 > 0x14
                  && !strcmp((const char *)v9 + 32, "WINDOWS")
                  && (int)ExpVerifyWindowsOsOptions((__int64)(v9 + 8), v24) >= 0 )
                {
                  v9[4] |= 4u;
                }
                memmove((char *)v30 + v41, v52, Size);
                v33 = (_DWORD *)((char *)v30 + v42);
                *v33 = 1;
                v33[1] = v39;
                v33[2] = 4;
                if ( v56 )
                {
                  memmove(v33 + 3, v54, v53);
                  if ( ExpIsDevicePathForRemovableMedia(v54) )
                    v9[4] |= 8u;
                }
                else
                {
                  v9[4] |= 0x20u;
                  v33[3] = 327551;
                }
                if ( v40 )
                  *v40 = (_DWORD)v9 - (_DWORD)v40;
                v11 = v9;
                v40 = v9;
                v29 = v45;
              }
              else
              {
                v11 = v40;
              }
              v9 = (_DWORD *)((char *)v9 + v29);
            }
          }
        }
      }
      v34 = *v15;
      if ( !(_DWORD)v34 )
        break;
      v15 = (unsigned int *)((char *)v15 + v34);
    }
    v2 = BufferLength;
    v10 = v36;
    if ( v11 )
      *v11 = 0;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v47 )
    ExUnlockUserBuffer(v47);
  if ( v14 >= 0 )
    v14 = v10;
  *v2 = (_DWORD)v9 - (_DWORD)v46;
  return v14;
}
