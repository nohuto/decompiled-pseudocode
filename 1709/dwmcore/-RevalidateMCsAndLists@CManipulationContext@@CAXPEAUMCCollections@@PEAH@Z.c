/*
 * XREFs of ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801A3A58
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2D5C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2DEC (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCsAndLists(struct MCCollections *a1, int *a2)
{
  int v2; // eax
  int v3; // edi
  __int64 v6; // rsi
  CArrayBasedCoverageSet **v7; // rbx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  CArrayBasedCoverageSet **v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 8);
  v3 = 0;
  v8 = -1;
  *a2 = v2;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      v9 = *(CArrayBasedCoverageSet ***)(v6 + *((_QWORD *)a1 + 3));
      v7 = v9;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v9);
      if ( (*((_BYTE *)v7 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMC(v7, a1, &v8, v3, *a2);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v9);
      ++v3;
      v6 += 8LL;
    }
    while ( v3 < *a2 );
  }
}
