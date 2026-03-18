/*
 * XREFs of NtFlipObjectAddContent @ 0x1C004E2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipPropertySet@@@Z @ 0x1C004D61C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipProper.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C004DC28 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall NtFlipObjectAddContent(
        FlipManagerObject *a1,
        struct CFlipPropertySet **a2,
        unsigned int a3,
        char *a4)
{
  FlipManagerObject *v7; // rdi
  struct CFlipPropertySet *v8; // r14
  int FlipPropertySet; // ebx
  struct CFlipPropertySet *v10; // rsi
  struct CFlipPropertySet *v12[11]; // [rsp+30h] [rbp-58h] BYREF
  FlipManagerObject *v13; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+18h]
  char *v15; // [rsp+A8h] [rbp+20h]

  v15 = a4;
  v14 = a3;
  v13 = a1;
  if ( a1 && a2 )
  {
    v12[0] = 0LL;
    v7 = 0LL;
    v12[1] = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (struct CFlipPropertySet **)MmUserProbeAddress;
    v8 = *a2;
    v12[2] = *a2;
    KeEnterCriticalRegion();
    FlipPropertySet = CreateFlipPropertySetWorker<CFlipPropertySet>(a3, a4, v12);
    v10 = v12[0];
    if ( FlipPropertySet >= 0 )
    {
      v13 = 0LL;
      v7 = 0LL;
      FlipPropertySet = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v13);
      if ( FlipPropertySet >= 0 )
      {
        v7 = v13;
        FlipPropertySet = FlipManagerObject::AddContent(v13, (unsigned __int64)v8, v10);
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( v10 )
      CFlipPropertySetBase::Release(v10);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)FlipPropertySet;
}
