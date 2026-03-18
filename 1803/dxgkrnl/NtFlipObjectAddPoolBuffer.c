/*
 * XREFs of NtFlipObjectAddPoolBuffer @ 0x1C004E440
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipPropertySet@@@Z @ 0x1C004D61C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipProper.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C004DC98 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall NtFlipObjectAddPoolBuffer(
        FlipManagerObject *a1,
        struct CFlipPropertySet **a2,
        void *a3,
        struct _LUID *a4,
        unsigned int a5,
        void *Src)
{
  FlipManagerObject *v8; // rdi
  struct CFlipPropertySet *v9; // r15
  int FlipPropertySet; // ebx
  struct CFlipPropertySet *v11; // rsi
  struct CFlipPropertySet *v13[3]; // [rsp+30h] [rbp-48h] BYREF
  struct _LUID v14; // [rsp+48h] [rbp-30h] BYREF
  FlipManagerObject *v15; // [rsp+80h] [rbp+8h] BYREF
  void *v16; // [rsp+90h] [rbp+18h]

  v16 = a3;
  v15 = a1;
  if ( a1 && a2 && a3 && a4 )
  {
    v13[0] = 0LL;
    v8 = 0LL;
    v13[1] = 0LL;
    if ( &a4[1] < a4 || (unsigned __int64)&a4[1] > MmUserProbeAddress )
      a4 = (struct _LUID *)MmUserProbeAddress;
    v14 = *a4;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (struct CFlipPropertySet **)MmUserProbeAddress;
    v9 = *a2;
    v13[2] = *a2;
    KeEnterCriticalRegion();
    FlipPropertySet = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, (char *)Src, v13);
    v11 = v13[0];
    if ( FlipPropertySet >= 0 )
    {
      v15 = 0LL;
      v8 = 0LL;
      FlipPropertySet = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v15);
      if ( FlipPropertySet >= 0 )
      {
        v8 = v15;
        FlipPropertySet = FlipManagerObject::AddPoolBuffer(v15, (unsigned __int64)v9, a3, &v14, v11);
      }
    }
    if ( v11 )
      CFlipPropertySetBase::Release(v11);
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)FlipPropertySet;
}
