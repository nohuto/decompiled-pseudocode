/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180002D90
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180002C54 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  wchar_t *Buffer; // r9
  unsigned __int16 Length; // r10
  wchar_t *v6; // rdx
  wchar_t *v7; // r13
  wchar_t *v8; // r8
  wchar_t *i; // rcx
  wchar_t *v10; // rdi
  int v11; // esi
  int v12; // ebp
  unsigned __int64 v13; // r14
  wchar_t *v14; // rdx
  wchar_t *j; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned int v21; // ecx
  unsigned __int16 v22; // bp
  wchar_t *v23; // rax
  wchar_t *v24; // r15
  unsigned __int64 v25; // rbx
  wchar_t *v26; // rdi
  unsigned __int64 v27; // rbx
  wchar_t *Src; // [rsp+20h] [rbp-48h]
  wchar_t *v30; // [rsp+28h] [rbp-40h]
  unsigned int v31; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+88h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  Src = Buffer;
  v6 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  v8 = Buffer;
  if ( DllName->Length )
  {
    for ( i = &Buffer[((unsigned __int64)Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        if ( !v6 )
        {
          v6 = i;
          v30 = i;
        }
      }
      else if ( *i == 92 || *i == 47 )
      {
        v8 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v10 = LdrpOriginalAppPackagesPath.Buffer;
  Size = 0;
  v11 = 0;
  v12 = v6 == 0LL ? 8 : 0;
  v31 = Length + 2 * (1 - (v8 - Buffer));
  if ( LdrpOriginalAppPackagesPath.Buffer )
  {
    LODWORD(v13) = 0;
    Size = 92;
    if ( LdrpOriginalAppPackagesPath.Length )
    {
      do
      {
        if ( LdrpOriginalAppPackagesPath.Buffer[(unsigned __int64)(unsigned int)v13 >> 1] == 59 )
          break;
        LODWORD(v13) = v13 + 2;
      }
      while ( (unsigned int)v13 < LdrpOriginalAppPackagesPath.Length );
    }
  }
  else
  {
    v13 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v10 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v10 = (wchar_t *)((char *)v10 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = v10;
    for ( j = &v10[(v13 >> 1) - 1]; j > v10; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - v10;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return -1073741562;
    v17 = (unsigned __int16)(2 * v16);
    if ( Length > 0xFFFCu || v31 + (_DWORD)v17 + v12 > 0xFFFE )
      return -1073741562;
    v11 = (unsigned __int16)(v31 + v17 + v12);
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)(v31 + v17 + v12));
    v7 = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    memmove(StringRoutine, v10, (unsigned int)v17);
    v19 = &v7[v17 >> 1];
    memmove(v19, Src, v31 - 2LL);
    v20 = ((unsigned __int64)v31 - 2) >> 1;
    if ( v30 )
    {
      v19[v20] = 0;
    }
    else
    {
      *(_QWORD *)&v19[v20] = *(_QWORD *)L".DLL";
      v19[v20 + 4] = aDll[4];
    }
  }
  v21 = Size + v13 + v12 + v31 + 14;
  if ( v21 > 0xFFFE )
    return -1073741562;
  v22 = Size + v13 + v12 + v31 + 14;
  v23 = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v21);
  v24 = v23;
  if ( !v23 )
    return -1073741801;
  memmove(v23, v10, (unsigned int)v13);
  v25 = (unsigned __int64)(unsigned int)v13 >> 1;
  v26 = &v24[v25];
  if ( Size )
  {
    memmove(&v24[v25], L"\\microsoft.system.package.metadata\\Application", Size);
    v26 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v26 = *(_QWORD *)L".Local";
  *((_DWORD *)v26 + 2) = *(_DWORD *)L"al";
  v26[6] = 92;
  memmove(v26 + 7, Src, v31 - 2LL);
  v27 = ((unsigned __int64)v31 - 2) >> 1;
  if ( v30 )
  {
    v26[v27 + 7] = 0;
  }
  else
  {
    *(_QWORD *)&v26[v27 + 7] = *(_QWORD *)L".DLL";
    v26[v27 + 11] = aDll[4];
  }
  RealName->Buffer = v7;
  RealName->MaximumLength = v11;
  RealName->Length = v11;
  if ( v11 )
    RealName->Length = v11 - 2;
  LocalName->MaximumLength = v22;
  LocalName->Length = v22 - 2;
  LocalName->Buffer = v24;
  return 0;
}
