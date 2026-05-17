/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x180002820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     RtlPrefixUnicodeString @ 0x18006CD90 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x180071DA0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rdi
  unsigned __int64 v8; // rbp
  const wchar_t *v9; // r14
  __int64 v10; // r8
  unsigned __int16 *v11; // r15
  unsigned __int16 v12; // di
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned __int16 v16; // di
  int v18; // eax

  v4 = 0;
  v6 = a3;
  v8 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( *a4 )
    {
      v8 = (__int64)(*a4 - *((_QWORD *)a2 + 1)) >> 1;
      if ( v8 >= (unsigned __int64)*a2 >> 1 )
        return (unsigned int)-1073741811;
    }
  }
  v9 = (const wchar_t *)&unk_180110040;
  LOBYTE(a3) = 1;
  if ( (unsigned __int8)RtlPrefixUnicodeString(&unk_180110040, a2, a3) )
  {
    v11 = (unsigned __int16 *)&unk_1801111B0;
    if ( v6 )
      *v6 = 2;
    goto LABEL_10;
  }
  v9 = L"\b\n";
  LOBYTE(v10) = 1;
  if ( !(unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v10) )
  {
    if ( !v6 )
      return v4;
    v18 = sub_18003E414(a2);
    if ( v18 )
    {
      if ( v18 <= 0 )
        return v4;
      if ( v18 <= 2 )
      {
LABEL_32:
        *v6 = 4;
        return v4;
      }
      if ( v18 != 3 && v18 != 4 && v18 != 5 )
      {
        if ( v18 > 7 )
          return v4;
        goto LABEL_32;
      }
    }
    *v6 = 1;
    return v4;
  }
  v11 = (unsigned __int16 *)&unk_180110030;
  if ( v6 )
    *v6 = 3;
LABEL_10:
  v12 = (*v11 >> 1) + (*a2 >> 1) - (*v9 >> 1);
  v13 = 2LL * v12 + 2;
  if ( v13 > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else if ( (a2 == (unsigned __int16 *)-16LL || v13 > *((_QWORD *)a2 + 4)) && (int)RtlpEnsureBufferSize(0LL, a2 + 8) < 0 )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 2);
    a2[1] = a2[16];
    v15 = *a2;
    *((_QWORD *)a2 + 1) = v14;
    memmove(
      (void *)(v14 + 2 * ((unsigned __int64)*v11 >> 1)),
      (const void *)(v14 + 2 * ((unsigned __int64)*v9 >> 1)),
      v15 - *v9);
    memmove(*((void **)a2 + 1), *((const void **)v11 + 1), *v11);
    v16 = 2 * v12;
    *a2 = v16;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v16 >> 1)) = 0;
    if ( v8 )
      *a4 = *((_QWORD *)a2 + 1) + 2 * (v8 + ((unsigned __int64)*v11 >> 1) - ((unsigned __int64)*v9 >> 1));
  }
  return v4;
}
