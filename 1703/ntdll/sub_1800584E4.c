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
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edi
  void *Heap; // rax
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_18015B350;
  v8 = 0;
  if ( (__int64 *)qword_18015B350 == &qword_18015B350 )
    goto LABEL_8;
  do
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3, v1[6], 0LL, &v11);
    if ( *(_WORD *)(v11 + 24) == 523 )
    {
      v2 = sub_180032C0C(v1[6], 1, 9u, &v9, &v10);
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
        result = sub_180059294(v3, (_DWORD)v1, (unsigned int)&v8, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v1 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_18015B350 );
  v4 = v8;
  if ( v8 )
  {
    v6 = v8 + 8;
    if ( v8 + 8 > 0x20 )
    {
      Heap = (void *)RtlAllocateHeap(
                       (__int64)NtCurrentPeb()->ProcessHeap,
                       dword_18015B268 + 786432,
                       4 * (((unsigned __int64)v6 + 31) >> 5));
      if ( !Heap )
        return 3221225495LL;
      qword_18015B1C0 = ((unsigned __int64)v6 + 31) >> 5;
      v4 = v8;
    }
    else
    {
      Heap = &unk_18015B1A8;
      qword_18015B1C0 = 1LL;
    }
    dword_18015B1B0 = v6;
    Src = Heap;
    RtlSetBits(&dword_18015B1B0, 0LL, v4);
    RtlClearBits(&dword_18015B1B0, v4, 8LL);
  }
  else
  {
LABEL_8:
    dword_18015B1B0 = 0;
    Src = 0LL;
  }
  return sub_18005905C();
}
