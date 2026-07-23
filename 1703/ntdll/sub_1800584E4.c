/*
 * XREFs of sub_1800584E4 @ 0x1800584E4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_180059294 @ 0x180059294 (sub_180059294.c)
 *     RtlSetBits @ 0x180059A60 (RtlSetBits.c)
 *     RtlClearBits @ 0x180059C40 (RtlClearBits.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 sub_1800584E4()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  NTSTATUS v2; // eax
  __int64 v3; // rsi
  ULONG v4; // ebx
  __int64 result; // rax
  ULONG v6; // edi
  ULONG *Heap; // rax
  ULONG NumberToSet; // [rsp+70h] [rbp+8h] BYREF
  DWORD v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_18015B350;
  NumberToSet = 0;
  if ( (__int64 *)qword_18015B350 == &qword_18015B350 )
    goto LABEL_8;
  do
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3u, (PVOID)v1[6], 0LL, &OutHeaders);
    if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      v2 = sub_180032C0C(v1[6], 1, 9u, &v9, (char **)&v10);
      v3 = v10;
      if ( v2 < 0 )
        v3 = 0LL;
      v10 = v3;
      if ( v3 )
      {
        if ( (dword_180155A10 & 5) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            "DLL \"%wZ\" has TLS information at %p\n",
            v1 + 9,
            v3);
        result = sub_180059294(v3, (_DWORD)v1, (unsigned int)&NumberToSet, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v1 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_18015B350 );
  v4 = NumberToSet;
  if ( NumberToSet )
  {
    v6 = NumberToSet + 8;
    if ( NumberToSet + 8 > 0x20 )
    {
      Heap = (ULONG *)RtlAllocateHeap(
                        NtCurrentPeb()->ProcessHeap,
                        dword_18015B268 + 786432,
                        4 * (((unsigned __int64)v6 + 31) >> 5));
      if ( !Heap )
        return 3221225495LL;
      qword_18015B1C0 = ((unsigned __int64)v6 + 31) >> 5;
      v4 = NumberToSet;
    }
    else
    {
      Heap = (ULONG *)&unk_18015B1A8;
      qword_18015B1C0 = 1LL;
    }
    BitMapHeader.SizeOfBitMap = v6;
    BitMapHeader.Buffer = Heap;
    RtlSetBits(&BitMapHeader, 0, v4);
    RtlClearBits(&BitMapHeader, v4, 8u);
  }
  else
  {
LABEL_8:
    BitMapHeader.SizeOfBitMap = 0;
    BitMapHeader.Buffer = 0LL;
  }
  return sub_18005905C();
}
