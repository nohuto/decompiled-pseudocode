/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$6 @ 0x1800C90EE
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180048D1C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch_6(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[50] = wil::ResultFromCaughtException(a1, a2, a3);
  return &loc_18009679F;
}
