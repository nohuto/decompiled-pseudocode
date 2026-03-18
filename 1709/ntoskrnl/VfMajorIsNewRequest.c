/*
 * XREFs of VfMajorIsNewRequest @ 0x1407B4FEC
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1407A79E0 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r8
  __int64 v5; // rax
  unsigned int (__fastcall *v6)(__int64); // rax
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 > 0x1Bu )
    v5 = (unsigned int)(v2 != 0xFF) + 28;
  else
    v5 = v2;
  v6 = (unsigned int (__fastcall *)(__int64))*((_QWORD *)&unk_1407D5E78 + 12 * v5);
  if ( v6 && v6(a1) )
    return 1LL;
  result = (__int64)qword_1407D68F8;
  if ( qword_1407D68F8 )
    return qword_1407D68F8(a1, a2);
  return result;
}
