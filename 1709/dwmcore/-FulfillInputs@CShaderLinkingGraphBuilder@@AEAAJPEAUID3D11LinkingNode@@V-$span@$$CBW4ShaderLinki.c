/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004768
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x180004C18 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x180005100 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  signed int v4; // edi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  int v14; // r9d
  unsigned int v15[2]; // [rsp+20h] [rbp-38h]
  unsigned int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  if ( (__int64)a3[1] > 0 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
        a1 + 16,
        &v17,
        *a3 + 2 * v8);
      if ( v17 == *(_QWORD *)(a1 + 16) )
        break;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(v17 + 24);
      v11 = (unsigned int)*(char *)(v17 + 32);
      if ( *(_BYTE *)(v17 + 33) )
      {
        v15[1] = HIDWORD(a2);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, v10, v11);
        v3 = v12;
        if ( v12 < 0 )
        {
          v16 = 347;
LABEL_11:
          v14 = v12;
          goto LABEL_13;
        }
      }
      else
      {
        v15[0] = v4;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int *))(*(_QWORD *)v9 + 56LL))(
                v9,
                v10,
                v11,
                a2,
                *(unsigned int **)v15);
        v3 = v12;
        if ( v12 < 0 )
        {
          v16 = 340;
          goto LABEL_11;
        }
      }
      v8 = ++v4;
      if ( v4 >= a3[1] )
        return v3;
    }
    v3 = -2147024809;
    v16 = 332;
    v14 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v16);
  }
  return v3;
}
