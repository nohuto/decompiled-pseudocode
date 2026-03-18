/*
 * XREFs of ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0001724 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkReferenceCompositionObjectForRead@@YAJPEAXW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C000D7C0 (-DxgkReferenceCompositionObjectForRead@@YAJPEAXW4DxgkCompositionObjectType@@DPEAPEAX@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000E228 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C000F9D8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C004A258 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BA98 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BCB8 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtFlipObjectAddContent @ 0x1C004E2F0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C004E440 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C004E5D0 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C004E730 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C004E830 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C004E9E0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C004EA80 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C004EB80 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x1C004EEE0 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectOpen @ 0x1C004EF80 (NtFlipObjectOpen.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C004F180 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1C004F2E0 (NtFlipObjectQueryEndpointConnected.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C004F3E0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C004F540 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectRemoveContent @ 0x1C004F640 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x1C004F730 (NtFlipObjectRemovePoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C004F820 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FA90 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FB2C (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOpe.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z @ 0x1C01E61C8 (-Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID Object)
{
  _QWORD *v5; // rsi
  struct _OBJECT_TYPE *v8; // r8
  NTSTATUS v9; // ebx
  _QWORD **v10; // rdi

  v5 = Object;
  v8 = g_pDxgkCompositionObjectType;
  *(_QWORD *)Object = 0LL;
  v9 = ObReferenceObjectByHandle(a1, a2, v8, a3, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD **)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v10[1] + 16LL))(v10[1]) == a4 )
        *v5 = v10;
      else
        v9 = -1073741788;
    }
    else
    {
      v9 = -1073741816;
    }
    if ( v9 < 0 )
      ObfDereferenceObject(v10);
  }
  return (unsigned int)v9;
}
