/*
 * XREFs of RtlGetAppContainerParent @ 0x180043B90
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetAppContainerSidType @ 0x180043830 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, unsigned __int64 *a2)
{
  __int64 Heap; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // edi
  _DWORD *v9; // rcx
  unsigned __int64 v10; // rsi
  int v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (int)RtlGetAppContainerSidType(a1, &v12) < 0 || v12 != 1 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C294 + 1310720, 40LL);
  v6 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v7 = 8LL;
  LOBYTE(v5) = 8;
  v8 = RtlInitializeSid(Heap, &unk_180114628, v5);
  if ( v8 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  else
  {
    v9 = (_DWORD *)(v6 + 8);
    v10 = a1 - v6;
    do
    {
      *v9 = *(_DWORD *)((char *)v9 + v10);
      ++v9;
      --v7;
    }
    while ( v7 );
    *a2 = v6;
    return 0;
  }
  return (unsigned int)v8;
}
