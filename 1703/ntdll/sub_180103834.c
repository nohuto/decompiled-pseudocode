/*
 * XREFs of sub_180103834 @ 0x180103834
 * Callers:
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 *     sub_18007A074 @ 0x18007A074 (sub_18007A074.c)
 *     sub_180093FFC @ 0x180093FFC (sub_180093FFC.c)
 *     sub_18010325C @ 0x18010325C (sub_18010325C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180103834(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
