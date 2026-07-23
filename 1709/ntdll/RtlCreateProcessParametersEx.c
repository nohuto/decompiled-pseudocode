/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18006AFA0
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D79D0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     ValidateStringParameter @ 0x18006B45C (ValidateStringParameter.c)
 *     RtlpCopyProcString @ 0x18006B480 (RtlpCopyProcString.c)
 *     RtlpGetBlockSizeEx @ 0x18006B7B4 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D7A40 (RtlDeNormalizeProcessParams.c)
 */

NTSTATUS __cdecl RtlCreateProcessParametersEx(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData,
        ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  __int64 v15; // r8
  unsigned __int16 *v16; // r9
  int v17; // eax
  unsigned __int64 v18; // r15
  __int16 v19; // r8
  __int64 v20; // r9
  PUNICODE_STRING v21; // r11
  int v22; // eax
  PUNICODE_STRING v23; // r10
  int v24; // eax
  PUNICODE_STRING v25; // r9
  int v26; // eax
  PUNICODE_STRING v27; // r8
  int v28; // eax
  PUNICODE_STRING v29; // rcx
  int v30; // eax
  _WORD *v31; // rdx
  PUNICODE_STRING v32; // rax
  PUNICODE_STRING v33; // r11
  PUNICODE_STRING v34; // r10
  PUNICODE_STRING v35; // r9
  __int64 MaximumLength; // r14
  __int64 Length; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  size_t BlockSize; // rsi
  unsigned __int64 v41; // rdi
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  _RTL_USER_PROCESS_PARAMETERS *v43; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v44; // rdi
  __int64 v45; // r9
  char v47; // [rsp+20h] [rbp-40h]
  _RTL_USER_PROCESS_PARAMETERS *v48; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *v49; // [rsp+30h] [rbp-30h]
  unsigned __int16 *p_Length; // [rsp+38h] [rbp-28h]
  PUNICODE_STRING v51; // [rsp+40h] [rbp-20h]
  PUNICODE_STRING v52; // [rsp+48h] [rbp-18h]
  PUNICODE_STRING v53; // [rsp+50h] [rbp-10h]
  _WORD *v54; // [rsp+58h] [rbp-8h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v49 = ProcessParameters;
  if ( (int)ValidateStringParameter(ImagePathName) < 0 )
    return -1073741811;
  v17 = v15 ? ValidateStringParameter(DllPath) : 0;
  if ( v17 < 0 )
    return -1073741811;
  v47 = 0;
  v18 = 0LL;
  if ( CurrentDirectory )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)ValidateStringParameter(CurrentDirectory) < 0 || !v18 )
      return -1073741811;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return -1073741811;
    v47 = 1;
  }
LABEL_12:
  v21 = CommandLine;
  if ( CommandLine )
    v22 = ValidateStringParameter(CommandLine);
  else
    v22 = 0;
  if ( v22 < 0 )
    return -1073741811;
  v23 = WindowTitle;
  v24 = WindowTitle ? ValidateStringParameter(WindowTitle) : 0;
  if ( v24 < 0 )
    return -1073741811;
  v25 = DesktopInfo;
  v26 = DesktopInfo ? ValidateStringParameter(DesktopInfo) : 0;
  if ( v26 < 0 )
    return -1073741811;
  v27 = ShellInfo;
  v28 = ShellInfo ? ValidateStringParameter(ShellInfo) : 0;
  if ( v28 < 0 )
    return -1073741811;
  v29 = RuntimeData;
  v30 = RuntimeData ? ValidateStringParameter(RuntimeData) : 0;
  if ( v30 < 0 )
    return -1073741811;
  v31 = &RtlpNullString;
  v32 = ImagePathName;
  if ( v21 )
    v32 = v21;
  p_Length = &v32->Length;
  v33 = (PUNICODE_STRING)&RtlpNullString;
  if ( v23 )
    v33 = v23;
  v34 = (PUNICODE_STRING)&RtlpNullString;
  v51 = v33;
  if ( v25 )
    v34 = v25;
  v35 = (PUNICODE_STRING)&RtlpNullString;
  v52 = v34;
  if ( v27 )
    v35 = v27;
  v53 = v35;
  MaximumLength = v34->MaximumLength;
  if ( v29 )
    v31 = &v29->Length;
  Length = v32->Length;
  v38 = ImagePathName->Length + 9LL;
  v54 = v31;
  v39 = ((v35->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v33->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + (v38 & 0xFFFFFFFFFFFFFFF8uLL)
      + ((Length + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((MaximumLength + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v31 )
    v39 += ((unsigned __int16)v31[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( DllPath )
    v39 += (DllPath->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Environment )
    BlockSize = RtlpGetBlockSizeEx(Environment, 1LL);
  else
    BlockSize = ProcessParameters->EnvironmentSize;
  while ( 1 )
  {
    v41 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v41 < BlockSize || v41 + v39 < v39 )
      return -1073741675;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v41 + v39);
    v43 = Heap;
    if ( !Heap )
      return -1073741670;
    if ( Environment )
    {
      memmove((char *)Heap + v39, Environment, BlockSize);
      goto LABEL_48;
    }
    RtlEnterCriticalSection(&FastPebLock);
    BlockSize = v49->EnvironmentSize;
    if ( BlockSize <= v41 )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
  }
  memmove((char *)v43 + v39, v49->Environment, v49->EnvironmentSize);
  RtlLeaveCriticalSection(&FastPebLock);
  v41 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_48:
  memset(v43, 0, sizeof(_RTL_USER_PROCESS_PARAMETERS));
  v43->EnvironmentSize = v41;
  v44 = v49;
  v43->Environment = (char *)v43 + v39;
  v43->MaximumLength = v39;
  v43->Length = v39;
  v48 = v43 + 1;
  *(_QWORD *)&v43->Flags = 1LL;
  v43->CurrentDirectory.Handle = 0LL;
  v43->ConsoleFlags = v44->ConsoleFlags;
  if ( CurrentDirectory )
  {
    RtlpCopyProcString(&v48, &v43->CurrentDirectory, CurrentDirectory, 520LL);
    if ( v47 )
    {
      v43->CurrentDirectory.DosPath.Buffer[v18] = 92;
      v43->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&FastPebLock);
    RtlpCopyProcString(&v48, &v43->CurrentDirectory, &v44->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&FastPebLock);
  }
  if ( DllPath )
    RtlpCopyProcString(&v48, &v43->DllPath, DllPath, DllPath->MaximumLength);
  RtlpCopyProcString(&v48, &v43->ImagePathName, ImagePathName, (unsigned int)ImagePathName->Length + 2);
  if ( *p_Length == p_Length[1] )
    v45 = p_Length[1];
  else
    v45 = (unsigned int)*p_Length + 2;
  RtlpCopyProcString(&v48, &v43->CommandLine, p_Length, v45);
  RtlpCopyProcString(&v48, &v43->WindowTitle, v51, v51->MaximumLength);
  RtlpCopyProcString(&v48, &v43->DesktopInfo, v52, v52->MaximumLength);
  RtlpCopyProcString(&v48, &v43->ShellInfo, v53, v53->MaximumLength);
  if ( *v54 )
    RtlpCopyProcString(&v48, &v43->RuntimeData, v54, (unsigned __int16)v54[1]);
  if ( (Flags & 1) != 0 )
    *pProcessParameters = v43;
  else
    *pProcessParameters = RtlDeNormalizeProcessParams(v43);
  return 0;
}
