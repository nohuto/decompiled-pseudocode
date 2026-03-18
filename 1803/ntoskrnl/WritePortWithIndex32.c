/*
 * XREFs of WritePortWithIndex32 @ 0x1402CE760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WritePortWithIndex32(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140399408[0])(
           *(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a3);
}
