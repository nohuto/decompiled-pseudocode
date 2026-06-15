/*
 * XREFs of _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$72 @ 0x180039E05
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D704 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch_72(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 88), (void *)0x3D, a3, a4);
  return &loc_18002CDB1;
}
