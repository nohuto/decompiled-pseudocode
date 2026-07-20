/*
 * XREFs of SmpParseToken @ 0x140002A50
 * Callers:
 *     SmpParseCommandLine @ 0x1400026F0 (SmpParseCommandLine.c)
 * Callees:
 *     memcpy_0 @ 0x14000CA47 (memcpy_0.c)
 */

__int64 __fastcall SmpParseToken(unsigned __int16 *a1, char a2, struct _UNICODE_STRING *a3)
{
  wint_t *v6; // r15
  int v7; // edi
  wint_t *i; // rbx
  __int64 j; // rbp
  WCHAR *Heap; // rax
  unsigned __int16 v11; // cx

  RtlInitUnicodeString(a3, 0LL);
  v6 = (wint_t *)*((_QWORD *)a1 + 1);
  if ( !*a1 )
    return 0LL;
  v7 = 0;
  do
  {
    if ( !iswctype(*v6, 8u) )
      break;
    ++v6;
    v7 += 2;
  }
  while ( (unsigned __int16)v7 < *a1 );
  if ( a2 )
  {
    j = (unsigned int)*a1 - 2 * v7;
    i = (wint_t *)((char *)v6 + j);
  }
  else
  {
    for ( i = v6; (unsigned __int16)v7 < *a1; v7 += 2 )
    {
      if ( iswctype(*i, 8u) )
        break;
      ++i;
    }
    for ( j = (unsigned int)((_DWORD)i - (_DWORD)v6); (unsigned __int16)v7 < *a1; v7 += 2 )
    {
      if ( !iswctype(*i, 8u) )
        break;
      ++i;
    }
  }
  if ( (_DWORD)j )
  {
    Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, j + 2);
    a3->Buffer = Heap;
    if ( !Heap )
      return 3221225495LL;
    a3->Length = j;
    a3->MaximumLength = j + 2;
    memcpy_0(Heap, v6, (unsigned int)j);
    a3->Buffer[(unsigned __int64)(unsigned int)j >> 1] = 0;
  }
  v11 = a1[4];
  *((_QWORD *)a1 + 1) = i;
  *a1 += v11 - (_WORD)i;
  a1[1] += v11 - (_WORD)i;
  return 0LL;
}
