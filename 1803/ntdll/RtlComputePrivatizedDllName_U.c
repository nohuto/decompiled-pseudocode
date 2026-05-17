/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180004250
 * Callers:
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 * Callees:
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(__int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int16 v4; // r10
  char *v6; // rdx
  char *v7; // r13
  char *v8; // r8
  char *i; // rcx
  char *v10; // rax
  wchar_t *Buffer; // rdi
  int v12; // esi
  int v13; // ebp
  unsigned __int64 Length; // r14
  wchar_t *v15; // rdx
  wchar_t *j; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  char *v19; // rax
  char *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  __int16 v23; // bp
  char *v24; // rax
  char *v25; // r15
  unsigned __int64 v26; // rbx
  char *v27; // rdi
  unsigned __int64 v28; // rbx
  void *Src; // [rsp+20h] [rbp-48h]
  char *v31; // [rsp+28h] [rbp-40h]
  unsigned int v32; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+88h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  Src = v3;
  v6 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  v8 = v3;
  if ( *a1 )
  {
    for ( i = &v3[2 * ((unsigned __int64)v4 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        v10 = i;
        if ( v6 )
          v10 = v6;
        v6 = v10;
        v31 = v10;
      }
      else if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        v8 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = stru_18015B2C0.Buffer;
  Size = 0;
  v12 = 0;
  v13 = v6 == 0LL ? 8 : 0;
  v32 = v4 + 2 * (1 - ((v8 - v3) >> 1));
  if ( stru_18015B2C0.Buffer )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( stru_18015B2C0.Length )
    {
      do
      {
        if ( stru_18015B2C0.Buffer[(unsigned __int64)(unsigned int)Length >> 1] == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < stru_18015B2C0.Length );
    }
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v15 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v15 = j + 1;
        break;
      }
    }
    v17 = v15 - Buffer;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
      return 3221225734LL;
    if ( (unsigned int)(2 * v17) > 0xFFFE )
      return 3221225734LL;
    v18 = (unsigned __int16)(2 * v17);
    if ( v4 > 0xFFFCu || v32 + (_DWORD)v18 + v13 > 0xFFFE )
      return 3221225734LL;
    v12 = (unsigned __int16)(v32 + v18 + v13);
    v19 = (char *)sub_18003B5E0((unsigned __int16)(v32 + v18 + v13));
    v7 = v19;
    if ( !v19 )
      return 3221225495LL;
    memmove(v19, Buffer, (unsigned int)v18);
    v20 = &v7[2 * (v18 >> 1)];
    memmove(v20, Src, v32 - 2LL);
    v21 = ((unsigned __int64)v32 - 2) >> 1;
    if ( v31 )
    {
      *(_WORD *)&v20[2 * v21] = 0;
    }
    else
    {
      *(_QWORD *)&v20[2 * v21] = 0x4C004C0044002ELL;
      *(_WORD *)&v20[2 * v21 + 8] = 0;
    }
  }
  v22 = Size + Length + v13 + v32 + 14;
  if ( v22 > 0xFFFE )
    return 3221225734LL;
  v23 = Size + Length + v13 + v32 + 14;
  v24 = (char *)sub_18003B5E0((unsigned __int16)v22);
  v25 = v24;
  if ( !v24 )
    return 3221225495LL;
  memmove(v24, Buffer, (unsigned int)Length);
  v26 = (unsigned __int64)(unsigned int)Length >> 1;
  v27 = &v25[2 * v26];
  if ( Size )
  {
    memmove(&v25[2 * v26], L"\\microsoft.system.package.metadata\\Application", Size);
    v27 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v27 = 0x63006F004C002ELL;
  *((_DWORD *)v27 + 2) = 7077985;
  *((_WORD *)v27 + 6) = 92;
  memmove(v27 + 14, Src, v32 - 2LL);
  v28 = ((unsigned __int64)v32 - 2) >> 1;
  if ( v31 )
  {
    *(_WORD *)&v27[2 * v28 + 14] = 0;
  }
  else
  {
    *(_QWORD *)&v27[2 * v28 + 14] = 0x4C004C0044002ELL;
    *(_WORD *)&v27[2 * v28 + 22] = 0;
  }
  *(_QWORD *)(a2 + 8) = v7;
  *(_WORD *)(a2 + 2) = v12;
  *(_WORD *)a2 = v12;
  if ( v12 )
    *(_WORD *)a2 = v12 - 2;
  *(_WORD *)(a3 + 2) = v23;
  *(_WORD *)a3 = v23 - 2;
  *(_QWORD *)(a3 + 8) = v25;
  return 0LL;
}
