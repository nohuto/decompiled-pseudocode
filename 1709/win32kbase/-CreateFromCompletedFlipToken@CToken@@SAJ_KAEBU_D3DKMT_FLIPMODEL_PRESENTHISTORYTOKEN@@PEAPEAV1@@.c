/*
 * XREFs of ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BC90
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0035810 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BD30 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 */

__int64 __fastcall CToken::CreateFromCompletedFlipToken(
        unsigned __int64 a1,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        struct CToken **a3)
{
  void *hCompSurf; // rsi
  int v7; // ebx
  UINT v8; // edi
  struct CToken *v10; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  hCompSurf = (void *)a2->hCompSurf;
  v10 = 0LL;
  *a3 = 0LL;
  v7 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2LL, (__int64)a3, (struct CompositionSurfaceObject **)&Object);
  if ( v7 >= 0 )
  {
    v8 = a2->Flags.Value & 0x2000;
    v7 = CToken::CreateFlipToken(a1, (struct CompositionSurfaceObject *)Object, a2, &v10);
    if ( v7 >= 0 )
      *a3 = v10;
    if ( !v8 )
      ObCloseHandle(hCompSurf, 1);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v7;
}
