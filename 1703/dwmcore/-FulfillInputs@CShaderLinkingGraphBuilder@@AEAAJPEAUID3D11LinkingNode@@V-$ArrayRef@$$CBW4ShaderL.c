/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8EB4
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B92F4 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x1800BB054 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  signed int v4; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  int v13; // r9d
  unsigned int v14[2]; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *(int *)(a3 + 8) > 0 )
  {
    while ( 1 )
    {
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
        a1 + 16,
        &v16,
        *(_QWORD *)a3 + 2LL * v4);
      if ( v16 == *(_QWORD *)(a1 + 16) )
        break;
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(v16 + 24);
      v10 = (unsigned int)*(char *)(v16 + 32);
      if ( *(_BYTE *)(v16 + 33) )
      {
        v14[1] = HIDWORD(a2);
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, v9, v10);
        v3 = v11;
        if ( v11 < 0 )
        {
          v15 = 341;
LABEL_10:
          v13 = v11;
          goto LABEL_12;
        }
      }
      else
      {
        v14[0] = v4;
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int *))(*(_QWORD *)v8 + 56LL))(
                v8,
                v9,
                v10,
                a2,
                *(unsigned int **)v14);
        v3 = v11;
        if ( v11 < 0 )
        {
          v15 = 334;
          goto LABEL_10;
        }
      }
      if ( ++v4 >= *(_DWORD *)(a3 + 8) )
        return v3;
    }
    v3 = -2147024809;
    v15 = 326;
    v13 = -2147024809;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v15);
  }
  return v3;
}
