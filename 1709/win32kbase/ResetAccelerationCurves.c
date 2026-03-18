/*
 * XREFs of ResetAccelerationCurves @ 0x1C0062300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResetAccelerationCurves(int a1)
{
  __int64 result; // rax
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rdi
  __int64 i; // rbx

  result = gpDispInfo;
  v2 = (__int64 (__fastcall ***)(_QWORD, __int64))*(&qword_1C0188098 + 3 * a1);
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 56) )
    result = (**v2)(v2, i);
  return result;
}
