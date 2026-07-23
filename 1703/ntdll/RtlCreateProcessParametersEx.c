/*
 * XREFs of RtlCreateProcessParametersEx @ 0x180062490
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D8AD0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180062954 @ 0x180062954 (sub_180062954.c)
 *     sub_180062978 @ 0x180062978 (sub_180062978.c)
 *     sub_180063838 @ 0x180063838 (sub_180063838.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D8B40 (RtlDeNormalizeProcessParams.c)
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
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rbx
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
  __int64 Length; // r14
  _WORD *v32; // rdx
  PUNICODE_STRING v33; // rax
  PUNICODE_STRING v34; // rdi
  PUNICODE_STRING v35; // r10
  PUNICODE_STRING v36; // r9
  __int64 v37; // rcx
  unsigned __int64 v38; // r14
  size_t EnvironmentSize; // rsi
  unsigned __int64 v40; // rdi
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  _RTL_USER_PROCESS_PARAMETERS *v42; // rbx
  PRTL_USER_PROCESS_PARAMETERS v43; // rdi
  __int64 v44; // r9
  char v46; // [rsp+20h] [rbp-40h]
  UNICODE_STRING *p_RedirectionDllName; // [rsp+28h] [rbp-38h] BYREF
  PRTL_USER_PROCESS_PARAMETERS v48; // [rsp+30h] [rbp-30h]
  unsigned __int16 *p_Length; // [rsp+38h] [rbp-28h]
  PUNICODE_STRING v50; // [rsp+40h] [rbp-20h]
  PUNICODE_STRING v51; // [rsp+48h] [rbp-18h]
  PUNICODE_STRING v52; // [rsp+50h] [rbp-10h]
  _WORD *v53; // [rsp+58h] [rbp-8h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v48 = ProcessParameters;
  if ( (int)sub_180062954(ImagePathName) < 0 )
    return -1073741811;
  v17 = v15 ? sub_180062954(DllPath) : 0;
  if ( v17 < 0 )
    return -1073741811;
  v46 = 0;
  v18 = 0LL;
  if ( CurrentDirectory )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)sub_180062954(CurrentDirectory) < 0 || !v18 )
      return -1073741811;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return -1073741811;
    v46 = 1;
  }
LABEL_12:
  v21 = CommandLine;
  if ( CommandLine )
    v22 = sub_180062954(CommandLine);
  else
    v22 = 0;
  if ( v22 < 0 )
    return -1073741811;
  v23 = WindowTitle;
  v24 = WindowTitle ? sub_180062954(WindowTitle) : 0;
  if ( v24 < 0 )
    return -1073741811;
  v25 = DesktopInfo;
  v26 = DesktopInfo ? sub_180062954(DesktopInfo) : 0;
  if ( v26 < 0 )
    return -1073741811;
  v27 = ShellInfo;
  v28 = ShellInfo ? sub_180062954(ShellInfo) : 0;
  if ( v28 < 0 )
    return -1073741811;
  v29 = RuntimeData;
  v30 = RuntimeData ? sub_180062954(RuntimeData) : 0;
  if ( v30 < 0 )
    return -1073741811;
  Length = ImagePathName->Length;
  v32 = &unk_180110678;
  v33 = (PUNICODE_STRING)&unk_180110678;
  v34 = ImagePathName;
  if ( v21 )
    v34 = v21;
  p_Length = &v34->Length;
  if ( v23 )
    v33 = v23;
  v50 = v33;
  v35 = (PUNICODE_STRING)&unk_180110678;
  if ( v25 )
    v35 = v25;
  v36 = (PUNICODE_STRING)&unk_180110678;
  v51 = v35;
  if ( v27 )
    v36 = v27;
  v52 = v36;
  if ( v29 )
    v32 = &v29->Length;
  v37 = v33->MaximumLength + 7LL;
  v53 = v32;
  v38 = ((v34->Length + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v35->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v36->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + (v37 & 0xFFFFFFFFFFFFFFF8uLL)
      + ((Length + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v32 )
    v38 += ((unsigned __int16)v32[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( DllPath )
    v38 += (DllPath->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Environment )
    EnvironmentSize = sub_180063838(Environment, 1LL);
  else
    EnvironmentSize = ProcessParameters->EnvironmentSize;
  while ( 1 )
  {
    v40 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v40 < EnvironmentSize || v40 + v38 < v38 )
      return -1073741675;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v40 + v38);
    v42 = Heap;
    if ( !Heap )
      return -1073741670;
    if ( Environment )
    {
      memmove((char *)Heap + v38, Environment, EnvironmentSize);
      goto LABEL_48;
    }
    RtlEnterCriticalSection(&stru_18015AE60);
    EnvironmentSize = v48->EnvironmentSize;
    if ( EnvironmentSize <= v40 )
      break;
    RtlLeaveCriticalSection(&stru_18015AE60);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v42);
  }
  memmove((char *)v42 + v38, v48->Environment, v48->EnvironmentSize);
  RtlLeaveCriticalSection(&stru_18015AE60);
  v40 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_48:
  memset(v42, 0, 0x410uLL);
  v42->EnvironmentSize = v40;
  v43 = v48;
  v42->Environment = (char *)v42 + v38;
  v42->MaximumLength = v38;
  v42->Length = v38;
  p_RedirectionDllName = &v42->RedirectionDllName;
  *(_QWORD *)&v42->Flags = 1LL;
  v42->CurrentDirectory.Handle = 0LL;
  v42->ConsoleFlags = v43->ConsoleFlags;
  if ( CurrentDirectory )
  {
    sub_180062978(&p_RedirectionDllName, &v42->CurrentDirectory, CurrentDirectory, 520LL);
    if ( v46 )
    {
      v42->CurrentDirectory.DosPath.Buffer[v18] = 92;
      v42->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&stru_18015AE60);
    sub_180062978(&p_RedirectionDllName, &v42->CurrentDirectory, &v43->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&stru_18015AE60);
  }
  if ( DllPath )
    sub_180062978(&p_RedirectionDllName, &v42->DllPath, DllPath, DllPath->MaximumLength);
  sub_180062978(&p_RedirectionDllName, &v42->ImagePathName, ImagePathName, (unsigned int)ImagePathName->Length + 2);
  if ( *p_Length == p_Length[1] )
    v44 = p_Length[1];
  else
    v44 = (unsigned int)*p_Length + 2;
  sub_180062978(&p_RedirectionDllName, &v42->CommandLine, p_Length, v44);
  sub_180062978(&p_RedirectionDllName, &v42->WindowTitle, v50, v50->MaximumLength);
  sub_180062978(&p_RedirectionDllName, &v42->DesktopInfo, v51, v51->MaximumLength);
  sub_180062978(&p_RedirectionDllName, &v42->ShellInfo, v52, v52->MaximumLength);
  if ( *v53 )
    sub_180062978(&p_RedirectionDllName, &v42->RuntimeData, v53, (unsigned __int16)v53[1]);
  if ( (Flags & 1) != 0 )
    *pProcessParameters = v42;
  else
    *pProcessParameters = RtlDeNormalizeProcessParams(v42);
  return 0;
}
