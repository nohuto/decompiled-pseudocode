/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14001B1BC
 * Callers:
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006DE0 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14001B214 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt(
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
    return ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(v2);
  return result;
}
