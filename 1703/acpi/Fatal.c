/*
 * XREFs of Fatal @ 0x1C005F600
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Fatal(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"III");
  if ( !(_DWORD)result )
  {
    if ( ghFatal )
      ghFatal(
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 16LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 96LL),
        a1,
        qword_1C0077F78);
    return 3222536198LL;
  }
  return result;
}
