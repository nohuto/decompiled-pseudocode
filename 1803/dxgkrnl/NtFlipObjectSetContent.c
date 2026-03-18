/*
 * XREFs of NtFlipObjectSetContent @ 0x1C004F820
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipPropertySet@@@Z @ 0x1C004D61C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipProper.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C004E274 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall NtFlipObjectSetContent(
        FlipManagerObject *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        void *Src)
{
  int v7; // ebx
  struct CFlipPropertySet *v8; // rsi
  FlipManagerObject *v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  CFlipPropertySet *v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]
  unsigned __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  FlipManagerObject *v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+20h]

  v18 = a4;
  v17 = a1;
  v7 = 0;
  if ( a1 && a2 )
  {
    v8 = 0LL;
    v13 = 0LL;
    v9 = 0LL;
    v16 = 0LL;
    v14 = 0LL;
    v10 = 0LL;
    v15 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v11 = *a2;
    v14 = *a2;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (unsigned __int64 *)MmUserProbeAddress;
      v10 = *a3;
      v15 = *a3;
    }
    KeEnterCriticalRegion();
    if ( a4 )
    {
      v7 = CreateFlipPropertySetWorker<CFlipPropertySet>(a4, (char *)Src, &v13);
      v8 = v13;
    }
    if ( v7 >= 0 )
    {
      v17 = 0LL;
      v9 = 0LL;
      v7 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v17);
      if ( v7 >= 0 )
      {
        v9 = v17;
        v7 = FlipManagerObject::SetContent(v17, v11, v10, v8);
      }
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( v8 )
      CFlipPropertySetBase::Release(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
