/*
 * XREFs of ReadRegisterWithIndex32 @ 0x1402CE5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadRegisterWithIndex32(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))off_140399430[0])(*(_QWORD *)a1 + a2
                                                                          * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
