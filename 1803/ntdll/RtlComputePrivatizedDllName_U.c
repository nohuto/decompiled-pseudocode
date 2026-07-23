/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180004250
 * Callers:
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 * Callees:
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  PWCH Buffer; // r9
  USHORT Length; // r10
  WCHAR *v6; // rdx
  WCHAR *v7; // r13
  PWCH v8; // r8
  PWCH i; // rcx
  PWCH v10; // rax
  PWCH v11; // rdi
  int v12; // esi
  int v13; // ebp
  unsigned __int64 v14; // r14
  PWCH v15; // rdx
  PWCH j; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  WCHAR *v19; // rax
  WCHAR *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  USHORT v23; // bp
  WCHAR *v24; // rax
  WCHAR *v25; // r15
  unsigned __int64 v26; // rbx
  WCHAR *v27; // rdi
  unsigned __int64 v28; // rbx
  PWCH Src; // [rsp+20h] [rbp-48h]
  PWCH v31; // [rsp+28h] [rbp-40h]
  unsigned int v32; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+88h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  Src = Buffer;
  v6 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  v8 = Buffer;
  if ( DllName->Length )
  {
    for ( i = &Buffer[((unsigned __int64)Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        v10 = i;
        if ( v6 )
          v10 = v6;
        v6 = v10;
        v31 = v10;
      }
      else if ( *i == 92 || *i == 47 )
      {
        v8 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v11 = stru_18015B2C0.Buffer;
  Size = 0;
  v12 = 0;
  v13 = v6 == 0LL ? 8 : 0;
  v32 = Length + 2 * (1 - (v8 - Buffer));
  if ( stru_18015B2C0.Buffer )
  {
    LODWORD(v14) = 0;
    Size = 92;
    if ( stru_18015B2C0.Length )
    {
      do
      {
        if ( stru_18015B2C0.Buffer[(unsigned __int64)(unsigned int)v14 >> 1] == 59 )
          break;
        LODWORD(v14) = v14 + 2;
      }
      while ( (unsigned int)v14 < stru_18015B2C0.Length );
    }
  }
  else
  {
    v14 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v11 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v11 = (PWCH)((char *)v11 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v15 = v11;
    for ( j = &v11[(v14 >> 1) - 1]; j > v11; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v15 = j + 1;
        break;
      }
    }
    v17 = v15 - v11;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v17) > 0xFFFE )
      return -1073741562;
    v18 = (unsigned __int16)(2 * v17);
    if ( Length > 0xFFFCu || v32 + (_DWORD)v18 + v13 > 0xFFFE )
      return -1073741562;
    v12 = (unsigned __int16)(v32 + v18 + v13);
    v19 = (WCHAR *)sub_18003B5E0((unsigned __int16)(v32 + v18 + v13));
    v7 = v19;
    if ( !v19 )
      return -1073741801;
    memmove(v19, v11, (unsigned int)v18);
    v20 = &v7[v18 >> 1];
    memmove(v20, Src, v32 - 2LL);
    v21 = ((unsigned __int64)v32 - 2) >> 1;
    if ( v31 )
    {
      v20[v21] = 0;
    }
    else
    {
      *(_QWORD *)&v20[v21] = 0x4C004C0044002ELL;
      v20[v21 + 4] = 0;
    }
  }
  v22 = Size + v14 + v13 + v32 + 14;
  if ( v22 > 0xFFFE )
    return -1073741562;
  v23 = Size + v14 + v13 + v32 + 14;
  v24 = (WCHAR *)sub_18003B5E0((unsigned __int16)v22);
  v25 = v24;
  if ( !v24 )
    return -1073741801;
  memmove(v24, v11, (unsigned int)v14);
  v26 = (unsigned __int64)(unsigned int)v14 >> 1;
  v27 = &v25[v26];
  if ( Size )
  {
    memmove(&v25[v26], L"\\microsoft.system.package.metadata\\Application", Size);
    v27 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v27 = 0x63006F004C002ELL;
  *((_DWORD *)v27 + 2) = 7077985;
  v27[6] = 92;
  memmove(v27 + 7, Src, v32 - 2LL);
  v28 = ((unsigned __int64)v32 - 2) >> 1;
  if ( v31 )
  {
    v27[v28 + 7] = 0;
  }
  else
  {
    *(_QWORD *)&v27[v28 + 7] = 0x4C004C0044002ELL;
    v27[v28 + 11] = 0;
  }
  RealName->Buffer = v7;
  RealName->MaximumLength = v12;
  RealName->Length = v12;
  if ( v12 )
    RealName->Length = v12 - 2;
  LocalName->MaximumLength = v23;
  LocalName->Length = v23 - 2;
  LocalName->Buffer = v25;
  return 0;
}
