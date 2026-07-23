/*
 * XREFs of ExpSetBootEntry @ 0x1407C0A28
 * Callers:
 *     NtAddBootEntry @ 0x1407C28D0 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1407C39EC (NtModifyBootEntry.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strcmp @ 0x140189DF0 (strcmp.c)
 *     swprintf_s @ 0x14018D230 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x1401AAC40 (ZwTranslateFilePath.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x140720FA4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140721290 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x1407C09E8 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1407C26DC (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1407C2864 (ExpVerifyWindowsOsOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v14; // rdi
  int EnvironmentVariable; // ebx
  _FILE_PATH *v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rsi
  _FILE_PATH *v19; // r15
  char *v20; // r13
  int v21; // eax
  _FILE_PATH *v22; // rax
  _FILE_PATH *v23; // rbx
  ULONG Length; // eax
  ULONG v25; // eax
  ULONG v26; // esi
  size_t v27; // rbx
  PVOID v28; // rax
  size_t v29; // r8
  int *v30; // rbx
  int v31; // eax
  void *v32; // rcx
  __int64 v33; // rbx
  char *v34; // rbx
  char *v35; // r13
  _FILE_PATH *v36; // r8
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v38; // r13
  ULONG OutputFilePathLength; // [rsp+34h] [rbp-C4h] BYREF
  ULONG v40; // [rsp+38h] [rbp-C0h] BYREF
  _FILE_PATH *v41; // [rsp+40h] [rbp-B8h]
  _DWORD *v42; // [rsp+50h] [rbp-A8h]
  _FILE_PATH *v43; // [rsp+58h] [rbp-A0h]
  ULONG v44; // [rsp+60h] [rbp-98h] BYREF
  int v46; // [rsp+68h] [rbp-90h]
  int v47; // [rsp+6Ch] [rbp-8Ch]
  unsigned int v48; // [rsp+70h] [rbp-88h]
  size_t Size; // [rsp+78h] [rbp-80h]
  unsigned int v50; // [rsp+80h] [rbp-78h]
  PVOID P; // [rsp+88h] [rbp-70h]
  PVOID v52; // [rsp+90h] [rbp-68h]
  char *v53; // [rsp+98h] [rbp-60h]
  wchar_t Dst[12]; // [rsp+B0h] [rbp-48h] BYREF

  v3 = (_DWORD *)a3;
  v42 = (_DWORD *)a3;
  v47 = a1;
  v52 = 0LL;
  i = 0;
  v43 = 0LL;
  v6 = 0LL;
  v41 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)v8;
    v50 = *(_DWORD *)v8;
  }
  else
  {
    v9 = *(_DWORD *)v8;
    v50 = *(_DWORD *)v8;
  }
  if ( v9 < 0x1C )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (unsigned __int64)a2 + v9;
    if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      v12 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
      v9 = v50;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72766E45u);
  v14 = PoolWithTag;
  v52 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v9);
  Size = (size_t)v14 + v9;
  if ( *v14 == 1 && (v47 || v14[2] <= 0xFFFF) )
  {
    v14[3] &= 3u;
    v17 = v14[4];
    if ( (v17 & 1) != 0
      || (v48 = v14[5], (v48 & 3) != 0)
      || (v18 = v14[6], (unsigned int)v18 > v9)
      || (v53 = (char *)v14 + v18 + 28, v53 >= (char *)v14 + v9) )
    {
      EnvironmentVariable = -1073741811;
      v16 = v43;
      v6 = v43;
      goto LABEL_86;
    }
    if ( (unsigned int)v18 >= 8 && !strcmp((const char *)v14 + 28, "WINDOWS") )
    {
      if ( (unsigned int)v18 <= 0x14 )
      {
LABEL_33:
        EnvironmentVariable = -1073741811;
LABEL_34:
        v16 = v43;
        v6 = v43;
LABEL_85:
        v3 = v42;
        goto LABEL_86;
      }
      EnvironmentVariable = ExpVerifyWindowsOsOptions(v14 + 7, (unsigned int)v18);
      if ( EnvironmentVariable < 0 )
        goto LABEL_34;
      v46 = 1;
      v19 = (_FILE_PATH *)((char *)v14 + v14[11] + 28);
    }
    else
    {
      v46 = 0;
      v19 = 0LL;
    }
    v20 = (char *)v14 + v17;
    v21 = ExpSafeWcslen(v20, Size);
    if ( v21 == -1 )
      goto LABEL_33;
    LODWORD(Size) = 2 * v21 + 2;
    v16 = (_FILE_PATH *)((char *)v14 + v48);
    v43 = v16;
    EnvironmentVariable = ExpVerifyFilePath(v16);
    if ( EnvironmentVariable >= 0 )
    {
      if ( v53 > v20 || &v20[(unsigned int)Size] > (char *)v16 )
      {
        EnvironmentVariable = -1073741811;
        goto LABEL_84;
      }
      if ( v16->Type == 4 )
      {
        Length = v16->Length;
        v41 = (_FILE_PATH *)((char *)v14 + v48);
      }
      else
      {
        OutputFilePathLength = 0;
        EnvironmentVariable = ZwTranslateFilePath(v16, 4u, 0LL, (ULONG)&OutputFilePathLength);
        if ( EnvironmentVariable != -1073741789 )
          goto LABEL_84;
        v22 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
        v23 = v22;
        v41 = v22;
        if ( !v22 )
        {
          EnvironmentVariable = -1073741670;
          v6 = 0LL;
          goto LABEL_85;
        }
        memset(v22, 0, OutputFilePathLength);
        v40 = OutputFilePathLength;
        EnvironmentVariable = ZwTranslateFilePath(v16, 4u, v23, (ULONG)&v40);
        if ( EnvironmentVariable < 0 )
          goto LABEL_84;
        Length = OutputFilePathLength;
      }
      v25 = Length - 12;
      OutputFilePathLength = v25;
      v44 = 0;
      if ( !v46 || v19->Type == 4 )
      {
        v26 = v14[6];
LABEL_54:
        v48 = Size + 6 + v26 + v25;
        v27 = v48;
        v28 = ExAllocatePoolWithTag(NonPagedPoolNx, v48, 0x72766E45u);
        P = v28;
        if ( !v28 )
        {
          EnvironmentVariable = -1073741670;
LABEL_56:
          v16 = v43;
          goto LABEL_84;
        }
        v29 = v27;
        v30 = (int *)v28;
        memset(v28, 0, v29);
        *v30 = 0;
        v31 = *v30;
        if ( (v14[3] & 1) != 0 )
          v31 = 1;
        *v30 = v31;
        *((_WORD *)v30 + 2) = OutputFilePathLength;
        v32 = (char *)v30 + 6;
        v33 = (unsigned int)Size;
        memmove(v32, v20, (unsigned int)Size);
        v34 = (char *)P + v33 + 6;
        memmove(v34, v41->FilePath, OutputFilePathLength);
        v35 = &v34[OutputFilePathLength];
        if ( !v46 || v19->Type == 4 )
        {
          memmove(&v34[OutputFilePathLength], v14 + 7, v26);
        }
        else
        {
          memmove(&v34[OutputFilePathLength], v14 + 7, v14[11]);
          *((_DWORD *)v35 + 3) = v26;
          v36 = (_FILE_PATH *)&v35[v14[11]];
          v40 = v44;
          EnvironmentVariable = ZwTranslateFilePath(v19, 4u, v36, (ULONG)&v44);
          if ( EnvironmentVariable )
            goto LABEL_56;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( v47 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x", i);
            v40 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v40, 0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 9uLL, L"Boot%04X", i);
              v40 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v40, 0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
              break;
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_81;
          }
          if ( i > 0xFFFF )
          {
            EnvironmentVariable = -1073741670;
LABEL_81:
            ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v14 = (unsigned int *)v52;
            goto LABEL_56;
          }
        }
        else
        {
          v38 = v52;
          i = *((_DWORD *)v52 + 2);
          swprintf_s(Dst, 9uLL, L"Boot%04X", i);
          v40 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v40, 0LL);
          if ( EnvironmentVariable == -1073741568 && ((2 * ((v38[2] | (2 * v38[2])) & 0xC4444444)) & v38[2]) != 0 )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x");
            v40 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v40, 0LL);
          }
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_81;
        }
        EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, (__int64)P, v48, 1);
        goto LABEL_81;
      }
      EnvironmentVariable = ZwTranslateFilePath(v19, 4u, 0LL, (ULONG)&v44);
      if ( EnvironmentVariable == -1073741789 )
      {
        v26 = v44 + v14[6] - v19->Length;
        v25 = OutputFilePathLength;
        goto LABEL_54;
      }
    }
LABEL_84:
    v6 = v41;
    goto LABEL_85;
  }
  EnvironmentVariable = -1073741811;
  v16 = v43;
LABEL_86:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 && v6 != v16 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v14, 0);
  if ( v47 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
