/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180078680
 * Callers:
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 *     sub_1800788A8 @ 0x1800788A8 (sub_1800788A8.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall LdrAddLoadAsDataTable(wchar_t *String2, _WORD *Src, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // r8
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 Heap; // rax

  v9 = 0;
  if ( !String2 )
    return 3221225485LL;
  sub_18002FBD4(dword_18015A270, (__int64)&unk_18015A220, a3, a4);
  RtlEnterCriticalSection((__int64)&unk_18015A220);
  v10 = 0;
  v11 = qword_18015A248;
  while ( v10 < dword_18015A254 )
  {
    if ( *(wchar_t **)(v11 + 48LL * v10) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v11 = qword_18015A248;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( dword_18015A254 < (unsigned int)dword_18015A200 )
      goto LABEL_6;
    Heap = RtlReAllocateHeap(
             (__int64)NtCurrentPeb()->ProcessHeap,
             0,
             qword_18015A248,
             48LL * (unsigned int)(dword_18015A200 + 32));
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    qword_18015A248 = Heap;
    dword_18015A200 += 32;
  }
  else
  {
    v17 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1536LL);
    v11 = v17;
    if ( !v17 )
      goto LABEL_18;
    qword_18015A248 = v17;
    dword_18015A200 = 32;
  }
  v9 = 0;
LABEL_6:
  v12 = 0LL;
  if ( Src )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v14 = 2 * v13 + 2;
    v15 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14);
    v12 = v15;
    if ( v15 )
    {
      memmove(v15, Src, v14 - 2);
      v9 = 0;
      v11 = qword_18015A248;
      goto LABEL_11;
    }
LABEL_18:
    v9 = -1073741801;
    goto LABEL_21;
  }
LABEL_11:
  v16 = 6LL * (unsigned int)dword_18015A254;
  *(_QWORD *)(v11 + 8 * v16) = String2;
  *(_QWORD *)(v11 + 8 * v16 + 8) = v12;
  *(_QWORD *)(v11 + 8 * v16 + 16) = a3;
  *(_QWORD *)(v11 + 8 * v16 + 24) = a4;
  *(_DWORD *)(v11 + 8 * v16 + 32) = 1;
  *(_QWORD *)(v11 + 8 * v16 + 40) = a5;
  ++dword_18015A254;
LABEL_21:
  RtlLeaveCriticalSection((__int64)&unk_18015A220);
  if ( v9 >= 0 )
  {
    if ( Src )
      sub_1800788A8(String2, Src);
  }
  return (unsigned int)v9;
}
