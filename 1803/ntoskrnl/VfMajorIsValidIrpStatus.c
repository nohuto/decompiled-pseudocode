/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x140822D60
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140814B70 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140814D70 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
  v6 = (unsigned int (__fastcall *)(unsigned __int8 *))*((_QWORD *)&unk_140842EB0 + 12 * v5);
  if ( (!v6 || v6(a1)) && qword_140843930 )
    return qword_140843930(a1, a2);
  else
    return 0LL;
}
