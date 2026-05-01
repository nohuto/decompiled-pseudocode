/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@UEAAKXZ @ 0x180033EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::Release(
        volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  void *v3; // rcx

  v2 = _InterlockedDecrement(Block + 10);
  if ( !v2 && Block )
  {
    v3 = (void *)*((_QWORD *)Block + 1);
    if ( v3 )
    {
      CoTaskMemFree(v3);
      *((_QWORD *)Block + 1) = 0LL;
    }
    *((_QWORD *)Block + 2) = 0LL;
    *((_QWORD *)Block + 4) = 0LL;
    operator delete((void *)Block);
  }
  return v2;
}
