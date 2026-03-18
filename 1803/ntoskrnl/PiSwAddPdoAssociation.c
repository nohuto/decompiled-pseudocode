/*
 * XREFs of PiSwAddPdoAssociation @ 0x1405E8130
 * Callers:
 *     PiSwGetChildPdo @ 0x1405E7FB8 (PiSwGetChildPdo.c)
 * Callees:
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwAddPdoAssociation(__int64 a1, void *a2, void *a3)
{
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v8; // rcx

  v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x57706E50u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(a2);
    ObfReferenceObject(a3);
    PoolWithTag[2] = a2;
    PoolWithTag[3] = a3;
    v8 = *(_QWORD **)(a1 + 136);
    if ( *v8 != a1 + 128 )
      __fastfail(3u);
    *PoolWithTag = a1 + 128;
    PoolWithTag[1] = v8;
    *v8 = PoolWithTag;
    *(_QWORD *)(a1 + 136) = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
