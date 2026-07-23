/*
 * XREFs of NtTranslateFilePath @ 0x14071E874
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExpTranslateArcPath @ 0x14071B0C0 (ExpTranslateArcPath.c)
 *     ExpTranslateEfiPath @ 0x14071B354 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x14071B9C4 (ExpTranslateNtPath.c)
 *     ExpVerifyFilePath @ 0x14071BE8C (ExpVerifyFilePath.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  char v7; // dl
  unsigned __int64 p_Length; // rax
  __int64 v9; // rcx
  ULONG Length; // r15d
  char *v11; // rdx
  unsigned int v12; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r14
  _DWORD *v15; // rsi
  NTSTATUS v16; // ebx
  unsigned int v17; // eax
  NTSTATUS v18; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-58h]
  unsigned int v20; // [rsp+24h] [rbp-54h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+2Ch] [rbp-4Ch]
  PVOID P; // [rsp+38h] [rbp-40h]
  unsigned int *v25; // [rsp+98h] [rbp+20h]

  v25 = *(unsigned int **)&OutputFilePathLength;
  P = 0LL;
  if ( dword_140344B30 != 2 )
    return -1073741822;
  if ( OutputType - 1 <= 4 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    PreviousMode = v7;
    if ( v7 )
    {
      p_Length = (unsigned __int64)&InputFilePath->Length;
      v9 = 0x7FFFFFFF0000LL;
      if ( p_Length >= 0x7FFFFFFF0000LL )
        p_Length = 0x7FFFFFFF0000LL;
      Length = *(_DWORD *)p_Length;
      NumberOfBytes[0] = *(_DWORD *)p_Length;
    }
    else
    {
      Length = InputFilePath->Length;
      NumberOfBytes[0] = Length;
      v9 = 0x7FFFFFFF0000LL;
    }
    if ( Length < 0xC )
      return -1073741811;
    if ( v7 )
    {
      if ( ((unsigned __int8)InputFilePath & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (char *)InputFilePath + Length;
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < (char *)InputFilePath )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( *(_QWORD *)&OutputFilePathLength < 0x7FFFFFFF0000uLL )
        v9 = *(_QWORD *)&OutputFilePathLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v12 = OutputFilePath != 0LL ? **(_DWORD **)&OutputFilePathLength : 0;
      v20 = v12;
      if ( v12 )
        ProbeForWrite(OutputFilePath, v12, 4u);
      if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return -1073741727;
      Length = NumberOfBytes[0];
    }
    else
    {
      v12 = OutputFilePath != 0LL ? **(_DWORD **)&OutputFilePathLength : 0;
      v20 = v12;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x72766E45u);
    v14 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memmove(PoolWithTag, InputFilePath, Length);
    v14[1] = Length;
    if ( v12 )
    {
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72766E45u);
      *(_QWORD *)&NumberOfBytes[1] = v15;
      if ( !v15 )
      {
        ExFreePoolWithTag(v14, 0);
        P = 0LL;
        return -1073741670;
      }
    }
    else
    {
      v15 = 0LL;
      *(_QWORD *)&NumberOfBytes[1] = 0LL;
    }
    v16 = ExpVerifyFilePath((unsigned __int64)v14, (unsigned __int64)v14 + (unsigned int)v14[1]);
    if ( v16 < 0 )
    {
LABEL_46:
      ExFreePoolWithTag(v14, 0);
      if ( v16 >= 0 )
      {
        if ( !v15 )
        {
LABEL_51:
          *v25 = v12;
          return v16;
        }
        memmove(OutputFilePath, v15, v12);
      }
      if ( v15 )
      {
        ExFreePoolWithTag(v15, 0);
        *(_QWORD *)&NumberOfBytes[1] = 0LL;
      }
      goto LABEL_51;
    }
    v17 = v14[2];
    if ( OutputType == v17 )
    {
      if ( v12 < Length )
        v16 = -1073741789;
      else
        memmove(v15, v14, Length);
      v12 = Length;
      v20 = Length;
      goto LABEL_46;
    }
    if ( v17 )
    {
      if ( v17 <= 2 )
      {
        v18 = ExpTranslateArcPath((__int64)v14, OutputType, v15, (__int64)&v20);
        goto LABEL_44;
      }
      if ( v17 == 3 )
      {
        v18 = ExpTranslateNtPath((__int64)v14, OutputType, (char *)v15, &v20);
        goto LABEL_44;
      }
      if ( v17 == 4 )
      {
        v18 = ExpTranslateEfiPath((__int64)v14, OutputType, v15, &v20);
LABEL_44:
        v16 = v18;
        v12 = v20;
        goto LABEL_46;
      }
    }
    v16 = -1073741811;
    goto LABEL_46;
  }
  return -1073741811;
}
