/*
 * XREFs of MiPerformFixups @ 0x14053DF48
 * Callers:
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiRevertRelocations @ 0x14053DE68 (MiRevertRelocations.c)
 *     MiRevertRelocatedImagePfn @ 0x1405BA78C (MiRevertRelocatedImagePfn.c)
 * Callees:
 *     MiApplyStraddleFixups @ 0x14009D628 (MiApplyStraddleFixups.c)
 *     MiApplyCompressedFixups @ 0x14053E050 (MiApplyCompressedFixups.c)
 *     MiApplyRawFixups @ 0x1407544AC (MiApplyRawFixups.c)
 */

__int64 __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v11; // r14
  int i; // edi
  unsigned __int64 v13; // rbp
  int v14; // ecx
  ULONG_PTR v15; // rcx

  result = *(_QWORD *)(BugCheckParameter2 + 96);
  v8 = a3;
  v11 = *(_QWORD *)(result + 32);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v11 + 56) )
  {
    for ( i = a3 << 12; ; i += 4096 )
    {
      result = *(_QWORD *)v11;
      v13 = *(_QWORD *)(*(_QWORD *)v11 + 8 * v8);
      if ( v13 )
      {
        if ( v13 > 1 )
        {
          if ( *(_BYTE *)(v11 + 68) )
            MiApplyCompressedFixups(BugCheckParameter2, BugCheckParameter3);
          else
            MiApplyRawFixups(BugCheckParameter2);
        }
        if ( (v13 & 1) != 0 )
          MiApplyStraddleFixups(v11, (char *)BugCheckParameter3, i, a4, a5, a6);
        v14 = *(_DWORD *)(v11 + 64);
        result = v14 & 0xFFFFF000;
        if ( (_DWORD)result == i )
        {
          v15 = BugCheckParameter3 + (v14 & 0xFFF);
          if ( (v15 & 1) != 0 )
            *(_DWORD *)(v15 - 1) += a4;
          else
            *(_QWORD *)v15 += a4;
        }
      }
      BugCheckParameter3 += 4096LL;
      if ( (BugCheckParameter3 & 0xFFF) == 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  return result;
}
