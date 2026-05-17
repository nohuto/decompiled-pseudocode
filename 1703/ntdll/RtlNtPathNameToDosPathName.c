/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800D4A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     RtlPrefixUnicodeString @ 0x180071E10 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x180077DA0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v8; // rbp
  const wchar_t *v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int16 v11; // di
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  unsigned __int16 v17; // di
  int v18; // eax

  v4 = 0;
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
  v9 = word_180110130;
  if ( !RtlPrefixUnicodeString(word_180110130, a2, 1) )
  {
    v9 = L"\b\n";
    if ( RtlPrefixUnicodeString(L"\b\n", a2, 1) )
    {
      v10 = (unsigned __int16 *)&unk_180111350;
      if ( a3 )
        *a3 = 3;
      goto LABEL_14;
    }
    if ( !a3 )
      return v4;
    v18 = sub_18003F2C4(a2);
    if ( v18 )
    {
      if ( v18 <= 0 )
        return v4;
      if ( v18 <= 2 )
      {
LABEL_32:
        *a3 = 4;
        return v4;
      }
      if ( v18 != 3 && v18 != 4 && v18 != 5 )
      {
        if ( v18 > 7 )
          return v4;
        goto LABEL_32;
      }
    }
    *a3 = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&unk_180111340;
  if ( a3 )
    *a3 = 2;
LABEL_14:
  v11 = (*v10 >> 1) + (*a2 >> 1) - (*v9 >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 <= 0xFFFE )
  {
    if ( a2 == (unsigned __int16 *)-16LL || v12 > *((_QWORD *)a2 + 4) )
      v13 = RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v12);
    else
      v13 = 0;
    if ( v13 >= 0 )
    {
      v14 = *((_QWORD *)a2 + 2);
      a2[1] = a2[16];
      v15 = *a2;
      *((_QWORD *)a2 + 1) = v14;
      memmove(
        (void *)(v14 + 2 * ((unsigned __int64)*v10 >> 1)),
        (const void *)(v14 + 2 * ((unsigned __int64)*v9 >> 1)),
        v15 - *v9);
      memmove(*((void **)a2 + 1), *((const void **)v10 + 1), *v10);
      v16 = *((_QWORD *)a2 + 1);
      v17 = 2 * v11;
      *a2 = v17;
      *(_WORD *)(v16 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
      if ( v8 )
        *a4 = *((_QWORD *)a2 + 1) + 2 * (v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)*v9 >> 1));
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741562;
  }
  return v4;
}
