/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140003E28
 * Callers:
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400073A0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140003EA0 (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax
  __int64 result; // rax
  bool v5; // zf

  v2 = a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (__int64 *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  result = v2[4];
  *a2 = result;
  v5 = v2[2]-- == 1;
  v2[4] = (__int64)a2;
  if ( v5 )
    return ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll(v2);
  return result;
}
