/*
 * XREFs of sub_1800114C0 @ 0x1800114C0
 * Callers:
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 *     sub_180105430 @ 0x180105430 (sub_180105430.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformationEx @ 0x1800A7D70 (ZwQuerySystemInformationEx.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800114C0(__int64 a1)
{
  __int64 Heap; // rbx
  int v3; // edi
  unsigned __int64 i; // rdx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 1;
  v6 = 80 * dword_18015BFF0;
  Heap = RtlAllocateHeap(
           NtCurrentPeb()->ProcessHeap,
           (dword_18015C000 + 786432) | 8u,
           (unsigned int)(80 * dword_18015BFF0));
  if ( Heap )
  {
    v3 = ZwQuerySystemInformationEx(107LL, &v7, 4LL, Heap, v6, &v6);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)dword_18015BFF0);
      for ( i = Heap; i < Heap + (unsigned __int64)v6; i += *(unsigned int *)(i + 4) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(i + 8)) = *(_OWORD *)(i + 32);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 786432));
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
