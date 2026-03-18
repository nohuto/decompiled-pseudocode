/*
 * XREFs of WritePortWithIndex8 @ 0x1402CE790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WritePortWithIndex8(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax

  v3 = (unsigned __int8)a2;
  LOBYTE(a2) = a3;
  return ((__int64 (__fastcall *)(_QWORD, __int64))off_1403993E8[0])(
           *(_QWORD *)a1 + v3 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a2);
}
