/*
 * XREFs of ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FA90
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0049620 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C004FA30 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 */

__int64 __fastcall FlipManagerCreateConsumerTokenOperation(
        void *a1,
        unsigned __int64 a2,
        struct CFlipTokenOperation **a3)
{
  PVOID v5; // rbx
  int v6; // edi
  struct CFlipTokenOperation *v7; // rdx
  struct CFlipWaitedConsumerReturn *v9; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  Object = 0LL;
  v5 = 0LL;
  v6 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
  if ( v6 >= 0 )
  {
    v5 = Object;
    v6 = FlipManagerObject::CreateWaitedConsumerReturnForConsumer((FlipManagerObject *)Object, a2, &v9);
    if ( v6 >= 0 )
    {
      v7 = v9;
      *((_QWORD *)v9 + 1) = v5;
      v5 = 0LL;
      *a3 = v7;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
