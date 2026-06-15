/*
 * XREFs of _CHybridPropertyStore::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800EEE1F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CHybridPropertyStore::RuntimeClassInitialize_::_1_::catch_0(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x4E,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
    (const char *)0x8007000ELL);
  return &loc_1800EEE00;
}
