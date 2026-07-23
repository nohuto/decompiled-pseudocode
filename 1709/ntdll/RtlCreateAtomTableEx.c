/*
 * XREFs of RtlCreateAtomTableEx @ 0x180070258
 * Callers:
 *     RtlCreateAtomTable @ 0x180070250 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlInitializeHandleTable @ 0x180081960 (RtlInitializeHandleTable.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  SIZE_T v6; // rsi
  char *Heap; // rax
  char *v8; // rdi

  v3 = 0;
  if ( *a3 )
    return v3;
  v5 = 37;
  if ( a1 > 1 )
    v5 = a1;
  if ( is_mul_ok(0x18uLL, (unsigned int)(v5 - 1)) )
  {
    v6 = -1LL;
    if ( 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
      v6 = 24LL * (unsigned int)(v5 - 1) + 80;
    v3 = 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 < 24 * (unsigned __int64)(unsigned int)(v5 - 1)
       ? 0xC0000095
       : 0;
    if ( 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
    {
      Heap = (char *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (0x18 * (unsigned __int128)(unsigned int)(v5 - 1)) >> 64,
                       v6);
      v8 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, v6);
        *((_DWORD *)v8 + 16) = v5;
        RtlInitializeHandleTable(0x3FFFu, 0x80000010, (PRTL_HANDLE_TABLE)(v8 + 16));
        *((_QWORD *)v8 + 1) = 0LL;
        *(_DWORD *)v8 = 1836020801;
        *((_DWORD *)v8 + 1) = 1;
        *a3 = v8;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return v3;
  }
  return 3221225621LL;
}
