/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180005200
 * Callers:
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 * Callees:
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(__int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int16 v4; // r10
  char *v6; // rdx
  char *v7; // r8
  char *i; // rcx
  wchar_t *Buffer; // rdi
  int v10; // esi
  int v11; // r12d
  unsigned __int64 Length; // r14
  wchar_t *v13; // rdx
  wchar_t *j; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  char *v17; // rax
  char *v18; // rbp
  char *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned int v21; // ecx
  __int16 v22; // bp
  char *v23; // rax
  char *v24; // r15
  unsigned __int64 v25; // rbx
  char *v26; // rdi
  _WORD *v27; // rdi
  char *v28; // rdi
  unsigned __int64 v29; // rbx
  void *Src; // [rsp+20h] [rbp-58h]
  char *v32; // [rsp+28h] [rbp-50h]
  void *v33; // [rsp+30h] [rbp-48h]
  unsigned int v34; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  v33 = 0LL;
  v6 = 0LL;
  Src = v3;
  v7 = v3;
  v32 = 0LL;
  if ( *a1 )
  {
    for ( i = &v3[2 * ((unsigned __int64)v4 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        if ( !v6 )
        {
          v6 = i;
          v32 = i;
        }
      }
      else if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        v7 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = stru_18015A2C0.Buffer;
  Size = 0;
  v10 = 0;
  v11 = v6 == 0LL ? 8 : 0;
  v34 = v4 + 2 * (1 - ((v7 - v3) >> 1));
  if ( stru_18015A2C0.Buffer )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( stru_18015A2C0.Length )
    {
      do
      {
        if ( stru_18015A2C0.Buffer[(unsigned __int64)(unsigned int)Length >> 1] == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < stru_18015A2C0.Length );
    }
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v13 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v13 = j + 1;
        break;
      }
    }
    v15 = v13 - Buffer;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
      return 3221225734LL;
    if ( (unsigned int)(2 * v15) > 0xFFFE )
      return 3221225734LL;
    v16 = (unsigned __int16)(2 * v15);
    if ( v4 > 0xFFFCu || v34 + v11 + (_DWORD)v16 > 0xFFFE )
      return 3221225734LL;
    v10 = (unsigned __int16)(v34 + v11 + v16);
    v17 = (char *)sub_180043FE0((unsigned __int16)(v34 + v11 + v16));
    v33 = v17;
    v18 = v17;
    if ( !v17 )
      return 3221225495LL;
    memmove(v17, Buffer, (unsigned int)v16);
    v19 = &v18[2 * (v16 >> 1)];
    memmove(v19, Src, v34 - 2LL);
    v20 = ((unsigned __int64)v34 - 2) >> 1;
    if ( v32 )
    {
      *(_WORD *)&v19[2 * v20] = 0;
    }
    else
    {
      *(_QWORD *)&v19[2 * v20] = 0x4C004C0044002ELL;
      *(_WORD *)&v19[2 * v20 + 8] = 0;
    }
  }
  v21 = Size + v11 + Length + v34 + 14;
  if ( v21 > 0xFFFE )
    return 3221225734LL;
  v22 = Size + v11 + Length + v34 + 14;
  v23 = (char *)sub_180043FE0((unsigned __int16)v21);
  v24 = v23;
  if ( !v23 )
    return 3221225495LL;
  memmove(v23, Buffer, (unsigned int)Length);
  v25 = (unsigned __int64)(unsigned int)Length >> 1;
  v26 = &v24[2 * v25];
  if ( Size )
  {
    memmove(&v24[2 * v25], L"\\microsoft.system.package.metadata\\Application", Size);
    v26 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v26 = 0x63006F004C002ELL;
  *((_DWORD *)v26 + 2) = 7077985;
  v27 = v26 + 12;
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
  *(_QWORD *)(a2 + 8) = v33;
  *(_WORD *)(a2 + 2) = v10;
  *(_WORD *)a2 = v10;
  if ( v10 )
    *(_WORD *)a2 = v10 - 2;
  *(_WORD *)(a3 + 2) = v22;
  *(_WORD *)a3 = v22 - 2;
  *(_QWORD *)(a3 + 8) = v24;
  return 0LL;
}
