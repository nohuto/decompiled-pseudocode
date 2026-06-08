/*
 * XREFs of RegisterHiddenIdleStates @ 0x1C001A044
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002FA0 (RegisterKernelIdleStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C00017F0 (DecodeAcpiIdleState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 78) )
    return 3221225485LL;
  if ( !HalPrivateDispatchTable[130] )
    return 3221225659LL;
  v3 = *(_DWORD **)(a1 + 496);
  if ( !v3 || !*v3 || (*(_DWORD *)(a1 + 264) & 0x7F077) == 0 )
    return 3221225473LL;
  v4 = (__int64)&v3[5 * (*v3 - 1) + 1];
  result = DecodeAcpiIdleState(a1, (char *)v4, *(unsigned __int8 *)(v4 + 12), 0LL, &v5, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[130])(*(unsigned int *)(a1 + 80), v5);
  return result;
}
