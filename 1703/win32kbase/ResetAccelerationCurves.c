/*
 * XREFs of ResetAccelerationCurves @ 0x1C0070640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

CCursorClip *__fastcall ResetAccelerationCurves(int a1)
{
  CCursorClip *result; // rax
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rdi
  __int64 i; // rbx

  result = gpDispInfo;
  v2 = (__int64 (__fastcall ***)(_QWORD, __int64))*(&qword_1C0186098 + 3 * a1);
  for ( i = *((_QWORD *)gpDispInfo + 12); i; i = *(_QWORD *)(i + 56) )
    result = (CCursorClip *)(**v2)(v2, i);
  return result;
}
