/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18015FD10 (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x18016394C (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x180167AD8 (--1CManipulation@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18016F500 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801A41CC (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x1800B3590 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 *     ??1?$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3690 (--1-$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rdi
  char *v7; // rbx

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      --v5;
      if ( (char *)a4 == (char *)DynArrayIA<float,2,0>::~DynArrayIA<float,2,0> )
      {
        DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>(v7);
      }
      else if ( (char *)a4 == (char *)Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState> )
      {
        Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>(v7);
      }
      else
      {
        a4(v7);
      }
    }
    while ( v5 );
  }
}
