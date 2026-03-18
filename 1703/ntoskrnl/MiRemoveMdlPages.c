/*
 * XREFs of MiRemoveMdlPages @ 0x1406B49B8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1400269E4 (MiSetPfnOwnedAndActive.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
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
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned int v15; // r9d
  int v19; // [rsp+A0h] [rbp+18h]
  char *v20; // [rsp+A8h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v4 = P;
  v5 = &P[8 * v3 + 48];
  v20 = v5;
  qsort(P + 48, v3, 8uLL, (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
  v6 = -1LL;
  v7 = 0;
  v19 = 0;
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
          if ( v7 < 0 || (v19 = MiRemovePhysicalMemory(v10, v8, HIWORD(a2) & 8), v7 = v19, v19 < 0) )
          {
            v13 = (_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL);
            v14 = v8;
            do
            {
              v15 = *((unsigned __int8 *)v13 - 6) >> 6;
              *v13 &= ~0x200000000000000uLL;
              MiSetPfnOwnedAndActive((__int64)(v13 - 5), 0, -8LL, v15, 2);
              v13 += 6;
              --v14;
            }
            while ( v14 );
            v5 = v20;
            MiFreeContiguousPages((__int64)&MiSystemPartition, v10, v8);
            v7 = v19;
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
  _InterlockedExchangeAdd64(&qword_14036D120, -(__int64)v3);
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
