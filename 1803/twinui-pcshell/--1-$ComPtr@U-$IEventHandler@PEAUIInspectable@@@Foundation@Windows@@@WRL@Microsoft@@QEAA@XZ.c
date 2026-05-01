/*
 * XREFs of ??1?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB348
 * Callers:
 *     __lambda_ade08872bf0a4cde4024ec805f1037dc_::operator()_::_1_::dtor$1 @ 0x180306F13 (__lambda_ade08872bf0a4cde4024ec805f1037dc_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::~ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(a1);
}
