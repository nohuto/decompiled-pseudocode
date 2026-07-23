/*
 * XREFs of sub_18004F9F4 @ 0x18004F9F4
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180050AD8 @ 0x180050AD8 (sub_180050AD8.c)
 *     RtlSetBits @ 0x1800510C0 (RtlSetBits.c)
 *     RtlClearBits @ 0x180053EB0 (RtlClearBits.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 sub_18004F9F4()
{
  __int64 *v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  NTSTATUS v3; // eax
  __int64 v4; // rbp
  ULONG v5; // ebx
  __int64 result; // rax
  ULONG v7; // esi
  ULONG *Heap; // rax
  ULONG NumberToSet; // [rsp+80h] [rbp+8h] BYREF
  DWORD v10; // [rsp+88h] [rbp+10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_18015C370;
  NumberToSet = 0;
  if ( (__int64 *)qword_18015C370 == &qword_18015C370 )
    goto LABEL_9;
  v1 = 1LL;
  do
  {
    v2 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3u, (PVOID)v2[6], 0LL, &OutHeaders);
    if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      v3 = sub_18001014C(v2[6], 1, 9u, &v10, (char **)&v11);
      v4 = v11;
      if ( v3 < 0 )
        v4 = 0LL;
      v11 = v4;
      if ( v4 )
      {
        if ( (dword_180156A70 & 5) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            "DLL \"%wZ\" has TLS information at %p\n",
            v2 + 9,
            v4);
        result = sub_180050AD8(v4, (_DWORD)v2, (unsigned int)&NumberToSet, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v2 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_18015C370 );
  v5 = NumberToSet;
  if ( NumberToSet )
  {
    v7 = NumberToSet + 8;
    if ( NumberToSet + 8 > 0x20 )
    {
      v1 = ((unsigned __int64)v7 + 31) >> 5;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 786432, 4 * v1);
      if ( !Heap )
        return 3221225495LL;
      v5 = NumberToSet;
    }
    else
    {
      Heap = (ULONG *)&unk_18015C1C8;
    }
    qword_18015C1E0 = v1;
    BitMapHeader.SizeOfBitMap = v7;
    BitMapHeader.Buffer = Heap;
    RtlSetBits(&BitMapHeader, 0, v5);
    RtlClearBits(&BitMapHeader, v5, 8u);
  }
  else
  {
LABEL_9:
    BitMapHeader.SizeOfBitMap = 0;
    BitMapHeader.Buffer = 0LL;
  }
  return sub_18005088C();
}
