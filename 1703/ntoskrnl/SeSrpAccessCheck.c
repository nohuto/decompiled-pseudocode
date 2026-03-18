/*
 * XREFs of SeSrpAccessCheck @ 0x140246940
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 */

char __fastcall SeSrpAccessCheck(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6);
}
