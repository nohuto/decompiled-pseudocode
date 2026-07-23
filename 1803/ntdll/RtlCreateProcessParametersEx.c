/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18004B3F0
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D1A60 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004B8E4 @ 0x18004B8E4 (sub_18004B8E4.c)
 *     sub_18004B908 @ 0x18004B908 (sub_18004B908.c)
 *     sub_18004C748 @ 0x18004C748 (sub_18004C748.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D1AD0 (RtlDeNormalizeProcessParams.c)
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
  unsigned __int64 v18; // rbp
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
  __int64 Length; // rax
  PUNICODE_STRING v36; // r9
  __int64 MaximumLength; // rcx
  unsigned __int64 v38; // r14
  PVOID v39; // r12
  size_t EnvironmentSize; // rdi
  unsigned __int64 v41; // rsi
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  PRTL_USER_PROCESS_PARAMETERS v43; // rbx
  char *v44; // rax
  char *v45; // rdi
  PRTL_USER_PROCESS_PARAMETERS v46; // rsi
  __int64 v47; // r9
  unsigned __int64 v49; // r12
  bool v50; // cf
  char v51; // [rsp+20h] [rbp-78h]
  UNICODE_STRING *p_RedirectionDllName; // [rsp+28h] [rbp-70h] BYREF
  PRTL_USER_PROCESS_PARAMETERS v53; // [rsp+30h] [rbp-68h]
  unsigned __int16 *p_Length; // [rsp+38h] [rbp-60h]
  PUNICODE_STRING v55; // [rsp+40h] [rbp-58h]
  PUNICODE_STRING v56; // [rsp+48h] [rbp-50h]
  PUNICODE_STRING v57; // [rsp+50h] [rbp-48h]
  _WORD *v58; // [rsp+58h] [rbp-40h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v53 = ProcessParameters;
  if ( (int)sub_18004B8E4(ImagePathName) < 0 )
    return -1073741811;
  v17 = v15 ? sub_18004B8E4(DllPath) : 0;
  if ( v17 < 0 )
    return -1073741811;
  v51 = 0;
  v18 = 0LL;
  if ( CurrentDirectory )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)sub_18004B8E4(CurrentDirectory) < 0 || !v18 )
      return -1073741811;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return -1073741811;
    v51 = 1;
  }
LABEL_12:
  v21 = CommandLine;
  if ( CommandLine )
    v22 = sub_18004B8E4(CommandLine);
  else
    v22 = 0;
  if ( v22 < 0 )
    return -1073741811;
  v23 = WindowTitle;
  v24 = WindowTitle ? sub_18004B8E4(WindowTitle) : 0;
  if ( v24 < 0 )
    return -1073741811;
  v25 = DesktopInfo;
  v26 = DesktopInfo ? sub_18004B8E4(DesktopInfo) : 0;
  if ( v26 < 0 )
    return -1073741811;
  v27 = ShellInfo;
  v28 = ShellInfo ? sub_18004B8E4(ShellInfo) : 0;
  if ( v28 < 0 )
    return -1073741811;
  v29 = RuntimeData;
  v30 = RuntimeData ? sub_18004B8E4(RuntimeData) : 0;
  if ( v30 < 0 )
    return -1073741811;
  v31 = &unk_180110400;
  v32 = ImagePathName;
  if ( v21 )
    v32 = v21;
  p_Length = &v32->Length;
  v33 = (PUNICODE_STRING)&unk_180110400;
  if ( v23 )
    v33 = v23;
  v34 = (PUNICODE_STRING)&unk_180110400;
  v55 = v33;
  Length = v32->Length;
  if ( v25 )
    v34 = v25;
  v36 = (PUNICODE_STRING)&unk_180110400;
  v56 = v34;
  if ( v27 )
    v36 = v27;
  v57 = v36;
  if ( v29 )
    v31 = &v29->Length;
  MaximumLength = v34->MaximumLength;
  v58 = v31;
  v38 = ((v33->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((ImagePathName->Length + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((Length + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((MaximumLength + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v36->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v31 )
    v38 += ((unsigned __int16)v31[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( DllPath )
    v38 += (DllPath->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v39 = Environment;
  if ( Environment )
    EnvironmentSize = sub_18004C748(Environment, 1LL);
  else
    EnvironmentSize = ProcessParameters->EnvironmentSize;
  v41 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v41 >= EnvironmentSize )
  {
    while ( 1 )
    {
      if ( v41 + v38 < v38 )
        return -1073741675;
      Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v41 + v38);
      v43 = Heap;
      if ( !Heap )
        return -1073741670;
      v44 = (char *)Heap + v38;
      if ( v39 )
        break;
      RtlEnterCriticalSection(&stru_18015BE80);
      EnvironmentSize = v53->EnvironmentSize;
      v49 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( EnvironmentSize <= v41 )
      {
        v45 = (char *)v43 + v38;
        memmove((char *)v43 + v38, v53->Environment, v53->EnvironmentSize);
        RtlLeaveCriticalSection(&stru_18015BE80);
        v41 = v49;
        goto LABEL_48;
      }
      RtlLeaveCriticalSection(&stru_18015BE80);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
      v50 = v49 < EnvironmentSize;
      v41 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v39 = Environment;
      if ( v50 )
        return -1073741675;
    }
    memmove(v44, v39, EnvironmentSize);
    v45 = (char *)v43 + v38;
LABEL_48:
    memset(v43, 0, 0x410uLL);
    v43->EnvironmentSize = v41;
    v46 = v53;
    v43->MaximumLength = v38;
    v43->Length = v38;
    v43->Environment = v45;
    p_RedirectionDllName = &v43->RedirectionDllName;
    *(_QWORD *)&v43->Flags = 1LL;
    v43->CurrentDirectory.Handle = 0LL;
    v43->ConsoleFlags = v46->ConsoleFlags & 1;
    if ( CurrentDirectory )
    {
      sub_18004B908(&p_RedirectionDllName, &v43->CurrentDirectory, CurrentDirectory, 520LL);
      if ( v51 )
      {
        v43->CurrentDirectory.DosPath.Buffer[v18] = 92;
        v43->CurrentDirectory.DosPath.Length += 2;
      }
    }
    else
    {
      RtlEnterCriticalSection(&stru_18015BE80);
      sub_18004B908(&p_RedirectionDllName, &v43->CurrentDirectory, &v46->CurrentDirectory, 520LL);
      RtlLeaveCriticalSection(&stru_18015BE80);
    }
    if ( DllPath )
      sub_18004B908(&p_RedirectionDllName, &v43->DllPath, DllPath, DllPath->MaximumLength);
    sub_18004B908(&p_RedirectionDllName, &v43->ImagePathName, ImagePathName, (unsigned int)ImagePathName->Length + 2);
    if ( *p_Length == p_Length[1] )
      v47 = p_Length[1];
    else
      v47 = (unsigned int)*p_Length + 2;
    sub_18004B908(&p_RedirectionDllName, &v43->CommandLine, p_Length, v47);
    sub_18004B908(&p_RedirectionDllName, &v43->WindowTitle, v55, v55->MaximumLength);
    sub_18004B908(&p_RedirectionDllName, &v43->DesktopInfo, v56, v56->MaximumLength);
    sub_18004B908(&p_RedirectionDllName, &v43->ShellInfo, v57, v57->MaximumLength);
    if ( *v58 )
      sub_18004B908(&p_RedirectionDllName, &v43->RuntimeData, v58, (unsigned __int16)v58[1]);
    if ( (Flags & 1) == 0 )
      v43 = RtlDeNormalizeProcessParams(v43);
    *pProcessParameters = v43;
    return 0;
  }
  return -1073741675;
}
