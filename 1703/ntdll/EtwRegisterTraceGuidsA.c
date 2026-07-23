/*
 * XREFs of EtwRegisterTraceGuidsA @ 0x1800882F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterTraceGuidsW @ 0x18001A200 (EtwRegisterTraceGuidsW.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsA(
        ULONG (__cdecl *a1)(PETW_NOTIFICATION_HEADER, PVOID),
        __int64 a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  return EtwRegisterTraceGuidsW(a1, a2, a3, a4, a5, 0, 0, a8);
}
