/*
 * XREFs of EtwpCreateRegGuidsContext @ 0x180065EE0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x180065E10 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

char *__fastcall EtwpCreateRegGuidsContext(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rdi
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  char *Heap; // rax
  char *v13; // rbx
  char *v14; // rdx
  _OWORD *v16; // rax

  v6 = a4;
  v10 = 24LL * a4;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v10 + 24 < (unsigned int)v10 )
    return 0LL;
  if ( (int)v10 + 40 < (unsigned int)(v10 + 24) )
    return 0LL;
  v11 = v10 + 40;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v10 + 40));
  v13 = Heap;
  if ( !Heap )
    return 0LL;
  memset(Heap, 0, v11);
  *(_QWORD *)v13 = a1;
  v14 = v13 + 40;
  *((_QWORD *)v13 + 1) = a2;
  *(_OWORD *)(v13 + 24) = *a3;
  if ( a4 )
  {
    do
    {
      v16 = *(_OWORD **)a5;
      *(_QWORD *)(a5 + 8) = v14;
      a5 += 16LL;
      *(_OWORD *)(v14 + 8) = *v16;
      *((_DWORD *)v14 + 1) = NtCurrentTeb()->ClientId.UniqueProcess;
      v14 += 24;
      --v6;
    }
    while ( v6 );
  }
  return v13;
}
