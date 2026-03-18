/*
 * XREFs of NtFlipObjectReadNextMessageToProducer @ 0x1C004F540
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_fe87952070f837d77ad90f5a354c8dbb___ @ 0x1C004D980 (CFlipPropertySetBase--WriteSerializedProperties__lambda_fe87952070f837d77ad90f5a354c8dbb___.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C004E0DC (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall NtFlipObjectReadNextMessageToProducer(void *a1, int a2, char *a3)
{
  struct CFlipConsumerMessage *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  PVOID v10; // rsi
  struct CFlipConsumerMessage *v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    v6 = 0LL;
    v12 = 0LL;
    KeEnterCriticalRegion();
    Object = 0LL;
    v7 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
    v9 = v7;
    v10 = 0LL;
    if ( v7 >= 0 )
      v10 = Object;
    Object = v10;
    if ( v7 >= 0 )
    {
      v9 = FlipManagerObject::QueryNextMessageToProducer((FlipManagerObject *)v10, 1, &v12);
      v6 = v12;
    }
    if ( v9 >= 0 )
    {
      if ( a2 != *((_DWORD *)v6 + 8) )
        v9 = -1073741811;
      if ( v9 >= 0 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_fe87952070f837d77ad90f5a354c8dbb___((__int64)v6, v8, a3);
    }
    if ( v6 )
      CFlipPropertySetBase::Release(v6);
    if ( v10 )
      ObfDereferenceObject(v10);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
