/*
 * XREFs of CrmGlobalsSubscriberRundownHelper @ 0x180034F08
 * Callers:
 *     CrmGlobalsRundown @ 0x180034D70 (CrmGlobalsRundown.c)
 * Callees:
 *     CrmLogRegistrationUpdate @ 0x180005954 (CrmLogRegistrationUpdate.c)
 */

__int64 __fastcall CrmGlobalsSubscriberRundownHelper(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = MEMORY[0x7FFE0008];
  CrmLogRegistrationUpdate(
    *(_DWORD *)(v1 + 8),
    0,
    0,
    0,
    *(_DWORD *)(v1 + 36),
    *(_DWORD *)(v1 + 36),
    *(_QWORD *)(v1 + 56),
    MEMORY[0x7FFE0008],
    1);
  *(_QWORD *)(v1 + 56) = v2;
  return 0LL;
}
