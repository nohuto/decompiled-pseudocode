/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800D7EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  void *ProcessHeap; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  _BYTE *v10; // [rsp+50h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, &v10);
  if ( (int)result >= 0 )
  {
    v9 = RtlpNewSecurityObject(0LL, v10, a7, 0LL, 0, a5, 0, -4LL, a6, 0LL);
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v10);
    return v9;
  }
  return result;
}
