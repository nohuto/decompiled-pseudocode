/*
 * XREFs of sub_18007CFD8 @ 0x18007CFD8
 * Callers:
 *     RtlAddSIDToBoundaryDescriptor @ 0x18007CFD0 (RtlAddSIDToBoundaryDescriptor.c)
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800E9720 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     sub_18007BA64 @ 0x18007BA64 (sub_18007BA64.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18007CFD8(__int64 a1, unsigned __int8 *a2, char a3)
{
  _DWORD *v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  _DWORD *Heap; // rax
  _DWORD *v10; // rbx
  _DWORD *v11; // rcx
  int v12; // edi
  PVOID ProcessHeap; // rcx
  __int64 result; // rax

  if ( !RtlValidSid(a2) )
    return 3221225485LL;
  v6 = *(_DWORD **)a1;
  v7 = (4 * a2[1] + 23) & 0xFFFFFFF8;
  v8 = v7 + *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v8 < v7 )
    return 3221225843LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
  v10 = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, v6, (unsigned int)v6[2]);
  v10[2] = v7 + v6[2];
  v10[1] = v6[1] + 1;
  v11 = (_DWORD *)((char *)v10 + (unsigned int)v6[2]);
  v11[1] = v7;
  *v11 = (a3 != 0) + 2;
  memmove(v11 + 2, a2, 4LL * a2[1] + 8);
  v12 = sub_18007BA64(v10);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v12 < 0 )
  {
    RtlFreeHeap(ProcessHeap, 0, v10);
    return (unsigned int)v12;
  }
  else
  {
    RtlFreeHeap(ProcessHeap, 0, v6);
    result = 0LL;
    *(_QWORD *)a1 = v10;
  }
  return result;
}
