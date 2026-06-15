/*
 * XREFs of _CAastPreStartContext::RuntimeClassInitialize_::_1_::catch$14 @ 0x180028AB2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001AA3C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAastPreStartContext::RuntimeClassInitialize_::_1_::catch_14(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 168) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x6F,
                            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                            a4);
  return &loc_18001A3F8;
}
