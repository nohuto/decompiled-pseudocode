/*
 * XREFs of ?Release@BrokeredViewTabConverterStatics@@UEAAKXZ @ 0x1801C6450
 * Callers:
 *     ?Release@BrokeredViewTabConverterStatics@@W7EAAKXZ @ 0x1800A7550 (-Release@BrokeredViewTabConverterStatics@@W7EAAKXZ.c)
 *     ?Release@BrokeredViewTabConverterStatics@@WCI@EAAKXZ @ 0x1800A7560 (-Release@BrokeredViewTabConverterStatics@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BrokeredViewTabConverterStatics::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
           this,
           a2);
}
