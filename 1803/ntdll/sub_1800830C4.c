/*
 * XREFs of sub_1800830C4 @ 0x1800830C4
 * Callers:
 *     sub_180059D74 @ 0x180059D74 (sub_180059D74.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 */

__int64 __fastcall sub_1800830C4(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 i; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  v2 = ((*(_DWORD *)(a1 + 148) >> 8) + 31) & 0xFFFFFFE0;
  v3 = (unsigned __int64)v2 >> 3;
  result = (__int64)RtlAllocateHeap((PVOID)a1, 0x80000Au, v3 + 8 * (v2 + 7LL));
  v5 = result;
  if ( result )
  {
    *(_BYTE *)(result - 1) = 1;
    *(_QWORD *)(result + 40) = result + 56;
    *(_DWORD *)(result + 8) = v2;
    *(_QWORD *)(result + 32) = a1 + 240;
    *(_QWORD *)(result + 48) = v3 + result + 56;
    *(_QWORD *)(a1 + 320) = result;
    for ( i = *(_QWORD *)(a1 + 248); a1 + 240 != i; i = *(_QWORD *)(i + 8) )
    {
      v7 = v5;
      v8 = *(unsigned int *)(v5 + 8);
      v9 = *(_QWORD *)(i + 40) >> 12;
      while ( v9 >= v8 )
      {
        v10 = *(_QWORD *)v7;
        if ( !*(_QWORD *)v7 )
        {
          LODWORD(v9) = *(_DWORD *)(v7 + 8) - 1;
          break;
        }
        v7 = *(_QWORD *)v7;
        v8 = *(unsigned int *)(v10 + 8);
      }
      result = sub_18005C190(a1, v7, 0, i, v9, *(_QWORD *)(i + 40));
    }
  }
  return result;
}
