/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800BBB1B
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044FEC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize_::_1_::catch_0(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[18] = wil::ResultFromCaughtException(a1, a2, a3);
  return &loc_180087E68;
}
