/*
 * XREFs of MiRemoveMdlPages @ 0x14074B900
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1400C2954 (MiSetPfnOwnedAndActive.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, unsigned int a2)
{
  __int64 *v2; // r14
  size_t v3; // r13
  _DWORD *v4; // rdi
  char *v5; // rsi
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v18; // [rsp+A0h] [rbp+18h]
  char *v19; // [rsp+A8h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v4 = P;
  v5 = &P[8 * v3 + 48];
  v19 = v5;
  qsort(P + 48, v3, 8uLL, (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
  v6 = -1LL;
  v7 = 0;
  v18 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = -1LL;
  v11 = -1LL;
  v12 = v2 == (__int64 *)v5;
  if ( v2 <= (__int64 *)v5 )
  {
    do
    {
      if ( v12 || (v6 = *v2, *v2 != v11) )
      {
        if ( v8 )
        {
          if ( v7 < 0 || (v18 = MiRemovePhysicalMemory(v10, v8, HIWORD(a2) & 8), v7 = v18, v18 < 0) )
          {
            v13 = 48 * v10 - 0x58000000000LL;
            v14 = v8;
            do
            {
              MiSetPfnOwnedAndActive(v13, 0, -8LL, *(unsigned __int8 *)(v13 + 34) >> 6, 2);
              v13 += 48LL;
              --v14;
            }
            while ( v14 );
            v5 = v19;
            MiFreeContiguousPages((__int64)&MiSystemPartition, v10, v8);
            v7 = v18;
            v9 += v8;
          }
        }
        v10 = v6;
        v8 = 1LL;
      }
      else
      {
        ++v8;
      }
      ++v2;
      v11 = v6 + 1;
      v12 = v2 == (__int64 *)v5;
    }
    while ( v2 <= (__int64 *)v5 );
    v4 = P;
  }
  _InterlockedExchangeAdd64(&qword_1403CC658, -(__int64)v3);
  if ( v9 )
  {
    if ( v9 == v3 )
    {
      ExFreePoolWithTag(v4, 0);
      return 0LL;
    }
    else
    {
      v4[10] += -4096 * v9;
    }
  }
  return v4;
}
