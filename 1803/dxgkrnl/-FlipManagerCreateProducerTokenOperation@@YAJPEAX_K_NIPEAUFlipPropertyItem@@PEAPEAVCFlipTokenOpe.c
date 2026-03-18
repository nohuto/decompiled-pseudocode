/*
 * XREFs of ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FB2C
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0049820 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipPropertySet@@@Z @ 0x1C004D61C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipProper.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C004F9B4 (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPr.c)
 */

__int64 __fastcall FlipManagerCreateProducerTokenOperation(
        void *a1,
        unsigned __int64 a2,
        bool a3,
        unsigned int a4,
        struct FlipPropertyItem *Src,
        struct CFlipTokenOperation **a6)
{
  FlipManagerObject *v9; // rbx
  int v10; // edi
  struct CFlipTokenOperation *v11; // rdx
  CFlipPropertySetBase *v13; // [rsp+30h] [rbp-28h] BYREF
  FlipManagerObject *v14; // [rsp+38h] [rbp-20h] BYREF
  struct CFlipPresentUpdate *v15; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v10 = CreateFlipPropertySetWorker<CFlipPropertySet>(a4, (char *)Src, &v13);
  if ( v10 >= 0 )
  {
    v14 = 0LL;
    v10 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v14);
    if ( v10 >= 0 )
    {
      v9 = v14;
      v10 = FlipManagerObject::CreatePresentUpdateForProducer(v14, a2, a3, v13, &v15);
      if ( v10 >= 0 )
      {
        v11 = v15;
        *((_QWORD *)v15 + 1) = v9;
        v9 = 0LL;
        *a6 = v11;
      }
    }
  }
  if ( v13 )
    CFlipPropertySetBase::Release(v13);
  if ( v9 )
    ObfDereferenceObject(v9);
  return (unsigned int)v10;
}
