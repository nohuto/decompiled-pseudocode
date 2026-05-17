/*
 * XREFs of sub_18006EA40 @ 0x18006EA40
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 *     sub_18006CA0C @ 0x18006CA0C (sub_18006CA0C.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     sub_18006EBF4 @ 0x18006EBF4 (sub_18006EBF4.c)
 */

__int64 __fastcall sub_18006EA40(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 *Heap; // rax
  unsigned __int64 *UserPrefLanguages; // rdi
  int v9; // esi

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (unsigned __int64 *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (unsigned __int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
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
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40);
        sub_180040BA0(*UserPrefLanguages);
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
  if ( UserPrefLanguages[1] )
    sub_18006EBF4();
  UserPrefLanguages[1] = a2;
  return v3;
}
