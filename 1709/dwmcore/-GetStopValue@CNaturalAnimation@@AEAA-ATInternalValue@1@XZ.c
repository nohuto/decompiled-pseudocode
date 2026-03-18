/*
 * XREFs of ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x180173460
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180173C30 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_S.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetStopValue(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  __int64 v4; // xmm0_8
  int v5; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 344);
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      v4 = *(_QWORD *)(a1 + 296);
      v5 = *(_DWORD *)(a1 + 304);
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 272);
      v5 = *(_DWORD *)(a1 + 280);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 284);
    v5 = *(_DWORD *)(a1 + 292);
  }
  *(_QWORD *)a2 = v4;
  *(_DWORD *)(a2 + 8) = v5;
  return a2;
}
