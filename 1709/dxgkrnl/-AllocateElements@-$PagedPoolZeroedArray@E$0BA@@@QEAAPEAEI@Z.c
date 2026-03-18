/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C01AC90C
 * Callers:
 *     DxgkCreateHwQueue @ 0x1C01AD050 (DxgkCreateHwQueue.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned char,16>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  size_t v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 0x10 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( !(0xFFFFFFFFFFFFFFFFuLL / a2) )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[6] = v2;
  if ( v5 )
    memset(v5, 0, v2);
  return *(_QWORD *)a1;
}
