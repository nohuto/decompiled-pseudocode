/*
 * XREFs of ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800695EC
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18003F3B0 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006760C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    0x8Du,
    (__int64)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
    0LL,
    0LL,
    retaddr,
    3,
    0x8007000E);
}
