/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180005200
 * Callers:
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 * Callees:
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  PWCH Buffer; // r9
  USHORT Length; // r10
  PWCH v6; // rdx
  PWCH v7; // r8
  PWCH i; // rcx
  PWCH v9; // rdi
  int v10; // esi
  int v11; // r12d
  unsigned __int64 v12; // r14
  PWCH v13; // rdx
  PWCH j; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  WCHAR *v17; // rax
  WCHAR *v18; // rbp
  WCHAR *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned int v21; // ecx
  USHORT v22; // bp
  WCHAR *v23; // rax
  WCHAR *v24; // r15
  unsigned __int64 v25; // rbx
  WCHAR *v26; // rdi
  _WORD *v27; // rdi
  char *v28; // rdi
  unsigned __int64 v29; // rbx
  PWCH Src; // [rsp+20h] [rbp-58h]
  PWCH v32; // [rsp+28h] [rbp-50h]
  WCHAR *v33; // [rsp+30h] [rbp-48h]
  unsigned int v34; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  v33 = 0LL;
  v6 = 0LL;
  Src = Buffer;
  v7 = Buffer;
  v32 = 0LL;
  if ( DllName->Length )
  {
    for ( i = &Buffer[((unsigned __int64)Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        if ( !v6 )
        {
          v6 = i;
          v32 = i;
        }
      }
      else if ( *i == 92 || *i == 47 )
      {
        v7 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v9 = stru_18015A2C0.Buffer;
  Size = 0;
  v10 = 0;
  v11 = v6 == 0LL ? 8 : 0;
  v34 = Length + 2 * (1 - (v7 - Buffer));
  if ( stru_18015A2C0.Buffer )
  {
    LODWORD(v12) = 0;
    Size = 92;
    if ( stru_18015A2C0.Length )
    {
      do
      {
        if ( stru_18015A2C0.Buffer[(unsigned __int64)(unsigned int)v12 >> 1] == 59 )
          break;
        LODWORD(v12) = v12 + 2;
      }
      while ( (unsigned int)v12 < stru_18015A2C0.Length );
    }
  }
  else
  {
    v12 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v9 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v9 = (PWCH)((char *)v9 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v13 = v9;
    for ( j = &v9[(v12 >> 1) - 1]; j > v9; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v13 = j + 1;
        break;
      }
    }
    v15 = v13 - v9;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v15) > 0xFFFE )
      return -1073741562;
    v16 = (unsigned __int16)(2 * v15);
    if ( Length > 0xFFFCu || v34 + v11 + (_DWORD)v16 > 0xFFFE )
      return -1073741562;
    v10 = (unsigned __int16)(v34 + v11 + v16);
    v17 = (WCHAR *)sub_180043FE0((unsigned __int16)(v34 + v11 + v16));
    v33 = v17;
    v18 = v17;
    if ( !v17 )
      return -1073741801;
    memmove(v17, v9, (unsigned int)v16);
    v19 = &v18[v16 >> 1];
    memmove(v19, Src, v34 - 2LL);
    v20 = ((unsigned __int64)v34 - 2) >> 1;
    if ( v32 )
    {
      v19[v20] = 0;
    }
    else
    {
      *(_QWORD *)&v19[v20] = 0x4C004C0044002ELL;
      v19[v20 + 4] = 0;
    }
  }
  v21 = Size + v11 + v12 + v34 + 14;
  if ( v21 > 0xFFFE )
    return -1073741562;
  v22 = Size + v11 + v12 + v34 + 14;
  v23 = (WCHAR *)sub_180043FE0((unsigned __int16)v21);
  v24 = v23;
  if ( !v23 )
    return -1073741801;
  memmove(v23, v9, (unsigned int)v12);
  v25 = (unsigned __int64)(unsigned int)v12 >> 1;
  v26 = &v24[v25];
  if ( Size )
  {
    memmove(&v24[v25], L"\\microsoft.system.package.metadata\\Application", Size);
    v26 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v26 = 0x63006F004C002ELL;
  *((_DWORD *)v26 + 2) = 7077985;
  v27 = v26 + 6;
  *v27 = 92;
  v28 = (char *)(v27 + 1);
  memmove(v28, Src, v34 - 2LL);
  v29 = ((unsigned __int64)v34 - 2) >> 1;
  if ( v32 )
  {
    *(_WORD *)&v28[2 * v29] = 0;
  }
  else
  {
    *(_QWORD *)&v28[2 * v29] = 0x4C004C0044002ELL;
    *(_WORD *)&v28[2 * v29 + 8] = 0;
  }
  RealName->Buffer = v33;
  RealName->MaximumLength = v10;
  RealName->Length = v10;
  if ( v10 )
    RealName->Length = v10 - 2;
  LocalName->MaximumLength = v22;
  LocalName->Length = v22 - 2;
  LocalName->Buffer = v24;
  return 0;
}
