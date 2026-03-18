/*
 * XREFs of ??$EmitAddTargets@UMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0002D88
 * Callers:
 *     ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C0002EEC (-EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@Compo.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<MILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int64 a5)
{
  unsigned int *i; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  char *v13; // rdx
  unsigned int v14; // r8d
  _DWORD *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  void *v18; // [rsp+68h] [rbp+20h] BYREF

  for ( i = (unsigned int *)a5; *i < *a4; *i += v12 )
  {
    v11 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    a5 = v11;
    if ( v11 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &a5) )
        return *i == *a4;
      v11 = a5;
    }
    v12 = *a4 - *i;
    if ( v12 >= (v11 - 16) >> 2 )
      LODWORD(v12) = (v11 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v12 + 16), &v18);
    v13 = (char *)v18;
    *(_DWORD *)v18 = 4 * v12 + 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 72;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v13 + 3) = v12;
    v14 = *i;
    if ( (_DWORD)v12 )
    {
      v15 = v13 + 16;
      v16 = (unsigned int)v12;
      do
      {
        v17 = v14++;
        *v15++ = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v17) + 24LL);
        --v16;
      }
      while ( v16 );
    }
  }
  return *i == *a4;
}
