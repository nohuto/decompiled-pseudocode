/*
 * XREFs of RtlGetAppContainerParent @ 0x180002940
 * Callers:
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x180058210 (RtlGetAppContainerSidType.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, __int64 *a2)
{
  __int64 Heap; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // rsi
  int v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (int)RtlGetAppContainerSidType(a1, &v12) < 0 || v12 != 1 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015B268 + 1310720), 40LL);
  v6 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v7 = 8LL;
  LOBYTE(v5) = 8;
  v8 = RtlInitializeSid(Heap, &unk_180114734, v5);
  if ( v8 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
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
