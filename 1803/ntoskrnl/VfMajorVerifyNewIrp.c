/*
 * XREFs of VfMajorVerifyNewIrp @ 0x1408230FC
 * Callers:
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall VfMajorVerifyNewIrp(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned __int8 v5; // r10
  __int64 v10; // rax
  void (__fastcall *v11)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v5 = *a3;
  if ( *a3 > 0x1Bu )
    v10 = (unsigned int)(v5 != 0xFF) + 28;
  else
    v10 = v5;
  v11 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140842EC0 + 12 * v10);
  if ( v11 )
    v11(a1);
  result = qword_140843940;
  if ( qword_140843940 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_140843940(a1, a2, a3, a4, a5);
  return result;
}
