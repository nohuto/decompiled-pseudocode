/*
 * XREFs of NtFlipObjectQueryNextMessageToProducer @ 0x1C004F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C004E0DC (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall NtFlipObjectQueryNextMessageToProducer(void *a1, _DWORD *a2)
{
  struct CFlipConsumerMessage *v4; // r14
  FlipManagerObject *v5; // rsi
  int v6; // ebx
  int v7; // edx
  FlipManagerObject *v9; // [rsp+38h] [rbp-30h] BYREF
  struct CFlipConsumerMessage *v10; // [rsp+88h] [rbp+20h] BYREF

  if ( a1 && a2 )
  {
    v4 = 0LL;
    v10 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = 0;
    KeEnterCriticalRegion();
    v9 = 0LL;
    v5 = 0LL;
    v6 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v9);
    if ( v6 >= 0 )
    {
      v5 = v9;
      v6 = FlipManagerObject::QueryNextMessageToProducer(v9, 0, &v10);
      v4 = v10;
      if ( v6 >= 0 )
      {
        v7 = *((_DWORD *)v10 + 8);
        if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a2 = v7;
      }
    }
    if ( v4 )
      CFlipPropertySetBase::Release(v4);
    if ( v5 )
      ObfDereferenceObject(v5);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
