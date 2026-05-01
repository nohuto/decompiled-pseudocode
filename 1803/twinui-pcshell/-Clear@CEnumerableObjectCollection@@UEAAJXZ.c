/*
 * XREFs of ?Clear@CEnumerableObjectCollection@@UEAAJXZ @ 0x1801059D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x1800F7A84 (-RemoveAndReleaseAll@-$CSimplePointerArray@UIUnknown@@V-$CTContainer_PolicyRelease@UIUnknown@@@@.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Clear(CEnumerableObjectCollection *this)
{
  CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *>>::RemoveAndReleaseAll((_QWORD *)this + 5);
  *((_DWORD *)this + 8) = 0;
  return 0LL;
}
