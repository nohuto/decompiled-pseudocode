/*
 * XREFs of RtlCreateProcessParameters @ 0x1800D1A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 */

__int64 __fastcall RtlCreateProcessParameters(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return RtlCreateProcessParametersEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0);
}
