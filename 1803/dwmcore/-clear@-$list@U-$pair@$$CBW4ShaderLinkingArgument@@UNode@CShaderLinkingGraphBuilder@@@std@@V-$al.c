/*
 * XREFs of ?clear@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXXZ @ 0x1800D4BB8
 * Callers:
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800D5214 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800D5400 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 * Callees:
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@@Z @ 0x1800D4C28 (-_Freenode@-$_List_buy@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@s.c)
 */

_QWORD **__fastcall std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD **result; // rax
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  result = *(_QWORD ***)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      result = (_QWORD **)std::_List_buy<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::_Freenode();
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return result;
}
