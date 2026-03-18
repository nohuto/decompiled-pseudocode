/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x1407B506C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1407A79E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1407A7BE0 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 v2; // r8
  __int64 v5; // rax
  unsigned int (__fastcall *v6)(unsigned __int8 *); // rax

  v2 = *a1;
  if ( *a1 > 0x1Bu )
    v5 = (unsigned int)(v2 != 0xFF) + 28;
  else
    v5 = v2;
  v6 = (unsigned int (__fastcall *)(unsigned __int8 *))*((_QWORD *)&unk_1407D5E70 + 12 * v5);
  if ( (!v6 || v6(a1)) && qword_1407D68F0 )
    return qword_1407D68F0(a1, a2);
  else
    return 0LL;
}
