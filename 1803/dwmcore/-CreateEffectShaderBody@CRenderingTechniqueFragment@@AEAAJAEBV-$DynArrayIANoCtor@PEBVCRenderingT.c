/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x180036940
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180070E4C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x1800367D0 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$Dy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int128 v7; // xmm0
  int v8; // eax
  char v9; // cl
  int v10; // ecx
  SIZE_T v11; // rax
  LPVOID v12; // rax
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rsi
  __int16 ShaderLinkingArgument; // cx
  __int128 v19; // [rsp+30h] [rbp-50h]
  unsigned __int64 v20[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  char v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+74h] [rbp-Ch]

  v6 = 0;
  (*(void (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    v20,
    *(unsigned int *)(a1 + 16));
  v7 = v21;
  *(_BYTE *)(a1 + 88) = v22;
  *(_QWORD *)(a1 + 96) = v23;
  *(_BYTE *)(a1 + 108) = v25;
  v8 = v24;
  v9 = v24;
  *(_OWORD *)(a1 + 72) = v7;
  v10 = v9 & 0xF;
  if ( v10 )
    v8 = v8 - v10 + 16;
  *(_DWORD *)(a1 + 104) = v8;
  v11 = 2 * v20[0];
  if ( !is_mul_ok(v20[0], 2uLL) )
    v11 = -1LL;
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  v13 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v12;
  if ( v13 )
  {
    operator delete(v13);
    v12 = *(LPVOID *)(a1 + 112);
  }
  if ( v12 )
  {
    v14 = v20[0];
    v15 = 0;
    if ( (__int64)v20[0] > 0 )
    {
      v16 = 0LL;
      do
      {
        ShaderLinkingArgument = *(_WORD *)(v16 + v20[1]);
        if ( (ShaderLinkingArgument & 0xFF00) == 0x200 )
          ShaderLinkingArgument = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                                    (CRenderingTechniqueFragment *)a1,
                                    (const struct CBrushRenderingGraph *)(unsigned __int8)ShaderLinkingArgument,
                                    a2,
                                    a3);
        ++v15;
        *(_WORD *)(v16 + *(_QWORD *)(a1 + 112)) = ShaderLinkingArgument;
        v16 += 2LL;
        v14 = v20[0];
      }
      while ( v15 < (__int64)v20[0] );
      v12 = *(LPVOID *)(a1 + 112);
    }
    *(_QWORD *)&v19 = v14;
    *((_QWORD *)&v19 + 1) = v12;
    *(_OWORD *)(a1 + 56) = v19;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x207u);
  }
  return v6;
}
