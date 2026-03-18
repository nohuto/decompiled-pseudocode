/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4CCC
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800D5214 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@_K@Z @ 0x1800C3F50 (-_End@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uha.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(_QWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 i; // r15
  const unsigned __int8 *v9; // rbx
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  int v19; // r9d
  unsigned int v20[2]; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *a3 > 0 )
  {
    for ( i = 0LL; ; i += 2LL )
    {
      v9 = (const unsigned __int8 *)(i + a3[1]);
      v10 = a1[8] & std::_Hash_bytes(v9, 2uLL);
      while ( 1 )
      {
        v11 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_End(
                (__int64)(a1 + 2),
                &v22,
                v10);
        if ( v12 == *v11 )
          break;
        if ( *(_WORD *)(v12 + 16) == *(_WORD *)v9 )
          goto LABEL_6;
      }
      v12 = a1[3];
LABEL_6:
      if ( v12 == a1[3] )
        break;
      v13 = (__int64 *)a1[1];
      v14 = *(_QWORD *)(v12 + 24);
      v15 = (unsigned int)*(char *)(v12 + 32);
      v16 = *v13;
      if ( *(_BYTE *)(v12 + 33) )
      {
        v20[1] = HIDWORD(a2);
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v16 + 64))(v13, v14, v15);
        v3 = v17;
        if ( v17 < 0 )
        {
          v21 = 347;
LABEL_16:
          v19 = v17;
          goto LABEL_18;
        }
      }
      else
      {
        v20[0] = v4;
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, unsigned int *))(v16 + 56))(
                v13,
                v14,
                v15,
                a2,
                *(unsigned int **)v20);
        v3 = v17;
        if ( v17 < 0 )
        {
          v21 = 340;
          goto LABEL_16;
        }
      }
      if ( (int)++v4 >= *a3 )
        return v3;
    }
    v3 = -2147024809;
    v21 = 332;
    v19 = -2147024809;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21);
  }
  return v3;
}
