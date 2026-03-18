/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x1407732AC
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140765E40 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140766040 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 v2; // r8
  __int64 v5; // rax
  unsigned int (__fastcall *v6)(unsigned __int8 *); // rax

  v2 = *a1;
  if ( *a1 > 0x1Bu )
    v5 = (v2 != 0xFF) + 28LL;
  else
    v5 = v2;
  v6 = (unsigned int (__fastcall *)(unsigned __int8 *))ViMajorVerifierRoutines[12 * v5 + 6];
  if ( (!v6 || v6(a1)) && qword_1407918F0 )
    return qword_1407918F0(a1, a2);
  else
    return 0LL;
}
