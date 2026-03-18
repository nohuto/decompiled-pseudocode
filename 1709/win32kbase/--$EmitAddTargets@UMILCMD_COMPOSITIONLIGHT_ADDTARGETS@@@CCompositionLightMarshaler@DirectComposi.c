/*
 * XREFs of ??$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0002DE0
 * Callers:
 *     ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C0002EEC (-EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@Compo.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<MILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int64 a5)
{
  unsigned int *i; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  char *v12; // rdx
  unsigned int v13; // r8d
  _DWORD *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  void *v18; // [rsp+68h] [rbp+20h] BYREF

  for ( i = (unsigned int *)a5; *i < *a4; *i += v11 )
  {
    v10 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    a5 = v10;
    if ( v10 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &a5) )
        return *i == *a4;
      v10 = a5;
    }
    v11 = *a4 - *i;
    if ( v11 >= (v10 - 16) >> 2 )
      LODWORD(v11) = (v10 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v11 + 16), &v18);
    v12 = (char *)v18;
    *(_DWORD *)v18 = 4 * v11 + 16;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 3) = 0;
    *((_DWORD *)v12 + 1) = 73;
    *((_DWORD *)v12 + 2) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v12 + 3) = v11;
    v13 = *i;
    if ( (_DWORD)v11 )
    {
      v14 = v12 + 16;
      v15 = (unsigned int)v11;
      do
      {
        v16 = v13++;
        *v14++ = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v16) + 24LL);
        --v15;
      }
      while ( v15 );
    }
  }
  return *i == *a4;
}
