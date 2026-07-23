/*
 * XREFs of sub_18007C600 @ 0x18007C600
 * Callers:
 *     sub_1800309A4 @ 0x1800309A4 (sub_1800309A4.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     sub_1800700D8 @ 0x1800700D8 (sub_1800700D8.c)
 */

__int64 __fastcall sub_18007C600(_DWORD *a1, void *a2, int a3)
{
  unsigned int v3; // ebx
  PVOID *Heap; // rax
  PVOID *UserPrefLanguages; // rdi
  int v9; // esi
  PVOID v11; // rcx

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        a1[10] = *((_DWORD *)*UserPrefLanguages + 10);
        sub_180032CEC(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return v3;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v11 = UserPrefLanguages[1];
  if ( v11 )
    sub_1800700D8(v11);
  UserPrefLanguages[1] = a2;
  return v3;
}
